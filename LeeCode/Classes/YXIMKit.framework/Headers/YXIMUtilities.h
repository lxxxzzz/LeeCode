//
//  YXIMUtilities.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import <UIKit/UIKit.h>
#import "YXIMService.h"

NS_ASSUME_NONNULL_BEGIN

@interface YXIMUtilities : NSObject

/**
 生成缩略图

 @param image 原图
 @param targetWidth 宽度
 @param targetHeight 高度
 @return 缩略图
 */
+ (UIImage *)generateThumbnail:(UIImage *)image
                     withWidth:(CGFloat)targetWidth
                    withHeight:(CGFloat)targetHeight;


/**
 获取对应的沙盒路径

 @param localPath 文件路径
 @return 对应的沙盒路径
 */
+ (NSString *)getSendBoxFilePath:(NSString *)localPath;

/**
 获取资源路径

 @param componentPath 相对路径
 @return 资源路径
 */
+ (NSString *)getDocumentPathWithComponent:(NSString *)componentPath;

+ (CGSize)imageScaleSize:(CGSize)imageSize targetSize:(CGSize)targetSize thumbnailPoint:(CGPoint *)thumbnailPoint;


+ (UIImage *)imageWithRightOrientation:(UIImage *)aImage;

+ (NSString *)getGroupGridPortrait:(NSString *)groupId
                             width:(int)width
                generateIfNotExist:(BOOL)generateIfNotExist
               defaultUserPortrait:(UIImage *(^)(NSString *userId))defaultUserPortraitBlock;
@end

NS_ASSUME_NONNULL_END
