#!/bin/bash

export PATH=$PATH:/opt/Qt5.5.0/5.5/gcc_64/bin/

build_release_version() {
	cd Sources/Contact-Book
	qmake --version
	qmake
	if [ -e "Makefile" ]; then
		make --version
		make
		
	else
		echo "Makefile does not exist"
		echo "Build release version failure!"
		return 1
	fi 
	cd ../..	
}

  	cloc --version
  	cloc --by-file --xml --out=../../report/clock_result
  	qmake --version
build_debug_version() {
	cd Sources/Contact-Book
	cloc --version
	cloc --by-file --xml --out=../../Reports/cloc_result *
	qmake --version
	qmake "QMAKE_CXXFLAGS+=-fprofile-arcs -ftest-coverage -fPIC -O0 -g --coverage" "LIBS+=-lgcov"
	if [ -e "Makefile" ]; then
		make --version
		make
		#Test/tst_testcore -xml -o test_results || true
		cppcheck --version
		cppcheck --enable=all -v  --xml  * 2> ../../Reports/cppcheck_result
		gcovr --version
		gcovr -r . --xml --exclude='tst*' -o  ../../Reports/gcovr_result
		
		#valgrind --version
		#valgrind --leak-check=full --xml=yes --xml-file=/opt/tomcat/.jenkins/jobs/ContactBook/workspace/tst_testcore.%p.result /opt/tomcat/.jenkins/jobs/ContactBook/workspace/Sources/ContactBook/Test/tst_testcore || true

		cd ../..
	else
		echo "Makefile does not exist"
		echo "Build debug version failure!"
		return 1
	fi
}

make_report() {		
cd Reports/doxygen
if [ -e "doxygenconfig.ini" ]; then
			doxygen --version
			doxygen doxygenconfig.ini
		else
			echo "Doxygen failed"
			echo "doxygenconfig.ini does not exist"
		fi

	cd latex
	if [ -e "Makefile" ]; then
		make --version
		make

		cd ../../..
	else
		echo "Makefile does not exist"
		echo "Report failure!"
		cd ../../..
		return 1
	fi
}

zip_files() {
	if [ -z ${JOB_NAME} ] || [ -z ${BUILD_NUMBER}]; then
		echo "Vars JOB_NAME/BUILD_NUMBER are unset"
		echo "Zip failure!"
		return 1
	fi

	TITLE="${JOB_NAME}_v${BUILD_NUMBER}"
	mkdir "$TITLE"

	if [ -e "Sources/Contact-Book/ConsoleApp/ConsoleApp" ]; then
		cp Sources/Contact-Book/ConsoleApp/ConsoleApp $TITLE/ContactBook_v${BUILD_NUMBER}
		if [ -e "Reports/ContactBook.pdf" ]; then
			cp Reports/Contact-Book.pdf $TITLE/ContactBook_v${BUILD_NUMBER}.pdf
		fi
		if [ -e "Reports/contact.txt" ]; then 
			cp Reports/contact.txt $TITLE/contact.txt
		fi
		zip --version
		zip $TITLE.zip $TITLE/*
	else
		echo "ConsoleApp does not exist"
		echo "Zip failure!"
		return 1
	fi

}

clean() {
	git clean -f -e *.zip
}
