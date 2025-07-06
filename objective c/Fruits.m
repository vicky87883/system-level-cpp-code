#import <Foundation/Foundation.h>
int main(int argc,const char * argv[])
{
    @autoreleasepool{
        NSArray *fruits = @[@"apple",@"Banana",@"Mango"];
        for (NSString *fruit in fruits)
        {
            NSLog(@"I like %@",fruit);
        }
    }
    return 0;
}