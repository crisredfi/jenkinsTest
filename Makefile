
default:
	xcodebuild -target "GoPirates_UnitTests (Device)" -configuration Release
	xcodebuild -target "GoPirates_UnitTests (Simulator)" -configuration Release
	BUILD_DIR="build" BUILD_STYLE="Release" sh ../Scripts/combineLibs.sh
	sh ../Scripts/iPhoneFramework.sh

clean:
	-rm -rf build/*

test:
	GHUNIT_CLI=1 xcodebuild -target GoPirates_UnitTests -configuration Debug -sdk iphonesimulator6.0 build


