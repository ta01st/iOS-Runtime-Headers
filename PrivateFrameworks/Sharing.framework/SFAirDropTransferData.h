/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class LSApplicationProxy, NSArray, NSDate, NSDictionary, NSError, NSMutableDictionary, NSNumber, NSString, NSURL, UIImage;

@interface SFAirDropTransferData : NSObject <NSSecureCoding> {
    BOOL _autoAccept;
    NSString *_bundleID;
    NSNumber *_bytesCopied;
    NSString *_contentType;
    NSDictionary *_contentTypes;
    NSError *_error;
    NSMutableDictionary *_fileExtensionsToTypes;
    UIImage *_fileIcon;
    NSArray *_files;
    NSNumber *_filesCopied;
    NSArray *_items;
    NSString *_itemsDescription;
    NSDictionary *_itemsDescriptionAdvanced;
    BOOL _nonFileItem;
    NSArray *_possibleApplicationDestinations;
    NSString *_recordID;
    LSApplicationProxy *_selectedApplicationDestination;
    NSString *_senderComputerName;
    NSString *_senderEmail;
    NSString *_senderEmailHash;
    NSString *_senderFirstName;
    NSString *_senderID;
    NSString *_senderLastName;
    BOOL _soundPlayed;
    NSDate *_timeLastUserInteraction;
    NSNumber *_timeRemaining;
    NSNumber *_totalBytes;
    NSString *_transferCompleteMessage;
    BOOL _transferCompleted;
    int _transferState;
    int _transferStateResetCount;
    BOOL _undesiredMixOfItems;
    BOOL _unknownFileType;
    BOOL _unknownScheme;
    BOOL _verifiableIdentity;
}

@property(getter=shouldAutoAccept) BOOL autoAccept;
@property(copy) NSString * bundleID;
@property(retain) NSNumber * bytesCopied;
@property(copy) NSString * contentType;
@property(readonly) NSDictionary * contentTypes;
@property(retain) NSError * error;
@property(retain) UIImage * fileIcon;
@property(retain) NSArray * files;
@property(retain) NSNumber * filesCopied;
@property(copy,readonly) NSString * firstFileExtension;
@property(copy,readonly) NSString * firstFileName;
@property(copy,readonly) NSString * firstFileTypeDescription;
@property(readonly) NSURL * firstURL;
@property(retain) NSArray * items;
@property(copy) NSString * itemsDescription;
@property(retain) NSDictionary * itemsDescriptionAdvanced;
@property(getter=isNonFileItem,readonly) BOOL nonFileItem;
@property(retain) NSArray * possibleApplicationDestinations;
@property(copy,readonly) NSString * progressMessage;
@property(copy,readonly) NSString * recordID;
@property(copy,readonly) NSString * rejectedMessage;
@property(copy,readonly) NSString * searchAppStoreMessage;
@property(copy,readonly) NSString * selectAppMessage;
@property(retain) LSApplicationProxy * selectedApplicationDestination;
@property(copy) NSString * senderComputerName;
@property(copy) NSString * senderEmail;
@property(copy) NSString * senderEmailHash;
@property(copy) NSString * senderFirstName;
@property(copy) NSString * senderID;
@property(copy) NSString * senderLastName;
@property(copy,readonly) NSString * senderName;
@property BOOL soundPlayed;
@property(retain) NSDate * timeLastUserInteraction;
@property(retain) NSNumber * timeRemaining;
@property(retain) NSNumber * totalBytes;
@property(copy,readonly) NSString * transferCompleteMessage;
@property BOOL transferCompleted;
@property int transferState;
@property(readonly) int transferStateResetCount;
@property(getter=isUndesiredMixOfItems,readonly) BOOL undesiredMixOfItems;
@property(getter=isUnknownFileType,readonly) BOOL unknownFileType;
@property(getter=isUnknownScheme,readonly) BOOL unknownScheme;
@property(getter=isValid,readonly) BOOL valid;
@property(getter=isVerifiableIdentity) BOOL verifiableIdentity;

+ (id)airDropTransferDataWithRecordID:(id)arg1;
+ (id)archivedTransferName;
+ (id)archivedTransfers;
+ (id)archivedTransfersBaseURL;
+ (void)cleanupTransferWithRecordID:(id)arg1;
+ (id)loadFromURL:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)transferURLForRecordID:(id)arg1;
+ (id)validateTransferFolder:(id)arg1 withRecordID:(id)arg2;

- (void).cxx_destruct;
- (void)archive;
- (void)archiveToURL:(id)arg1;
- (id)bundleID;
- (id)bytesCopied;
- (id)contentType;
- (id)contentTypes;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)fileIcon;
- (id)files;
- (id)filesCopied;
- (id)firstFileExtension;
- (id)firstFileName;
- (id)firstFileTypeDescription;
- (id)firstURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordID:(id)arg1;
- (BOOL)isNonFileItem;
- (BOOL)isUndesiredMixOfItems;
- (BOOL)isUnknownFileType;
- (BOOL)isUnknownScheme;
- (BOOL)isValid;
- (BOOL)isVerifiableIdentity;
- (id)items;
- (id)itemsDescription;
- (id)itemsDescriptionAdvanced;
- (id)messageAndButtonTitle:(id*)arg1;
- (id)messageInProgress:(BOOL)arg1 buttonTitle:(id*)arg2;
- (id)messageLocalizedKeyWithTypes:(id)arg1 isTrustedPerson:(BOOL)arg2 isInProgress:(BOOL)arg3;
- (id)possibleApplicationDestinations;
- (id)progressMessage;
- (id)recordID;
- (id)rejectedMessage;
- (void)removeItem:(id)arg1;
- (void)resetTransferState;
- (id)searchAppStoreMessage;
- (id)selectAppMessage;
- (id)selectedApplicationDestination;
- (id)senderComputerName;
- (id)senderEmail;
- (id)senderEmailHash;
- (id)senderFirstName;
- (id)senderID;
- (id)senderLastName;
- (id)senderName;
- (void)setAutoAccept:(BOOL)arg1;
- (void)setBundleID:(id)arg1;
- (void)setBytesCopied:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFileIcon:(id)arg1;
- (void)setFiles:(id)arg1;
- (void)setFilesCopied:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setItemsDescription:(id)arg1;
- (void)setItemsDescriptionAdvanced:(id)arg1;
- (void)setPossibleApplicationDestinations:(id)arg1;
- (void)setSelectedApplicationDestination:(id)arg1;
- (void)setSenderComputerName:(id)arg1;
- (void)setSenderEmail:(id)arg1;
- (void)setSenderEmailHash:(id)arg1;
- (void)setSenderFirstName:(id)arg1;
- (void)setSenderID:(id)arg1;
- (void)setSenderLastName:(id)arg1;
- (void)setSoundPlayed:(BOOL)arg1;
- (void)setTimeLastUserInteraction:(id)arg1;
- (void)setTimeRemaining:(id)arg1;
- (void)setTotalBytes:(id)arg1;
- (void)setTransferCompleted:(BOOL)arg1;
- (void)setTransferState:(int)arg1;
- (void)setVerifiableIdentity:(BOOL)arg1;
- (BOOL)shouldAutoAccept;
- (BOOL)soundPlayed;
- (id)timeLastUserInteraction;
- (id)timeRemaining;
- (id)totalBytes;
- (id)transferCompleteMessage;
- (BOOL)transferCompleted;
- (int)transferState;
- (int)transferStateResetCount;
- (id)typeForFileExtension:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

@end