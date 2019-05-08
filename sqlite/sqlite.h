#import "../Types.h"
#import "Types.h"

int sqlite3_wal_checkpoint_v2(sqlite3* db, const char* zDb, int eMode, int* pnLog, int* pnCkpt);