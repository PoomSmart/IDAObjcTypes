#import "Types.h"
#import "../Types.h"

int sqlite3_prepare_v3(sqlite3 *db, const char *zSql, int nByte, unsigned int prepFlags, sqlite3_stmt **ppStmt, const char **pzTail);
int sqlite3_wal_checkpoint_v2(sqlite3 *db, const char *zDb, int eMode, int *pnLog, int *pnCkpt);
int sqlite3_bind_blob64(sqlite3_stmt *, int, const void *, sqlite3_uint64, void(*)(void *));
int sqlite3_close_v2(sqlite3 *);

const char *sqlite3_errstr(int);

char *sqlite3_expanded_sql(sqlite3_stmt *pStmt);