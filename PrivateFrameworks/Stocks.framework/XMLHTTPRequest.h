/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableData, NSURLConnection, NSURLRequest;

@interface XMLHTTPRequest : NSObject <NSURLConnectionDelegate> {
    struct _xmlSAXHandler { 
        int (*internalSubset)(); 
        int (*isStandalone)(); 
        int (*hasInternalSubset)(); 
        int (*hasExternalSubset)(); 
        int (*resolveEntity)(); 
        int (*getEntity)(); 
        int (*entityDecl)(); 
        int (*notationDecl)(); 
        int (*attributeDecl)(); 
        int (*elementDecl)(); 
        int (*unparsedEntityDecl)(); 
        int (*setDocumentLocator)(); 
        int (*startDocument)(); 
        int (*endDocument)(); 
        int (*startElement)(); 
        int (*endElement)(); 
        int (*reference)(); 
        int (*characters)(); 
        int (*ignorableWhitespace)(); 
        int (*processingInstruction)(); 
        int (*comment)(); 
        int (*warning)(); 
        int (*error)(); 
        int (*fatalError)(); 
        int (*getParameterEntity)(); 
        int (*cdataBlock)(); 
        int (*externalSubset)(); 
        unsigned int initialized; 
        void *_private; 
        int (*startElementNs)(); 
        int (*endElementNs)(); 
        int (*serror)(); 
    NSURLConnection *_connection;
    NSMutableData *_rawData;
    NSURLRequest *_request;
    } _saxHandler;
}

+ (void)appendDebugString:(id)arg1;
+ (void)saveDebugString;
+ (void)setShouldGenerateOfflineData:(BOOL)arg1;
+ (BOOL)shouldGenerateOfflineData;
+ (id)uniqueQueryIDString;

- (void).cxx_destruct;
- (id)_yahooDoppelganger_connectionForRequest:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3;
- (id)aggregateDictionaryDomain;
- (void)cancel;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connectionForRequest:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3;
- (void)dealloc;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (id)init;
- (BOOL)isLoading;
- (void)loadRequest:(id)arg1;
- (int)parseData:(id)arg1;
- (void)willParseData;

@end