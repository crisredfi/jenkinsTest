
default:
	xcodebuild -target "jenkinsRepoTests" -configuration Release
	BUILD_DIR="build" BUILD_STYLE="Release" sh ../Scripts/combineLibs.sh
	sh ../Scripts/iPhoneFramework.sh

clean:
	-rm -rf build/*

test:
	GHUNIT_CLI=1 xcodebuild -target jenkinsRepoTests -configuration Debug -sdk iphonesimulator6.0 build


