/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLayoutContentCachedKey : NSObject <NSCopying> {
    BOOL mCellWraps;
    float mHeight;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } mPaddingInsets;
    TSWPParagraphStyle *mParagraphStyle;
    NSString *mString;
    int mValueType;
    int mVerticalAlignment;
    float mWidth;
    int mWritingDirection;
}

@property (nonatomic, readonly) BOOL cellWraps;
@property (nonatomic, readonly) float height;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } paddingInsets;
@property (nonatomic, readonly) TSWPParagraphStyle *paragraphStyle;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) int valueType;
@property (nonatomic, readonly) int verticalAlignment;
@property (nonatomic, readonly) float width;
@property (nonatomic, readonly) int writingDirection;

- (BOOL)cellWraps;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (float)height;
- (id)initWithString:(id)arg1 width:(float)arg2 height:(float)arg3 paragraphStyle:(id)arg4 cellWraps:(BOOL)arg5 valueType:(int)arg6 paddingInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg7 verticalAlignment:(int)arg8 writingDirection:(int)arg9;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLayoutContentCachedKey:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })paddingInsets;
- (id)paragraphStyle;
- (id)string;
- (int)valueType;
- (int)verticalAlignment;
- (float)width;
- (int)writingDirection;

@end
