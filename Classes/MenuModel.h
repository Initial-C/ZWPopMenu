//
//  MenuModel.h
//  PopMenuTableView
//
//  Created by InitialC on 2017/8/14.
//  Copyright © 2017年 InitialC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MenuModel : NSObject

@property (nonatomic,copy) NSString *imageName;
@property (nonatomic,copy) NSString *itemName;

+ (instancetype)MenuModelWithDict:(NSDictionary *)dict;

@end
