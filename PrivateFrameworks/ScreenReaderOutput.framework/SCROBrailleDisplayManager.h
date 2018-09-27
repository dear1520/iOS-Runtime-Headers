/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROBrailleDisplayManager : NSObject <SCROBrailleDisplayDelegate> {
    id /* block */  _alertDisappeared;
    int  _alertPriority;
    double  _alertTimeout;
    struct __CFRunLoopTimer { } * _alertTimer;
    bool  _automaticBrailleTranslation;
    NSAttributedString * _blankUIString;
    SCROBrailleDisplay * _bluetoothBrailleDisplay;
    NSLock * _contentLock;
    SCROBrailleFormatter * _currentBrailleFormatter;
    <SCROSBrailleDisplayManagerDelegate> * _delegate;
    NSMutableDictionary * _detectedIOElementsDict;
    struct __CFDictionary { } * _displayConfigurationDict;
    NSMutableArray * _displayModeStack;
    SCROBrailleEventDispatcher * _eventDispatcher;
    id /* block */  _eventHandled;
    SCROBrailleDisplayHistory * _history;
    int  _inputAccessMode;
    int  _inputContractionMode;
    bool  _inputShowEightDot;
    bool  _isValid;
    bool  _lineDescriptorDisplayCallbackEnabled;
    NSAttributedString * _lineString;
    NSMutableSet * _loadedIOElements;
    NSAttributedString * _mainString;
    SCROBrailleDisplayManagedQueue * _managedDisplayQueue;
    int  _outputContractionMode;
    bool  _outputShowEightDot;
    unsigned int  _persistentKeyModifiers;
    struct __CFRunLoop { } * _runLoop;
    bool  _shouldBatchUpdates;
    bool  _showDotsSevenAndEight;
    SCROBrailleDisplayManagerStatus * _status;
    NSAttributedString * _statusString;
    SCROBrailleDisplay * _stealthBrailleDisplay;
    NSAttributedString * _uiEditingCachedString;
    long long  _uiStringCachedLineOffset;
    bool  _wordWrapEnabled;
}

