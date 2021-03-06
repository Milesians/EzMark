

#import <UIKit/UIKit.h>

@protocol EMCardLayoutDelegate <NSObject>

- (void)updateBlur:(CGFloat)blur ForRow:(NSInteger)row;

@end

@interface EMCardLayout : UICollectionViewLayout

@property (nonatomic, assign) CGFloat         offsetY;
@property (nonatomic, assign) CGFloat         contentSizeHeight;
@property (nonatomic, strong) NSMutableArray  *blurList;
@property (nonatomic, weak)   id<EMCardLayoutDelegate> delegate;

- (instancetype)initWithOffsetY:(CGFloat)offsetY;

@end
