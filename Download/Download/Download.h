//
//  Download.h
//  Download
//
//  Created by zero on 16/4/12.
//  Copyright © 2016年 zero. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Download : NSObject

// 监控下载进度
@property (nonatomic, copy) void (^downloading) (float);
// 下载完成, 将下载地址和文件本地路径传出
@property (nonatomic, copy) void (^downloadFinish) (NSString *url, NSString *savePath);

// 自定义初始化方法, 传入下载的地址
- (instancetype)initWithUrl:(NSString *)url;

// 开始下载
- (void)start;

// 暂停下载
- (void)pause;

@end
