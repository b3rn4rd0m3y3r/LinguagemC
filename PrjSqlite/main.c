#include "sqlite3.h"
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int main(int argc, char *argv[]) {

int main(void) {
    
    sqlite3 *db;
    sqlite3_stmt *res;
    
    int rc = sqlite3_open("Pedidos.db3", &db);
    
    if (rc != SQLITE_OK) {
        fprintf(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    	}
    
    //rc = sqlite3_prepare_v2(db, "SELECT SQLITE_VERSION()", -1, &res, 0);    
    rc = sqlite3_prepare_v2(db, "SELECT * FROM PedidoCab", -1, &res, 0);    
    
    if (rc != SQLITE_OK) {
        fprintf(stderr, "Failed to fetch data: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    	}    
    
    rc = sqlite3_step(res);
    while(rc == SQLITE_ROW){
	    printf("%s %s %s\n", sqlite3_column_text(res, 1),sqlite3_column_text(res, 2),sqlite3_column_text(res, 3));
	    rc = sqlite3_step(res);
    	}
    sqlite3_finalize(res);
    sqlite3_close(db);
    
    return 0;
}