@property (nonatomic, copy) id /* block */ alertDisappeared;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SCROSBrailleDisplayManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ eventHandled;
@property (readonly) unsigned long long hash;
@property (nonatomic) int inputContractionMode;
@property (nonatomic) bool inputEightDotBraille;
@property (nonatomic, readonly) SCROBrailleDisplayManagedQueue *managedDisplayQueue;
@property (nonatomic) unsigned int persistentKeyModifiers;
@property (readonly) Class superclass;
@property (nonatomic) bool wordWrapEnabled;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_addDetectedIOElement:(id)arg1 withDriverIdentifier:(id)arg2;
- (void)_alertTimeoutHandler;
- (void)_announcementHandler:(id)arg1;
- (void)_blankOutDisplaysInQueue:(id)arg1;
- (id)_cachedMainStringForDisplayMode:(int)arg1;
- (void)_contractionModeHandler:(id)arg1;
- (void)_deviceConnectedHandler:(id)arg1;
- (void)_disableAutoDetect;
- (void)_displayModeHandler:(id)arg1;
- (id)_displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3;
- (void)_enableAutoDetect;
- (void)_exitCurrentDisplayMode;
- (void)_inputEightDotHandler:(id)arg1;
- (void)_keyboardHelpHandler:(id)arg1;
- (void)_loadNextDriverForIOElement:(id)arg1;
- (void)_loadStealthDisplay;
- (void)_mainDisplayHandler:(id)arg1;
- (void)_panHandler:(id)arg1;
- (void)_persistentKeyModifiersHandler:(id)arg1;
- (void)_popDisplayModeStack;
- (void)_prepareToMemorizeNextKeyHandler:(id)arg1;
- (void)_refreshEightDotEnabledOnDisplays;
- (void)_resetAlertTimer;
- (void)_resetBluetoothReconnectionTimer;
- (void)_saveBluetoothDisplayConfiguration:(id)arg1;
- (void)_setAggregatedStatusHandler:(id)arg1;
- (void)_setAlwaysUsesNemethCodeForTechnicalText:(id)arg1;
- (void)_setBatchUpdates:(id)arg1;
- (void)_setDisplayInputAccessMode:(id)arg1;
- (void)_setDisplayMode:(int)arg1;
- (void)_setLineDescriptorCallbackEnabledHandler:(id)arg1;
- (void)_setMasterStatusCellIndexHandler:(id)arg1;
- (void)_setPrimaryDisplayKeyHandler:(id)arg1;
- (void)_setTableHandler:(id)arg1;
- (void)_setVirtualStatusAlignmentHandler:(id)arg1;
- (void)_showDotsSevenAndEightHandler:(id)arg1;
- (void)_showEightDotHandler:(id)arg1;
- (void)_simulateKeypressHandler:(id)arg1;
- (void)_stopAlertTimer;
- (void)_unloadStealthDisplay;
- (id)aggregatedStatus;
- (id /* block */)alertDisappeared;
- (bool)alwaysUsesNemethCodeForTechnicalText;
- (bool)automaticBrailleTranslation;
- (void)automaticBrailleTranslationHandler:(id)arg1;
- (void)beginUpdates;
- (void)brailleDidStartEditingWithDisplay:(id)arg1;
- (void)brailleDisplay:(id)arg1 deletedUntranslatedText:(id)arg2 speakLiterally:(bool)arg3;
- (void)brailleDisplay:(id)arg1 didDisplay:(id)arg2;
- (void)brailleDisplay:(id)arg1 didMoveSelection:(unsigned long long)arg2;
- (void)brailleDisplay:(id)arg1 didPanLeft:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4;
- (void)brailleDisplay:(id)arg1 didPanRight:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4;
- (void)brailleDisplay:(id)arg1 didReplaceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withString:(id)arg3 cursor:(unsigned long long)arg4;
- (void)brailleDisplay:(id)arg1 driverDidLoad:(bool)arg2;
- (void)brailleDisplay:(id)arg1 insertedUntranslatedText:(id)arg2 speakLiterally:(bool)arg3;
- (void)brailleDisplay:(id)arg1 isSleeping:(bool)arg2;
- (void)brailleDisplay:(id)arg1 memorizedKey:(id)arg2;
- (void)brailleDisplay:(id)arg1 pressedKeys:(id)arg2;
- (void)brailleDisplay:(id)arg1 willMemorizeKey:(id)arg2;
- (void)brailleDriverDisconnected:(id)arg1;
- (id)brailleInputManager;
- (void)configurationChangedForBrailleDisplay:(id)arg1;
- (void)configureTableWithIdentifier:(id)arg1;
- (int)contractionMode;
- (void)dealloc;
- (id)delegate;
- (int)displayInputAccessMode;
- (int)displayMode;
- (id)driverConfiguration;
- (void)endUpdates;
- (id /* block */)eventHandled;
- (void)exitCurrentDisplayMode;
- (void)handleEvent:(id)arg1;
- (bool)hasActiveDisplays;
- (id)init;
- (int)inputContractionMode;
- (void)inputContractionModeHandler:(id)arg1;
- (bool)inputEightDotBraille;
- (void)invalidate;
- (bool)isConfigured;
- (bool)isValid;
- (bool)lineDescriptorDisplayCallbackEnabled;
- (void)loadBluetoothDriverWithAddress:(id)arg1;
- (id)mainAttributedString;
- (id)managedDisplayQueue;
- (long long)masterStatusCellIndex;
- (id)newBrailleDisplayCommandDispatcher;
- (void)panDisplayLeft:(int)arg1;
- (void)panDisplayRight:(int)arg1;
- (unsigned int)persistentKeyModifiers;
- (void)playBorderHitSoundForBrailleDisplay:(id)arg1;
- (void)playCommandNotSupportedSoundForBrailleDisplay:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfBrailleCellRepresentingCharacterAtIndex:(unsigned long long)arg1;
- (void)removeBluetoothDriverWithAddress:(id)arg1;
- (void)setAggregatedStatus:(id)arg1;
- (void)setAlertDisappeared:(id /* block */)arg1;
- (void)setAlwaysUsesNemethCodeForTechnicalText:(bool)arg1;
- (void)setAnnouncementsDisplayMode;
- (void)setAutomaticBrailleTranslationEnabled:(bool)arg1;
- (void)setContractionMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayInputAccessMode:(int)arg1;
- (void)setEventHandled:(id /* block */)arg1;
- (void)setInputContractionMode:(int)arg1;
- (void)setInputEightDotBraille:(bool)arg1;
- (void)setKeyboardHelpIsOn:(bool)arg1;
- (void)setLineDescriptorDisplayCallbackEnabled:(bool)arg1;
- (void)setMainAttributedString:(id)arg1;
- (void)setMainAttributedString:(id)arg1 forceUpdate:(bool)arg2;
- (void)setMasterStatusCellIndex:(long long)arg1;
- (void)setPersistentKeyModifiers:(unsigned int)arg1;
- (void)setPrepareToMemorizeNextKey:(bool)arg1 immediate:(bool)arg2 forDisplayWithToken:(int)arg3;
- (void)setPrimaryBrailleDisplay:(int)arg1;
- (void)setShowDotsSevenAndEight:(bool)arg1;
- (void)setShowEightDotBraille:(bool)arg1;
- (void)setUIDisplayMode;
- (void)setVirtualStatusAlignment:(int)arg1;
- (void)setWordWrapEnabled:(bool)arg1;
- (bool)showDotsSevenAndEight;
- (bool)showEightDotBraille;
- (void)showNextAnnouncement;
- (void)showPreviousAnnouncement;
- (void)simulateKeypress:(id)arg1;
- (id)tableIdentifier;
- (long long)tokenForRouterIndex:(long long)arg1 location:(long long*)arg2 appToken:(id*)arg3 forDisplayWithToken:(int)arg4;
- (void)tokenizeString:(id)arg1 intoFormatter:(id)arg2 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (int)virtualStatusAlignment;
- (bool)wordWrapEnabled;
- (void)wordWrapEnabledHandler:(id)arg1;

@end