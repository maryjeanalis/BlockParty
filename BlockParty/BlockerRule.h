

#import <Foundation/Foundation.h>

//@interface BlockerRule : NSObject

//supporting only mandatory fields for now
@property (strong,nonatomic)NSString *urlFilter;
@property (strong,nonatomic)NSString *actionType;
@property (strong, nonatomic)NSString *actionSelector;

- (id)initWithDictionary:(NSDictionary *)dic;

@end



