NSMutableDictionary *preferences;BOOL enhance, all, nineThree, tenThree, elevenTwo, twelveOneTwo, twelveFour, thirteen, thirteenFour, thirteenFive, fourteen, failure, install, Tweaks, Theos, alreadyHas, installed, enhanced, installSuccess, previousInstall, tweaksMade, folderFailed, theosUpdate, attempted, failed, PoPuP, badUdid, useColor, shouldReLoad;static int totalDownloaded = 0;static int track;NSString *tFolderSuc;NSString *tFolderFail;NSString *tFolderIgnore;NSString *previousInstallMsg;NSString *theosSuccessMessage;NSString *theosFailureMessage;NSString *successfulSdk;NSString *failedSdk;NSString *ignored;NSString *enhanceMsg;NSString *updated;NSString *Loc;NSString *msg;NSString *dlLinK;NSString *sdkS;NSString *progName;NSString *udidFail;NSString *installHere;NSString *runCode;static NSString *altPics = @"/Library/PreferenceBundles/tools420.bundle/420altIcon.png";static NSString *origPics = @"/Library/PreferenceBundles/tools420.bundle/420icon.png";static NSString *originalPics = @"/Library/PreferenceBundles/tools420.bundle/420origIcon.png";BOOL installedTheos;BOOL installedVarTheos;NSFileManager* fileManager;//my programBOOL saveUDIDOnDecline;//save udid to pasteboard on declined udid keystatic NSString *LoC = @"com.randy420.tai"; //where the activationKey is storedstatic NSString *PW = @"Pass"; //activation key passwordstatic NSString *keyUrL = @"https://theemeraldisle.family/s/udid.plist"; // URL to .plist where activation keys are savedNSString *udidDevice;NSString *udidValue;NSString *string;NSString *key;NSString *current;NSString *decrypt;NSData *hashedKey;NSMutableDictionary *Prefs;