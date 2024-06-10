typedef long int integer;
typedef unsigned long uinteger;
typedef char *address;
typedef short int shortint;
typedef float real;
typedef double doublereal;
typedef struct { real r, i; } complex;
typedef struct { doublereal r, i; } doublecomplex;
typedef long int logical;
typedef short int shortlogical;
typedef char logical1;
typedef char integer1;

typedef long int flag;
typedef long int ftnlen;
typedef long int ftnint;
 
typedef struct
{	flag cierr;
	ftnint ciunit;
	flag ciend;
	char *cifmt;
	ftnint cirec;
} cilist;
typedef struct
{	flag icierr;
	char *iciunit;
	flag iciend;
	char *icifmt;
	ftnint icirlen;
	ftnint icirnum;
} icilist;
typedef struct
{	flag oerr;
	ftnint ounit;
	char *ofnm;
	ftnlen ofnmlen;
	char *osta;
	char *oacc;
	char *ofm;
	ftnint orl;
	char *oblnk;
} olist;
typedef struct
{	flag cerr;
	ftnint cunit;
	char *csta;
} cllist;
typedef struct
{	flag aerr;
	ftnint aunit;
} alist;
typedef struct
{	flag inerr;
	ftnint inunit;
	char *infile;
	ftnlen infilen;
	ftnint	*inex;	 
	ftnint	*inopen;
	ftnint	*innum;
	ftnint	*innamed;
	char	*inname;
	ftnlen	innamlen;
	char	*inacc;
	ftnlen	inacclen;
	char	*inseq;
	ftnlen	inseqlen;
	char 	*indir;
	ftnlen	indirlen;
	char	*infmt;
	ftnlen	infmtlen;
	char	*inform;
	ftnint	informlen;
	char	*inunf;
	ftnlen	inunflen;
	ftnint	*inrecl;
	ftnint	*innrec;
	char	*inblank;
	ftnlen	inblanklen;
} inlist;



union Multitype {	 
	integer1 g;
	shortint h;
	integer i;
	 
	real r;
	doublereal d;
	complex c;
	doublecomplex z;
	};

typedef union Multitype Multitype;

 	 

struct Vardesc {	 
	char *name;
	char *addr;
	ftnlen *dims;
	int  type;
	};
typedef struct Vardesc Vardesc;

struct Namelist {
	char *name;
	Vardesc **vars;
	int nvars;
	};
typedef struct Namelist Namelist;

typedef int   (*U_fp)();
typedef shortint (*J_fp)();
typedef integer (*I_fp)();
typedef real (*R_fp)();
typedef doublereal (*D_fp)(), (*E_fp)();
typedef   void  (*C_fp)();
typedef   void  (*Z_fp)();
typedef logical (*L_fp)();
typedef shortlogical (*K_fp)();
typedef   void  (*H_fp)();
typedef   int (*S_fp)();
typedef void  C_f;	 
typedef void  H_f;	 
typedef void  Z_f;	 
typedef doublereal E_f;	 
struct {
    integer iero;
} ierode_;

struct {
    doublereal precis;
    integer iout, iprint;
} colout_;

struct {
    doublereal rho[7], coef[49];
} colloc_;

union {
    struct {
	integer k, nc, mstar, kd, mmax, mt[20];
    } _1;
    struct {
	integer k, ncomp, mstar, kd, mmax, m[20];
    } _2;
    struct {
	integer k, ncomp, id1, id2, mmax, m[20];
    } _3;
    struct {
	integer kdum, ncomp, mstar, kd, mmax, m[20];
    } _4;
    struct {
	integer kdum, ndum, mstar, kd, mmax, m[20];
    } _5;
    struct {
	integer k, ncdum, mstar, kdum, mmax, m[20];
    } _6;
    struct {
	integer k, ncomp, mstar, kdum, mmax, m[20];
    } _7;
} colord_;

struct {
    integer n, nold, nmax, nz, ndmz;
} colapr_;



struct {
    integer mshflg, mshnum, mshlmt, mshalt;
} colmsh_;



union {
    struct {
	doublereal tzeta[40], tleft, tright;
	integer izeta, idum;
    } _1;
    struct {
	doublereal zeta[40], aleft, aright;
	integer izeta, idum;
    } _2;
    struct {
	doublereal zeta[40], aleft, aright;
	integer izeta, izsave;
    } _3;
} colsid_;





struct {
    integer nonlin, iter, limit, icare, iguess;
} colnln_;



union {
    struct {
	doublereal ttl[40], wgtmsh[40], wgterr[40], tolin[40], root[40];
	integer jtol[40], lttol[40], ntol;
    } _1;
    struct {
	doublereal tol[40], wgtmsh[40], wgterr[40], tolin[40], root[40];
	integer jtol[40], ltol[40], ntol;
    } _2;
} colest_;




struct {
    integer iero;
} iercol_;



struct {
    doublereal b[28], acol[196]	 , asave[112]	 
;
} colbas_;



struct {
    integer nunit, iunit[5];
} xeruni_;



struct {
    integer iero;
} ierajf_;



struct {
    integer jupbnd;
} dqa001_;



union {
    struct {
	doublereal rownd, rowns[209], ccmax, el0, h__, hmin, hmxi, hu, rc, tn,
		 uround;
	integer iownd[14], iowns[6], icf, ierpj, iersl, jcur, jstart, kflag, 
		l, meth, miter, maxord, maxcor, msbp, mxncf, n, nq, nst, nfe, 
		nje, nqu;
    } _1;
    struct {
	doublereal tret, rowns[209], ccmax, el0, h__, hmin, hmxi, hu, rc, tn, 
		uround;
	integer illin, init, lyh, lewt, lacor, lsavf, lwm, liwm, mxstep, 
		mxhnil, nhnil, ntrep, nslast, nyh, iowns[6], icf, ierpj, 
		iersl, jcur, jstart, kflag, l, meth, miter, maxord, maxcor, 
		msbp, mxncf, n, nq, nst, nfe, nje, nqu;
    } _2;
    struct {
	doublereal tret, rowns[209], ccmax, el0, h__, hmin, hmxi, hu, rc, tn, 
		uround;
	integer illin, init, lyh, lewt, lacor, lsavr, lwm, liwm, mxstep, 
		mxhnil, nhnil, ntrep, nslast, nyh, iowns[6], icf, ierpj, 
		iersl, jcur, jstart, kflag, l, meth, miter, maxord, maxcor, 
		msbp, mxncf, n, nq, nst, nre, nje, nqu;
    } _3;
    struct {
	doublereal rownd, rowns[209], ccmax, el0, h__, hmin, hmxi, hu, rc, tn,
		 uround;
	integer iownd[14], iowns[6], icf, ierpj, iersl, jcur, jstart, kflag, 
		l, meth, miter, maxord, maxcor, msbp, mxncf, n, nq, nst, nre, 
		nje, nqu;
    } _4;
    struct {
	doublereal rls[219];
	integer ils[39];
    } _5;
    struct {
	doublereal rownd, conit, crate, el[13], elco[156]	 
, hold, rmax, tesco[36]	 , ccmax, el0,
		 h__, hmin, hmxi, hu, rc, tn, uround;
	integer iownd[14], ialth, ipup, lmax, meo, nqnyh, nslp, icf, ierpj, 
		iersl, jcur, jstart, kflag, l, meth, miter, maxord, maxcor, 
		msbp, mxncf, n, nq, nst, nfe, nje, nqu;
    } _6;
    struct {
	doublereal rownd, conit, crate, el[13], elco[156]	 
, hold, rmax, tesco[36]	 , ccmax, el0,
		 h__, hmin, hmxi, hu, rc, tn, uround;
	integer iownd[14], ialth, ipup, lmax, meo, nqnyh, nslp, icf, ierpj, 
		iersl, jcur, jstart, kflag, l, meth, miter, maxord, maxcor, 
		msbp, mxncf, n, nq, nst, nre, nje, nqu;
    } _7;
} ls0001_;









struct {
    doublereal stk[2000000];
} stack_;



struct {
    integer bot, top, idstk[3000]	 , lstk[500], leps, 
	    bbot, bot0;
} vstk_;



struct {
    integer ids[1536]	 , pstk[256], rstk[256], pt, niv, 
	    macr, paus, icall;
} recu_;



struct {
    integer ddt, err, lct[8], lin[8192], lpt[6], hio, rio, wio, rte, wte;
} iop_;



struct {
    integer err1, err2, errct, toperr;
} errgst_;



struct {
    integer sym, syn[6], char1, fin, fun, lhs, rhs, ran[2], comp[2];
} com_;



struct {
    char alfa[63], alfb[63], buf[4096];
} cha1_;



struct {
    integer nlink;
} link1_;



struct {
    char tablin[1000];
} link2_;



struct {
    integer wmac, lcntr, nmacs, macnms[120]	 , lgptrs[21],
	     bptlg[100];
} dbg_;



union {
    struct {
	doublereal tsw, rowns2[20], pdnorm;
	integer insufr, insufi, ixpr, iowns2[2], jtyp, mused, mxordn, mxords;
    } _1;
    struct {
	doublereal rownd2, rowns2[20], pdnorm;
	integer iownd2[3], iowns2[2], jtyp, mused, mxordn, mxords;
    } _2;
    struct {
	doublereal rlsa[22];
	integer ilsa[9];
    } _3;
    struct {
	doublereal rownd2, pdest, pdlast, ratio, cm1[12], cm2[5], pdnorm;
	integer iownd2[3], icount, irflag, jtyp, mused, mxordn, mxords;
    } _4;
} lsa001_;






union {
    struct {
	doublereal rownr3[2], t0, tlast, toutc;
	integer lg0, lg1, lgx, iownr3[2], irfnd, itaskc, ngc, nge;
    } _1;
    struct {
	doublereal rownr3[2], t0, tlast, toutc;
	integer iownd3[3], iownr3[2], irfnd, itaskc, ngc, nge;
    } _2;
    struct {
	doublereal alpha, x2, rdum3[3];
	integer iownd3[3], imax, last, idum3[4];
    } _3;
    struct {
	doublereal rlsr[5];
	integer ilsr[9];
    } _4;
} lsr001_;






struct {
    integer kmax, kount;
    doublereal dxsav, xp[200], yp[2000]	 ;
} path_;



union {
    struct {
	integer ieh[2];
    } _1;
    struct {
	integer mesflg, lunit;
    } _2;
} eh0001_;




struct {
    doublereal u1;
    integer nc;
} fprf2c_;



union {
    struct {
	doublereal t0, tf, dti, dtf, ermx;
	integer iu[5], nuc, nuv, ilin, nti, ntf, ny, nea, itmx, nex, nob, 
		ntob, ntobi, nitu, ndtu;
    } _1;
    struct {
	doublereal t00, tf0, dti0, dtf0, ermx0;
	integer iu0[5], nuc0, nuv0, ilin0, nti0, ntf0, ny0, nea0, itmx0, nex0,
		 nob0, ntob0, ntobi0, nitu0, ndtu0;
    } _2;
} icsez_;




union {
    struct {
	integer nitv, nrtv, ndtv;
    } _1;
    struct {
	integer nitv0, nrtv0, ndtv0;
    } _2;
} nird_;




 

static integer c__1 = 1;
static integer c_n1 = -1;
static integer c__3 = 3;
static integer c__2 = 2;
static doublereal c_b61 = 0.;
static integer c__0 = 0;
static doublereal c_b89 = 1.;
static doublereal c_b418 = -1.;
static doublereal c_b806 = .5;
static integer c__65 = 65;
static integer c__4 = 4;
static doublereal c_b1934 = .16666666666666666;
static doublereal c_b1936 = .33333333333333331;
static doublereal c_b1938 = .66666666666666663;
static doublereal c_b1940 = .83333333333333337;
static integer c_n998 = -998;
static integer c__5 = 5;
static integer c__6 = 6;
static integer c__7 = 7;
static integer c__8 = 8;
static integer c__9 = 9;
static integer c__10 = 10;
static integer c__11 = 11;
static integer c__12 = 12;
static integer c__13 = 13;
static integer c__14 = 14;
static integer c__15 = 15;
static integer c__17 = 17;
static integer c__18 = 18;
static integer c__19 = 19;
static integer c_n999 = -999;
static integer c__72 = 72;
static integer c__30 = 30;
static integer c__51 = 51;
static integer c__52 = 52;
static integer c__60 = 60;
static integer c__999 = 999;
static integer c__103 = 103;
static integer c__50 = 50;
static integer c__104 = 104;
static integer c__101 = 101;
static integer c__102 = 102;
static integer c__105 = 105;
static integer c__106 = 106;
static integer c__107 = 107;
static integer c__301 = 301;
static integer c__201 = 201;
static integer c__202 = 202;
static integer c__203 = 203;
static integer c__204 = 204;
static integer c__205 = 205;
static integer c__206 = 206;
static integer c__207 = 207;
static integer c__40 = 40;
static integer c__16 = 16;
static integer c__20 = 20;
static integer c__21 = 21;
static integer c__22 = 22;
static integer c__23 = 23;
static integer c__24 = 24;
static integer c__25 = 25;
static integer c__26 = 26;
static integer c__27 = 27;
static integer c__28 = 28;
static integer c__29 = 29;
static integer c__302 = 302;
static integer c__303 = 303;
static integer c__31 = 31;
static integer c__32 = 32;
static integer c__208 = 208;
static integer c__210 = 210;
static doublereal c_b5310 = 1.5;
static doublereal c_b5340 = 1e-4;
static doublereal c_b5732 = .9;
static doublereal c_b5779 = .75;
static logical c_false = (0) ;
static doublereal c_b7108 = .25;
static integer c_n24 = -24;
static integer c_n34 = -34;
static doublereal c_b8137 = 10.;

  int dgelq2_(m, n, a, lda, tau, work, info)
integer *m, *n;
doublereal *a;
integer *lda;
doublereal *tau, *work;
integer *info;
{
     
    integer a_dim1, a_offset, i__1, i__2, i__3;

     
    static integer i__, k;
    extern   int dlarf_(), dlarfg_(), xerbla_();
    static doublereal aii;
     
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --tau;
    --work;
    *info = 0;
    if (*m < 0) {
	*info = -1;
    } else if (*n < 0) {
	*info = -2;
    } else if (*lda < (( 1 ) >= ( *m ) ? ( 1 ) : ( *m )) ) {
	*info = -4;
    }
    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DGELQ2", &i__1, 6L);
	return 0;
    }

    k = (( *m ) <= ( *n ) ? ( *m ) : ( *n )) ;

    i__1 = k;
    for (i__ = 1; i__ <= i__1; ++i__) {

 


	i__2 = *n - i__ + 1;
 
	i__3 = i__ + 1;
	dlarfg_(&i__2, &a[i__ + i__ * a_dim1], &a[i__ + (( i__3 ) <= ( *n ) ? ( i__3 ) : ( *n ))  * a_dim1]
		, lda, &tau[i__]);
	if (i__ < *m) {

 

	    aii = a[i__ + i__ * a_dim1];
	    a[i__ + i__ * a_dim1] = 1.;
	    i__2 = *m - i__;
	    i__3 = *n - i__ + 1;
	    dlarf_("Right", &i__2, &i__3, &a[i__ + i__ * a_dim1], lda, &tau[
		    i__], &a[i__ + 1 + i__ * a_dim1], lda, &work[1], 5L);
	    a[i__ + i__ * a_dim1] = aii;
	}
 
    }
    return 0;

}  

  int dgelqf_(m, n, a, lda, tau, work, lwork, info)
integer *m, *n;
doublereal *a;
integer *lda;
doublereal *tau, *work;
integer *lwork, *info;
{
     
    integer a_dim1, a_offset, i__1, i__2, i__3, i__4;
    static integer i__, k, nbmin, iinfo;
    extern   int dgelq2_();
    static integer ib, nb;
    extern   int dlarfb_();
    static integer nx;
    extern   int dlarft_(), xerbla_();
    extern integer ilaenv_();
    static integer ldwork, iws;
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --tau;
    --work;
    *info = 0;
    if (*m < 0) {
	*info = -1;
    } else if (*n < 0) {
	*info = -2;
    } else if (*lda < (( 1 ) >= ( *m ) ? ( 1 ) : ( *m )) ) {
	*info = -4;
    } else if (*lwork < (( 1 ) >= ( *m ) ? ( 1 ) : ( *m )) ) {
	*info = -7;
    }
    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DGELQF", &i__1, 6L);
	return 0;
    }

    k = (( *m ) <= ( *n ) ? ( *m ) : ( *n )) ;
    if (k == 0) {
	work[1] = 1.;
	return 0;
    }

    nb = ilaenv_(&c__1, "DGELQF", " ", m, n, &c_n1, &c_n1, 6L, 1L);
    nbmin = 2;
    nx = 0;
    iws = *m;
    if (nb > 1 && nb < k) {
 
	i__1 = 0, i__2 = ilaenv_(&c__3, "DGELQF", " ", m, n, &c_n1, &c_n1, 6L,
		 1L);
	nx = (( i__1 ) >= ( i__2 ) ? ( i__1 ) : ( i__2 )) ;
	if (nx < k) {
	    ldwork = *m;
	    iws = ldwork * nb;
	    if (*lwork < iws) {

 

 

		nb = *lwork / ldwork;
 
		i__1 = 2, i__2 = ilaenv_(&c__2, "DGELQF", " ", m, n, &c_n1, &
			c_n1, 6L, 1L);
		nbmin = (( i__1 ) >= ( i__2 ) ? ( i__1 ) : ( i__2 )) ;
	    }
	}
    }

    if (nb >= nbmin && nb < k && nx < k) {

 

	i__1 = k - nx;
	i__2 = nb;
	for (i__ = 1; i__2 < 0 ? i__ >= i__1 : i__ <= i__1; i__ += i__2) {
 
	    i__3 = k - i__ + 1;
	    ib = (( i__3 ) <= ( nb ) ? ( i__3 ) : ( nb )) ;

 
 

	    i__3 = *n - i__ + 1;
	    dgelq2_(&ib, &i__3, &a[i__ + i__ * a_dim1], lda, &tau[i__], &work[
		    1], &iinfo);
	    if (i__ + ib <= *m) {

 

 

		i__3 = *n - i__ + 1;
		dlarft_("Forward", "Rowwise", &i__3, &ib, &a[i__ + i__ * 
			a_dim1], lda, &tau[i__], &work[1], &ldwork, 7L, 7L);

 

		i__3 = *m - i__ - ib + 1;
		i__4 = *n - i__ + 1;
		dlarfb_("Right", "No transpose", "Forward", "Rowwise", &i__3, 
			&i__4, &ib, &a[i__ + i__ * a_dim1], lda, &work[1], &
			ldwork, &a[i__ + ib + i__ * a_dim1], lda, &work[ib + 
			1], &ldwork, 5L, 12L, 7L, 7L);
	    }
 
	}
    } else {
	i__ = 1;
    }

 

    if (i__ <= k) {
	i__2 = *m - i__ + 1;
	i__1 = *n - i__ + 1;
	dgelq2_(&i__2, &i__1, &a[i__ + i__ * a_dim1], lda, &tau[i__], &work[1]
		, &iinfo);
    }

    work[1] = (doublereal) iws;
    return 0;

}  

  int dgels_(trans, m, n, nrhs, a, lda, b, ldb, work, lwork, 
	info, trans_len)
char *trans;
integer *m, *n, *nrhs;
doublereal *a;
integer *lda;
doublereal *b;
integer *ldb;
doublereal *work;
integer *lwork, *info;
ftnlen trans_len;
{
     
    integer a_dim1, a_offset, b_dim1, b_offset, i__1, i__2, i__3;

     
    static doublereal anrm, bnrm;
    static integer brow;
    static logical tpsd;
    static integer i__, j, iascl, ibscl;
    extern logical lsame_();
    extern   int dtrsm_();
    static integer wsize;
    static doublereal rwork[1];
    extern   int dlabad_();
    static integer nb;
    extern doublereal dlamch_(), dlange_();
    static integer mn;
    extern   int dgelqf_(), dlascl_(), dgeqrf_(), dlaset_(), 
	    xerbla_();
    extern integer ilaenv_();
    static integer scllen;
    static doublereal bignum;
    extern   int dormlq_(), dormqr_();
    static doublereal smlnum;
     
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    b_dim1 = *ldb;
    b_offset = b_dim1 + 1;
    b -= b_offset;
    --work;

     
    *info = 0;
    mn = (( *m ) <= ( *n ) ? ( *m ) : ( *n )) ;
    if (! (lsame_(trans, "N", 1L, 1L) || lsame_(trans, "T", 1L, 1L))) {
	*info = -1;
    } else if (*m < 0) {
	*info = -2;
    } else if (*n < 0) {
	*info = -3;
    } else if (*nrhs < 0) {
	*info = -4;
    } else if (*lda < (( 1 ) >= ( *m ) ? ( 1 ) : ( *m )) ) {
	*info = -6;
    } else   {
 
	i__1 = (( 1 ) >= ( *m ) ? ( 1 ) : ( *m )) ;
	if (*ldb < (( i__1 ) >= ( *n ) ? ( i__1 ) : ( *n )) ) {
	    *info = -8;
	} else   {
 
 
	    i__3 = (( *m ) >= ( *n ) ? ( *m ) : ( *n )) ;
	    i__1 = 1, i__2 = mn + (( i__3 ) >= ( *nrhs ) ? ( i__3 ) : ( *nrhs )) ;
	    if (*lwork < (( i__1 ) >= ( i__2 ) ? ( i__1 ) : ( i__2 )) ) {
		*info = -10;
	    }
	}
    }

 

    if (*info == 0 || *info == -10) {

	tpsd = (1) ;
	if (lsame_(trans, "N", 1L, 1L)) {
	    tpsd = (0) ;
	}

	if (*m >= *n) {
	    nb = ilaenv_(&c__1, "DGEQRF", " ", m, n, &c_n1, &c_n1, 6L, 1L);
	    if (tpsd) {
 
		i__1 = nb, i__2 = ilaenv_(&c__1, "DORMQR", "LN", m, nrhs, n, &
			c_n1, 6L, 2L);
		nb = (( i__1 ) >= ( i__2 ) ? ( i__1 ) : ( i__2 )) ;
	    } else {
 
		i__1 = nb, i__2 = ilaenv_(&c__1, "DORMQR", "LT", m, nrhs, n, &
			c_n1, 6L, 2L);
		nb = (( i__1 ) >= ( i__2 ) ? ( i__1 ) : ( i__2 )) ;
	    }
	} else {
	    nb = ilaenv_(&c__1, "DGELQF", " ", m, n, &c_n1, &c_n1, 6L, 1L);
	    if (tpsd) {
 
		i__1 = nb, i__2 = ilaenv_(&c__1, "DORMLQ", "LT", n, nrhs, m, &
			c_n1, 6L, 2L);
		nb = (( i__1 ) >= ( i__2 ) ? ( i__1 ) : ( i__2 )) ;
	    } else {
 
		i__1 = nb, i__2 = ilaenv_(&c__1, "DORMLQ", "LN", n, nrhs, m, &
			c_n1, 6L, 2L);
		nb = (( i__1 ) >= ( i__2 ) ? ( i__1 ) : ( i__2 )) ;
	    }
	}

 
	i__1 = (( *m ) >= ( *n ) ? ( *m ) : ( *n )) ;
	wsize = mn + (( i__1 ) >= ( *nrhs ) ? ( i__1 ) : ( *nrhs ))  * nb;
	work[1] = (doublereal) wsize;

    }

    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DGELS ", &i__1, 6L);
	return 0;
    }

 

 
    i__1 = (( *m ) <= ( *n ) ? ( *m ) : ( *n )) ;
    if ((( i__1 ) <= ( *nrhs ) ? ( i__1 ) : ( *nrhs ))  == 0) {
	i__1 = (( *m ) >= ( *n ) ? ( *m ) : ( *n )) ;
	dlaset_("Full", &i__1, nrhs, &c_b61, &c_b61, &b[b_offset], ldb, 4L);
	return 0;
    }

 

    smlnum = dlamch_("S", 1L) / dlamch_("P", 1L);
    bignum = 1. / smlnum;
    dlabad_(&smlnum, &bignum);

 

    anrm = dlange_("M", m, n, &a[a_offset], lda, rwork, 1L);
    iascl = 0;
    if (anrm > 0. && anrm < smlnum) {

 

	dlascl_("G", &c__0, &c__0, &anrm, &smlnum, m, n, &a[a_offset], lda, 
		info, 1L);
	iascl = 1;
    } else if (anrm > bignum) {

 

	dlascl_("G", &c__0, &c__0, &anrm, &bignum, m, n, &a[a_offset], lda, 
		info, 1L);
	iascl = 2;
    } else if (anrm == 0.) {

 

	i__1 = (( *m ) >= ( *n ) ? ( *m ) : ( *n )) ;
	dlaset_("F", &i__1, nrhs, &c_b61, &c_b61, &b[b_offset], ldb, 1L);
	goto L50;
    }

    brow = *m;
    if (tpsd) {
	brow = *n;
    }
    bnrm = dlange_("M", &brow, nrhs, &b[b_offset], ldb, rwork, 1L);
    ibscl = 0;
    if (bnrm > 0. && bnrm < smlnum) {

 

	dlascl_("G", &c__0, &c__0, &bnrm, &smlnum, &brow, nrhs, &b[b_offset], 
		ldb, info, 1L);
	ibscl = 1;
    } else if (bnrm > bignum) {

 

	dlascl_("G", &c__0, &c__0, &bnrm, &bignum, &brow, nrhs, &b[b_offset], 
		ldb, info, 1L);
	ibscl = 2;
    }

    if (*m >= *n) {

 

	i__1 = *lwork - mn;
	dgeqrf_(m, n, &a[a_offset], lda, &work[1], &work[mn + 1], &i__1, info)
		;

 

	if (! tpsd) {

 

 

	    i__1 = *lwork - mn;
	    dormqr_("Left", "Transpose", m, nrhs, n, &a[a_offset], lda, &work[
		    1], &b[b_offset], ldb, &work[mn + 1], &i__1, info, 4L, 9L)
		    ;

 

 

	    dtrsm_("Left", "Upper", "No transpose", "Non-unit", n, nrhs, &
		    c_b89, &a[a_offset], lda, &b[b_offset], ldb, 4L, 5L, 12L, 
		    8L);

	    scllen = *n;

	} else {

 

 

	    dtrsm_("Left", "Upper", "Transpose", "Non-unit", n, nrhs, &c_b89, 
		    &a[a_offset], lda, &b[b_offset], ldb, 4L, 5L, 9L, 8L);

 

	    i__1 = *nrhs;
	    for (j = 1; j <= i__1; ++j) {
		i__2 = *m;
		for (i__ = *n + 1; i__ <= i__2; ++i__) {
		    b[i__ + j * b_dim1] = 0.;
 
		}
 
	    }

 

	    i__1 = *lwork - mn;
	    dormqr_("Left", "No transpose", m, nrhs, n, &a[a_offset], lda, &
		    work[1], &b[b_offset], ldb, &work[mn + 1], &i__1, info, 
		    4L, 12L);

 

	    scllen = *m;

	}

    } else {

 

	i__1 = *lwork - mn;
	dgelqf_(m, n, &a[a_offset], lda, &work[1], &work[mn + 1], &i__1, info)
		;

 

	if (! tpsd) {

 

 

	    dtrsm_("Left", "Lower", "No transpose", "Non-unit", m, nrhs, &
		    c_b89, &a[a_offset], lda, &b[b_offset], ldb, 4L, 5L, 12L, 
		    8L);

 

	    i__1 = *nrhs;
	    for (j = 1; j <= i__1; ++j) {
		i__2 = *n;
		for (i__ = *m + 1; i__ <= i__2; ++i__) {
		    b[i__ + j * b_dim1] = 0.;
 
		}
 
	    }

 

	    i__1 = *lwork - mn;
	    dormlq_("Left", "Transpose", n, nrhs, m, &a[a_offset], lda, &work[
		    1], &b[b_offset], ldb, &work[mn + 1], &i__1, info, 4L, 9L)
		    ;

 

	    scllen = *n;

	} else {

 

 

	    i__1 = *lwork - mn;
	    dormlq_("Left", "No transpose", n, nrhs, m, &a[a_offset], lda, &
		    work[1], &b[b_offset], ldb, &work[mn + 1], &i__1, info, 
		    4L, 12L);

 

 

	    dtrsm_("Left", "Lower", "Transpose", "Non-unit", m, nrhs, &c_b89, 
		    &a[a_offset], lda, &b[b_offset], ldb, 4L, 5L, 9L, 8L);

	    scllen = *m;

	}

    }

 

    if (iascl == 1) {
	dlascl_("G", &c__0, &c__0, &anrm, &smlnum, &scllen, nrhs, &b[b_offset]
		, ldb, info, 1L);
    } else if (iascl == 2) {
	dlascl_("G", &c__0, &c__0, &anrm, &bignum, &scllen, nrhs, &b[b_offset]
		, ldb, info, 1L);
    }
    if (ibscl == 1) {
	dlascl_("G", &c__0, &c__0, &smlnum, &bnrm, &scllen, nrhs, &b[b_offset]
		, ldb, info, 1L);
    } else if (ibscl == 2) {
	dlascl_("G", &c__0, &c__0, &bignum, &bnrm, &scllen, nrhs, &b[b_offset]
		, ldb, info, 1L);
    }

L50:
    work[1] = (doublereal) wsize;

    return 0;

}  

  int dgemm_(transa, transb, m, n, k, alpha, a, lda, b, ldb, 
	beta, c__, ldc, transa_len, transb_len)
char *transa, *transb;
integer *m, *n, *k;
doublereal *alpha, *a;
integer *lda;
doublereal *b;
integer *ldb;
doublereal *beta, *c__;
integer *ldc;
ftnlen transa_len;
ftnlen transb_len;
{
     
    integer a_dim1, a_offset, b_dim1, b_offset, c_dim1, c_offset, i__1, i__2, 
	    i__3;
    static integer info;
    static logical nota, notb;
    static doublereal temp;
    static integer i__, j, l, ncola;
    extern logical lsame_();
    static integer nrowa, nrowb;
    extern   int xerbla_();
     
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    b_dim1 = *ldb;
    b_offset = b_dim1 + 1;
    b -= b_offset;
    c_dim1 = *ldc;
    c_offset = c_dim1 + 1;
    c__ -= c_offset;

     
    nota = lsame_(transa, "N", 1L, 1L);
    notb = lsame_(transb, "N", 1L, 1L);
    if (nota) {
	nrowa = *m;
	ncola = *k;
    } else {
	nrowa = *k;
	ncola = *m;
    }
    if (notb) {
	nrowb = *k;
    } else {
	nrowb = *n;
    }

 

    info = 0;
    if (! nota && ! lsame_(transa, "C", 1L, 1L) && ! lsame_(transa, "T", 1L, 
	    1L)) {
	info = 1;
    } else if (! notb && ! lsame_(transb, "C", 1L, 1L) && ! lsame_(transb, 
	    "T", 1L, 1L)) {
	info = 2;
    } else if (*m < 0) {
	info = 3;
    } else if (*n < 0) {
	info = 4;
    } else if (*k < 0) {
	info = 5;
    } else if (*lda < (( 1 ) >= ( nrowa ) ? ( 1 ) : ( nrowa )) ) {
	info = 8;
    } else if (*ldb < (( 1 ) >= ( nrowb ) ? ( 1 ) : ( nrowb )) ) {
	info = 10;
    } else if (*ldc < (( 1 ) >= ( *m ) ? ( 1 ) : ( *m )) ) {
	info = 13;
    }
    if (info != 0) {
	xerbla_("DGEMM ", &info, 6L);
	return 0;
    }

 

    if (*m == 0 || *n == 0 || (*alpha == 0. || *k == 0) && *beta == 1.) {
	return 0;
    }

 

    if (*alpha == 0.) {
	if (*beta == 0.) {
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		i__2 = *m;
		for (i__ = 1; i__ <= i__2; ++i__) {
		    c__[i__ + j * c_dim1] = 0.;
 
		}
 
	    }
	} else {
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		i__2 = *m;
		for (i__ = 1; i__ <= i__2; ++i__) {
		    c__[i__ + j * c_dim1] = *beta * c__[i__ + j * c_dim1];
 
		}
 
	    }
	}
	return 0;
    }

 

    if (notb) {
	if (nota) {

 

	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		if (*beta == 0.) {
		    i__2 = *m;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			c__[i__ + j * c_dim1] = 0.;
 
		    }
		} else if (*beta != 1.) {
		    i__2 = *m;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			c__[i__ + j * c_dim1] = *beta * c__[i__ + j * c_dim1];
 
		    }
		}
		i__2 = *k;
		for (l = 1; l <= i__2; ++l) {
		    if (b[l + j * b_dim1] != 0.) {
			temp = *alpha * b[l + j * b_dim1];
			i__3 = *m;
			for (i__ = 1; i__ <= i__3; ++i__) {
			    c__[i__ + j * c_dim1] += temp * a[i__ + l * 
				    a_dim1];
 
			}
		    }
 
		}
 
	    }
	} else {

 

	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		i__2 = *m;
		for (i__ = 1; i__ <= i__2; ++i__) {
		    temp = 0.;
		    i__3 = *k;
		    for (l = 1; l <= i__3; ++l) {
			temp += a[l + i__ * a_dim1] * b[l + j * b_dim1];
 
		    }
		    if (*beta == 0.) {
			c__[i__ + j * c_dim1] = *alpha * temp;
		    } else {
			c__[i__ + j * c_dim1] = *alpha * temp + *beta * c__[
				i__ + j * c_dim1];
		    }
 
		}
 
	    }
	}
    } else {
	if (nota) {

 

	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		if (*beta == 0.) {
		    i__2 = *m;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			c__[i__ + j * c_dim1] = 0.;
 
		    }
		} else if (*beta != 1.) {
		    i__2 = *m;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			c__[i__ + j * c_dim1] = *beta * c__[i__ + j * c_dim1];
 
		    }
		}
		i__2 = *k;
		for (l = 1; l <= i__2; ++l) {
		    if (b[j + l * b_dim1] != 0.) {
			temp = *alpha * b[j + l * b_dim1];
			i__3 = *m;
			for (i__ = 1; i__ <= i__3; ++i__) {
			    c__[i__ + j * c_dim1] += temp * a[i__ + l * 
				    a_dim1];
 
			}
		    }
 
		}
 
	    }
	} else {

 

	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		i__2 = *m;
		for (i__ = 1; i__ <= i__2; ++i__) {
		    temp = 0.;
		    i__3 = *k;
		    for (l = 1; l <= i__3; ++l) {
			temp += a[l + i__ * a_dim1] * b[j + l * b_dim1];
 
		    }
		    if (*beta == 0.) {
			c__[i__ + j * c_dim1] = *alpha * temp;
		    } else {
			c__[i__ + j * c_dim1] = *alpha * temp + *beta * c__[
				i__ + j * c_dim1];
		    }
 
		}
 
	    }
	}
    }

    return 0;

 

}  

  int dgemv_(trans, m, n, alpha, a, lda, x, incx, beta, y, 
	incy, trans_len)
char *trans;
integer *m, *n;
doublereal *alpha, *a;
integer *lda;
doublereal *x;
integer *incx;
doublereal *beta, *y;
integer *incy;
ftnlen trans_len;
{
     
    integer a_dim1, a_offset, i__1, i__2;

     
    static integer info;
    static doublereal temp;
    static integer lenx, leny, i__, j;
    extern logical lsame_();
    static integer ix, iy, jx, jy, kx, ky;
    extern   int xerbla_();
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --x;
    --y;

     
    info = 0;
    if (! lsame_(trans, "N", 1L, 1L) && ! lsame_(trans, "T", 1L, 1L) && ! 
	    lsame_(trans, "C", 1L, 1L)) {
	info = 1;
    } else if (*m < 0) {
	info = 2;
    } else if (*n < 0) {
	info = 3;
    } else if (*lda < (( 1 ) >= ( *m ) ? ( 1 ) : ( *m )) ) {
	info = 6;
    } else if (*incx == 0) {
	info = 8;
    } else if (*incy == 0) {
	info = 11;
    }
    if (info != 0) {
	xerbla_("DGEMV ", &info, 6L);
	return 0;
    }

 

    if (*m == 0 || *n == 0 || *alpha == 0. && *beta == 1.) {
	return 0;
    }

 

 

    if (lsame_(trans, "N", 1L, 1L)) {
	lenx = *n;
	leny = *m;
    } else {
	lenx = *m;
	leny = *n;
    }
    if (*incx > 0) {
	kx = 1;
    } else {
	kx = 1 - (lenx - 1) * *incx;
    }
    if (*incy > 0) {
	ky = 1;
    } else {
	ky = 1 - (leny - 1) * *incy;
    }

 
 

 

    if (*beta != 1.) {
	if (*incy == 1) {
	    if (*beta == 0.) {
		i__1 = leny;
		for (i__ = 1; i__ <= i__1; ++i__) {
		    y[i__] = 0.;
 
		}
	    } else {
		i__1 = leny;
		for (i__ = 1; i__ <= i__1; ++i__) {
		    y[i__] = *beta * y[i__];
 
		}
	    }
	} else {
	    iy = ky;
	    if (*beta == 0.) {
		i__1 = leny;
		for (i__ = 1; i__ <= i__1; ++i__) {
		    y[iy] = 0.;
		    iy += *incy;
 
		}
	    } else {
		i__1 = leny;
		for (i__ = 1; i__ <= i__1; ++i__) {
		    y[iy] = *beta * y[iy];
		    iy += *incy;
 
		}
	    }
	}
    }
    if (*alpha == 0.) {
	return 0;
    }
    if (lsame_(trans, "N", 1L, 1L)) {

 

	jx = kx;
	if (*incy == 1) {
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		if (x[jx] != 0.) {
		    temp = *alpha * x[jx];
		    i__2 = *m;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			y[i__] += temp * a[i__ + j * a_dim1];
 
		    }
		}
		jx += *incx;
 
	    }
	} else {
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		if (x[jx] != 0.) {
		    temp = *alpha * x[jx];
		    iy = ky;
		    i__2 = *m;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			y[iy] += temp * a[i__ + j * a_dim1];
			iy += *incy;
 
		    }
		}
		jx += *incx;
 
	    }
	}
    } else {

 

	jy = ky;
	if (*incx == 1) {
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		temp = 0.;
		i__2 = *m;
		for (i__ = 1; i__ <= i__2; ++i__) {
		    temp += a[i__ + j * a_dim1] * x[i__];
 
		}
		y[jy] += *alpha * temp;
		jy += *incy;
 
	    }
	} else {
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		temp = 0.;
		ix = kx;
		i__2 = *m;
		for (i__ = 1; i__ <= i__2; ++i__) {
		    temp += a[i__ + j * a_dim1] * x[ix];
		    ix += *incx;
 
		}
		y[jy] += *alpha * temp;
		jy += *incy;
 
	    }
	}
    }

    return 0;

 

}  

  int dgeqr2_(m, n, a, lda, tau, work, info)
integer *m, *n;
doublereal *a;
integer *lda;
doublereal *tau, *work;
integer *info;
{
     
    integer a_dim1, a_offset, i__1, i__2, i__3;

     
    static integer i__, k;
    extern   int dlarf_(), dlarfg_(), xerbla_();
    static doublereal aii;
     
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --tau;
    --work;

     
    *info = 0;
    if (*m < 0) {
	*info = -1;
    } else if (*n < 0) {
	*info = -2;
    } else if (*lda < (( 1 ) >= ( *m ) ? ( 1 ) : ( *m )) ) {
	*info = -4;
    }
    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DGEQR2", &i__1, 6L);
	return 0;
    }

    k = (( *m ) <= ( *n ) ? ( *m ) : ( *n )) ;

    i__1 = k;
    for (i__ = 1; i__ <= i__1; ++i__) {

 


	i__2 = *m - i__ + 1;
 
	i__3 = i__ + 1;
	dlarfg_(&i__2, &a[i__ + i__ * a_dim1], &a[(( i__3 ) <= ( *m ) ? ( i__3 ) : ( *m ))  + i__ * a_dim1]
		, &c__1, &tau[i__]);
	if (i__ < *n) {

 

	    aii = a[i__ + i__ * a_dim1];
	    a[i__ + i__ * a_dim1] = 1.;
	    i__2 = *m - i__ + 1;
	    i__3 = *n - i__;
	    dlarf_("Left", &i__2, &i__3, &a[i__ + i__ * a_dim1], &c__1, &tau[
		    i__], &a[i__ + (i__ + 1) * a_dim1], lda, &work[1], 4L);
	    a[i__ + i__ * a_dim1] = aii;
	}
 
    }
    return 0;

 

}  

  int dgeqrf_(m, n, a, lda, tau, work, lwork, info)
integer *m, *n;
doublereal *a;
integer *lda;
doublereal *tau, *work;
integer *lwork, *info;
{
     
    integer a_dim1, a_offset, i__1, i__2, i__3, i__4;

     
    static integer i__, k, nbmin, iinfo;
    extern   int dgeqr2_();
    static integer ib, nb;
    extern   int dlarfb_();
    static integer nx;
    extern   int dlarft_(), xerbla_();
    extern integer ilaenv_();
    static integer ldwork, iws;
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --tau;
    --work;

     
    *info = 0;
    if (*m < 0) {
	*info = -1;
    } else if (*n < 0) {
	*info = -2;
    } else if (*lda < (( 1 ) >= ( *m ) ? ( 1 ) : ( *m )) ) {
	*info = -4;
    } else if (*lwork < (( 1 ) >= ( *n ) ? ( 1 ) : ( *n )) ) {
	*info = -7;
    }
    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DGEQRF", &i__1, 6L);
	return 0;
    }

 

    k = (( *m ) <= ( *n ) ? ( *m ) : ( *n )) ;
    if (k == 0) {
	work[1] = 1.;
	return 0;
    }

 

    nb = ilaenv_(&c__1, "DGEQRF", " ", m, n, &c_n1, &c_n1, 6L, 1L);
    nbmin = 2;
    nx = 0;
    iws = *n;
    if (nb > 1 && nb < k) {

 


 
	i__1 = 0, i__2 = ilaenv_(&c__3, "DGEQRF", " ", m, n, &c_n1, &c_n1, 6L,
		 1L);
	nx = (( i__1 ) >= ( i__2 ) ? ( i__1 ) : ( i__2 )) ;
	if (nx < k) {

 


	    ldwork = *n;
	    iws = ldwork * nb;
	    if (*lwork < iws) {

 

 

		nb = *lwork / ldwork;
 
		i__1 = 2, i__2 = ilaenv_(&c__2, "DGEQRF", " ", m, n, &c_n1, &
			c_n1, 6L, 1L);
		nbmin = (( i__1 ) >= ( i__2 ) ? ( i__1 ) : ( i__2 )) ;
	    }
	}
    }

    if (nb >= nbmin && nb < k && nx < k) {

 

	i__1 = k - nx;
	i__2 = nb;
	for (i__ = 1; i__2 < 0 ? i__ >= i__1 : i__ <= i__1; i__ += i__2) {
 
	    i__3 = k - i__ + 1;
	    ib = (( i__3 ) <= ( nb ) ? ( i__3 ) : ( nb )) ;

 
 

	    i__3 = *m - i__ + 1;
	    dgeqr2_(&i__3, &ib, &a[i__ + i__ * a_dim1], lda, &tau[i__], &work[
		    1], &iinfo);
	    if (i__ + ib <= *n) {

 

 

		i__3 = *m - i__ + 1;
		dlarft_("Forward", "Columnwise", &i__3, &ib, &a[i__ + i__ * 
			a_dim1], lda, &tau[i__], &work[1], &ldwork, 7L, 10L);

 

		i__3 = *m - i__ + 1;
		i__4 = *n - i__ - ib + 1;
		dlarfb_("Left", "Transpose", "Forward", "Columnwise", &i__3, &
			i__4, &ib, &a[i__ + i__ * a_dim1], lda, &work[1], &
			ldwork, &a[i__ + (i__ + ib) * a_dim1], lda, &work[ib 
			+ 1], &ldwork, 4L, 9L, 7L, 10L);
	    }
 
	}
    } else {
	i__ = 1;
    }

 

    if (i__ <= k) {
	i__2 = *m - i__ + 1;
	i__1 = *n - i__ + 1;
	dgeqr2_(&i__2, &i__1, &a[i__ + i__ * a_dim1], lda, &tau[i__], &work[1]
		, &iinfo);
    }

    work[1] = (doublereal) iws;
    return 0;

 

}  

  int dger_(m, n, alpha, x, incx, y, incy, a, lda)
integer *m, *n;
doublereal *alpha, *x;
integer *incx;
doublereal *y;
integer *incy;
doublereal *a;
integer *lda;
{
     
    integer a_dim1, a_offset, i__1, i__2;

     
    static integer info;
    static doublereal temp;
    static integer i__, j, ix, jy, kx;
    extern   int xerbla_();
    --x;
    --y;
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;

     
    info = 0;
    if (*m < 0) {
	info = 1;
    } else if (*n < 0) {
	info = 2;
    } else if (*incx == 0) {
	info = 5;
    } else if (*incy == 0) {
	info = 7;
    } else if (*lda < (( 1 ) >= ( *m ) ? ( 1 ) : ( *m )) ) {
	info = 9;
    }
    if (info != 0) {
	xerbla_("DGER  ", &info, 6L);
	return 0;
    }

 

    if (*m == 0 || *n == 0 || *alpha == 0.) {
	return 0;
    }

 
 

    if (*incy > 0) {
	jy = 1;
    } else {
	jy = 1 - (*n - 1) * *incy;
    }
    if (*incx == 1) {
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    if (y[jy] != 0.) {
		temp = *alpha * y[jy];
		i__2 = *m;
		for (i__ = 1; i__ <= i__2; ++i__) {
		    a[i__ + j * a_dim1] += x[i__] * temp;
 
		}
	    }
	    jy += *incy;
 
	}
    } else {
	if (*incx > 0) {
	    kx = 1;
	} else {
	    kx = 1 - (*m - 1) * *incx;
	}
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    if (y[jy] != 0.) {
		temp = *alpha * y[jy];
		ix = kx;
		i__2 = *m;
		for (i__ = 1; i__ <= i__2; ++i__) {
		    a[i__ + j * a_dim1] += x[ix] * temp;
		    ix += *incx;
 
		}
	    }
	    jy += *incy;
 
	}
    }

    return 0;

 

}  

  int dlabad_(small, large)
doublereal *small, *large;
{
     
    double d_lg10(), sqrt();

    if (d_lg10(large) > 2e3) {
	*small = sqrt(*small);
	*large = sqrt(*large);
    }

    return 0;

 

}  

  int dlacon_(n, v, x, isgn, est, kase)
integer *n;
doublereal *v, *x;
integer *isgn;
doublereal *est;
integer *kase;
{
     
    integer i__1;
    doublereal d__1;

     
    double d_sign();
    integer i_dnnt();

     
    static integer iter;
    static doublereal temp;
    static integer jump, i__, j;
    extern doublereal dasum_();
    static integer jlast;
    extern   int dcopy_();
    extern integer idamax_();
    static doublereal altsgn, estold;
     
    --isgn;
    --x;
    --v;

     
    if (*kase == 0) {
	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    x[i__] = 1. / (doublereal) (*n);
 
	}
	*kase = 1;
	jump = 1;
	return 0;
    }

    switch ((int)jump) {
	case 1:  goto L20;
	case 2:  goto L40;
	case 3:  goto L70;
	case 4:  goto L110;
	case 5:  goto L140;
    }

 
 

L20:
    if (*n == 1) {
	v[1] = x[1];
	*est = (( v[1] ) >= 0 ? ( v[1] ) : -( v[1] )) ;
 
	goto L150;
    }
    *est = dasum_(n, &x[1], &c__1);

    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	x[i__] = d_sign(&c_b89, &x[i__]);
	isgn[i__] = i_dnnt(&x[i__]);
 
    }
    *kase = 2;
    jump = 2;
    return 0;

 
 

L40:
    j = idamax_(n, &x[1], &c__1);
    iter = 2;

 

L50:
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	x[i__] = 0.;
 
    }
    x[j] = 1.;
    *kase = 1;
    jump = 3;
    return 0;

 
 

L70:
    dcopy_(n, &x[1], &c__1, &v[1], &c__1);
    estold = *est;
    *est = dasum_(n, &v[1], &c__1);
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	d__1 = d_sign(&c_b89, &x[i__]);
	if (i_dnnt(&d__1) != isgn[i__]) {
	    goto L90;
	}
 
    }
 
    goto L120;

L90:
 
    if (*est <= estold) {
	goto L120;
    }

    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	x[i__] = d_sign(&c_b89, &x[i__]);
	isgn[i__] = i_dnnt(&x[i__]);
 
    }
    *kase = 2;
    jump = 4;
    return 0;

 
 

L110:
    jlast = j;
    j = idamax_(n, &x[1], &c__1);
    if (x[jlast] != (d__1 = x[j], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) && iter < 5) {
	++iter;
	goto L50;
    }

 

L120:
    altsgn = 1.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	x[i__] = altsgn * ((doublereal) (i__ - 1) / (doublereal) (*n - 1) + 
		1.);
	altsgn = -altsgn;
 
    }
    *kase = 1;
    jump = 5;
    return 0;

 
 

L140:
    temp = dasum_(n, &x[1], &c__1) / (doublereal) (*n * 3) * 2.;
    if (temp > *est) {
	dcopy_(n, &x[1], &c__1, &v[1], &c__1);
	*est = temp;
    }

L150:
    *kase = 0;
    return 0;

 

}  

  int dlae2_(a, b, c__, rt1, rt2)
doublereal *a, *b, *c__, *rt1, *rt2;
{
     
    doublereal d__1;

     
    double sqrt();

     
    static doublereal acmn, acmx, ab, df, tb, sm, rt, adf;

    sm = *a + *c__;
    df = *a - *c__;
    adf = (( df ) >= 0 ? ( df ) : -( df )) ;
    tb = *b + *b;
    ab = (( tb ) >= 0 ? ( tb ) : -( tb )) ;
    if ((( *a ) >= 0 ? ( *a ) : -( *a ))  > (( *c__ ) >= 0 ? ( *c__ ) : -( *c__ )) ) {
	acmx = *a;
	acmn = *c__;
    } else {
	acmx = *c__;
	acmn = *a;
    }
    if (adf > ab) {
 
	d__1 = ab / adf;
	rt = adf * sqrt(d__1 * d__1 + 1.);
    } else if (adf < ab) {
 
	d__1 = adf / ab;
	rt = ab * sqrt(d__1 * d__1 + 1.);
    } else {

 

	rt = ab * sqrt(2.);
    }
    if (sm < 0.) {
	*rt1 = (sm - rt) * .5;

 
 
 

	*rt2 = acmx / *rt1 * acmn - *b / *rt1 * *b;
    } else if (sm > 0.) {
	*rt1 = (sm + rt) * .5;

 
 
 

	*rt2 = acmx / *rt1 * acmn - *b / *rt1 * *b;
    } else {

 

	*rt1 = rt * .5;
	*rt2 = rt * -.5;
    }
    return 0;

 

}  

  int dlaev2_(a, b, c__, rt1, rt2, cs1, sn1)
doublereal *a, *b, *c__, *rt1, *rt2, *cs1, *sn1;
{
     
    doublereal d__1;

     
    double sqrt();

     
    static doublereal acmn, acmx, ab, df, cs, ct, tb, sm, tn, rt, adf, acs;
    static integer sgn1, sgn2;
    sm = *a + *c__;
    df = *a - *c__;
    adf = (( df ) >= 0 ? ( df ) : -( df )) ;
    tb = *b + *b;
    ab = (( tb ) >= 0 ? ( tb ) : -( tb )) ;
    if ((( *a ) >= 0 ? ( *a ) : -( *a ))  > (( *c__ ) >= 0 ? ( *c__ ) : -( *c__ )) ) {
	acmx = *a;
	acmn = *c__;
    } else {
	acmx = *c__;
	acmn = *a;
    }
    if (adf > ab) {
 
	d__1 = ab / adf;
	rt = adf * sqrt(d__1 * d__1 + 1.);
    } else if (adf < ab) {
 
	d__1 = adf / ab;
	rt = ab * sqrt(d__1 * d__1 + 1.);
    } else {

 

	rt = ab * sqrt(2.);
    }
    if (sm < 0.) {
	*rt1 = (sm - rt) * .5;
	sgn1 = -1;

 
 
 

	*rt2 = acmx / *rt1 * acmn - *b / *rt1 * *b;
    } else if (sm > 0.) {
	*rt1 = (sm + rt) * .5;
	sgn1 = 1;

 
 
 

	*rt2 = acmx / *rt1 * acmn - *b / *rt1 * *b;
    } else {

 

	*rt1 = rt * .5;
	*rt2 = rt * -.5;
	sgn1 = 1;
    }

 

    if (df >= 0.) {
	cs = df + rt;
	sgn2 = 1;
    } else {
	cs = df - rt;
	sgn2 = -1;
    }
    acs = (( cs ) >= 0 ? ( cs ) : -( cs )) ;
    if (acs > ab) {
	ct = -tb / cs;
	*sn1 = 1. / sqrt(ct * ct + 1.);
	*cs1 = ct * *sn1;
    } else {
	if (ab == 0.) {
	    *cs1 = 1.;
	    *sn1 = 0.;
	} else {
	    tn = -cs / tb;
	    *cs1 = 1. / sqrt(tn * tn + 1.);
	    *sn1 = tn * *cs1;
	}
    }
    if (sgn1 == sgn2) {
	tn = *cs1;
	*cs1 = -(*sn1);
	*sn1 = tn;
    }
    return 0;

 

}  

doublereal dlamch_(cmach, cmach_len)
char *cmach;
ftnlen cmach_len;
{
     

    static logical first = (1) ;

     
    integer i__1;
    doublereal ret_val;

     
    double pow_di();

     
    static doublereal base;
    static integer beta;
    static doublereal emin, prec, emax;
    static integer imin, imax;
    static logical lrnd;
    static doublereal rmin, rmax, t, rmach;
    extern logical lsame_();
    static doublereal small, sfmin;
    extern   int dlamc2_();
    static integer it;
    static doublereal rnd, eps;

    if (first) {
	first = (0) ;
	dlamc2_(&beta, &it, &lrnd, &eps, &imin, &rmin, &imax, &rmax);
	base = (doublereal) beta;
	t = (doublereal) it;
	if (lrnd) {
	    rnd = 1.;
	    i__1 = 1 - it;
	    eps = pow_di(&base, &i__1) / 2;
	} else {
	    rnd = 0.;
	    i__1 = 1 - it;
	    eps = pow_di(&base, &i__1);
	}
	prec = eps * base;
	emin = (doublereal) imin;
	emax = (doublereal) imax;
	sfmin = rmin;
	small = 1. / rmax;
	if (small >= sfmin) {

 

 

	    sfmin = small * (eps + 1.);
	}
    }

    if (lsame_(cmach, "E", 1L, 1L)) {
	rmach = eps;
    } else if (lsame_(cmach, "S", 1L, 1L)) {
	rmach = sfmin;
    } else if (lsame_(cmach, "B", 1L, 1L)) {
	rmach = base;
    } else if (lsame_(cmach, "P", 1L, 1L)) {
	rmach = prec;
    } else if (lsame_(cmach, "N", 1L, 1L)) {
	rmach = t;
    } else if (lsame_(cmach, "R", 1L, 1L)) {
	rmach = rnd;
    } else if (lsame_(cmach, "M", 1L, 1L)) {
	rmach = emin;
    } else if (lsame_(cmach, "U", 1L, 1L)) {
	rmach = rmin;
    } else if (lsame_(cmach, "L", 1L, 1L)) {
	rmach = emax;
    } else if (lsame_(cmach, "O", 1L, 1L)) {
	rmach = rmax;
    }

    ret_val = rmach;
    return ret_val;

 

}  


 

  int dlamc1_(beta, t, rnd, ieee1)
integer *beta, *t;
logical *rnd, *ieee1;
{
     

    static logical first = (1) ;

     
    doublereal d__1, d__2;

     
    static logical lrnd;
    static doublereal a, b, c__, f;
    static integer lbeta;
    static doublereal savec;
    extern doublereal dlamc3_();
    static logical lieee1;
    static doublereal t1, t2;
    static integer lt;
    static doublereal one, qtr;

    if (first) {
	first = (0) ;
	one = 1.;

	a = 1.;
	c__ = 1.;

 
L10:
	if (c__ == one) {
	    a *= 2;
	    c__ = dlamc3_(&a, &one);
	    d__1 = -a;
	    c__ = dlamc3_(&c__, &d__1);
	    goto L10;
	}
 

 

 

 

	b = 1.;
	c__ = dlamc3_(&a, &b);

 
L20:
	if (c__ == a) {
	    b *= 2;
	    c__ = dlamc3_(&a, &b);
	    goto L20;
	}
 

 

 

 

 

	qtr = one / 4;
	savec = c__;
	d__1 = -a;
	c__ = dlamc3_(&c__, &d__1);
	lbeta = (integer) (c__ + qtr);

 

 


	b = (doublereal) lbeta;
	d__1 = b / 2;
	d__2 = -b / 100;
	f = dlamc3_(&d__1, &d__2);
	c__ = dlamc3_(&f, &a);
	if (c__ == a) {
	    lrnd = (1) ;
	} else {
	    lrnd = (0) ;
	}
	d__1 = b / 2;
	d__2 = b / 100;
	f = dlamc3_(&d__1, &d__2);
	c__ = dlamc3_(&f, &a);
	if (lrnd && c__ == a) {
	    lrnd = (0) ;
	}

 

 

 

 

 

	d__1 = b / 2;
	t1 = dlamc3_(&d__1, &a);
	d__1 = b / 2;
	t2 = dlamc3_(&d__1, &savec);
	lieee1 = t1 == a && t2 > savec && lrnd;

 

 

 

 

 

	lt = 0;
	a = 1.;
	c__ = 1.;

 
L30:
	if (c__ == one) {
	    ++lt;
	    a *= lbeta;
	    c__ = dlamc3_(&a, &one);
	    d__1 = -a;
	    c__ = dlamc3_(&c__, &d__1);
	    goto L30;
	}
 

    }

    *beta = lbeta;
    *t = lt;
    *rnd = lrnd;
    *ieee1 = lieee1;
    return 0;

 

}  


 

  int dlamc2_(beta, t, rnd, eps, emin, rmin, emax, rmax)
integer *beta, *t;
logical *rnd;
doublereal *eps;
integer *emin;
doublereal *rmin;
integer *emax;
doublereal *rmax;
{
     

    static logical first = (1) ;
    static logical iwarn = (0) ;

     
    static char fmt_9999[] = "(//\002 WARNING. The value EMIN may be incorrect:-\002,\002  EMIN = \002,i8,/\002 If, after inspection, the value EMIN looks\002,\002 acceptable please comment out \002,/\002 the IF block as marked within the code of routine\002,\002 DLAMC2,\002,/\002 otherwise supply EMIN explicitly.\002,/)";

     
    integer i__1;
    doublereal d__1, d__2, d__3, d__4, d__5;

     
    double pow_di();
    integer s_wsfe(), do_fio(), e_wsfe();

     
    static logical ieee;
    static doublereal half;
    static logical lrnd;
    static doublereal leps, zero, a, b, c__;
    static integer i__, lbeta;
    static doublereal rbase;
    static integer lemin, lemax, gnmin;
    static doublereal small;
    static integer gpmin;
    static doublereal third, lrmin, lrmax, sixth;
    extern   int dlamc1_();
    extern doublereal dlamc3_();
    static logical lieee1;
    extern   int dlamc4_(), dlamc5_();
    static integer lt, ngnmin, ngpmin;
    static doublereal one, two;
    static cilist io___156 = { 0, 6, 0, fmt_9999, 0 };
 

    if (first) {
	first = (0) ;
	zero = 0.;
	one = 1.;
	two = 2.;
	dlamc1_(&lbeta, &lt, &lrnd, &lieee1);

	b = (doublereal) lbeta;
	i__1 = -lt;
	a = pow_di(&b, &i__1);
	leps = a;

 


	b = two / 3;
	half = one / 2;
	d__1 = -half;
	sixth = dlamc3_(&b, &d__1);
	third = dlamc3_(&sixth, &sixth);
	d__1 = -half;
	b = dlamc3_(&third, &d__1);
	b = dlamc3_(&b, &sixth);
	b = (( b ) >= 0 ? ( b ) : -( b )) ;
	if (b < leps) {
	    b = leps;
	}

	leps = 1.;

 
L10:
	if (leps > b && b > zero) {
	    leps = b;
	    d__1 = half * leps;
 
	    d__3 = two, d__4 = d__3, d__3 *= d__3;
 
	    d__5 = leps;
	    d__2 = d__4 * (d__3 * d__3) * (d__5 * d__5);
	    c__ = dlamc3_(&d__1, &d__2);
	    d__1 = -c__;
	    c__ = dlamc3_(&half, &d__1);
	    b = dlamc3_(&half, &c__);
	    d__1 = -b;
	    c__ = dlamc3_(&half, &d__1);
	    b = dlamc3_(&half, &c__);
	    goto L10;
	}
 

	if (a < leps) {
	    leps = a;
	}

	rbase = one / lbeta;
	small = one;
	for (i__ = 1; i__ <= 3; ++i__) {
	    d__1 = small * rbase;
	    small = dlamc3_(&d__1, &zero);
 
	}
	a = dlamc3_(&one, &small);
	dlamc4_(&ngpmin, &one, &lbeta);
	d__1 = -one;
	dlamc4_(&ngnmin, &d__1, &lbeta);
	dlamc4_(&gpmin, &a, &lbeta);
	d__1 = -a;
	dlamc4_(&gnmin, &d__1, &lbeta);
	ieee = (0) ;

	if (ngpmin == ngnmin && gpmin == gnmin) {
	    if (ngpmin == gpmin) {
		lemin = ngpmin;
 

 
	    } else if (gpmin - ngpmin == 3) {
		lemin = ngpmin - 1 + lt;
		ieee = (1) ;
 

 
	    } else {
		lemin = (( ngpmin ) <= ( gpmin ) ? ( ngpmin ) : ( gpmin )) ;
 
		iwarn = (1) ;
	    }

	} else if (ngpmin == gpmin && ngnmin == gnmin) {
	    if ((i__1 = ngpmin - ngnmin, (( i__1 ) >= 0 ? ( i__1 ) : -( i__1 )) ) == 1) {
		lemin = (( ngpmin ) >= ( ngnmin ) ? ( ngpmin ) : ( ngnmin )) ;
 

 
	    } else {
		lemin = (( ngpmin ) <= ( ngnmin ) ? ( ngpmin ) : ( ngnmin )) ;
 
		iwarn = (1) ;
	    }

	} else if ((i__1 = ngpmin - ngnmin, (( i__1 ) >= 0 ? ( i__1 ) : -( i__1 )) ) == 1 && gpmin == gnmin)
		 {
	    if (gpmin - (( ngpmin ) <= ( ngnmin ) ? ( ngpmin ) : ( ngnmin ))  == 3) {
		lemin = (( ngpmin ) >= ( ngnmin ) ? ( ngpmin ) : ( ngnmin ))  - 1 + lt;
 

 
	    } else {
		lemin = (( ngpmin ) <= ( ngnmin ) ? ( ngpmin ) : ( ngnmin )) ;
 
		iwarn = (1) ;
	    }

	} else {
 
	    i__1 = (( ngpmin ) <= ( ngnmin ) ? ( ngpmin ) : ( ngnmin )) , i__1 = (( i__1 ) <= ( gpmin ) ? ( i__1 ) : ( gpmin )) ;
	    lemin = (( i__1 ) <= ( gnmin ) ? ( i__1 ) : ( gnmin )) ;
 
	    iwarn = (1) ;
	}
 
 
	if (iwarn) {
	    first = (1) ;
	    s_wsfe(&io___156);
	    do_fio(&c__1, (char *)&lemin, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
 

 

 

 

 

	ieee = ieee || lieee1;

 

 

 

	lrmin = 1.;
	i__1 = 1 - lemin;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    d__1 = lrmin * rbase;
	    lrmin = dlamc3_(&d__1, &zero);
 
	}

 

	dlamc5_(&lbeta, &lt, &lemin, &ieee, &lemax, &lrmax);
    }

    *beta = lbeta;
    *t = lt;
    *rnd = lrnd;
    *eps = leps;
    *emin = lemin;
    *rmin = lrmin;
    *emax = lemax;
    *rmax = lrmax;

    return 0;
}  
 

doublereal dlamc3_(a, b)
doublereal *a, *b;
{
     
    doublereal ret_val;
    ret_val = *a + *b;

    return ret_val;

}  
 

  int dlamc4_(emin, start, base)
integer *emin;
doublereal *start;
integer *base;
{
     
    integer i__1;
    doublereal d__1;

     
    static doublereal zero, a;
    static integer i__;
    static doublereal rbase, b1, b2, c1, c2, d1, d2;
    extern doublereal dlamc3_();
    static doublereal one;

    a = *start;
    one = 1.;
    rbase = one / *base;
    zero = 0.;
    *emin = 1;
    d__1 = a * rbase;
    b1 = dlamc3_(&d__1, &zero);
    c1 = a;
    c2 = a;
    d1 = a;
    d2 = a;
 
 
L10:
    if (c1 == a && c2 == a && d1 == a && d2 == a) {
	--(*emin);
	a = b1;
	d__1 = a / *base;
	b1 = dlamc3_(&d__1, &zero);
	d__1 = b1 * *base;
	c1 = dlamc3_(&d__1, &zero);
	d1 = zero;
	i__1 = *base;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    d1 += b1;
 
	}
	d__1 = a * rbase;
	b2 = dlamc3_(&d__1, &zero);
	d__1 = b2 / rbase;
	c2 = dlamc3_(&d__1, &zero);
	d2 = zero;
	i__1 = *base;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    d2 += b2;
 
	}
	goto L10;
    }
 

    return 0;

 

}  


 

  int dlamc5_(beta, p, emin, ieee, emax, rmax)
integer *beta, *p, *emin;
logical *ieee;
integer *emax;
doublereal *rmax;
{
     
    integer i__1;
    doublereal d__1;

     
    static integer lexp;
    static doublereal oldy;
    static integer uexp, i__;
    static doublereal y, z__;
    static integer nbits;
    extern doublereal dlamc3_();
    static doublereal recbas;
    static integer exbits, expsum, try__;
 

    lexp = 1;
    exbits = 1;
L10:
    try__ = lexp << 1;
    if (try__ <= -(*emin)) {
	lexp = try__;
	++exbits;
	goto L10;
    }
    if (lexp == -(*emin)) {
	uexp = lexp;
    } else {
	uexp = try__;
	++exbits;
    }

 
 
 

    if (uexp + *emin > -lexp - *emin) {
	expsum = lexp << 1;
    } else {
	expsum = uexp << 1;
    }

 
 

    *emax = expsum + *emin - 1;
    nbits = exbits + 1 + *p;
    if (nbits % 2 == 1 && *beta == 2) {
	--(*emax);
    }

    if (*ieee) {

	--(*emax);
    }

    recbas = 1. / *beta;
    z__ = *beta - 1.;
    y = 0.;
    i__1 = *p;
    for (i__ = 1; i__ <= i__1; ++i__) {
	z__ *= recbas;
	if (y < 1.) {
	    oldy = y;
	}
	y = dlamc3_(&y, &z__);
 
    }
    if (y >= 1.) {
	y = oldy;
    }

 

    i__1 = *emax;
    for (i__ = 1; i__ <= i__1; ++i__) {
	d__1 = y * *beta;
	y = dlamc3_(&d__1, &c_b61);
 
    }

    *rmax = y;
    return 0;

 

}  

doublereal dlange_(norm, m, n, a, lda, work, norm_len)
char *norm;
integer *m, *n;
doublereal *a;
integer *lda;
doublereal *work;
ftnlen norm_len;
{
     
    integer a_dim1, a_offset, i__1, i__2;
    doublereal ret_val, d__1, d__2, d__3;

     
    double sqrt();

     
    static integer i__, j;
    static doublereal scale;
    extern logical lsame_();
    static doublereal value;
    extern   int dlassq_();
    static doublereal sum;

     
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --work;

     
    if ((( *m ) <= ( *n ) ? ( *m ) : ( *n ))  == 0) {
	value = 0.;
    } else if (lsame_(norm, "M", 1L, 1L)) {

 

	value = 0.;
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    i__2 = *m;
	    for (i__ = 1; i__ <= i__2; ++i__) {
 
		d__2 = value, d__3 = (d__1 = a[i__ + j * a_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		value = (( d__2 ) >= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
 
	    }
 
	}
    } else if (lsame_(norm, "O", 1L, 1L) || *(unsigned char *)norm == '1') {

 

	value = 0.;
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    sum = 0.;
	    i__2 = *m;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		sum += (d__1 = a[i__ + j * a_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
 
	    }
	    value = (( value ) >= ( sum ) ? ( value ) : ( sum )) ;
 
	}
    } else if (lsame_(norm, "I", 1L, 1L)) {

 

	i__1 = *m;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    work[i__] = 0.;
 
	}
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    i__2 = *m;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		work[i__] += (d__1 = a[i__ + j * a_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
 
	    }
 
	}
	value = 0.;
	i__1 = *m;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    d__1 = value, d__2 = work[i__];
	    value = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
 
	}
    } else if (lsame_(norm, "F", 1L, 1L) || lsame_(norm, "E", 1L, 1L)) {

 

	scale = 0.;
	sum = 1.;
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    dlassq_(m, &a[j * a_dim1 + 1], &c__1, &scale, &sum);
 
	}
	value = scale * sqrt(sum);
    }

    ret_val = value;
    return ret_val;

 

}  

doublereal dlansp_(norm, uplo, n, ap, work, norm_len, uplo_len)
char *norm, *uplo;
integer *n;
doublereal *ap, *work;
ftnlen norm_len;
ftnlen uplo_len;
{
     
    integer i__1, i__2;
    doublereal ret_val, d__1, d__2, d__3;

     
    double sqrt();

     
    static doublereal absa;
    static integer i__, j, k;
    static doublereal scale;
    extern logical lsame_();
    static doublereal value;
    extern   int dlassq_();
    static doublereal sum;

     
    --work;
    --ap;

     
    if (*n == 0) {
	value = 0.;
    } else if (lsame_(norm, "M", 1L, 1L)) {

 

	value = 0.;
	if (lsame_(uplo, "U", 1L, 1L)) {
	    k = 1;
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		i__2 = k + j - 1;
		for (i__ = k; i__ <= i__2; ++i__) {
 
		    d__2 = value, d__3 = (d__1 = ap[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		    value = (( d__2 ) >= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
 
		}
		k += j;
 
	    }
	} else {
	    k = 1;
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		i__2 = k + *n - j;
		for (i__ = k; i__ <= i__2; ++i__) {
 
		    d__2 = value, d__3 = (d__1 = ap[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		    value = (( d__2 ) >= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
 
		}
		k = k + *n - j + 1;
 
	    }
	}
    } else if (lsame_(norm, "I", 1L, 1L) || lsame_(norm, "O", 1L, 1L) || *(
	    unsigned char *)norm == '1') {

 

	value = 0.;
	k = 1;
	if (lsame_(uplo, "U", 1L, 1L)) {
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		sum = 0.;
		i__2 = j - 1;
		for (i__ = 1; i__ <= i__2; ++i__) {
		    absa = (d__1 = ap[k], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		    sum += absa;
		    work[i__] += absa;
		    ++k;
 
		}
		work[j] = sum + (d__1 = ap[k], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		++k;
 
	    }
	    i__1 = *n;
	    for (i__ = 1; i__ <= i__1; ++i__) {
 
		d__1 = value, d__2 = work[i__];
		value = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
 
	    }
	} else {
	    i__1 = *n;
	    for (i__ = 1; i__ <= i__1; ++i__) {
		work[i__] = 0.;
 
	    }
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		sum = work[j] + (d__1 = ap[k], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		++k;
		i__2 = *n;
		for (i__ = j + 1; i__ <= i__2; ++i__) {
		    absa = (d__1 = ap[k], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		    sum += absa;
		    work[i__] += absa;
		    ++k;
 
		}
		value = (( value ) >= ( sum ) ? ( value ) : ( sum )) ;
 
	    }
	}
    } else if (lsame_(norm, "F", 1L, 1L) || lsame_(norm, "E", 1L, 1L)) {

 

	scale = 0.;
	sum = 1.;
	k = 2;
	if (lsame_(uplo, "U", 1L, 1L)) {
	    i__1 = *n;
	    for (j = 2; j <= i__1; ++j) {
		i__2 = j - 1;
		dlassq_(&i__2, &ap[k], &c__1, &scale, &sum);
		k += j;
 
	    }
	} else {
	    i__1 = *n - 1;
	    for (j = 1; j <= i__1; ++j) {
		i__2 = *n - j;
		dlassq_(&i__2, &ap[k], &c__1, &scale, &sum);
		k = k + *n - j + 1;
 
	    }
	}
	sum *= 2;
	k = 1;
	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    if (ap[k] != 0.) {
		absa = (d__1 = ap[k], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		if (scale < absa) {
 
		    d__1 = scale / absa;
		    sum = sum * (d__1 * d__1) + 1.;
		    scale = absa;
		} else {
 
		    d__1 = absa / scale;
		    sum += d__1 * d__1;
		}
	    }
	    if (lsame_(uplo, "U", 1L, 1L)) {
		k = k + i__ + 1;
	    } else {
		k = k + *n - i__ + 1;
	    }
 
	}
	value = scale * sqrt(sum);
    }

    ret_val = value;
    return ret_val;

 

}  

doublereal dlanst_(norm, n, d__, e, norm_len)
char *norm;
integer *n;
doublereal *d__, *e;
ftnlen norm_len;
{
     
    integer i__1;
    doublereal ret_val, d__1, d__2, d__3, d__4, d__5;

     
    double sqrt();

     
    static integer i__;
    static doublereal scale;
    extern logical lsame_();
    static doublereal anorm;
    extern   int dlassq_();
    static doublereal sum;
     
    --e;
    --d__;

     
    if (*n <= 0) {
	anorm = 0.;
    } else if (lsame_(norm, "M", 1L, 1L)) {

 

	anorm = (d__1 = d__[*n], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	i__1 = *n - 1;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    d__2 = anorm, d__3 = (d__1 = d__[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	    anorm = (( d__2 ) >= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
 
	    d__2 = anorm, d__3 = (d__1 = e[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	    anorm = (( d__2 ) >= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
 
	}
    } else if (lsame_(norm, "O", 1L, 1L) || *(unsigned char *)norm == '1' || 
	    lsame_(norm, "I", 1L, 1L)) {

 

	if (*n == 1) {
	    anorm = (( d__[1] ) >= 0 ? ( d__[1] ) : -( d__[1] )) ;
	} else {
 
	    d__3 = (( d__[1] ) >= 0 ? ( d__[1] ) : -( d__[1] ))  + (( e[1] ) >= 0 ? ( e[1] ) : -( e[1] )) , d__4 = (d__1 = e[*n - 1], (( 
		    d__1 ) >= 0 ? (  		    d__1 ) : -(  		    d__1 )) ) + (d__2 = d__[*n], (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) );
	    anorm = (( d__3 ) >= ( d__4 ) ? ( d__3 ) : ( d__4 )) ;
	    i__1 = *n - 1;
	    for (i__ = 2; i__ <= i__1; ++i__) {
 
		d__4 = anorm, d__5 = (d__1 = d__[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) + (d__2 = e[
			i__], (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) ) + (d__3 = e[i__ - 1], (( d__3 ) >= 0 ? ( d__3 ) : -( d__3 )) );
		anorm = (( d__4 ) >= ( d__5 ) ? ( d__4 ) : ( d__5 )) ;
 
	    }
	}
    } else if (lsame_(norm, "F", 1L, 1L) || lsame_(norm, "E", 1L, 1L)) {

 

	scale = 0.;
	sum = 1.;
	if (*n > 1) {
	    i__1 = *n - 1;
	    dlassq_(&i__1, &e[1], &c__1, &scale, &sum);
	    sum *= 2;
	}
	dlassq_(n, &d__[1], &c__1, &scale, &sum);
	anorm = scale * sqrt(sum);
    }

    ret_val = anorm;
    return ret_val;

 

}  

doublereal dlantr_(norm, uplo, diag, m, n, a, lda, work, norm_len, uplo_len, 
	diag_len)
char *norm, *uplo, *diag;
integer *m, *n;
doublereal *a;
integer *lda;
doublereal *work;
ftnlen norm_len;
ftnlen uplo_len;
ftnlen diag_len;
{
     
    integer a_dim1, a_offset, i__1, i__2, i__3, i__4;
    doublereal ret_val, d__1, d__2, d__3;

     
    double sqrt();

     
    static integer i__, j;
    static doublereal scale;
    static logical udiag;
    extern logical lsame_();
    static doublereal value;
    extern   int dlassq_();
    static doublereal sum;

     
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --work;

     
    if ((( *m ) <= ( *n ) ? ( *m ) : ( *n ))  == 0) {
	value = 0.;
    } else if (lsame_(norm, "M", 1L, 1L)) {

 

	if (lsame_(diag, "U", 1L, 1L)) {
	    value = 1.;
	    if (lsame_(uplo, "U", 1L, 1L)) {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
 
		    i__3 = *m, i__4 = j - 1;
		    i__2 = (( i__3 ) <= ( i__4 ) ? ( i__3 ) : ( i__4 )) ;
		    for (i__ = 1; i__ <= i__2; ++i__) {
 
			d__2 = value, d__3 = (d__1 = a[i__ + j * a_dim1], (( 
				d__1 ) >= 0 ? (  				d__1 ) : -(  				d__1 )) );
			value = (( d__2 ) >= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
 
		    }
 
		}
	    } else {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = *m;
		    for (i__ = j + 1; i__ <= i__2; ++i__) {
 
			d__2 = value, d__3 = (d__1 = a[i__ + j * a_dim1], (( 
				d__1 ) >= 0 ? (  				d__1 ) : -(  				d__1 )) );
			value = (( d__2 ) >= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
 
		    }
 
		}
	    }
	} else {
	    value = 0.;
	    if (lsame_(uplo, "U", 1L, 1L)) {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = (( *m ) <= ( j ) ? ( *m ) : ( j )) ;
		    for (i__ = 1; i__ <= i__2; ++i__) {
 
			d__2 = value, d__3 = (d__1 = a[i__ + j * a_dim1], (( 
				d__1 ) >= 0 ? (  				d__1 ) : -(  				d__1 )) );
			value = (( d__2 ) >= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
 
		    }
 
		}
	    } else {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = *m;
		    for (i__ = j; i__ <= i__2; ++i__) {
 
			d__2 = value, d__3 = (d__1 = a[i__ + j * a_dim1], (( 
				d__1 ) >= 0 ? (  				d__1 ) : -(  				d__1 )) );
			value = (( d__2 ) >= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
 
		    }
 
		}
	    }
	}
    } else if (lsame_(norm, "O", 1L, 1L) || *(unsigned char *)norm == '1') {

 

	value = 0.;
	udiag = lsame_(diag, "U", 1L, 1L);
	if (lsame_(uplo, "U", 1L, 1L)) {
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		if (udiag && j <= *m) {
		    sum = 1.;
		    i__2 = j - 1;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			sum += (d__1 = a[i__ + j * a_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
 
		    }
		} else {
		    sum = 0.;
		    i__2 = (( *m ) <= ( j ) ? ( *m ) : ( j )) ;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			sum += (d__1 = a[i__ + j * a_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
 
		    }
		}
		value = (( value ) >= ( sum ) ? ( value ) : ( sum )) ;
 
	    }
	} else {
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		if (udiag) {
		    sum = 1.;
		    i__2 = *m;
		    for (i__ = j + 1; i__ <= i__2; ++i__) {
			sum += (d__1 = a[i__ + j * a_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
 
		    }
		} else {
		    sum = 0.;
		    i__2 = *m;
		    for (i__ = j; i__ <= i__2; ++i__) {
			sum += (d__1 = a[i__ + j * a_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
 
		    }
		}
		value = (( value ) >= ( sum ) ? ( value ) : ( sum )) ;
 
	    }
	}
    } else if (lsame_(norm, "I", 1L, 1L)) {

 

	if (lsame_(uplo, "U", 1L, 1L)) {
	    if (lsame_(diag, "U", 1L, 1L)) {
		i__1 = *m;
		for (i__ = 1; i__ <= i__1; ++i__) {
		    work[i__] = 1.;
 
		}
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
 
		    i__3 = *m, i__4 = j - 1;
		    i__2 = (( i__3 ) <= ( i__4 ) ? ( i__3 ) : ( i__4 )) ;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			work[i__] += (d__1 = a[i__ + j * a_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
 
		    }
 
		}
	    } else {
		i__1 = *m;
		for (i__ = 1; i__ <= i__1; ++i__) {
		    work[i__] = 0.;
 
		}
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = (( *m ) <= ( j ) ? ( *m ) : ( j )) ;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			work[i__] += (d__1 = a[i__ + j * a_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
 
		    }
 
		}
	    }
	} else {
	    if (lsame_(diag, "U", 1L, 1L)) {
		i__1 = *n;
		for (i__ = 1; i__ <= i__1; ++i__) {
		    work[i__] = 1.;
 
		}
		i__1 = *m;
		for (i__ = *n + 1; i__ <= i__1; ++i__) {
		    work[i__] = 0.;
 
		}
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = *m;
		    for (i__ = j + 1; i__ <= i__2; ++i__) {
			work[i__] += (d__1 = a[i__ + j * a_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
 
		    }
 
		}
	    } else {
		i__1 = *m;
		for (i__ = 1; i__ <= i__1; ++i__) {
		    work[i__] = 0.;
 
		}
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = *m;
		    for (i__ = j; i__ <= i__2; ++i__) {
			work[i__] += (d__1 = a[i__ + j * a_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
 
		    }
 
		}
	    }
	}
	value = 0.;
	i__1 = *m;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    d__1 = value, d__2 = work[i__];
	    value = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
 
	}
    } else if (lsame_(norm, "F", 1L, 1L) || lsame_(norm, "E", 1L, 1L)) {

 

	if (lsame_(uplo, "U", 1L, 1L)) {
	    if (lsame_(diag, "U", 1L, 1L)) {
		scale = 1.;
		sum = (doublereal) (( *m ) <= ( *n ) ? ( *m ) : ( *n )) ;
		i__1 = *n;
		for (j = 2; j <= i__1; ++j) {
 
		    i__3 = *m, i__4 = j - 1;
		    i__2 = (( i__3 ) <= ( i__4 ) ? ( i__3 ) : ( i__4 )) ;
		    dlassq_(&i__2, &a[j * a_dim1 + 1], &c__1, &scale, &sum);
 
		}
	    } else {
		scale = 0.;
		sum = 1.;
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = (( *m ) <= ( j ) ? ( *m ) : ( j )) ;
		    dlassq_(&i__2, &a[j * a_dim1 + 1], &c__1, &scale, &sum);
 
		}
	    }
	} else {
	    if (lsame_(diag, "U", 1L, 1L)) {
		scale = 1.;
		sum = (doublereal) (( *m ) <= ( *n ) ? ( *m ) : ( *n )) ;
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = *m - j;
 
		    i__3 = *m, i__4 = j + 1;
		    dlassq_(&i__2, &a[(( i__3 ) <= ( i__4 ) ? ( i__3 ) : ( i__4 ))  + j * a_dim1], &c__1, &
			    scale, &sum);
 
		}
	    } else {
		scale = 0.;
		sum = 1.;
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = *m - j + 1;
		    dlassq_(&i__2, &a[j + j * a_dim1], &c__1, &scale, &sum);
 
		}
	    }
	}
	value = scale * sqrt(sum);
    }

    ret_val = value;
    return ret_val;

 

}  

doublereal dlapy2_(x, y)
doublereal *x, *y;
{
     
    doublereal ret_val, d__1;

     
    double sqrt();

     
    static doublereal xabs, yabs, w, z__;

    xabs = (( *x ) >= 0 ? ( *x ) : -( *x )) ;
    yabs = (( *y ) >= 0 ? ( *y ) : -( *y )) ;
    w = (( xabs ) >= ( yabs ) ? ( xabs ) : ( yabs )) ;
    z__ = (( xabs ) <= ( yabs ) ? ( xabs ) : ( yabs )) ;
    if (z__ == 0.) {
	ret_val = w;
    } else {
 
	d__1 = z__ / w;
	ret_val = w * sqrt(d__1 * d__1 + 1.);
    }
    return ret_val;

 

}  

  int dlarf_(side, m, n, v, incv, tau, c__, ldc, work, 
	side_len)
char *side;
integer *m, *n;
doublereal *v;
integer *incv;
doublereal *tau, *c__;
integer *ldc;
doublereal *work;
ftnlen side_len;
{
     
    integer c_dim1, c_offset;
    doublereal d__1;

     
    extern   int dger_();
    extern logical lsame_();
    extern   int dgemv_();

     
    --v;
    c_dim1 = *ldc;
    c_offset = c_dim1 + 1;
    c__ -= c_offset;
    --work;

     
    if (lsame_(side, "L", 1L, 1L)) {

 

	if (*tau != 0.) {

 

	    dgemv_("Transpose", m, n, &c_b89, &c__[c_offset], ldc, &v[1], 
		    incv, &c_b61, &work[1], &c__1, 9L);

 

	    d__1 = -(*tau);
	    dger_(m, n, &d__1, &v[1], incv, &work[1], &c__1, &c__[c_offset], 
		    ldc);
	}
    } else {

 

	if (*tau != 0.) {

 

	    dgemv_("No transpose", m, n, &c_b89, &c__[c_offset], ldc, &v[1], 
		    incv, &c_b61, &work[1], &c__1, 12L);

 

	    d__1 = -(*tau);
	    dger_(m, n, &d__1, &work[1], &c__1, &v[1], incv, &c__[c_offset], 
		    ldc);
	}
    }
    return 0;

 

}  

  int dlarfb_(side, trans, direct, storev, m, n, k, v, ldv, t, 
	ldt, c__, ldc, work, ldwork, side_len, trans_len, direct_len, 
	storev_len)
char *side, *trans, *direct, *storev;
integer *m, *n, *k;
doublereal *v;
integer *ldv;
doublereal *t;
integer *ldt;
doublereal *c__;
integer *ldc;
doublereal *work;
integer *ldwork;
ftnlen side_len;
ftnlen trans_len;
ftnlen direct_len;
ftnlen storev_len;
{
     
    integer c_dim1, c_offset, t_dim1, t_offset, v_dim1, v_offset, work_dim1, 
	    work_offset, i__1, i__2;

     
    static integer i__, j;
    extern   int dgemm_();
    extern logical lsame_();
    extern   int dcopy_(), dtrmm_();
    static char transt[1];

     
    v_dim1 = *ldv;
    v_offset = v_dim1 + 1;
    v -= v_offset;
    t_dim1 = *ldt;
    t_offset = t_dim1 + 1;
    t -= t_offset;
    c_dim1 = *ldc;
    c_offset = c_dim1 + 1;
    c__ -= c_offset;
    work_dim1 = *ldwork;
    work_offset = work_dim1 + 1;
    work -= work_offset;

     
    if (*m <= 0 || *n <= 0) {
	return 0;
    }

    if (lsame_(trans, "N", 1L, 1L)) {
	*(unsigned char *)transt = 'T';
    } else {
	*(unsigned char *)transt = 'N';
    }

    if (lsame_(storev, "C", 1L, 1L)) {

	if (lsame_(direct, "F", 1L, 1L)) {

 
 
 

	    if (lsame_(side, "L", 1L, 1L)) {

 
 

 


 

		i__1 = *k;
		for (j = 1; j <= i__1; ++j) {
		    dcopy_(n, &c__[j + c_dim1], ldc, &work[j * work_dim1 + 1],
			     &c__1);
 
		}

 

		dtrmm_("Right", "Lower", "No transpose", "Unit", n, k, &c_b89,
			 &v[v_offset], ldv, &work[work_offset], ldwork, 5L, 
			5L, 12L, 4L);
		if (*m > *k) {

 

		    i__1 = *m - *k;
		    dgemm_("Transpose", "No transpose", n, k, &i__1, &c_b89, &
			    c__[*k + 1 + c_dim1], ldc, &v[*k + 1 + v_dim1], 
			    ldv, &c_b89, &work[work_offset], ldwork, 9L, 12L);
		}

 

		dtrmm_("Right", "Upper", transt, "Non-unit", n, k, &c_b89, &t[
			t_offset], ldt, &work[work_offset], ldwork, 5L, 5L, 
			1L, 8L);

 

		if (*m > *k) {

 

		    i__1 = *m - *k;
		    dgemm_("No transpose", "Transpose", &i__1, n, k, &c_b418, 
			    &v[*k + 1 + v_dim1], ldv, &work[work_offset], 
			    ldwork, &c_b89, &c__[*k + 1 + c_dim1], ldc, 12L, 
			    9L);
		}

 

		dtrmm_("Right", "Lower", "Transpose", "Unit", n, k, &c_b89, &
			v[v_offset], ldv, &work[work_offset], ldwork, 5L, 5L, 
			9L, 4L);

 

		i__1 = *k;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = *n;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			c__[j + i__ * c_dim1] -= work[i__ + j * work_dim1];
 
		    }
 
		}

	    } else if (lsame_(side, "R", 1L, 1L)) {

 


 


 

		i__1 = *k;
		for (j = 1; j <= i__1; ++j) {
		    dcopy_(m, &c__[j * c_dim1 + 1], &c__1, &work[j * 
			    work_dim1 + 1], &c__1);
 
		}

 

		dtrmm_("Right", "Lower", "No transpose", "Unit", m, k, &c_b89,
			 &v[v_offset], ldv, &work[work_offset], ldwork, 5L, 
			5L, 12L, 4L);
		if (*n > *k) {

 

		    i__1 = *n - *k;
		    dgemm_("No transpose", "No transpose", m, k, &i__1, &
			    c_b89, &c__[(*k + 1) * c_dim1 + 1], ldc, &v[*k + 
			    1 + v_dim1], ldv, &c_b89, &work[work_offset], 
			    ldwork, 12L, 12L);
		}

 

		dtrmm_("Right", "Upper", trans, "Non-unit", m, k, &c_b89, &t[
			t_offset], ldt, &work[work_offset], ldwork, 5L, 5L, 
			1L, 8L);

 

		if (*n > *k) {

 

		    i__1 = *n - *k;
		    dgemm_("No transpose", "Transpose", m, &i__1, k, &c_b418, 
			    &work[work_offset], ldwork, &v[*k + 1 + v_dim1], 
			    ldv, &c_b89, &c__[(*k + 1) * c_dim1 + 1], ldc, 
			    12L, 9L);
		}

 

		dtrmm_("Right", "Lower", "Transpose", "Unit", m, k, &c_b89, &
			v[v_offset], ldv, &work[work_offset], ldwork, 5L, 5L, 
			9L, 4L);

 

		i__1 = *k;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = *m;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			c__[i__ + j * c_dim1] -= work[i__ + j * work_dim1];
 
		    }
 
		}
	    }

	} else {

 
 
 

	    if (lsame_(side, "L", 1L, 1L)) {

 
 

 


 

		i__1 = *k;
		for (j = 1; j <= i__1; ++j) {
		    dcopy_(n, &c__[*m - *k + j + c_dim1], ldc, &work[j * 
			    work_dim1 + 1], &c__1);
 
		}

 

		dtrmm_("Right", "Upper", "No transpose", "Unit", n, k, &c_b89,
			 &v[*m - *k + 1 + v_dim1], ldv, &work[work_offset], 
			ldwork, 5L, 5L, 12L, 4L);
		if (*m > *k) {

 

		    i__1 = *m - *k;
		    dgemm_("Transpose", "No transpose", n, k, &i__1, &c_b89, &
			    c__[c_offset], ldc, &v[v_offset], ldv, &c_b89, &
			    work[work_offset], ldwork, 9L, 12L);
		}

 

		dtrmm_("Right", "Lower", transt, "Non-unit", n, k, &c_b89, &t[
			t_offset], ldt, &work[work_offset], ldwork, 5L, 5L, 
			1L, 8L);

 

		if (*m > *k) {

 

		    i__1 = *m - *k;
		    dgemm_("No transpose", "Transpose", &i__1, n, k, &c_b418, 
			    &v[v_offset], ldv, &work[work_offset], ldwork, &
			    c_b89, &c__[c_offset], ldc, 12L, 9L);
		}

 

		dtrmm_("Right", "Upper", "Transpose", "Unit", n, k, &c_b89, &
			v[*m - *k + 1 + v_dim1], ldv, &work[work_offset], 
			ldwork, 5L, 5L, 9L, 4L);

 

		i__1 = *k;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = *n;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			c__[*m - *k + j + i__ * c_dim1] -= work[i__ + j * 
				work_dim1];
 
		    }
 
		}

	    } else if (lsame_(side, "R", 1L, 1L)) {

 


 


 

		i__1 = *k;
		for (j = 1; j <= i__1; ++j) {
		    dcopy_(m, &c__[(*n - *k + j) * c_dim1 + 1], &c__1, &work[
			    j * work_dim1 + 1], &c__1);
 
		}

 

		dtrmm_("Right", "Upper", "No transpose", "Unit", m, k, &c_b89,
			 &v[*n - *k + 1 + v_dim1], ldv, &work[work_offset], 
			ldwork, 5L, 5L, 12L, 4L);
		if (*n > *k) {

 

		    i__1 = *n - *k;
		    dgemm_("No transpose", "No transpose", m, k, &i__1, &
			    c_b89, &c__[c_offset], ldc, &v[v_offset], ldv, &
			    c_b89, &work[work_offset], ldwork, 12L, 12L);
		}

 

		dtrmm_("Right", "Lower", trans, "Non-unit", m, k, &c_b89, &t[
			t_offset], ldt, &work[work_offset], ldwork, 5L, 5L, 
			1L, 8L);

 

		if (*n > *k) {

 

		    i__1 = *n - *k;
		    dgemm_("No transpose", "Transpose", m, &i__1, k, &c_b418, 
			    &work[work_offset], ldwork, &v[v_offset], ldv, &
			    c_b89, &c__[c_offset], ldc, 12L, 9L);
		}

 

		dtrmm_("Right", "Upper", "Transpose", "Unit", m, k, &c_b89, &
			v[*n - *k + 1 + v_dim1], ldv, &work[work_offset], 
			ldwork, 5L, 5L, 9L, 4L);

 

		i__1 = *k;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = *m;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			c__[i__ + (*n - *k + j) * c_dim1] -= work[i__ + j * 
				work_dim1];
 
		    }
 
		}
	    }
	}

    } else if (lsame_(storev, "R", 1L, 1L)) {

	if (lsame_(direct, "F", 1L, 1L)) {

 
 

	    if (lsame_(side, "L", 1L, 1L)) {

 
 

 


 

		i__1 = *k;
		for (j = 1; j <= i__1; ++j) {
		    dcopy_(n, &c__[j + c_dim1], ldc, &work[j * work_dim1 + 1],
			     &c__1);
 
		}

 

		dtrmm_("Right", "Upper", "Transpose", "Unit", n, k, &c_b89, &
			v[v_offset], ldv, &work[work_offset], ldwork, 5L, 5L, 
			9L, 4L);
		if (*m > *k) {

 

		    i__1 = *m - *k;
		    dgemm_("Transpose", "Transpose", n, k, &i__1, &c_b89, &
			    c__[*k + 1 + c_dim1], ldc, &v[(*k + 1) * v_dim1 + 
			    1], ldv, &c_b89, &work[work_offset], ldwork, 9L, 
			    9L);
		}

 

		dtrmm_("Right", "Upper", transt, "Non-unit", n, k, &c_b89, &t[
			t_offset], ldt, &work[work_offset], ldwork, 5L, 5L, 
			1L, 8L);

 

		if (*m > *k) {

 

		    i__1 = *m - *k;
		    dgemm_("Transpose", "Transpose", &i__1, n, k, &c_b418, &v[
			    (*k + 1) * v_dim1 + 1], ldv, &work[work_offset], 
			    ldwork, &c_b89, &c__[*k + 1 + c_dim1], ldc, 9L, 
			    9L);
		}

 

		dtrmm_("Right", "Upper", "No transpose", "Unit", n, k, &c_b89,
			 &v[v_offset], ldv, &work[work_offset], ldwork, 5L, 
			5L, 12L, 4L);

 

		i__1 = *k;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = *n;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			c__[j + i__ * c_dim1] -= work[i__ + j * work_dim1];
 
		    }
 
		}

	    } else if (lsame_(side, "R", 1L, 1L)) {

 


 


 

		i__1 = *k;
		for (j = 1; j <= i__1; ++j) {
		    dcopy_(m, &c__[j * c_dim1 + 1], &c__1, &work[j * 
			    work_dim1 + 1], &c__1);
 
		}

 

		dtrmm_("Right", "Upper", "Transpose", "Unit", m, k, &c_b89, &
			v[v_offset], ldv, &work[work_offset], ldwork, 5L, 5L, 
			9L, 4L);
		if (*n > *k) {

 

		    i__1 = *n - *k;
		    dgemm_("No transpose", "Transpose", m, k, &i__1, &c_b89, &
			    c__[(*k + 1) * c_dim1 + 1], ldc, &v[(*k + 1) * 
			    v_dim1 + 1], ldv, &c_b89, &work[work_offset], 
			    ldwork, 12L, 9L);
		}

 

		dtrmm_("Right", "Upper", trans, "Non-unit", m, k, &c_b89, &t[
			t_offset], ldt, &work[work_offset], ldwork, 5L, 5L, 
			1L, 8L);

 

		if (*n > *k) {

 

		    i__1 = *n - *k;
		    dgemm_("No transpose", "No transpose", m, &i__1, k, &
			    c_b418, &work[work_offset], ldwork, &v[(*k + 1) * 
			    v_dim1 + 1], ldv, &c_b89, &c__[(*k + 1) * c_dim1 
			    + 1], ldc, 12L, 12L);
		}

 

		dtrmm_("Right", "Upper", "No transpose", "Unit", m, k, &c_b89,
			 &v[v_offset], ldv, &work[work_offset], ldwork, 5L, 
			5L, 12L, 4L);

 

		i__1 = *k;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = *m;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			c__[i__ + j * c_dim1] -= work[i__ + j * work_dim1];
 
		    }
 
		}

	    }

	} else {

 
 

	    if (lsame_(side, "L", 1L, 1L)) {

 
 

 


 

		i__1 = *k;
		for (j = 1; j <= i__1; ++j) {
		    dcopy_(n, &c__[*m - *k + j + c_dim1], ldc, &work[j * 
			    work_dim1 + 1], &c__1);
 
		}

 

		dtrmm_("Right", "Lower", "Transpose", "Unit", n, k, &c_b89, &
			v[(*m - *k + 1) * v_dim1 + 1], ldv, &work[work_offset]
			, ldwork, 5L, 5L, 9L, 4L);
		if (*m > *k) {

 

		    i__1 = *m - *k;
		    dgemm_("Transpose", "Transpose", n, k, &i__1, &c_b89, &
			    c__[c_offset], ldc, &v[v_offset], ldv, &c_b89, &
			    work[work_offset], ldwork, 9L, 9L);
		}

 

		dtrmm_("Right", "Lower", transt, "Non-unit", n, k, &c_b89, &t[
			t_offset], ldt, &work[work_offset], ldwork, 5L, 5L, 
			1L, 8L);

 

		if (*m > *k) {

 

		    i__1 = *m - *k;
		    dgemm_("Transpose", "Transpose", &i__1, n, k, &c_b418, &v[
			    v_offset], ldv, &work[work_offset], ldwork, &
			    c_b89, &c__[c_offset], ldc, 9L, 9L);
		}

 

		dtrmm_("Right", "Lower", "No transpose", "Unit", n, k, &c_b89,
			 &v[(*m - *k + 1) * v_dim1 + 1], ldv, &work[
			work_offset], ldwork, 5L, 5L, 12L, 4L);

 

		i__1 = *k;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = *n;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			c__[*m - *k + j + i__ * c_dim1] -= work[i__ + j * 
				work_dim1];
 
		    }
 
		}

	    } else if (lsame_(side, "R", 1L, 1L)) {

 


 


 

		i__1 = *k;
		for (j = 1; j <= i__1; ++j) {
		    dcopy_(m, &c__[(*n - *k + j) * c_dim1 + 1], &c__1, &work[
			    j * work_dim1 + 1], &c__1);
 
		}

 

		dtrmm_("Right", "Lower", "Transpose", "Unit", m, k, &c_b89, &
			v[(*n - *k + 1) * v_dim1 + 1], ldv, &work[work_offset]
			, ldwork, 5L, 5L, 9L, 4L);
		if (*n > *k) {

 

		    i__1 = *n - *k;
		    dgemm_("No transpose", "Transpose", m, k, &i__1, &c_b89, &
			    c__[c_offset], ldc, &v[v_offset], ldv, &c_b89, &
			    work[work_offset], ldwork, 12L, 9L);
		}

 

		dtrmm_("Right", "Lower", trans, "Non-unit", m, k, &c_b89, &t[
			t_offset], ldt, &work[work_offset], ldwork, 5L, 5L, 
			1L, 8L);

 

		if (*n > *k) {

 

		    i__1 = *n - *k;
		    dgemm_("No transpose", "No transpose", m, &i__1, k, &
			    c_b418, &work[work_offset], ldwork, &v[v_offset], 
			    ldv, &c_b89, &c__[c_offset], ldc, 12L, 12L);
		}

 

		dtrmm_("Right", "Lower", "No transpose", "Unit", m, k, &c_b89,
			 &v[(*n - *k + 1) * v_dim1 + 1], ldv, &work[
			work_offset], ldwork, 5L, 5L, 12L, 4L);

 

		i__1 = *k;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = *m;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			c__[i__ + (*n - *k + j) * c_dim1] -= work[i__ + j * 
				work_dim1];
 
		    }
 
		}

	    }

	}
    }

    return 0;

 

}  

  int dlarfg_(n, alpha, x, incx, tau)
integer *n;
doublereal *alpha, *x;
integer *incx;
doublereal *tau;
{
     
    integer i__1;
    doublereal d__1;

     
    double d_sign();

     
    static doublereal beta;
    extern doublereal dnrm2_();
    static integer j;
    extern   int dscal_();
    static doublereal xnorm;
    extern doublereal dlapy2_(), dlamch_();
    static doublereal safmin, rsafmn;
    static integer knt;
     
    --x;

     
    if (*n <= 1) {
	*tau = 0.;
	return 0;
    }

    i__1 = *n - 1;
    xnorm = dnrm2_(&i__1, &x[1], incx);

    if (xnorm == 0.) {

 

	*tau = 0.;
    } else {

 

	d__1 = dlapy2_(alpha, &xnorm);
	beta = -d_sign(&d__1, alpha);
	safmin = dlamch_("S", 1L) / dlamch_("E", 1L);
	if ((( beta ) >= 0 ? ( beta ) : -( beta ))  < safmin) {

 


	    rsafmn = 1. / safmin;
	    knt = 0;
L10:
	    ++knt;
	    i__1 = *n - 1;
	    dscal_(&i__1, &rsafmn, &x[1], incx);
	    beta *= rsafmn;
	    *alpha *= rsafmn;
	    if ((( beta ) >= 0 ? ( beta ) : -( beta ))  < safmin) {
		goto L10;
	    }

 

	    i__1 = *n - 1;
	    xnorm = dnrm2_(&i__1, &x[1], incx);
	    d__1 = dlapy2_(alpha, &xnorm);
	    beta = -d_sign(&d__1, alpha);
	    *tau = (beta - *alpha) / beta;
	    i__1 = *n - 1;
	    d__1 = 1. / (*alpha - beta);
	    dscal_(&i__1, &d__1, &x[1], incx);

 


	    *alpha = beta;
	    i__1 = knt;
	    for (j = 1; j <= i__1; ++j) {
		*alpha *= safmin;
 
	    }
	} else {
	    *tau = (beta - *alpha) / beta;
	    i__1 = *n - 1;
	    d__1 = 1. / (*alpha - beta);
	    dscal_(&i__1, &d__1, &x[1], incx);
	    *alpha = beta;
	}
    }

    return 0;

 

}  

  int dlarft_(direct, storev, n, k, v, ldv, tau, t, ldt, 
	direct_len, storev_len)
char *direct, *storev;
integer *n, *k;
doublereal *v;
integer *ldv;
doublereal *tau, *t;
integer *ldt;
ftnlen direct_len;
ftnlen storev_len;
{
     
    integer t_dim1, t_offset, v_dim1, v_offset, i__1, i__2, i__3;
    doublereal d__1;

     
    static integer i__, j;
    extern logical lsame_();
    extern   int dgemv_(), dtrmv_();
    static doublereal vii;
     
    v_dim1 = *ldv;
    v_offset = v_dim1 + 1;
    v -= v_offset;
    --tau;
    t_dim1 = *ldt;
    t_offset = t_dim1 + 1;
    t -= t_offset;

     
    if (*n == 0) {
	return 0;
    }

    if (lsame_(direct, "F", 1L, 1L)) {
	i__1 = *k;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    if (tau[i__] == 0.) {

 

		i__2 = i__;
		for (j = 1; j <= i__2; ++j) {
		    t[j + i__ * t_dim1] = 0.;
 
		}
	    } else {

 

		vii = v[i__ + i__ * v_dim1];
		v[i__ + i__ * v_dim1] = 1.;
		if (lsame_(storev, "C", 1L, 1L)) {

 


		    i__2 = *n - i__ + 1;
		    i__3 = i__ - 1;
		    d__1 = -tau[i__];
		    dgemv_("Transpose", &i__2, &i__3, &d__1, &v[i__ + v_dim1],
			     ldv, &v[i__ + i__ * v_dim1], &c__1, &c_b61, &t[
			    i__ * t_dim1 + 1], &c__1, 9L);
		} else {

 


		    i__2 = i__ - 1;
		    i__3 = *n - i__ + 1;
		    d__1 = -tau[i__];
		    dgemv_("No transpose", &i__2, &i__3, &d__1, &v[i__ * 
			    v_dim1 + 1], ldv, &v[i__ + i__ * v_dim1], ldv, &
			    c_b61, &t[i__ * t_dim1 + 1], &c__1, 12L);
		}
		v[i__ + i__ * v_dim1] = vii;

 

		i__2 = i__ - 1;
		dtrmv_("Upper", "No transpose", "Non-unit", &i__2, &t[
			t_offset], ldt, &t[i__ * t_dim1 + 1], &c__1, 5L, 12L, 
			8L);
		t[i__ + i__ * t_dim1] = tau[i__];
	    }
 
	}
    } else {
	for (i__ = *k; i__ >= 1; --i__) {
	    if (tau[i__] == 0.) {

 

		i__1 = *k;
		for (j = i__; j <= i__1; ++j) {
		    t[j + i__ * t_dim1] = 0.;
 
		}
	    } else {

 

		if (i__ < *k) {
		    if (lsame_(storev, "C", 1L, 1L)) {
			vii = v[*n - *k + i__ + i__ * v_dim1];
			v[*n - *k + i__ + i__ * v_dim1] = 1.;

 
 


			i__1 = *n - *k + i__;
			i__2 = *k - i__;
			d__1 = -tau[i__];
			dgemv_("Transpose", &i__1, &i__2, &d__1, &v[(i__ + 1) 
				* v_dim1 + 1], ldv, &v[i__ * v_dim1 + 1], &
				c__1, &c_b61, &t[i__ + 1 + i__ * t_dim1], &
				c__1, 9L);
			v[*n - *k + i__ + i__ * v_dim1] = vii;
		    } else {
			vii = v[i__ + (*n - *k + i__) * v_dim1];
			v[i__ + (*n - *k + i__) * v_dim1] = 1.;

 
 


			i__1 = *k - i__;
			i__2 = *n - *k + i__;
			d__1 = -tau[i__];
			dgemv_("No transpose", &i__1, &i__2, &d__1, &v[i__ + 
				1 + v_dim1], ldv, &v[i__ + v_dim1], ldv, &
				c_b61, &t[i__ + 1 + i__ * t_dim1], &c__1, 12L)
				;
			v[i__ + (*n - *k + i__) * v_dim1] = vii;
		    }

 


		    i__1 = *k - i__;
		    dtrmv_("Lower", "No transpose", "Non-unit", &i__1, &t[i__ 
			    + 1 + (i__ + 1) * t_dim1], ldt, &t[i__ + 1 + i__ *
			     t_dim1], &c__1, 5L, 12L, 8L);
		}
		t[i__ + i__ * t_dim1] = tau[i__];
	    }
 
	}
    }
    return 0;

 

}  

  int dlartg_(f, g, cs, sn, r__)
doublereal *f, *g, *cs, *sn, *r__;
{
     

    static logical first = (1) ;

     
    integer i__1;
    doublereal d__1, d__2;

     
    double log(), pow_di(), sqrt();

     
    static integer i__;
    static doublereal scale;
    static integer count;
    static doublereal f1, g1, safmn2, safmx2;
    extern doublereal dlamch_();
    static doublereal safmin, eps;

    if (first) {
	first = (0) ;
	safmin = dlamch_("S", 1L);
	eps = dlamch_("E", 1L);
	d__1 = dlamch_("B", 1L);
	i__1 = (integer) (log(safmin / eps) / log(dlamch_("B", 1L)) / 2.);
	safmn2 = pow_di(&d__1, &i__1);
	safmx2 = 1. / safmn2;
    }
    if (*g == 0.) {
	*cs = 1.;
	*sn = 0.;
	*r__ = *f;
    } else if (*f == 0.) {
	*cs = 0.;
	*sn = 1.;
	*r__ = *g;
    } else {
	f1 = *f;
	g1 = *g;
 
	d__1 = (( f1 ) >= 0 ? ( f1 ) : -( f1 )) , d__2 = (( g1 ) >= 0 ? ( g1 ) : -( g1 )) ;
	scale = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	if (scale >= safmx2) {
	    count = 0;
L10:
	    ++count;
	    f1 *= safmn2;
	    g1 *= safmn2;
 
	    d__1 = (( f1 ) >= 0 ? ( f1 ) : -( f1 )) , d__2 = (( g1 ) >= 0 ? ( g1 ) : -( g1 )) ;
	    scale = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	    if (scale >= safmx2) {
		goto L10;
	    }
 
	    d__1 = f1;
 
	    d__2 = g1;
	    *r__ = sqrt(d__1 * d__1 + d__2 * d__2);
	    *cs = f1 / *r__;
	    *sn = g1 / *r__;
	    i__1 = count;
	    for (i__ = 1; i__ <= i__1; ++i__) {
		*r__ *= safmx2;
 
	    }
	} else if (scale <= safmn2) {
	    count = 0;
L30:
	    ++count;
	    f1 *= safmx2;
	    g1 *= safmx2;
 
	    d__1 = (( f1 ) >= 0 ? ( f1 ) : -( f1 )) , d__2 = (( g1 ) >= 0 ? ( g1 ) : -( g1 )) ;
	    scale = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	    if (scale <= safmn2) {
		goto L30;
	    }
 
	    d__1 = f1;
 
	    d__2 = g1;
	    *r__ = sqrt(d__1 * d__1 + d__2 * d__2);
	    *cs = f1 / *r__;
	    *sn = g1 / *r__;
	    i__1 = count;
	    for (i__ = 1; i__ <= i__1; ++i__) {
		*r__ *= safmn2;
 
	    }
	} else {
 
	    d__1 = f1;
 
	    d__2 = g1;
	    *r__ = sqrt(d__1 * d__1 + d__2 * d__2);
	    *cs = f1 / *r__;
	    *sn = g1 / *r__;
	}
	if ((( *f ) >= 0 ? ( *f ) : -( *f ))  > (( *g ) >= 0 ? ( *g ) : -( *g ))  && *cs < 0.) {
	    *cs = -(*cs);
	    *sn = -(*sn);
	    *r__ = -(*r__);
	}
    }
    return 0;

 

}  

  int dlascl_(type__, kl, ku, cfrom, cto, m, n, a, lda, info, 
	type_len)
char *type__;
integer *kl, *ku;
doublereal *cfrom, *cto;
integer *m, *n;
doublereal *a;
integer *lda, *info;
ftnlen type_len;
{
     
    integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5;

     
    static logical done;
    static doublereal ctoc;
    static integer i__, j;
    extern logical lsame_();
    static integer itype, k1, k2, k3, k4;
    static doublereal cfrom1;
    extern doublereal dlamch_();
    static doublereal cfromc;
    extern   int xerbla_();
    static doublereal bignum, smlnum, mul, cto1;
     
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;

     
    *info = 0;

    if (lsame_(type__, "G", 1L, 1L)) {
	itype = 0;
    } else if (lsame_(type__, "L", 1L, 1L)) {
	itype = 1;
    } else if (lsame_(type__, "U", 1L, 1L)) {
	itype = 2;
    } else if (lsame_(type__, "H", 1L, 1L)) {
	itype = 3;
    } else if (lsame_(type__, "B", 1L, 1L)) {
	itype = 4;
    } else if (lsame_(type__, "Q", 1L, 1L)) {
	itype = 5;
    } else if (lsame_(type__, "Z", 1L, 1L)) {
	itype = 6;
    } else {
	itype = -1;
    }

    if (itype == -1) {
	*info = -1;
    } else if (*cfrom == 0.) {
	*info = -4;
    } else if (*m < 0) {
	*info = -6;
    } else if (*n < 0 || itype == 4 && *n != *m || itype == 5 && *n != *m) {
	*info = -7;
    } else if (itype <= 3 && *lda < (( 1 ) >= ( *m ) ? ( 1 ) : ( *m )) ) {
	*info = -9;
    } else if (itype >= 4) {
 
	i__1 = *m - 1;
	if (*kl < 0 || *kl > (( i__1 ) >= ( 0 ) ? ( i__1 ) : ( 0 )) ) {
	    *info = -2;
	} else   {
 
	    i__1 = *n - 1;
	    if (*ku < 0 || *ku > (( i__1 ) >= ( 0 ) ? ( i__1 ) : ( 0 ))  || (itype == 4 || itype == 5) && 
		    *kl != *ku) {
		*info = -3;
	    } else if (itype == 4 && *lda < *kl + 1 || itype == 5 && *lda < *
		    ku + 1 || itype == 6 && *lda < (*kl << 1) + *ku + 1) {
		*info = -9;
	    }
	}
    }

    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DLASCL", &i__1, 6L);
	return 0;
    }

 

    if (*n == 0 || *m == 0) {
	return 0;
    }

 

    smlnum = dlamch_("S", 1L);
    bignum = 1. / smlnum;

    cfromc = *cfrom;
    ctoc = *cto;

L10:
    cfrom1 = cfromc * smlnum;
    cto1 = ctoc / bignum;
    if ((( cfrom1 ) >= 0 ? ( cfrom1 ) : -( cfrom1 ))  > (( ctoc ) >= 0 ? ( ctoc ) : -( ctoc ))  && ctoc != 0.) {
	mul = smlnum;
	done = (0) ;
	cfromc = cfrom1;
    } else if ((( cto1 ) >= 0 ? ( cto1 ) : -( cto1 ))  > (( cfromc ) >= 0 ? ( cfromc ) : -( cfromc )) ) {
	mul = bignum;
	done = (0) ;
	ctoc = cto1;
    } else {
	mul = ctoc / cfromc;
	done = (1) ;
    }

    if (itype == 0) {

 

	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    i__2 = *m;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		a[i__ + j * a_dim1] *= mul;
 
	    }
 
	}

    } else if (itype == 1) {

 

	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    i__2 = *m;
	    for (i__ = j; i__ <= i__2; ++i__) {
		a[i__ + j * a_dim1] *= mul;
 
	    }
 
	}

    } else if (itype == 2) {

 

	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    i__2 = (( j ) <= ( *m ) ? ( j ) : ( *m )) ;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		a[i__ + j * a_dim1] *= mul;
 
	    }
 
	}

    } else if (itype == 3) {

 

	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
 
	    i__3 = j + 1;
	    i__2 = (( i__3 ) <= ( *m ) ? ( i__3 ) : ( *m )) ;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		a[i__ + j * a_dim1] *= mul;
 
	    }
 
	}

    } else if (itype == 4) {

 

	k3 = *kl + 1;
	k4 = *n + 1;
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
 
	    i__3 = k3, i__4 = k4 - j;
	    i__2 = (( i__3 ) <= ( i__4 ) ? ( i__3 ) : ( i__4 )) ;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		a[i__ + j * a_dim1] *= mul;
 
	    }
 
	}

    } else if (itype == 5) {

 

	k1 = *ku + 2;
	k3 = *ku + 1;
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
 
	    i__2 = k1 - j;
	    i__3 = k3;
	    for (i__ = (( i__2 ) >= ( 1 ) ? ( i__2 ) : ( 1 )) ; i__ <= i__3; ++i__) {
		a[i__ + j * a_dim1] *= mul;
 
	    }
 
	}

    } else if (itype == 6) {

 

	k1 = *kl + *ku + 2;
	k2 = *kl + 1;
	k3 = (*kl << 1) + *ku + 1;
	k4 = *kl + *ku + 1 + *m;
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
 
	    i__3 = k1 - j;
 
	    i__4 = k3, i__5 = k4 - j;
	    i__2 = (( i__4 ) <= ( i__5 ) ? ( i__4 ) : ( i__5 )) ;
	    for (i__ = (( i__3 ) >= ( k2 ) ? ( i__3 ) : ( k2 )) ; i__ <= i__2; ++i__) {
		a[i__ + j * a_dim1] *= mul;
 
	    }
 
	}

    }

    if (! done) {
	goto L10;
    }

    return 0;

 

}  

  int dlaset_(uplo, m, n, alpha, beta, a, lda, uplo_len)
char *uplo;
integer *m, *n;
doublereal *alpha, *beta, *a;
integer *lda;
ftnlen uplo_len;
{
     
    integer a_dim1, a_offset, i__1, i__2, i__3;

     
    static integer i__, j;
    extern logical lsame_();
     
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;

     
    if (lsame_(uplo, "U", 1L, 1L)) {

 

 

	i__1 = *n;
	for (j = 2; j <= i__1; ++j) {
 
	    i__3 = j - 1;
	    i__2 = (( i__3 ) <= ( *m ) ? ( i__3 ) : ( *m )) ;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		a[i__ + j * a_dim1] = *alpha;
 
	    }
 
	}

    } else if (lsame_(uplo, "L", 1L, 1L)) {

 

 

	i__1 = (( *m ) <= ( *n ) ? ( *m ) : ( *n )) ;
	for (j = 1; j <= i__1; ++j) {
	    i__2 = *m;
	    for (i__ = j + 1; i__ <= i__2; ++i__) {
		a[i__ + j * a_dim1] = *alpha;
 
	    }
 
	}

    } else {

 

	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    i__2 = *m;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		a[i__ + j * a_dim1] = *alpha;
 
	    }
 
	}
    }

 

    i__1 = (( *m ) <= ( *n ) ? ( *m ) : ( *n )) ;
    for (i__ = 1; i__ <= i__1; ++i__) {
	a[i__ + i__ * a_dim1] = *beta;
 
    }

    return 0;

 

}  

  int dlasr_(side, pivot, direct, m, n, c__, s, a, lda, 
	side_len, pivot_len, direct_len)
char *side, *pivot, *direct;
integer *m, *n;
doublereal *c__, *s, *a;
integer *lda;
ftnlen side_len;
ftnlen pivot_len;
ftnlen direct_len;
{
     
    integer a_dim1, a_offset, i__1, i__2;

     
    static integer info;
    static doublereal temp;
    static integer i__, j;
    extern logical lsame_();
    static doublereal ctemp, stemp;
    extern   int xerbla_();
     
    --c__;
    --s;
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;

     
    info = 0;
    if (! (lsame_(side, "L", 1L, 1L) || lsame_(side, "R", 1L, 1L))) {
	info = 1;
    } else if (! (lsame_(pivot, "V", 1L, 1L) || lsame_(pivot, "T", 1L, 1L) || 
	    lsame_(pivot, "B", 1L, 1L))) {
	info = 2;
    } else if (! (lsame_(direct, "F", 1L, 1L) || lsame_(direct, "B", 1L, 1L)))
	     {
	info = 3;
    } else if (*m < 0) {
	info = 4;
    } else if (*n < 0) {
	info = 5;
    } else if (*lda < (( 1 ) >= ( *m ) ? ( 1 ) : ( *m )) ) {
	info = 9;
    }
    if (info != 0) {
	xerbla_("DLASR ", &info, 6L);
	return 0;
    }

 

    if (*m == 0 || *n == 0) {
	return 0;
    }
    if (lsame_(side, "L", 1L, 1L)) {

 

	if (lsame_(pivot, "V", 1L, 1L)) {
	    if (lsame_(direct, "F", 1L, 1L)) {
		i__1 = *m - 1;
		for (j = 1; j <= i__1; ++j) {
		    ctemp = c__[j];
		    stemp = s[j];
		    if (ctemp != 1. || stemp != 0.) {
			i__2 = *n;
			for (i__ = 1; i__ <= i__2; ++i__) {
			    temp = a[j + 1 + i__ * a_dim1];
			    a[j + 1 + i__ * a_dim1] = ctemp * temp - stemp * 
				    a[j + i__ * a_dim1];
			    a[j + i__ * a_dim1] = stemp * temp + ctemp * a[j 
				    + i__ * a_dim1];
 
			}
		    }
 
		}
	    } else if (lsame_(direct, "B", 1L, 1L)) {
		for (j = *m - 1; j >= 1; --j) {
		    ctemp = c__[j];
		    stemp = s[j];
		    if (ctemp != 1. || stemp != 0.) {
			i__1 = *n;
			for (i__ = 1; i__ <= i__1; ++i__) {
			    temp = a[j + 1 + i__ * a_dim1];
			    a[j + 1 + i__ * a_dim1] = ctemp * temp - stemp * 
				    a[j + i__ * a_dim1];
			    a[j + i__ * a_dim1] = stemp * temp + ctemp * a[j 
				    + i__ * a_dim1];
 
			}
		    }
 
		}
	    }
	} else if (lsame_(pivot, "T", 1L, 1L)) {
	    if (lsame_(direct, "F", 1L, 1L)) {
		i__1 = *m;
		for (j = 2; j <= i__1; ++j) {
		    ctemp = c__[j - 1];
		    stemp = s[j - 1];
		    if (ctemp != 1. || stemp != 0.) {
			i__2 = *n;
			for (i__ = 1; i__ <= i__2; ++i__) {
			    temp = a[j + i__ * a_dim1];
			    a[j + i__ * a_dim1] = ctemp * temp - stemp * a[
				    i__ * a_dim1 + 1];
			    a[i__ * a_dim1 + 1] = stemp * temp + ctemp * a[
				    i__ * a_dim1 + 1];
 
			}
		    }
 
		}
	    } else if (lsame_(direct, "B", 1L, 1L)) {
		for (j = *m; j >= 2; --j) {
		    ctemp = c__[j - 1];
		    stemp = s[j - 1];
		    if (ctemp != 1. || stemp != 0.) {
			i__1 = *n;
			for (i__ = 1; i__ <= i__1; ++i__) {
			    temp = a[j + i__ * a_dim1];
			    a[j + i__ * a_dim1] = ctemp * temp - stemp * a[
				    i__ * a_dim1 + 1];
			    a[i__ * a_dim1 + 1] = stemp * temp + ctemp * a[
				    i__ * a_dim1 + 1];
 
			}
		    }
 
		}
	    }
	} else if (lsame_(pivot, "B", 1L, 1L)) {
	    if (lsame_(direct, "F", 1L, 1L)) {
		i__1 = *m - 1;
		for (j = 1; j <= i__1; ++j) {
		    ctemp = c__[j];
		    stemp = s[j];
		    if (ctemp != 1. || stemp != 0.) {
			i__2 = *n;
			for (i__ = 1; i__ <= i__2; ++i__) {
			    temp = a[j + i__ * a_dim1];
			    a[j + i__ * a_dim1] = stemp * a[*m + i__ * a_dim1]
				     + ctemp * temp;
			    a[*m + i__ * a_dim1] = ctemp * a[*m + i__ * 
				    a_dim1] - stemp * temp;
 
			}
		    }
 
		}
	    } else if (lsame_(direct, "B", 1L, 1L)) {
		for (j = *m - 1; j >= 1; --j) {
		    ctemp = c__[j];
		    stemp = s[j];
		    if (ctemp != 1. || stemp != 0.) {
			i__1 = *n;
			for (i__ = 1; i__ <= i__1; ++i__) {
			    temp = a[j + i__ * a_dim1];
			    a[j + i__ * a_dim1] = stemp * a[*m + i__ * a_dim1]
				     + ctemp * temp;
			    a[*m + i__ * a_dim1] = ctemp * a[*m + i__ * 
				    a_dim1] - stemp * temp;
 
			}
		    }
 
		}
	    }
	}
    } else if (lsame_(side, "R", 1L, 1L)) {

 

	if (lsame_(pivot, "V", 1L, 1L)) {
	    if (lsame_(direct, "F", 1L, 1L)) {
		i__1 = *n - 1;
		for (j = 1; j <= i__1; ++j) {
		    ctemp = c__[j];
		    stemp = s[j];
		    if (ctemp != 1. || stemp != 0.) {
			i__2 = *m;
			for (i__ = 1; i__ <= i__2; ++i__) {
			    temp = a[i__ + (j + 1) * a_dim1];
			    a[i__ + (j + 1) * a_dim1] = ctemp * temp - stemp *
				     a[i__ + j * a_dim1];
			    a[i__ + j * a_dim1] = stemp * temp + ctemp * a[
				    i__ + j * a_dim1];
 
			}
		    }
 
		}
	    } else if (lsame_(direct, "B", 1L, 1L)) {
		for (j = *n - 1; j >= 1; --j) {
		    ctemp = c__[j];
		    stemp = s[j];
		    if (ctemp != 1. || stemp != 0.) {
			i__1 = *m;
			for (i__ = 1; i__ <= i__1; ++i__) {
			    temp = a[i__ + (j + 1) * a_dim1];
			    a[i__ + (j + 1) * a_dim1] = ctemp * temp - stemp *
				     a[i__ + j * a_dim1];
			    a[i__ + j * a_dim1] = stemp * temp + ctemp * a[
				    i__ + j * a_dim1];
 
			}
		    }
 
		}
	    }
	} else if (lsame_(pivot, "T", 1L, 1L)) {
	    if (lsame_(direct, "F", 1L, 1L)) {
		i__1 = *n;
		for (j = 2; j <= i__1; ++j) {
		    ctemp = c__[j - 1];
		    stemp = s[j - 1];
		    if (ctemp != 1. || stemp != 0.) {
			i__2 = *m;
			for (i__ = 1; i__ <= i__2; ++i__) {
			    temp = a[i__ + j * a_dim1];
			    a[i__ + j * a_dim1] = ctemp * temp - stemp * a[
				    i__ + a_dim1];
			    a[i__ + a_dim1] = stemp * temp + ctemp * a[i__ + 
				    a_dim1];
 
			}
		    }
 
		}
	    } else if (lsame_(direct, "B", 1L, 1L)) {
		for (j = *n; j >= 2; --j) {
		    ctemp = c__[j - 1];
		    stemp = s[j - 1];
		    if (ctemp != 1. || stemp != 0.) {
			i__1 = *m;
			for (i__ = 1; i__ <= i__1; ++i__) {
			    temp = a[i__ + j * a_dim1];
			    a[i__ + j * a_dim1] = ctemp * temp - stemp * a[
				    i__ + a_dim1];
			    a[i__ + a_dim1] = stemp * temp + ctemp * a[i__ + 
				    a_dim1];
 
			}
		    }
 
		}
	    }
	} else if (lsame_(pivot, "B", 1L, 1L)) {
	    if (lsame_(direct, "F", 1L, 1L)) {
		i__1 = *n - 1;
		for (j = 1; j <= i__1; ++j) {
		    ctemp = c__[j];
		    stemp = s[j];
		    if (ctemp != 1. || stemp != 0.) {
			i__2 = *m;
			for (i__ = 1; i__ <= i__2; ++i__) {
			    temp = a[i__ + j * a_dim1];
			    a[i__ + j * a_dim1] = stemp * a[i__ + *n * a_dim1]
				     + ctemp * temp;
			    a[i__ + *n * a_dim1] = ctemp * a[i__ + *n * 
				    a_dim1] - stemp * temp;
 
			}
		    }
 
		}
	    } else if (lsame_(direct, "B", 1L, 1L)) {
		for (j = *n - 1; j >= 1; --j) {
		    ctemp = c__[j];
		    stemp = s[j];
		    if (ctemp != 1. || stemp != 0.) {
			i__1 = *m;
			for (i__ = 1; i__ <= i__1; ++i__) {
			    temp = a[i__ + j * a_dim1];
			    a[i__ + j * a_dim1] = stemp * a[i__ + *n * a_dim1]
				     + ctemp * temp;
			    a[i__ + *n * a_dim1] = ctemp * a[i__ + *n * 
				    a_dim1] - stemp * temp;
 
			}
		    }
 
		}
	    }
	}
    }

    return 0;

 

}  

  int dlasrt_(id, n, d__, info, id_len)
char *id;
integer *n;
doublereal *d__;
integer *info;
ftnlen id_len;
{
     
    integer i__1, i__2;

     
    static integer endd, i__, j;
    extern logical lsame_();
    static integer stack[64]	 ;
    static doublereal dmnmx, d1, d2, d3;
    static integer start;
    extern   int xerbla_();
    static integer stkpnt, dir;
    static doublereal tmp;
     
    --d__;

     
    *info = 0;
    dir = -1;
    if (lsame_(id, "D", 1L, 1L)) {
	dir = 0;
    } else if (lsame_(id, "I", 1L, 1L)) {
	dir = 1;
    }
    if (dir == -1) {
	*info = -1;
    } else if (*n < 0) {
	*info = -2;
    }
    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DLASRT", &i__1, 6L);
	return 0;
    }

 

    if (*n <= 1) {
	return 0;
    }

    stkpnt = 1;
    stack[0] = 1;
    stack[1] = *n;
L10:
    start = stack[(stkpnt << 1) - 2];
    endd = stack[(stkpnt << 1) - 1];
    --stkpnt;
    if (endd - start <= 20 && endd - start > 0) {

 

	if (dir == 0) {

 

	    i__1 = endd;
	    for (i__ = start + 1; i__ <= i__1; ++i__) {
		i__2 = start + 1;
		for (j = i__; j >= i__2; --j) {
		    if (d__[j] > d__[j - 1]) {
			dmnmx = d__[j];
			d__[j] = d__[j - 1];
			d__[j - 1] = dmnmx;
		    } else {
			goto L30;
		    }
 
		}
L30:
		;
	    }

	} else {

 

	    i__1 = endd;
	    for (i__ = start + 1; i__ <= i__1; ++i__) {
		i__2 = start + 1;
		for (j = i__; j >= i__2; --j) {
		    if (d__[j] < d__[j - 1]) {
			dmnmx = d__[j];
			d__[j] = d__[j - 1];
			d__[j - 1] = dmnmx;
		    } else {
			goto L50;
		    }
 
		}
L50:
		;
	    }

	}

    } else if (endd - start > 20) {

 


 

	d1 = d__[start];
	d2 = d__[endd];
	i__ = (start + endd) / 2;
	d3 = d__[i__];
	if (d1 < d2) {
	    if (d3 < d1) {
		dmnmx = d1;
	    } else if (d3 < d2) {
		dmnmx = d3;
	    } else {
		dmnmx = d2;
	    }
	} else {
	    if (d3 < d2) {
		dmnmx = d2;
	    } else if (d3 < d1) {
		dmnmx = d3;
	    } else {
		dmnmx = d1;
	    }
	}

	if (dir == 0) {

 

	    i__ = start - 1;
	    j = endd + 1;
L60:
L70:
	    --j;
	    if (d__[j] < dmnmx) {
		goto L70;
	    }
L80:
	    ++i__;
	    if (d__[i__] > dmnmx) {
		goto L80;
	    }
	    if (i__ < j) {
		tmp = d__[i__];
		d__[i__] = d__[j];
		d__[j] = tmp;
		goto L60;
	    }
	    if (j - start > endd - j - 1) {
		++stkpnt;
		stack[(stkpnt << 1) - 2] = start;
		stack[(stkpnt << 1) - 1] = j;
		++stkpnt;
		stack[(stkpnt << 1) - 2] = j + 1;
		stack[(stkpnt << 1) - 1] = endd;
	    } else {
		++stkpnt;
		stack[(stkpnt << 1) - 2] = j + 1;
		stack[(stkpnt << 1) - 1] = endd;
		++stkpnt;
		stack[(stkpnt << 1) - 2] = start;
		stack[(stkpnt << 1) - 1] = j;
	    }
	} else {

 

	    i__ = start - 1;
	    j = endd + 1;
L90:
L100:
	    --j;
	    if (d__[j] > dmnmx) {
		goto L100;
	    }
L110:
	    ++i__;
	    if (d__[i__] < dmnmx) {
		goto L110;
	    }
	    if (i__ < j) {
		tmp = d__[i__];
		d__[i__] = d__[j];
		d__[j] = tmp;
		goto L90;
	    }
	    if (j - start > endd - j - 1) {
		++stkpnt;
		stack[(stkpnt << 1) - 2] = start;
		stack[(stkpnt << 1) - 1] = j;
		++stkpnt;
		stack[(stkpnt << 1) - 2] = j + 1;
		stack[(stkpnt << 1) - 1] = endd;
	    } else {
		++stkpnt;
		stack[(stkpnt << 1) - 2] = j + 1;
		stack[(stkpnt << 1) - 1] = endd;
		++stkpnt;
		stack[(stkpnt << 1) - 2] = start;
		stack[(stkpnt << 1) - 1] = j;
	    }
	}
    }
    if (stkpnt > 0) {
	goto L10;
    }
    return 0;

 

}  

  int dlassq_(n, x, incx, scale, sumsq)
integer *n;
doublereal *x;
integer *incx;
doublereal *scale, *sumsq;
{
     
    integer i__1, i__2;
    doublereal d__1;

     
    static doublereal absxi;
    static integer ix;
     
    --x;

     
    if (*n > 0) {
	i__1 = (*n - 1) * *incx + 1;
	i__2 = *incx;
	for (ix = 1; i__2 < 0 ? ix >= i__1 : ix <= i__1; ix += i__2) {
	    if (x[ix] != 0.) {
		absxi = (d__1 = x[ix], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		if (*scale < absxi) {
 
		    d__1 = *scale / absxi;
		    *sumsq = *sumsq * (d__1 * d__1) + 1;
		    *scale = absxi;
		} else {
 
		    d__1 = absxi / *scale;
		    *sumsq += d__1 * d__1;
		}
	    }
 
	}
    }
    return 0;

 

}  

  int dlatrs_(uplo, trans, diag, normin, n, a, lda, x, scale, 
	cnorm, info, uplo_len, trans_len, diag_len, normin_len)
char *uplo, *trans, *diag, *normin;
integer *n;
doublereal *a;
integer *lda;
doublereal *x, *scale, *cnorm;
integer *info;
ftnlen uplo_len;
ftnlen trans_len;
ftnlen diag_len;
ftnlen normin_len;
{
     
    integer a_dim1, a_offset, i__1, i__2, i__3;
    doublereal d__1, d__2, d__3;

     
    static integer jinc;
    extern doublereal ddot_();
    static doublereal xbnd;
    static integer imax;
    static doublereal tmax, tjjs, xmax, grow, sumj;
    static integer i__, j;
    extern   int dscal_();
    extern logical lsame_();
    static doublereal tscal, uscal;
    extern doublereal dasum_();
    static integer jlast;
    extern   int daxpy_();
    static logical upper;
    extern   int dtrsv_();
    extern doublereal dlamch_();
    static doublereal xj;
    extern integer idamax_();
    extern   int xerbla_();
    static doublereal bignum;
    static logical notran;
    static integer jfirst;
    static doublereal smlnum;
    static logical nounit;
    static doublereal rec, tjj;
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --x;
    --cnorm;

     
    *info = 0;
    upper = lsame_(uplo, "U", 1L, 1L);
    notran = lsame_(trans, "N", 1L, 1L);
    nounit = lsame_(diag, "N", 1L, 1L);

 

    if (! upper && ! lsame_(uplo, "L", 1L, 1L)) {
	*info = -1;
    } else if (! notran && ! lsame_(trans, "T", 1L, 1L) && ! lsame_(trans, 
	    "C", 1L, 1L)) {
	*info = -2;
    } else if (! nounit && ! lsame_(diag, "U", 1L, 1L)) {
	*info = -3;
    } else if (! lsame_(normin, "Y", 1L, 1L) && ! lsame_(normin, "N", 1L, 1L))
	     {
	*info = -4;
    } else if (*n < 0) {
	*info = -5;
    } else if (*lda < (( 1 ) >= ( *n ) ? ( 1 ) : ( *n )) ) {
	*info = -7;
    }
    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DLATRS", &i__1, 6L);
	return 0;
    }

 

    if (*n == 0) {
	return 0;
    }

 

    smlnum = dlamch_("Safe minimum", 12L) / dlamch_("Precision", 9L);
    bignum = 1. / smlnum;
    *scale = 1.;

    if (lsame_(normin, "N", 1L, 1L)) {

 


	if (upper) {

 

	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		i__2 = j - 1;
		cnorm[j] = dasum_(&i__2, &a[j * a_dim1 + 1], &c__1);
 
	    }
	} else {

 

	    i__1 = *n - 1;
	    for (j = 1; j <= i__1; ++j) {
		i__2 = *n - j;
		cnorm[j] = dasum_(&i__2, &a[j + 1 + j * a_dim1], &c__1);
 
	    }
	    cnorm[*n] = 0.;
	}
    }

 

 

    imax = idamax_(n, &cnorm[1], &c__1);
    tmax = cnorm[imax];
    if (tmax <= bignum) {
	tscal = 1.;
    } else {
	tscal = 1. / (smlnum * tmax);
	dscal_(n, &tscal, &cnorm[1], &c__1);
    }

 
 

    j = idamax_(n, &x[1], &c__1);
    xmax = (d__1 = x[j], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
    xbnd = xmax;
    if (notran) {

 

	if (upper) {
	    jfirst = *n;
	    jlast = 1;
	    jinc = -1;
	} else {
	    jfirst = 1;
	    jlast = *n;
	    jinc = 1;
	}

	if (tscal != 1.) {
	    grow = 0.;
	    goto L50;
	}

	if (nounit) {

 

 
 

	    grow = 1. / (( xbnd ) >= ( smlnum ) ? ( xbnd ) : ( smlnum )) ;
	    xbnd = grow;
	    i__1 = jlast;
	    i__2 = jinc;
	    for (j = jfirst; i__2 < 0 ? j >= i__1 : j <= i__1; j += i__2) {

 


		if (grow <= smlnum) {
		    goto L50;
		}

 

		tjj = (d__1 = a[j + j * a_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
 
		d__1 = xbnd, d__2 = (( 1. ) <= ( tjj ) ? ( 1. ) : ( tjj ))  * grow;
		xbnd = (( d__1 ) <= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
		if (tjj + cnorm[j] >= smlnum) {

 


		    grow *= tjj / (tjj + cnorm[j]);
		} else {

 

		    grow = 0.;
		}
 
	    }
	    grow = xbnd;
	} else {

 

 


 
	    d__1 = 1., d__2 = 1. / (( xbnd ) >= ( smlnum ) ? ( xbnd ) : ( smlnum )) ;
	    grow = (( d__1 ) <= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	    i__2 = jlast;
	    i__1 = jinc;
	    for (j = jfirst; i__1 < 0 ? j >= i__2 : j <= i__2; j += i__1) {

 


		if (grow <= smlnum) {
		    goto L50;
		}

 

		grow *= 1. / (cnorm[j] + 1.);
 
	    }
	}
L50:

	;
    } else {

 

	if (upper) {
	    jfirst = 1;
	    jlast = *n;
	    jinc = 1;
	} else {
	    jfirst = *n;
	    jlast = 1;
	    jinc = -1;
	}

	if (tscal != 1.) {
	    grow = 0.;
	    goto L80;
	}

	if (nounit) {

 

 
 

	    grow = 1. / (( xbnd ) >= ( smlnum ) ? ( xbnd ) : ( smlnum )) ;
	    xbnd = grow;
	    i__1 = jlast;
	    i__2 = jinc;
	    for (j = jfirst; i__2 < 0 ? j >= i__1 : j <= i__1; j += i__2) {

 


		if (grow <= smlnum) {
		    goto L80;
		}

 


		xj = cnorm[j] + 1.;
 
		d__1 = grow, d__2 = xbnd / xj;
		grow = (( d__1 ) <= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;

 


		tjj = (d__1 = a[j + j * a_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		if (xj > tjj) {
		    xbnd *= tjj / xj;
		}
 
	    }
	    grow = (( grow ) <= ( xbnd ) ? ( grow ) : ( xbnd )) ;
	} else {

 

 


 
	    d__1 = 1., d__2 = 1. / (( xbnd ) >= ( smlnum ) ? ( xbnd ) : ( smlnum )) ;
	    grow = (( d__1 ) <= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	    i__2 = jlast;
	    i__1 = jinc;
	    for (j = jfirst; i__1 < 0 ? j >= i__2 : j <= i__2; j += i__1) {

 


		if (grow <= smlnum) {
		    goto L80;
		}

 

		xj = cnorm[j] + 1.;
		grow /= xj;
 
	    }
	}
L80:
	;
    }

    if (grow * tscal > smlnum) {

 

 

	dtrsv_(uplo, trans, diag, n, &a[a_offset], lda, &x[1], &c__1, 1L, 1L, 
		1L);
    } else {

 

	if (xmax > bignum) {

 

 

	    *scale = bignum / xmax;
	    dscal_(n, scale, &x[1], &c__1);
	    xmax = bignum;
	}

	if (notran) {

 

	    i__1 = jlast;
	    i__2 = jinc;
	    for (j = jfirst; i__2 < 0 ? j >= i__1 : j <= i__1; j += i__2) {

 


		xj = (d__1 = x[j], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		if (nounit) {
		    tjjs = a[j + j * a_dim1] * tscal;
		} else {
		    tjjs = tscal;
		    if (tscal == 1.) {
			goto L100;
		    }
		}
		tjj = (( tjjs ) >= 0 ? ( tjjs ) : -( tjjs )) ;
		if (tjj > smlnum) {

 

		    if (tjj < 1.) {
			if (xj > tjj * bignum) {

 

			    rec = 1. / xj;
			    dscal_(n, &rec, &x[1], &c__1);
			    *scale *= rec;
			    xmax *= rec;
			}
		    }
		    x[j] /= tjjs;
		    xj = (d__1 = x[j], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		} else if (tjj > 0.) {

 

		    if (xj > tjj * bignum) {

 

 


			rec = tjj * bignum / xj;
			if (cnorm[j] > 1.) {

 

 


			    rec /= cnorm[j];
			}
			dscal_(n, &rec, &x[1], &c__1);
			*scale *= rec;
			xmax *= rec;
		    }
		    x[j] /= tjjs;
		    xj = (d__1 = x[j], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		} else {

 

 


		    i__3 = *n;
		    for (i__ = 1; i__ <= i__3; ++i__) {
			x[i__] = 0.;
 
		    }
		    x[j] = 1.;
		    xj = 1.;
		    *scale = 0.;
		    xmax = 0.;
		}
L100:

 

 

		if (xj > 1.) {
		    rec = 1. / xj;
		    if (cnorm[j] > (bignum - xmax) * rec) {

 

			rec *= .5;
			dscal_(n, &rec, &x[1], &c__1);
			*scale *= rec;
		    }
		} else if (xj * cnorm[j] > bignum - xmax) {

 

		    dscal_(n, &c_b806, &x[1], &c__1);
		    *scale *= .5;
		}

		if (upper) {
		    if (j > 1) {

 
 


			i__3 = j - 1;
			d__1 = -x[j] * tscal;
			daxpy_(&i__3, &d__1, &a[j * a_dim1 + 1], &c__1, &x[1],
				 &c__1);
			i__3 = j - 1;
			i__ = idamax_(&i__3, &x[1], &c__1);
			xmax = (d__1 = x[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		    }
		} else {
		    if (j < *n) {

 
 


			i__3 = *n - j;
			d__1 = -x[j] * tscal;
			daxpy_(&i__3, &d__1, &a[j + 1 + j * a_dim1], &c__1, &
				x[j + 1], &c__1);
			i__3 = *n - j;
			i__ = j + idamax_(&i__3, &x[j + 1], &c__1);
			xmax = (d__1 = x[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		    }
		}
 
	    }

	} else {

 

	    i__2 = jlast;
	    i__1 = jinc;
	    for (j = jfirst; i__1 < 0 ? j >= i__2 : j <= i__2; j += i__1) {

 
 

		xj = (d__1 = x[j], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		uscal = tscal;
		rec = 1. / (( xmax ) >= ( 1. ) ? ( xmax ) : ( 1. )) ;
		if (cnorm[j] > (bignum - xj) * rec) {

 


		    rec *= .5;
		    if (nounit) {
			tjjs = a[j + j * a_dim1] * tscal;
		    } else {
			tjjs = tscal;
		    }
		    tjj = (( tjjs ) >= 0 ? ( tjjs ) : -( tjjs )) ;
		    if (tjj > 1.) {

 


 
			d__1 = 1., d__2 = rec * tjj;
			rec = (( d__1 ) <= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
			uscal /= tjjs;
		    }
		    if (rec < 1.) {
			dscal_(n, &rec, &x[1], &c__1);
			*scale *= rec;
			xmax *= rec;
		    }
		}

		sumj = 0.;
		if (uscal == 1.) {

 

 


		    if (upper) {
			i__3 = j - 1;
			sumj = ddot_(&i__3, &a[j * a_dim1 + 1], &c__1, &x[1], 
				&c__1);
		    } else if (j < *n) {
			i__3 = *n - j;
			sumj = ddot_(&i__3, &a[j + 1 + j * a_dim1], &c__1, &x[
				j + 1], &c__1);
		    }
		} else {

 


		    if (upper) {
			i__3 = j - 1;
			for (i__ = 1; i__ <= i__3; ++i__) {
			    sumj += a[i__ + j * a_dim1] * uscal * x[i__];
 
			}
		    } else if (j < *n) {
			i__3 = *n;
			for (i__ = j + 1; i__ <= i__3; ++i__) {
			    sumj += a[i__ + j * a_dim1] * uscal * x[i__];
 
			}
		    }
		}

		if (uscal == tscal) {

 

 


		    x[j] -= sumj;
		    xj = (d__1 = x[j], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		    if (nounit) {
			tjjs = a[j + j * a_dim1] * tscal;
		    } else {
			tjjs = tscal;
			if (tscal == 1.) {
			    goto L150;
			}
		    }

 


		    tjj = (( tjjs ) >= 0 ? ( tjjs ) : -( tjjs )) ;
		    if (tjj > smlnum) {

 

			if (tjj < 1.) {
			    if (xj > tjj * bignum) {

 


				rec = 1. / xj;
				dscal_(n, &rec, &x[1], &c__1);
				*scale *= rec;
				xmax *= rec;
			    }
			}
			x[j] /= tjjs;
		    } else if (tjj > 0.) {

 

			if (xj > tjj * bignum) {

 


			    rec = tjj * bignum / xj;
			    dscal_(n, &rec, &x[1], &c__1);
			    *scale *= rec;
			    xmax *= rec;
			}
			x[j] /= tjjs;
		    } else {

 

 


			i__3 = *n;
			for (i__ = 1; i__ <= i__3; ++i__) {
			    x[i__] = 0.;
 
			}
			x[j] = 1.;
			*scale = 0.;
			xmax = 0.;
		    }
L150:
		    ;
		} else {

 

 


		    x[j] = x[j] / tjjs - sumj;
		}
 
		d__2 = xmax, d__3 = (d__1 = x[j], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		xmax = (( d__2 ) >= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
 
	    }
	}
	*scale /= tscal;
    }

 

    if (tscal != 1.) {
	d__1 = 1. / tscal;
	dscal_(n, &d__1, &cnorm[1], &c__1);
    }

    return 0;

 

}  

  int dopgtr_(uplo, n, ap, tau, q, ldq, work, info, uplo_len)
char *uplo;
integer *n;
doublereal *ap, *tau, *q;
integer *ldq;
doublereal *work;
integer *info;
ftnlen uplo_len;
{
     
    integer q_dim1, q_offset, i__1, i__2, i__3;

     
    static integer i__, j;
    extern logical lsame_();
    static integer iinfo;
    static logical upper;
    extern   int dorg2l_(), dorg2r_();
    static integer ij;
    extern   int xerbla_();
    --ap;
    --tau;
    q_dim1 = *ldq;
    q_offset = q_dim1 + 1;
    q -= q_offset;
    --work;

     
    *info = 0;
    upper = lsame_(uplo, "U", 1L, 1L);
    if (! upper && ! lsame_(uplo, "L", 1L, 1L)) {
	*info = -1;
    } else if (*n < 0) {
	*info = -2;
    } else if (*ldq < (( 1 ) >= ( *n ) ? ( 1 ) : ( *n )) ) {
	*info = -6;
    }
    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DOPGTR", &i__1, 6L);
	return 0;
    }

 

    if (*n == 0) {
	return 0;
    }

    if (upper) {

 

 

 

 

	ij = 2;
	i__1 = *n - 1;
	for (j = 1; j <= i__1; ++j) {
	    i__2 = j - 1;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		q[i__ + j * q_dim1] = ap[ij];
		++ij;
 
	    }
	    ij += 2;
	    q[*n + j * q_dim1] = 0.;
 
	}
	i__1 = *n - 1;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    q[i__ + *n * q_dim1] = 0.;
 
	}
	q[*n + *n * q_dim1] = 1.;

 

	i__1 = *n - 1;
	i__2 = *n - 1;
	i__3 = *n - 1;
	dorg2l_(&i__1, &i__2, &i__3, &q[q_offset], ldq, &tau[1], &work[1], &
		iinfo);

    } else {

 

 

 

 

	q[q_dim1 + 1] = 1.;
	i__1 = *n;
	for (i__ = 2; i__ <= i__1; ++i__) {
	    q[i__ + q_dim1] = 0.;
 
	}
	ij = 3;
	i__1 = *n;
	for (j = 2; j <= i__1; ++j) {
	    q[j * q_dim1 + 1] = 0.;
	    i__2 = *n;
	    for (i__ = j + 1; i__ <= i__2; ++i__) {
		q[i__ + j * q_dim1] = ap[ij];
		++ij;
 
	    }
	    ij += 2;
 
	}
	if (*n > 1) {

 

	    i__1 = *n - 1;
	    i__2 = *n - 1;
	    i__3 = *n - 1;
	    dorg2r_(&i__1, &i__2, &i__3, &q[(q_dim1 << 1) + 2], ldq, &tau[1], 
		    &work[1], &iinfo);
	}
    }
    return 0;

 

}  

  int dorg2l_(m, n, k, a, lda, tau, work, info)
integer *m, *n, *k;
doublereal *a;
integer *lda;
doublereal *tau, *work;
integer *info;
{
     
    integer a_dim1, a_offset, i__1, i__2, i__3;
    doublereal d__1;

     
    static integer i__, j, l;
    extern   int dscal_(), dlarf_();
    static integer ii;
    extern   int xerbla_();
     
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --tau;
    --work;

     
    *info = 0;
    if (*m < 0) {
	*info = -1;
    } else if (*n < 0 || *n > *m) {
	*info = -2;
    } else if (*k < 0 || *k > *n) {
	*info = -3;
    } else if (*lda < (( 1 ) >= ( *m ) ? ( 1 ) : ( *m )) ) {
	*info = -5;
    }
    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DORG2L", &i__1, 6L);
	return 0;
    }

 

    if (*n <= 0) {
	return 0;
    }

 

    i__1 = *n - *k;
    for (j = 1; j <= i__1; ++j) {
	i__2 = *m;
	for (l = 1; l <= i__2; ++l) {
	    a[l + j * a_dim1] = 0.;
 
	}
	a[*m - *n + j + j * a_dim1] = 1.;
 
    }

    i__1 = *k;
    for (i__ = 1; i__ <= i__1; ++i__) {
	ii = *n - *k + i__;

 

	a[*m - *n + ii + ii * a_dim1] = 1.;
	i__2 = *m - *n + ii;
	i__3 = ii - 1;
	dlarf_("Left", &i__2, &i__3, &a[ii * a_dim1 + 1], &c__1, &tau[i__], &
		a[a_offset], lda, &work[1], 4L);
	i__2 = *m - *n + ii - 1;
	d__1 = -tau[i__];
	dscal_(&i__2, &d__1, &a[ii * a_dim1 + 1], &c__1);
	a[*m - *n + ii + ii * a_dim1] = 1. - tau[i__];

 

	i__2 = *m;
	for (l = *m - *n + ii + 1; l <= i__2; ++l) {
	    a[l + ii * a_dim1] = 0.;
 
	}
 
    }
    return 0;

 

}  

  int dorg2r_(m, n, k, a, lda, tau, work, info)
integer *m, *n, *k;
doublereal *a;
integer *lda;
doublereal *tau, *work;
integer *info;
{
     
    integer a_dim1, a_offset, i__1, i__2;
    doublereal d__1;

     
    static integer i__, j, l;
    extern   int dscal_(), dlarf_(), xerbla_();
     
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --tau;
    --work;

     
    *info = 0;
    if (*m < 0) {
	*info = -1;
    } else if (*n < 0 || *n > *m) {
	*info = -2;
    } else if (*k < 0 || *k > *n) {
	*info = -3;
    } else if (*lda < (( 1 ) >= ( *m ) ? ( 1 ) : ( *m )) ) {
	*info = -5;
    }
    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DORG2R", &i__1, 6L);
	return 0;
    }

 

    if (*n <= 0) {
	return 0;
    }

 

    i__1 = *n;
    for (j = *k + 1; j <= i__1; ++j) {
	i__2 = *m;
	for (l = 1; l <= i__2; ++l) {
	    a[l + j * a_dim1] = 0.;
 
	}
	a[j + j * a_dim1] = 1.;
 
    }

    for (i__ = *k; i__ >= 1; --i__) {

 

	if (i__ < *n) {
	    a[i__ + i__ * a_dim1] = 1.;
	    i__1 = *m - i__ + 1;
	    i__2 = *n - i__;
	    dlarf_("Left", &i__1, &i__2, &a[i__ + i__ * a_dim1], &c__1, &tau[
		    i__], &a[i__ + (i__ + 1) * a_dim1], lda, &work[1], 4L);
	}
	if (i__ < *m) {
	    i__1 = *m - i__;
	    d__1 = -tau[i__];
	    dscal_(&i__1, &d__1, &a[i__ + 1 + i__ * a_dim1], &c__1);
	}
	a[i__ + i__ * a_dim1] = 1. - tau[i__];

 

	i__1 = i__ - 1;
	for (l = 1; l <= i__1; ++l) {
	    a[l + i__ * a_dim1] = 0.;
 
	}
 
    }
    return 0;

 

}  

  int dorm2r_(side, trans, m, n, k, a, lda, tau, c__, ldc, 
	work, info, side_len, trans_len)
char *side, *trans;
integer *m, *n, *k;
doublereal *a;
integer *lda;
doublereal *tau, *c__;
integer *ldc;
doublereal *work;
integer *info;
ftnlen side_len;
ftnlen trans_len;
{
     
    integer a_dim1, a_offset, c_dim1, c_offset, i__1, i__2;

     
    static logical left;
    static integer i__;
    extern   int dlarf_();
    extern logical lsame_();
    static integer i1, i2, i3, ic, jc, mi, ni, nq;
    extern   int xerbla_();
    static logical notran;
    static doublereal aii;
     
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --tau;
    c_dim1 = *ldc;
    c_offset = c_dim1 + 1;
    c__ -= c_offset;
    --work;

     
    *info = 0;
    left = lsame_(side, "L", 1L, 1L);
    notran = lsame_(trans, "N", 1L, 1L);

 

    if (left) {
	nq = *m;
    } else {
	nq = *n;
    }
    if (! left && ! lsame_(side, "R", 1L, 1L)) {
	*info = -1;
    } else if (! notran && ! lsame_(trans, "T", 1L, 1L)) {
	*info = -2;
    } else if (*m < 0) {
	*info = -3;
    } else if (*n < 0) {
	*info = -4;
    } else if (*k < 0 || *k > nq) {
	*info = -5;
    } else if (*lda < (( 1 ) >= ( nq ) ? ( 1 ) : ( nq )) ) {
	*info = -7;
    } else if (*ldc < (( 1 ) >= ( *m ) ? ( 1 ) : ( *m )) ) {
	*info = -10;
    }
    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DORM2R", &i__1, 6L);
	return 0;
    }

 

    if (*m == 0 || *n == 0 || *k == 0) {
	return 0;
    }

    if (left && ! notran || ! left && notran) {
	i1 = 1;
	i2 = *k;
	i3 = 1;
    } else {
	i1 = *k;
	i2 = 1;
	i3 = -1;
    }

    if (left) {
	ni = *n;
	jc = 1;
    } else {
	mi = *m;
	ic = 1;
    }

    i__1 = i2;
    i__2 = i3;
    for (i__ = i1; i__2 < 0 ? i__ >= i__1 : i__ <= i__1; i__ += i__2) {
	if (left) {

 

	    mi = *m - i__ + 1;
	    ic = i__;
	} else {

 

	    ni = *n - i__ + 1;
	    jc = i__;
	}

 

	aii = a[i__ + i__ * a_dim1];
	a[i__ + i__ * a_dim1] = 1.;
	dlarf_(side, &mi, &ni, &a[i__ + i__ * a_dim1], &c__1, &tau[i__], &c__[
		ic + jc * c_dim1], ldc, &work[1], 1L);
	a[i__ + i__ * a_dim1] = aii;
 
    }
    return 0;

 

}  

  int dorml2_(side, trans, m, n, k, a, lda, tau, c__, ldc, 
	work, info, side_len, trans_len)
char *side, *trans;
integer *m, *n, *k;
doublereal *a;
integer *lda;
doublereal *tau, *c__;
integer *ldc;
doublereal *work;
integer *info;
ftnlen side_len;
ftnlen trans_len;
{
     
    integer a_dim1, a_offset, c_dim1, c_offset, i__1, i__2;

     
    static logical left;
    static integer i__;
    extern   int dlarf_();
    extern logical lsame_();
    static integer i1, i2, i3, ic, jc, mi, ni, nq;
    extern   int xerbla_();
    static logical notran;
    static doublereal aii;
     
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --tau;
    c_dim1 = *ldc;
    c_offset = c_dim1 + 1;
    c__ -= c_offset;
    --work;

     
    *info = 0;
    left = lsame_(side, "L", 1L, 1L);
    notran = lsame_(trans, "N", 1L, 1L);

 

    if (left) {
	nq = *m;
    } else {
	nq = *n;
    }
    if (! left && ! lsame_(side, "R", 1L, 1L)) {
	*info = -1;
    } else if (! notran && ! lsame_(trans, "T", 1L, 1L)) {
	*info = -2;
    } else if (*m < 0) {
	*info = -3;
    } else if (*n < 0) {
	*info = -4;
    } else if (*k < 0 || *k > nq) {
	*info = -5;
    } else if (*lda < (( 1 ) >= ( *k ) ? ( 1 ) : ( *k )) ) {
	*info = -7;
    } else if (*ldc < (( 1 ) >= ( *m ) ? ( 1 ) : ( *m )) ) {
	*info = -10;
    }
    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DORML2", &i__1, 6L);
	return 0;
    }

 

    if (*m == 0 || *n == 0 || *k == 0) {
	return 0;
    }

    if (left && notran || ! left && ! notran) {
	i1 = 1;
	i2 = *k;
	i3 = 1;
    } else {
	i1 = *k;
	i2 = 1;
	i3 = -1;
    }

    if (left) {
	ni = *n;
	jc = 1;
    } else {
	mi = *m;
	ic = 1;
    }

    i__1 = i2;
    i__2 = i3;
    for (i__ = i1; i__2 < 0 ? i__ >= i__1 : i__ <= i__1; i__ += i__2) {
	if (left) {

 

	    mi = *m - i__ + 1;
	    ic = i__;
	} else {

 

	    ni = *n - i__ + 1;
	    jc = i__;
	}

 

	aii = a[i__ + i__ * a_dim1];
	a[i__ + i__ * a_dim1] = 1.;
	dlarf_(side, &mi, &ni, &a[i__ + i__ * a_dim1], lda, &tau[i__], &c__[
		ic + jc * c_dim1], ldc, &work[1], 1L);
	a[i__ + i__ * a_dim1] = aii;
 
    }
    return 0;

 

}  

  int dormlq_(side, trans, m, n, k, a, lda, tau, c__, ldc, 
	work, lwork, info, side_len, trans_len)
char *side, *trans;
integer *m, *n, *k;
doublereal *a;
integer *lda;
doublereal *tau, *c__;
integer *ldc;
doublereal *work;
integer *lwork, *info;
ftnlen side_len;
ftnlen trans_len;
{
     
    address a__1[2];
    integer a_dim1, a_offset, c_dim1, c_offset, i__1, i__2, i__3[2], i__4, 
	    i__5;
    char ch__1[2];

     
      int s_cat();

     
    static logical left;
    static integer i__;
    static doublereal t[4160]	 ;
    extern logical lsame_();
    static integer nbmin, iinfo, i1, i2, i3;
    extern   int dorml2_();
    static integer ib, ic, jc, nb, mi, ni;
    extern   int dlarfb_();
    static integer nq, nw;
    extern   int dlarft_(), xerbla_();
    extern integer ilaenv_();
    static logical notran;
    static integer ldwork;
    static char transt[1];
    static integer iws;
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --tau;
    c_dim1 = *ldc;
    c_offset = c_dim1 + 1;
    c__ -= c_offset;
    --work;

     
    *info = 0;
    left = lsame_(side, "L", 1L, 1L);
    notran = lsame_(trans, "N", 1L, 1L);

 

    if (left) {
	nq = *m;
	nw = *n;
    } else {
	nq = *n;
	nw = *m;
    }
    if (! left && ! lsame_(side, "R", 1L, 1L)) {
	*info = -1;
    } else if (! notran && ! lsame_(trans, "T", 1L, 1L)) {
	*info = -2;
    } else if (*m < 0) {
	*info = -3;
    } else if (*n < 0) {
	*info = -4;
    } else if (*k < 0 || *k > nq) {
	*info = -5;
    } else if (*lda < (( 1 ) >= ( *k ) ? ( 1 ) : ( *k )) ) {
	*info = -7;
    } else if (*ldc < (( 1 ) >= ( *m ) ? ( 1 ) : ( *m )) ) {
	*info = -10;
    } else if (*lwork < (( 1 ) >= ( nw ) ? ( 1 ) : ( nw )) ) {
	*info = -12;
    }
    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DORMLQ", &i__1, 6L);
	return 0;
    }

 

    if (*m == 0 || *n == 0 || *k == 0) {
	work[1] = 1.;
	return 0;
    }

 
 

 
 
    i__3[0] = 1, a__1[0] = side;
    i__3[1] = 1, a__1[1] = trans;
    s_cat(ch__1, a__1, i__3, &c__2, 2L);
    i__1 = 64, i__2 = ilaenv_(&c__1, "DORMLQ", ch__1, m, n, k, &c_n1, 6L, 2L);
    nb = (( i__1 ) <= ( i__2 ) ? ( i__1 ) : ( i__2 )) ;
    nbmin = 2;
    ldwork = nw;
    if (nb > 1 && nb < *k) {
	iws = nw * nb;
	if (*lwork < iws) {
	    nb = *lwork / ldwork;
 
 
	    i__3[0] = 1, a__1[0] = side;
	    i__3[1] = 1, a__1[1] = trans;
	    s_cat(ch__1, a__1, i__3, &c__2, 2L);
	    i__1 = 2, i__2 = ilaenv_(&c__2, "DORMLQ", ch__1, m, n, k, &c_n1, 
		    6L, 2L);
	    nbmin = (( i__1 ) >= ( i__2 ) ? ( i__1 ) : ( i__2 )) ;
	}
    } else {
	iws = nw;
    }

    if (nb < nbmin || nb >= *k) {

 

	dorml2_(side, trans, m, n, k, &a[a_offset], lda, &tau[1], &c__[
		c_offset], ldc, &work[1], &iinfo, 1L, 1L);
    } else {

 

	if (left && notran || ! left && ! notran) {
	    i1 = 1;
	    i2 = *k;
	    i3 = nb;
	} else {
	    i1 = (*k - 1) / nb * nb + 1;
	    i2 = 1;
	    i3 = -nb;
	}

	if (left) {
	    ni = *n;
	    jc = 1;
	} else {
	    mi = *m;
	    ic = 1;
	}

	if (notran) {
	    *(unsigned char *)transt = 'T';
	} else {
	    *(unsigned char *)transt = 'N';
	}

	i__1 = i2;
	i__2 = i3;
	for (i__ = i1; i__2 < 0 ? i__ >= i__1 : i__ <= i__1; i__ += i__2) {
 
	    i__4 = nb, i__5 = *k - i__ + 1;
	    ib = (( i__4 ) <= ( i__5 ) ? ( i__4 ) : ( i__5 )) ;

 
 

	    i__4 = nq - i__ + 1;
	    dlarft_("Forward", "Rowwise", &i__4, &ib, &a[i__ + i__ * a_dim1], 
		    lda, &tau[i__], t, &c__65, 7L, 7L);
	    if (left) {

 

		mi = *m - i__ + 1;
		ic = i__;
	    } else {

 

		ni = *n - i__ + 1;
		jc = i__;
	    }

 

	    dlarfb_(side, transt, "Forward", "Rowwise", &mi, &ni, &ib, &a[i__ 
		    + i__ * a_dim1], lda, t, &c__65, &c__[ic + jc * c_dim1], 
		    ldc, &work[1], &ldwork, 1L, 1L, 7L, 7L);
 
	}
    }
    work[1] = (doublereal) iws;
    return 0;

 

}  

  int dormqr_(side, trans, m, n, k, a, lda, tau, c__, ldc, 
	work, lwork, info, side_len, trans_len)
char *side, *trans;
integer *m, *n, *k;
doublereal *a;
integer *lda;
doublereal *tau, *c__;
integer *ldc;
doublereal *work;
integer *lwork, *info;
ftnlen side_len;
ftnlen trans_len;
{
     
    address a__1[2];
    integer a_dim1, a_offset, c_dim1, c_offset, i__1, i__2, i__3[2], i__4, 
	    i__5;
    char ch__1[2];

     
      int s_cat();

     
    static logical left;
    static integer i__;
    static doublereal t[4160]	 ;
    extern logical lsame_();
    static integer nbmin, iinfo, i1, i2, i3;
    extern   int dorm2r_();
    static integer ib, ic, jc, nb, mi, ni;
    extern   int dlarfb_();
    static integer nq, nw;
    extern   int dlarft_(), xerbla_();
    extern integer ilaenv_();
    static logical notran;
    static integer ldwork, iws;
     
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --tau;
    c_dim1 = *ldc;
    c_offset = c_dim1 + 1;
    c__ -= c_offset;
    --work;

     
    *info = 0;
    left = lsame_(side, "L", 1L, 1L);
    notran = lsame_(trans, "N", 1L, 1L);

 

    if (left) {
	nq = *m;
	nw = *n;
    } else {
	nq = *n;
	nw = *m;
    }
    if (! left && ! lsame_(side, "R", 1L, 1L)) {
	*info = -1;
    } else if (! notran && ! lsame_(trans, "T", 1L, 1L)) {
	*info = -2;
    } else if (*m < 0) {
	*info = -3;
    } else if (*n < 0) {
	*info = -4;
    } else if (*k < 0 || *k > nq) {
	*info = -5;
    } else if (*lda < (( 1 ) >= ( nq ) ? ( 1 ) : ( nq )) ) {
	*info = -7;
    } else if (*ldc < (( 1 ) >= ( *m ) ? ( 1 ) : ( *m )) ) {
	*info = -10;
    } else if (*lwork < (( 1 ) >= ( nw ) ? ( 1 ) : ( nw )) ) {
	*info = -12;
    }
    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DORMQR", &i__1, 6L);
	return 0;
    }

 

    if (*m == 0 || *n == 0 || *k == 0) {
	work[1] = 1.;
	return 0;
    }

 
 

 
 
    i__3[0] = 1, a__1[0] = side;
    i__3[1] = 1, a__1[1] = trans;
    s_cat(ch__1, a__1, i__3, &c__2, 2L);
    i__1 = 64, i__2 = ilaenv_(&c__1, "DORMQR", ch__1, m, n, k, &c_n1, 6L, 2L);
    nb = (( i__1 ) <= ( i__2 ) ? ( i__1 ) : ( i__2 )) ;
    nbmin = 2;
    ldwork = nw;
    if (nb > 1 && nb < *k) {
	iws = nw * nb;
	if (*lwork < iws) {
	    nb = *lwork / ldwork;
 
 
	    i__3[0] = 1, a__1[0] = side;
	    i__3[1] = 1, a__1[1] = trans;
	    s_cat(ch__1, a__1, i__3, &c__2, 2L);
	    i__1 = 2, i__2 = ilaenv_(&c__2, "DORMQR", ch__1, m, n, k, &c_n1, 
		    6L, 2L);
	    nbmin = (( i__1 ) >= ( i__2 ) ? ( i__1 ) : ( i__2 )) ;
	}
    } else {
	iws = nw;
    }

    if (nb < nbmin || nb >= *k) {

 

	dorm2r_(side, trans, m, n, k, &a[a_offset], lda, &tau[1], &c__[
		c_offset], ldc, &work[1], &iinfo, 1L, 1L);
    } else {

 

	if (left && ! notran || ! left && notran) {
	    i1 = 1;
	    i2 = *k;
	    i3 = nb;
	} else {
	    i1 = (*k - 1) / nb * nb + 1;
	    i2 = 1;
	    i3 = -nb;
	}

	if (left) {
	    ni = *n;
	    jc = 1;
	} else {
	    mi = *m;
	    ic = 1;
	}

	i__1 = i2;
	i__2 = i3;
	for (i__ = i1; i__2 < 0 ? i__ >= i__1 : i__ <= i__1; i__ += i__2) {
 
	    i__4 = nb, i__5 = *k - i__ + 1;
	    ib = (( i__4 ) <= ( i__5 ) ? ( i__4 ) : ( i__5 )) ;

 
 

	    i__4 = nq - i__ + 1;
	    dlarft_("Forward", "Columnwise", &i__4, &ib, &a[i__ + i__ * 
		    a_dim1], lda, &tau[i__], t, &c__65, 7L, 10L);
	    if (left) {

 

		mi = *m - i__ + 1;
		ic = i__;
	    } else {

 

		ni = *n - i__ + 1;
		jc = i__;
	    }

 

	    dlarfb_(side, trans, "Forward", "Columnwise", &mi, &ni, &ib, &a[
		    i__ + i__ * a_dim1], lda, t, &c__65, &c__[ic + jc * 
		    c_dim1], ldc, &work[1], &ldwork, 1L, 1L, 7L, 10L);
 
	}
    }
    work[1] = (doublereal) iws;
    return 0;

 

}  

  int dpptrf_(uplo, n, ap, info, uplo_len)
char *uplo;
integer *n;
doublereal *ap;
integer *info;
ftnlen uplo_len;
{
     
    integer i__1, i__2;
    doublereal d__1;

     
    double sqrt();

     
    extern doublereal ddot_();
    extern   int dspr_();
    static integer j;
    extern   int dscal_();
    extern logical lsame_();
    static logical upper;
    extern   int dtpsv_();
    static integer jc, jj;
    extern   int xerbla_();
    static doublereal ajj;
     
    --ap;

     
    *info = 0;
    upper = lsame_(uplo, "U", 1L, 1L);
    if (! upper && ! lsame_(uplo, "L", 1L, 1L)) {
	*info = -1;
    } else if (*n < 0) {
	*info = -2;
    }
    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DPPTRF", &i__1, 6L);
	return 0;
    }

 

    if (*n == 0) {
	return 0;
    }

    if (upper) {

 

	jj = 0;
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    jc = jj + 1;
	    jj += j;

 

	    if (j > 1) {
		i__2 = j - 1;
		dtpsv_("Upper", "Transpose", "Non-unit", &i__2, &ap[1], &ap[
			jc], &c__1, 5L, 9L, 8L);
	    }

 


	    i__2 = j - 1;
	    ajj = ap[jj] - ddot_(&i__2, &ap[jc], &c__1, &ap[jc], &c__1);
	    if (ajj <= 0.) {
		ap[jj] = ajj;
		goto L30;
	    }
	    ap[jj] = sqrt(ajj);
 
	}
    } else {

 

	jj = 1;
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {

 


	    ajj = ap[jj];
	    if (ajj <= 0.) {
		ap[jj] = ajj;
		goto L30;
	    }
	    ajj = sqrt(ajj);
	    ap[jj] = ajj;

 

 

	    if (j < *n) {
		i__2 = *n - j;
		d__1 = 1. / ajj;
		dscal_(&i__2, &d__1, &ap[jj + 1], &c__1);
		i__2 = *n - j;
		dspr_("Lower", &i__2, &c_b418, &ap[jj + 1], &c__1, &ap[jj + *
			n - j + 1], 5L);
		jj = jj + *n - j + 1;
	    }
 
	}
    }
    goto L40;

L30:
    *info = j;

L40:
    return 0;

 

}  

  int drscl_(n, sa, sx, incx)
integer *n;
doublereal *sa, *sx;
integer *incx;
{
    static doublereal cden;
    static logical done;
    static doublereal cnum, cden1, cnum1;
    extern   int dscal_(), dlabad_();
    extern doublereal dlamch_();
    static doublereal bignum, smlnum, mul;
    --sx;

     
    if (*n <= 0) {
	return 0;
    }

 

    smlnum = dlamch_("S", 1L);
    bignum = 1. / smlnum;
    dlabad_(&smlnum, &bignum);

 

    cden = *sa;
    cnum = 1.;

L10:
    cden1 = cden * smlnum;
    cnum1 = cnum / bignum;
    if ((( cden1 ) >= 0 ? ( cden1 ) : -( cden1 ))  > (( cnum ) >= 0 ? ( cnum ) : -( cnum ))  && cnum != 0.) {

 


	mul = smlnum;
	done = (0) ;
	cden = cden1;
    } else if ((( cnum1 ) >= 0 ? ( cnum1 ) : -( cnum1 ))  > (( cden ) >= 0 ? ( cden ) : -( cden )) ) {

 


	mul = bignum;
	done = (0) ;
	cnum = cnum1;
    } else {

 

	mul = cnum / cden;
	done = (1) ;
    }

 

    dscal_(n, &mul, &sx[1], incx);

    if (! done) {
	goto L10;
    }

    return 0;

 

}  

  int dspev_(jobz, uplo, n, ap, w, z__, ldz, work, info, 
	jobz_len, uplo_len)
char *jobz, *uplo;
integer *n;
doublereal *ap, *w, *z__;
integer *ldz;
doublereal *work;
integer *info;
ftnlen jobz_len;
ftnlen uplo_len;
{
     
    integer z_dim1, z_offset, i__1;
    doublereal d__1;

     
    double sqrt();

     
    static integer inde;
    static doublereal anrm;
    static integer imax;
    static doublereal rmin, rmax;
    extern   int dscal_();
    static doublereal sigma;
    extern logical lsame_();
    static integer iinfo;
    static logical wantz;
    extern doublereal dlamch_();
    static integer iscale;
    static doublereal safmin;
    extern   int xerbla_();
    static doublereal bignum;
    extern doublereal dlansp_();
    static integer indtau;
    extern   int dsterf_();
    static integer indwrk;
    extern   int dopgtr_(), dsptrd_(), dsteqr_();
    static doublereal smlnum, eps;
    --ap;
    --w;
    z_dim1 = *ldz;
    z_offset = z_dim1 + 1;
    z__ -= z_offset;
    --work;

     
    wantz = lsame_(jobz, "V", 1L, 1L);

    *info = 0;
    if (! (wantz || lsame_(jobz, "N", 1L, 1L))) {
	*info = -1;
    } else if (! (lsame_(uplo, "U", 1L, 1L) || lsame_(uplo, "L", 1L, 1L))) {
	*info = -2;
    } else if (*n < 0) {
	*info = -3;
    } else if (*ldz < 1 || wantz && *ldz < *n) {
	*info = -7;
    }

    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DSPEV ", &i__1, 6L);
	return 0;
    }

 

    if (*n == 0) {
	return 0;
    }

    if (*n == 1) {
	w[1] = ap[1];
	if (wantz) {
	    z__[z_dim1 + 1] = 1.;
	}
	return 0;
    }

 

    safmin = dlamch_("Safe minimum", 12L);
    eps = dlamch_("Precision", 9L);
    smlnum = safmin / eps;
    bignum = 1. / smlnum;
    rmin = sqrt(smlnum);
    rmax = sqrt(bignum);

 

    anrm = dlansp_("M", uplo, n, &ap[1], &work[1], 1L, 1L);
    iscale = 0;
    if (anrm > 0. && anrm < rmin) {
	iscale = 1;
	sigma = rmin / anrm;
    } else if (anrm > rmax) {
	iscale = 1;
	sigma = rmax / anrm;
    }
    if (iscale == 1) {
	i__1 = *n * (*n + 1) / 2;
	dscal_(&i__1, &sigma, &ap[1], &c__1);
    }

 


    inde = 1;
    indtau = inde + *n;
    dsptrd_(uplo, n, &ap[1], &w[1], &work[inde], &work[indtau], &iinfo, 1L);

 
 

    if (! wantz) {
	dsterf_(n, &w[1], &work[inde], info);
    } else {
	indwrk = indtau + *n;
	dopgtr_(uplo, n, &ap[1], &work[indtau], &z__[z_offset], ldz, &work[
		indwrk], &iinfo, 1L);
	dsteqr_(jobz, n, &w[1], &work[inde], &z__[z_offset], ldz, &work[
		indtau], info, 1L);
    }

 

    if (iscale == 1) {
	if (*info == 0) {
	    imax = *n;
	} else {
	    imax = *info - 1;
	}
	d__1 = 1. / sigma;
	dscal_(&imax, &d__1, &w[1], &c__1);
    }

    return 0;

 

}  

  int dspgst_(itype, uplo, n, ap, bp, info, uplo_len)
integer *itype;
char *uplo;
integer *n;
doublereal *ap, *bp;
integer *info;
ftnlen uplo_len;
{
     
    integer i__1, i__2;
    doublereal d__1;

     
    extern doublereal ddot_();
    extern   int dspr2_();
    static integer j, k;
    extern   int dscal_();
    extern logical lsame_();
    extern   int daxpy_(), dspmv_();
    static logical upper;
    static integer j1, k1;
    extern   int dtpmv_(), dtpsv_();
    static integer jj, kk;
    static doublereal ct;
    extern   int xerbla_();
    static doublereal ajj;
    static integer j1j1;
    static doublereal akk;
    static integer k1k1;
    static doublereal bjj, bkk;
    --bp;
    --ap;
    *info = 0;
    upper = lsame_(uplo, "U", 1L, 1L);
    if (*itype < 1 || *itype > 3) {
	*info = -1;
    } else if (! upper && ! lsame_(uplo, "L", 1L, 1L)) {
	*info = -2;
    } else if (*n < 0) {
	*info = -3;
    }
    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DSPGST", &i__1, 6L);
	return 0;
    }

    if (*itype == 1) {
	if (upper) {

 

 

	    jj = 0;
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		j1 = jj + 1;
		jj += j;

 


		bjj = bp[jj];
		dtpsv_(uplo, "Transpose", "Nonunit", &j, &bp[1], &ap[j1], &
			c__1, 1L, 9L, 7L);
		i__2 = j - 1;
		dspmv_(uplo, &i__2, &c_b418, &ap[1], &bp[j1], &c__1, &c_b89, &
			ap[j1], &c__1, 1L);
		i__2 = j - 1;
		d__1 = 1. / bjj;
		dscal_(&i__2, &d__1, &ap[j1], &c__1);
		i__2 = j - 1;
		ap[jj] = (ap[jj] - ddot_(&i__2, &ap[j1], &c__1, &bp[j1], &
			c__1)) / bjj;
 
	    }
	} else {

 

 


	    kk = 1;
	    i__1 = *n;
	    for (k = 1; k <= i__1; ++k) {
		k1k1 = kk + *n - k + 1;

 

		akk = ap[kk];
		bkk = bp[kk];
 
		d__1 = bkk;
		akk /= d__1 * d__1;
		ap[kk] = akk;
		if (k < *n) {
		    i__2 = *n - k;
		    d__1 = 1. / bkk;
		    dscal_(&i__2, &d__1, &ap[kk + 1], &c__1);
		    ct = akk * -.5;
		    i__2 = *n - k;
		    daxpy_(&i__2, &ct, &bp[kk + 1], &c__1, &ap[kk + 1], &c__1)
			    ;
		    i__2 = *n - k;
		    dspr2_(uplo, &i__2, &c_b418, &ap[kk + 1], &c__1, &bp[kk + 
			    1], &c__1, &ap[k1k1], 1L);
		    i__2 = *n - k;
		    daxpy_(&i__2, &ct, &bp[kk + 1], &c__1, &ap[kk + 1], &c__1)
			    ;
		    i__2 = *n - k;
		    dtpsv_(uplo, "No transpose", "Non-unit", &i__2, &bp[k1k1],
			     &ap[kk + 1], &c__1, 1L, 12L, 8L);
		}
		kk = k1k1;
 
	    }
	}
    } else {
	if (upper) {

 

 

	    kk = 0;
	    i__1 = *n;
	    for (k = 1; k <= i__1; ++k) {
		k1 = kk + 1;
		kk += k;

 

		akk = ap[kk];
		bkk = bp[kk];
		i__2 = k - 1;
		dtpmv_(uplo, "No transpose", "Non-unit", &i__2, &bp[1], &ap[
			k1], &c__1, 1L, 12L, 8L);
		ct = akk * .5;
		i__2 = k - 1;
		daxpy_(&i__2, &ct, &bp[k1], &c__1, &ap[k1], &c__1);
		i__2 = k - 1;
		dspr2_(uplo, &i__2, &c_b89, &ap[k1], &c__1, &bp[k1], &c__1, &
			ap[1], 1L);
		i__2 = k - 1;
		daxpy_(&i__2, &ct, &bp[k1], &c__1, &ap[k1], &c__1);
		i__2 = k - 1;
		dscal_(&i__2, &bkk, &ap[k1], &c__1);
 
		d__1 = bkk;
		ap[kk] = akk * (d__1 * d__1);
 
	    }
	} else {

 

 


	    jj = 1;
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		j1j1 = jj + *n - j + 1;

 


		ajj = ap[jj];
		bjj = bp[jj];
		i__2 = *n - j;
		ap[jj] = ajj * bjj + ddot_(&i__2, &ap[jj + 1], &c__1, &bp[jj 
			+ 1], &c__1);
		i__2 = *n - j;
		dscal_(&i__2, &bjj, &ap[jj + 1], &c__1);
		i__2 = *n - j;
		dspmv_(uplo, &i__2, &c_b89, &ap[j1j1], &bp[jj + 1], &c__1, &
			c_b89, &ap[jj + 1], &c__1, 1L);
		i__2 = *n - j + 1;
		dtpmv_(uplo, "Transpose", "Non-unit", &i__2, &bp[jj], &ap[jj],
			 &c__1, 1L, 9L, 8L);
		jj = j1j1;
 
	    }
	}
    }
    return 0;

 

}  

  int dspgv_(itype, jobz, uplo, n, ap, bp, w, z__, ldz, work, 
	info, jobz_len, uplo_len)
integer *itype;
char *jobz, *uplo;
integer *n;
doublereal *ap, *bp, *w, *z__;
integer *ldz;
doublereal *work;
integer *info;
ftnlen jobz_len;
ftnlen uplo_len;
{
     
    integer z_dim1, z_offset, i__1;

     
    static integer neig, j;
    extern logical lsame_();
    extern   int dspev_();
    static char trans[1];
    static logical upper;
    extern   int dtpmv_(), dtpsv_();
    static logical wantz;
    extern   int xerbla_(), dpptrf_(), dspgst_();
     
    --ap;
    --bp;
    --w;
    z_dim1 = *ldz;
    z_offset = z_dim1 + 1;
    z__ -= z_offset;
    --work;

     
    wantz = lsame_(jobz, "V", 1L, 1L);
    upper = lsame_(uplo, "U", 1L, 1L);

    *info = 0;
    if (*itype < 0 || *itype > 3) {
	*info = -1;
    } else if (! (wantz || lsame_(jobz, "N", 1L, 1L))) {
	*info = -2;
    } else if (! (upper || lsame_(uplo, "L", 1L, 1L))) {
	*info = -3;
    } else if (*n < 0) {
	*info = -4;
    } else if (*ldz < 1 || wantz && *ldz < *n) {
	*info = -9;
    }
    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DSPGV ", &i__1, 6L);
	return 0;
    }

 

    if (*n == 0) {
	return 0;
    }

 

    dpptrf_(uplo, n, &bp[1], info, 1L);
    if (*info != 0) {
	*info = *n + *info;
	return 0;
    }

 

    dspgst_(itype, uplo, n, &ap[1], &bp[1], info, 1L);
    dspev_(jobz, uplo, n, &ap[1], &w[1], &z__[z_offset], ldz, &work[1], info, 
	    1L, 1L);

    if (wantz) {

 

	neig = *n;
	if (*info > 0) {
	    neig = *info - 1;
	}
	if (*itype == 1 || *itype == 2) {

 
 


	    if (upper) {
		*(unsigned char *)trans = 'N';
	    } else {
		*(unsigned char *)trans = 'T';
	    }

	    i__1 = neig;
	    for (j = 1; j <= i__1; ++j) {
		dtpsv_(uplo, trans, "Non-unit", n, &bp[1], &z__[j * z_dim1 + 
			1], &c__1, 1L, 1L, 8L);
 
	    }

	} else if (*itype == 3) {

 
 

	    if (upper) {
		*(unsigned char *)trans = 'T';
	    } else {
		*(unsigned char *)trans = 'N';
	    }

	    i__1 = neig;
	    for (j = 1; j <= i__1; ++j) {
		dtpmv_(uplo, trans, "Non-unit", n, &bp[1], &z__[j * z_dim1 + 
			1], &c__1, 1L, 1L, 8L);
 
	    }
	}
    }
    return 0;

 

}  

  int dspmv_(uplo, n, alpha, ap, x, incx, beta, y, incy, 
	uplo_len)
char *uplo;
integer *n;
doublereal *alpha, *ap, *x;
integer *incx;
doublereal *beta, *y;
integer *incy;
ftnlen uplo_len;
{
     
    integer i__1, i__2;

     
    static integer info;
    static doublereal temp1, temp2;
    static integer i__, j, k;
    extern logical lsame_();
    static integer kk, ix, iy, jx, jy, kx, ky;
    extern   int xerbla_();
     
    --y;
    --x;
    --ap;

     
    info = 0;
    if (! lsame_(uplo, "U", 1L, 1L) && ! lsame_(uplo, "L", 1L, 1L)) {
	info = 1;
    } else if (*n < 0) {
	info = 2;
    } else if (*incx == 0) {
	info = 6;
    } else if (*incy == 0) {
	info = 9;
    }
    if (info != 0) {
	xerbla_("DSPMV ", &info, 6L);
	return 0;
    }

 

    if (*n == 0 || *alpha == 0. && *beta == 1.) {
	return 0;
    }

 

    if (*incx > 0) {
	kx = 1;
    } else {
	kx = 1 - (*n - 1) * *incx;
    }
    if (*incy > 0) {
	ky = 1;
    } else {
	ky = 1 - (*n - 1) * *incy;
    }

 

 

 

    if (*beta != 1.) {
	if (*incy == 1) {
	    if (*beta == 0.) {
		i__1 = *n;
		for (i__ = 1; i__ <= i__1; ++i__) {
		    y[i__] = 0.;
 
		}
	    } else {
		i__1 = *n;
		for (i__ = 1; i__ <= i__1; ++i__) {
		    y[i__] = *beta * y[i__];
 
		}
	    }
	} else {
	    iy = ky;
	    if (*beta == 0.) {
		i__1 = *n;
		for (i__ = 1; i__ <= i__1; ++i__) {
		    y[iy] = 0.;
		    iy += *incy;
 
		}
	    } else {
		i__1 = *n;
		for (i__ = 1; i__ <= i__1; ++i__) {
		    y[iy] = *beta * y[iy];
		    iy += *incy;
 
		}
	    }
	}
    }
    if (*alpha == 0.) {
	return 0;
    }
    kk = 1;
    if (lsame_(uplo, "U", 1L, 1L)) {

 

	if (*incx == 1 && *incy == 1) {
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		temp1 = *alpha * x[j];
		temp2 = 0.;
		k = kk;
		i__2 = j - 1;
		for (i__ = 1; i__ <= i__2; ++i__) {
		    y[i__] += temp1 * ap[k];
		    temp2 += ap[k] * x[i__];
		    ++k;
 
		}
		y[j] = y[j] + temp1 * ap[kk + j - 1] + *alpha * temp2;
		kk += j;
 
	    }
	} else {
	    jx = kx;
	    jy = ky;
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		temp1 = *alpha * x[jx];
		temp2 = 0.;
		ix = kx;
		iy = ky;
		i__2 = kk + j - 2;
		for (k = kk; k <= i__2; ++k) {
		    y[iy] += temp1 * ap[k];
		    temp2 += ap[k] * x[ix];
		    ix += *incx;
		    iy += *incy;
 
		}
		y[jy] = y[jy] + temp1 * ap[kk + j - 1] + *alpha * temp2;
		jx += *incx;
		jy += *incy;
		kk += j;
 
	    }
	}
    } else {

 

	if (*incx == 1 && *incy == 1) {
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		temp1 = *alpha * x[j];
		temp2 = 0.;
		y[j] += temp1 * ap[kk];
		k = kk + 1;
		i__2 = *n;
		for (i__ = j + 1; i__ <= i__2; ++i__) {
		    y[i__] += temp1 * ap[k];
		    temp2 += ap[k] * x[i__];
		    ++k;
 
		}
		y[j] += *alpha * temp2;
		kk += *n - j + 1;
 
	    }
	} else {
	    jx = kx;
	    jy = ky;
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		temp1 = *alpha * x[jx];
		temp2 = 0.;
		y[jy] += temp1 * ap[kk];
		ix = jx;
		iy = jy;
		i__2 = kk + *n - j;
		for (k = kk + 1; k <= i__2; ++k) {
		    ix += *incx;
		    iy += *incy;
		    y[iy] += temp1 * ap[k];
		    temp2 += ap[k] * x[ix];
 
		}
		y[jy] += *alpha * temp2;
		jx += *incx;
		jy += *incy;
		kk += *n - j + 1;
 
	    }
	}
    }

    return 0;

 

}  

  int dspr_(uplo, n, alpha, x, incx, ap, uplo_len)
char *uplo;
integer *n;
doublereal *alpha, *x;
integer *incx;
doublereal *ap;
ftnlen uplo_len;
{
     
    integer i__1, i__2;

     
    static integer info;
    static doublereal temp;
    static integer i__, j, k;
    extern logical lsame_();
    static integer kk, ix, jx, kx;
    extern   int xerbla_();
    --ap;
    --x;

     
    info = 0;
    if (! lsame_(uplo, "U", 1L, 1L) && ! lsame_(uplo, "L", 1L, 1L)) {
	info = 1;
    } else if (*n < 0) {
	info = 2;
    } else if (*incx == 0) {
	info = 5;
    }
    if (info != 0) {
	xerbla_("DSPR  ", &info, 6L);
	return 0;
    }

 

    if (*n == 0 || *alpha == 0.) {
	return 0;
    }

 

    if (*incx <= 0) {
	kx = 1 - (*n - 1) * *incx;
    } else if (*incx != 1) {
	kx = 1;
    }

 

 

    kk = 1;
    if (lsame_(uplo, "U", 1L, 1L)) {

 

	if (*incx == 1) {
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		if (x[j] != 0.) {
		    temp = *alpha * x[j];
		    k = kk;
		    i__2 = j;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			ap[k] += x[i__] * temp;
			++k;
 
		    }
		}
		kk += j;
 
	    }
	} else {
	    jx = kx;
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		if (x[jx] != 0.) {
		    temp = *alpha * x[jx];
		    ix = kx;
		    i__2 = kk + j - 1;
		    for (k = kk; k <= i__2; ++k) {
			ap[k] += x[ix] * temp;
			ix += *incx;
 
		    }
		}
		jx += *incx;
		kk += j;
 
	    }
	}
    } else {

 

	if (*incx == 1) {
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		if (x[j] != 0.) {
		    temp = *alpha * x[j];
		    k = kk;
		    i__2 = *n;
		    for (i__ = j; i__ <= i__2; ++i__) {
			ap[k] += x[i__] * temp;
			++k;
 
		    }
		}
		kk = kk + *n - j + 1;
 
	    }
	} else {
	    jx = kx;
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		if (x[jx] != 0.) {
		    temp = *alpha * x[jx];
		    ix = jx;
		    i__2 = kk + *n - j;
		    for (k = kk; k <= i__2; ++k) {
			ap[k] += x[ix] * temp;
			ix += *incx;
 
		    }
		}
		jx += *incx;
		kk = kk + *n - j + 1;
 
	    }
	}
    }

    return 0;

 

}  

  int dspr2_(uplo, n, alpha, x, incx, y, incy, ap, uplo_len)
char *uplo;
integer *n;
doublereal *alpha, *x;
integer *incx;
doublereal *y;
integer *incy;
doublereal *ap;
ftnlen uplo_len;
{
     
    integer i__1, i__2;

     
    static integer info;
    static doublereal temp1, temp2;
    static integer i__, j, k;
    extern logical lsame_();
    static integer kk, ix, iy, jx, jy, kx, ky;
    extern   int xerbla_();
     
    --ap;
    --y;
    --x;

     
    info = 0;
    if (! lsame_(uplo, "U", 1L, 1L) && ! lsame_(uplo, "L", 1L, 1L)) {
	info = 1;
    } else if (*n < 0) {
	info = 2;
    } else if (*incx == 0) {
	info = 5;
    } else if (*incy == 0) {
	info = 7;
    }
    if (info != 0) {
	xerbla_("DSPR2 ", &info, 6L);
	return 0;
    }

 

    if (*n == 0 || *alpha == 0.) {
	return 0;
    }

 

 

    if (*incx != 1 || *incy != 1) {
	if (*incx > 0) {
	    kx = 1;
	} else {
	    kx = 1 - (*n - 1) * *incx;
	}
	if (*incy > 0) {
	    ky = 1;
	} else {
	    ky = 1 - (*n - 1) * *incy;
	}
	jx = kx;
	jy = ky;
    }

 

 

    kk = 1;
    if (lsame_(uplo, "U", 1L, 1L)) {

 

	if (*incx == 1 && *incy == 1) {
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		if (x[j] != 0. || y[j] != 0.) {
		    temp1 = *alpha * y[j];
		    temp2 = *alpha * x[j];
		    k = kk;
		    i__2 = j;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			ap[k] = ap[k] + x[i__] * temp1 + y[i__] * temp2;
			++k;
 
		    }
		}
		kk += j;
 
	    }
	} else {
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		if (x[jx] != 0. || y[jy] != 0.) {
		    temp1 = *alpha * y[jy];
		    temp2 = *alpha * x[jx];
		    ix = kx;
		    iy = ky;
		    i__2 = kk + j - 1;
		    for (k = kk; k <= i__2; ++k) {
			ap[k] = ap[k] + x[ix] * temp1 + y[iy] * temp2;
			ix += *incx;
			iy += *incy;
 
		    }
		}
		jx += *incx;
		jy += *incy;
		kk += j;
 
	    }
	}
    } else {

 

	if (*incx == 1 && *incy == 1) {
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		if (x[j] != 0. || y[j] != 0.) {
		    temp1 = *alpha * y[j];
		    temp2 = *alpha * x[j];
		    k = kk;
		    i__2 = *n;
		    for (i__ = j; i__ <= i__2; ++i__) {
			ap[k] = ap[k] + x[i__] * temp1 + y[i__] * temp2;
			++k;
 
		    }
		}
		kk = kk + *n - j + 1;
 
	    }
	} else {
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		if (x[jx] != 0. || y[jy] != 0.) {
		    temp1 = *alpha * y[jy];
		    temp2 = *alpha * x[jx];
		    ix = jx;
		    iy = jy;
		    i__2 = kk + *n - j;
		    for (k = kk; k <= i__2; ++k) {
			ap[k] = ap[k] + x[ix] * temp1 + y[iy] * temp2;
			ix += *incx;
			iy += *incy;
 
		    }
		}
		jx += *incx;
		jy += *incy;
		kk = kk + *n - j + 1;
 
	    }
	}
    }

    return 0;

 

}  

  int dsptrd_(uplo, n, ap, d__, e, tau, info, uplo_len)
char *uplo;
integer *n;
doublereal *ap, *d__, *e, *tau;
integer *info;
ftnlen uplo_len;
{
     
    integer i__1, i__2;

     
    extern doublereal ddot_();
    static doublereal taui;
    extern   int dspr2_();
    static integer i__;
    static doublereal alpha;
    extern logical lsame_();
    extern   int daxpy_(), dspmv_();
    static integer i1;
    static logical upper;
    static integer ii;
    extern   int dlarfg_(), xerbla_();
    static integer i1i1;
    --tau;
    --e;
    --d__;
    --ap;

     
    *info = 0;
    upper = lsame_(uplo, "U", 1L, 1L);
    if (! upper && ! lsame_(uplo, "L", 1L, 1L)) {
	*info = -1;
    } else if (*n < 0) {
	*info = -2;
    }
    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DSPTRD", &i__1, 6L);
	return 0;
    }

 

    if (*n <= 0) {
	return 0;
    }

    if (upper) {

 
 

	i1 = *n * (*n - 1) / 2 + 1;
	for (i__ = *n - 1; i__ >= 1; --i__) {

 

 

	    dlarfg_(&i__, &ap[i1 + i__ - 1], &ap[i1], &c__1, &taui);
	    e[i__] = ap[i1 + i__ - 1];

	    if (taui != 0.) {

 

		ap[i1 + i__ - 1] = 1.;

 


		dspmv_(uplo, &i__, &taui, &ap[1], &ap[i1], &c__1, &c_b61, &
			tau[1], &c__1, 1L);

 

		alpha = taui * -.5 * ddot_(&i__, &tau[1], &c__1, &ap[i1], &
			c__1);
		daxpy_(&i__, &alpha, &ap[i1], &c__1, &tau[1], &c__1);

 

 

		dspr2_(uplo, &i__, &c_b418, &ap[i1], &c__1, &tau[1], &c__1, &
			ap[1], 1L);

		ap[i1 + i__ - 1] = e[i__];
	    }
	    d__[i__ + 1] = ap[i1 + i__];
	    tau[i__] = taui;
	    i1 -= i__;
 
	}
	d__[1] = ap[1];
    } else {

 
 

	ii = 1;
	i__1 = *n - 1;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    i1i1 = ii + *n - i__ + 1;

 

 

	    i__2 = *n - i__;
	    dlarfg_(&i__2, &ap[ii + 1], &ap[ii + 2], &c__1, &taui);
	    e[i__] = ap[ii + 1];

	    if (taui != 0.) {

 


		ap[ii + 1] = 1.;

 


		i__2 = *n - i__;
		dspmv_(uplo, &i__2, &taui, &ap[i1i1], &ap[ii + 1], &c__1, &
			c_b61, &tau[i__], &c__1, 1L);

 

		i__2 = *n - i__;
		alpha = taui * -.5 * ddot_(&i__2, &tau[i__], &c__1, &ap[ii + 
			1], &c__1);
		i__2 = *n - i__;
		daxpy_(&i__2, &alpha, &ap[ii + 1], &c__1, &tau[i__], &c__1);

 

 

		i__2 = *n - i__;
		dspr2_(uplo, &i__2, &c_b418, &ap[ii + 1], &c__1, &tau[i__], &
			c__1, &ap[i1i1], 1L);

		ap[ii + 1] = e[i__];
	    }
	    d__[i__] = ap[ii];
	    tau[i__] = taui;
	    ii = i1i1;
 
	}
	d__[*n] = ap[ii];
    }

    return 0;

 

}  

  int dsptrf_(uplo, n, ap, ipiv, info, uplo_len)
char *uplo;
integer *n;
doublereal *ap;
integer *ipiv, *info;
ftnlen uplo_len;
{
     
    integer i__1;
    doublereal d__1, d__2, d__3;

     
    double sqrt();

     
    static integer imax, jmax;
    extern   int drot_(), dspr_();
    static doublereal c__;
    static integer j, k;
    static doublereal s, t, alpha;
    extern   int dscal_();
    extern logical lsame_();
    extern   int dswap_();
    static integer kstep;
    static logical upper;
    static doublereal r1, r2;
    extern   int dlaev2_();
    static integer kc, kk, kp;
    static doublereal absakk;
    static integer kx;
    extern integer idamax_();
    extern   int xerbla_();
    static doublereal colmax, rowmax;
    static integer knc, kpc, npp;
     
    --ipiv;
    --ap;

     
    *info = 0;
    upper = lsame_(uplo, "U", 1L, 1L);
    if (! upper && ! lsame_(uplo, "L", 1L, 1L)) {
	*info = -1;
    } else if (*n < 0) {
	*info = -2;
    }
    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DSPTRF", &i__1, 6L);
	return 0;
    }

 

    alpha = (sqrt(17.) + 1.) / 8.;

    if (upper) {

 

 

 

	k = *n;
	kc = (*n - 1) * *n / 2 + 1;
L10:
	knc = kc;

 

	if (k < 1) {
	    goto L70;
	}
	kstep = 1;

 
 

	absakk = (d__1 = ap[kc + k - 1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );

 

 

	if (k > 1) {
	    i__1 = k - 1;
	    imax = idamax_(&i__1, &ap[kc], &c__1);
	    colmax = (d__1 = ap[kc + imax - 1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	} else {
	    colmax = 0.;
	}

	if ((( absakk ) >= ( colmax ) ? ( absakk ) : ( colmax ))  == 0.) {

 

	    if (*info == 0) {
		*info = k;
	    }
	    kp = k;
	} else {
	    if (absakk >= alpha * colmax) {

 

		kp = k;
	    } else {

 

 


		rowmax = 0.;
		jmax = imax;
		kx = imax * (imax + 1) / 2 + imax;
		i__1 = k;
		for (j = imax + 1; j <= i__1; ++j) {
		    if ((d__1 = ap[kx], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > rowmax) {
			rowmax = (d__1 = ap[kx], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
			jmax = j;
		    }
		    kx += j;
 
		}
		kpc = (imax - 1) * imax / 2 + 1;
		if (imax > 1) {
		    i__1 = imax - 1;
		    jmax = idamax_(&i__1, &ap[kpc], &c__1);
 
		    d__2 = rowmax, d__3 = (d__1 = ap[kpc + jmax - 1], (( 
			    d__1 ) >= 0 ? (  			    d__1 ) : -(  			    d__1 )) );
		    rowmax = (( d__2 ) >= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
		}

		if (absakk >= alpha * colmax * (colmax / rowmax)) {

 


		    kp = k;
		} else if ((d__1 = ap[kpc + imax - 1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) >= alpha * 
			rowmax) {

 

 

		    kp = imax;
		} else {

 

 

		    kp = imax;
		    kstep = 2;
		}
	    }

	    kk = k - kstep + 1;
	    if (kstep == 2) {
		knc = knc - k + 1;
	    }
	    if (kp != kk) {

 

 

		i__1 = kp - 1;
		dswap_(&i__1, &ap[knc], &c__1, &ap[kpc], &c__1);
		kx = kpc + kp - 1;
		i__1 = kk - 1;
		for (j = kp + 1; j <= i__1; ++j) {
		    kx = kx + j - 1;
		    t = ap[knc + j - 1];
		    ap[knc + j - 1] = ap[kx];
		    ap[kx] = t;
 
		}
		t = ap[knc + kk - 1];
		ap[knc + kk - 1] = ap[kpc + kp - 1];
		ap[kpc + kp - 1] = t;
		if (kstep == 2) {
		    t = ap[kc + k - 2];
		    ap[kc + k - 2] = ap[kc + kp - 1];
		    ap[kc + kp - 1] = t;
		}
	    }

 

	    if (kstep == 1) {

 

 

 

 


 


		r1 = 1. / ap[kc + k - 1];
		i__1 = k - 1;
		d__1 = -r1;
		dspr_(uplo, &i__1, &d__1, &ap[kc], &c__1, &ap[1], 1L);

 

		i__1 = k - 1;
		dscal_(&i__1, &r1, &ap[kc], &c__1);
	    } else {

 


 

 

 

 


 

 


 

 

		dlaev2_(&ap[kc - 1], &ap[kc + k - 2], &ap[kc + k - 1], &r1, &
			r2, &c__, &s);
		r1 = 1. / r1;
		r2 = 1. / r2;
		i__1 = k - 2;
		drot_(&i__1, &ap[knc], &c__1, &ap[kc], &c__1, &c__, &s);
		i__1 = k - 2;
		d__1 = -r1;
		dspr_(uplo, &i__1, &d__1, &ap[knc], &c__1, &ap[1], 1L);
		i__1 = k - 2;
		d__1 = -r2;
		dspr_(uplo, &i__1, &d__1, &ap[kc], &c__1, &ap[1], 1L);

 

		i__1 = k - 2;
		dscal_(&i__1, &r1, &ap[knc], &c__1);
		i__1 = k - 2;
		dscal_(&i__1, &r2, &ap[kc], &c__1);
		i__1 = k - 2;
		d__1 = -s;
		drot_(&i__1, &ap[knc], &c__1, &ap[kc], &c__1, &c__, &d__1);
	    }
	}

 

	if (kstep == 1) {
	    ipiv[k] = kp;
	} else {
	    ipiv[k] = -kp;
	    ipiv[k - 1] = -kp;
	}

 

	k -= kstep;
	kc = knc - k;
	goto L10;

    } else {

 

 

 

	k = 1;
	kc = 1;
	npp = *n * (*n + 1) / 2;
L40:
	knc = kc;

 

	if (k > *n) {
	    goto L70;
	}
	kstep = 1;

 
 

	absakk = (d__1 = ap[kc], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );

 

 

	if (k < *n) {
	    i__1 = *n - k;
	    imax = k + idamax_(&i__1, &ap[kc + 1], &c__1);
	    colmax = (d__1 = ap[kc + imax - k], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	} else {
	    colmax = 0.;
	}

	if ((( absakk ) >= ( colmax ) ? ( absakk ) : ( colmax ))  == 0.) {

 

	    if (*info == 0) {
		*info = k;
	    }
	    kp = k;
	} else {
	    if (absakk >= alpha * colmax) {

 

		kp = k;
	    } else {

 

 


		rowmax = 0.;
		kx = kc + imax - k;
		i__1 = imax - 1;
		for (j = k; j <= i__1; ++j) {
		    if ((d__1 = ap[kx], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > rowmax) {
			rowmax = (d__1 = ap[kx], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
			jmax = j;
		    }
		    kx = kx + *n - j;
 
		}
		kpc = npp - (*n - imax + 1) * (*n - imax + 2) / 2 + 1;
		if (imax < *n) {
		    i__1 = *n - imax;
		    jmax = imax + idamax_(&i__1, &ap[kpc + 1], &c__1);
 
		    d__2 = rowmax, d__3 = (d__1 = ap[kpc + jmax - imax], (( 
			    d__1 ) >= 0 ? (  			    d__1 ) : -(  			    d__1 )) );
		    rowmax = (( d__2 ) >= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
		}

		if (absakk >= alpha * colmax * (colmax / rowmax)) {

 


		    kp = k;
		} else if ((d__1 = ap[kpc], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) >= alpha * rowmax) {

 

 

		    kp = imax;
		} else {

 

 

		    kp = imax;
		    kstep = 2;
		}
	    }

	    kk = k + kstep - 1;
	    if (kstep == 2) {
		knc = knc + *n - k + 1;
	    }
	    if (kp != kk) {

 

 

		if (kp < *n) {
		    i__1 = *n - kp;
		    dswap_(&i__1, &ap[knc + kp - kk + 1], &c__1, &ap[kpc + 1],
			     &c__1);
		}
		kx = knc + kp - kk;
		i__1 = kp - 1;
		for (j = kk + 1; j <= i__1; ++j) {
		    kx = kx + *n - j + 1;
		    t = ap[knc + j - kk];
		    ap[knc + j - kk] = ap[kx];
		    ap[kx] = t;
 
		}
		t = ap[knc];
		ap[knc] = ap[kpc];
		ap[kpc] = t;
		if (kstep == 2) {
		    t = ap[kc + 1];
		    ap[kc + 1] = ap[kc + kp - k];
		    ap[kc + kp - k] = t;
		}
	    }

 

	    if (kstep == 1) {

 

 

 

		if (k < *n) {

 


 


		    r1 = 1. / ap[kc];
		    i__1 = *n - k;
		    d__1 = -r1;
		    dspr_(uplo, &i__1, &d__1, &ap[kc + 1], &c__1, &ap[kc + *n 
			    - k + 1], 1L);

 

		    i__1 = *n - k;
		    dscal_(&i__1, &r1, &ap[kc + 1], &c__1);
		}
	    } else {

 


 

 

 

		if (k < *n - 1) {

 


 

 


 

 

		    dlaev2_(&ap[kc], &ap[kc + 1], &ap[knc], &r1, &r2, &c__, &
			    s);
		    r1 = 1. / r1;
		    r2 = 1. / r2;
		    i__1 = *n - k - 1;
		    drot_(&i__1, &ap[kc + 2], &c__1, &ap[knc + 1], &c__1, &
			    c__, &s);
		    i__1 = *n - k - 1;
		    d__1 = -r1;
		    dspr_(uplo, &i__1, &d__1, &ap[kc + 2], &c__1, &ap[knc + *
			    n - k], 1L);
		    i__1 = *n - k - 1;
		    d__1 = -r2;
		    dspr_(uplo, &i__1, &d__1, &ap[knc + 1], &c__1, &ap[knc + *
			    n - k], 1L);

 


		    i__1 = *n - k - 1;
		    dscal_(&i__1, &r1, &ap[kc + 2], &c__1);
		    i__1 = *n - k - 1;
		    dscal_(&i__1, &r2, &ap[knc + 1], &c__1);
		    i__1 = *n - k - 1;
		    d__1 = -s;
		    drot_(&i__1, &ap[kc + 2], &c__1, &ap[knc + 1], &c__1, &
			    c__, &d__1);
		}
	    }
	}

 

	if (kstep == 1) {
	    ipiv[k] = kp;
	} else {
	    ipiv[k] = -kp;
	    ipiv[k + 1] = -kp;
	}

 

	k += kstep;
	kc = knc + *n - k + 2;
	goto L40;

    }

L70:
    return 0;

 

}  

  int dsteqr_(compz, n, d__, e, z__, ldz, work, info, 
	compz_len)
char *compz;
integer *n;
doublereal *d__, *e, *z__;
integer *ldz;
doublereal *work;
integer *info;
ftnlen compz_len;
{
     
    integer z_dim1, z_offset, i__1, i__2;
    doublereal d__1, d__2;

     
    double sqrt(), d_sign();

     
    static integer lend, jtot;
    extern   int dlae2_();
    static doublereal b, c__, f, g;
    static integer i__, j, k, l, m;
    static doublereal p, r__, s;
    extern logical lsame_();
    extern   int dlasr_();
    static doublereal anorm;
    extern   int dswap_();
    static integer l1;
    extern   int dlaev2_();
    static integer lendm1, lendp1;
    extern doublereal dlapy2_();
    static integer ii;
    extern doublereal dlamch_();
    static integer mm, iscale;
    extern   int dlascl_(), dlaset_();
    static doublereal safmin;
    extern   int dlartg_();
    static doublereal safmax;
    extern   int xerbla_();
    extern doublereal dlanst_();
    extern   int dlasrt_();
    static integer lendsv;
    static doublereal ssfmin;
    static integer nmaxit, icompz;
    static doublereal ssfmax;
    static integer lm1, mm1, nm1;
    static doublereal rt1, rt2, eps;
    static integer lsv;
    static doublereal tst, eps2;
     
    --d__;
    --e;
    z_dim1 = *ldz;
    z_offset = z_dim1 + 1;
    z__ -= z_offset;
    --work;

     
    *info = 0;

    if (lsame_(compz, "N", 1L, 1L)) {
	icompz = 0;
    } else if (lsame_(compz, "V", 1L, 1L)) {
	icompz = 1;
    } else if (lsame_(compz, "I", 1L, 1L)) {
	icompz = 2;
    } else {
	icompz = -1;
    }
    if (icompz < 0) {
	*info = -1;
    } else if (*n < 0) {
	*info = -2;
    } else if (*ldz < 1 || icompz > 0 && *ldz < (( 1 ) >= ( *n ) ? ( 1 ) : ( *n )) ) {
	*info = -6;
    }
    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DSTEQR", &i__1, 6L);
	return 0;
    }

 

    if (*n == 0) {
	return 0;
    }

    if (*n == 1) {
	if (icompz == 2) {
	    z__[z_dim1 + 1] = 1.;
	}
	return 0;
    }

 

    eps = dlamch_("E", 1L);
 
    d__1 = eps;
    eps2 = d__1 * d__1;
    safmin = dlamch_("S", 1L);
    safmax = 1. / safmin;
    ssfmax = sqrt(safmax) / 3.;
    ssfmin = sqrt(safmin) / eps2;

 
 

    if (icompz == 2) {
	dlaset_("Full", n, n, &c_b61, &c_b89, &z__[z_offset], ldz, 4L);
    }

    nmaxit = *n * 30;
    jtot = 0;

 
 
 

    l1 = 1;
    nm1 = *n - 1;

L10:
    if (l1 > *n) {
	goto L160;
    }
    if (l1 > 1) {
	e[l1 - 1] = 0.;
    }
    if (l1 <= nm1) {
	i__1 = nm1;
	for (m = l1; m <= i__1; ++m) {
	    tst = (d__1 = e[m], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	    if (tst == 0.) {
		goto L30;
	    }
	    if (tst <= sqrt((d__1 = d__[m], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) )) * sqrt((d__2 = d__[m 
		    + 1], (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) )) * eps) {
		e[m] = 0.;
		goto L30;
	    }
 
	}
    }
    m = *n;

L30:
    l = l1;
    lsv = l;
    lend = m;
    lendsv = lend;
    l1 = m + 1;
    if (lend == l) {
	goto L10;
    }

 

    i__1 = lend - l + 1;
    anorm = dlanst_("I", &i__1, &d__[l], &e[l], 1L);
    iscale = 0;
    if (anorm == 0.) {
	goto L10;
    }
    if (anorm > ssfmax) {
	iscale = 1;
	i__1 = lend - l + 1;
	dlascl_("G", &c__0, &c__0, &anorm, &ssfmax, &i__1, &c__1, &d__[l], n, 
		info, 1L);
	i__1 = lend - l;
	dlascl_("G", &c__0, &c__0, &anorm, &ssfmax, &i__1, &c__1, &e[l], n, 
		info, 1L);
    } else if (anorm < ssfmin) {
	iscale = 2;
	i__1 = lend - l + 1;
	dlascl_("G", &c__0, &c__0, &anorm, &ssfmin, &i__1, &c__1, &d__[l], n, 
		info, 1L);
	i__1 = lend - l;
	dlascl_("G", &c__0, &c__0, &anorm, &ssfmin, &i__1, &c__1, &e[l], n, 
		info, 1L);
    }

 

    if ((d__1 = d__[lend], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) < (d__2 = d__[l], (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) )) {
	lend = lsv;
	l = lendsv;
    }

    if (lend > l) {

 

 

L40:
	if (l != lend) {
	    lendm1 = lend - 1;
	    i__1 = lendm1;
	    for (m = l; m <= i__1; ++m) {
 
		d__2 = (d__1 = e[m], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		tst = d__2 * d__2;
		if (tst <= eps2 * (d__1 = d__[m], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) * (d__2 = d__[m 
			+ 1], (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) ) + safmin) {
		    goto L60;
		}
 
	    }
	}

	m = lend;

L60:
	if (m < lend) {
	    e[m] = 0.;
	}
	p = d__[l];
	if (m == l) {
	    goto L80;
	}

 
 

	if (m == l + 1) {
	    if (icompz > 0) {
		dlaev2_(&d__[l], &e[l], &d__[l + 1], &rt1, &rt2, &c__, &s);
		work[l] = c__;
		work[*n - 1 + l] = s;
		dlasr_("R", "V", "B", n, &c__2, &work[l], &work[*n - 1 + l], &
			z__[l * z_dim1 + 1], ldz, 1L, 1L, 1L);
	    } else {
		dlae2_(&d__[l], &e[l], &d__[l + 1], &rt1, &rt2);
	    }
	    d__[l] = rt1;
	    d__[l + 1] = rt2;
	    e[l] = 0.;
	    l += 2;
	    if (l <= lend) {
		goto L40;
	    }
	    goto L140;
	}

	if (jtot == nmaxit) {
	    goto L140;
	}
	++jtot;

 

	g = (d__[l + 1] - p) / (e[l] * 2.);
	r__ = dlapy2_(&g, &c_b89);
	g = d__[m] - p + e[l] / (g + d_sign(&r__, &g));

	s = 1.;
	c__ = 1.;
	p = 0.;

 

	mm1 = m - 1;
	i__1 = l;
	for (i__ = mm1; i__ >= i__1; --i__) {
	    f = s * e[i__];
	    b = c__ * e[i__];
	    dlartg_(&g, &f, &c__, &s, &r__);
	    if (i__ != m - 1) {
		e[i__ + 1] = r__;
	    }
	    g = d__[i__ + 1] - p;
	    r__ = (d__[i__] - g) * s + c__ * 2. * b;
	    p = s * r__;
	    d__[i__ + 1] = g + p;
	    g = c__ * r__ - b;

 

	    if (icompz > 0) {
		work[i__] = c__;
		work[*n - 1 + i__] = -s;
	    }

 
	}

 

	if (icompz > 0) {
	    mm = m - l + 1;
	    dlasr_("R", "V", "B", n, &mm, &work[l], &work[*n - 1 + l], &z__[l 
		    * z_dim1 + 1], ldz, 1L, 1L, 1L);
	}

	d__[l] -= p;
	e[l] = g;
	goto L40;

 

L80:
	d__[l] = p;

	++l;
	if (l <= lend) {
	    goto L40;
	}
	goto L140;

    } else {

 

 

L90:
	if (l != lend) {
	    lendp1 = lend + 1;
	    i__1 = lendp1;
	    for (m = l; m >= i__1; --m) {
 
		d__2 = (d__1 = e[m - 1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		tst = d__2 * d__2;
		if (tst <= eps2 * (d__1 = d__[m], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) * (d__2 = d__[m 
			- 1], (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) ) + safmin) {
		    goto L110;
		}
 
	    }
	}

	m = lend;

L110:
	if (m > lend) {
	    e[m - 1] = 0.;
	}
	p = d__[l];
	if (m == l) {
	    goto L130;
	}

 
 

	if (m == l - 1) {
	    if (icompz > 0) {
		dlaev2_(&d__[l - 1], &e[l - 1], &d__[l], &rt1, &rt2, &c__, &s)
			;
		work[m] = c__;
		work[*n - 1 + m] = s;
		dlasr_("R", "V", "F", n, &c__2, &work[m], &work[*n - 1 + m], &
			z__[(l - 1) * z_dim1 + 1], ldz, 1L, 1L, 1L);
	    } else {
		dlae2_(&d__[l - 1], &e[l - 1], &d__[l], &rt1, &rt2);
	    }
	    d__[l - 1] = rt1;
	    d__[l] = rt2;
	    e[l - 1] = 0.;
	    l += -2;
	    if (l >= lend) {
		goto L90;
	    }
	    goto L140;
	}

	if (jtot == nmaxit) {
	    goto L140;
	}
	++jtot;

 

	g = (d__[l - 1] - p) / (e[l - 1] * 2.);
	r__ = dlapy2_(&g, &c_b89);
	g = d__[m] - p + e[l - 1] / (g + d_sign(&r__, &g));

	s = 1.;
	c__ = 1.;
	p = 0.;

 

	lm1 = l - 1;
	i__1 = lm1;
	for (i__ = m; i__ <= i__1; ++i__) {
	    f = s * e[i__];
	    b = c__ * e[i__];
	    dlartg_(&g, &f, &c__, &s, &r__);
	    if (i__ != m) {
		e[i__ - 1] = r__;
	    }
	    g = d__[i__] - p;
	    r__ = (d__[i__ + 1] - g) * s + c__ * 2. * b;
	    p = s * r__;
	    d__[i__] = g + p;
	    g = c__ * r__ - b;

 

	    if (icompz > 0) {
		work[i__] = c__;
		work[*n - 1 + i__] = s;
	    }

 
	}

 

	if (icompz > 0) {
	    mm = l - m + 1;
	    dlasr_("R", "V", "F", n, &mm, &work[m], &work[*n - 1 + m], &z__[m 
		    * z_dim1 + 1], ldz, 1L, 1L, 1L);
	}

	d__[l] -= p;
	e[lm1] = g;
	goto L90;

 

L130:
	d__[l] = p;

	--l;
	if (l >= lend) {
	    goto L90;
	}
	goto L140;

    }

 

L140:
    if (iscale == 1) {
	i__1 = lendsv - lsv + 1;
	dlascl_("G", &c__0, &c__0, &ssfmax, &anorm, &i__1, &c__1, &d__[lsv], 
		n, info, 1L);
	i__1 = lendsv - lsv;
	dlascl_("G", &c__0, &c__0, &ssfmax, &anorm, &i__1, &c__1, &e[lsv], n, 
		info, 1L);
    } else if (iscale == 2) {
	i__1 = lendsv - lsv + 1;
	dlascl_("G", &c__0, &c__0, &ssfmin, &anorm, &i__1, &c__1, &d__[lsv], 
		n, info, 1L);
	i__1 = lendsv - lsv;
	dlascl_("G", &c__0, &c__0, &ssfmin, &anorm, &i__1, &c__1, &e[lsv], n, 
		info, 1L);
    }

 
 

    if (jtot < nmaxit) {
	goto L10;
    }
    i__1 = *n - 1;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (e[i__] != 0.) {
	    ++(*info);
	}
 
    }
    goto L190;

 

L160:
    if (icompz == 0) {

 

	dlasrt_("I", n, &d__[1], info, 1L);

    } else {

 

	i__1 = *n;
	for (ii = 2; ii <= i__1; ++ii) {
	    i__ = ii - 1;
	    k = i__;
	    p = d__[i__];
	    i__2 = *n;
	    for (j = ii; j <= i__2; ++j) {
		if (d__[j] < p) {
		    k = j;
		    p = d__[j];
		}
 
	    }
	    if (k != i__) {
		d__[k] = d__[i__];
		d__[i__] = p;
		dswap_(n, &z__[i__ * z_dim1 + 1], &c__1, &z__[k * z_dim1 + 1],
			 &c__1);
	    }
 
	}
    }

L190:
    return 0;

 

}  

  int dsterf_(n, d__, e, info)
integer *n;
doublereal *d__, *e;
integer *info;
{
     
    integer i__1;
    doublereal d__1, d__2;

     
    double sqrt(), d_sign();

     
    static doublereal oldc;
    static integer lend, jtot;
    extern   int dlae2_();
    static doublereal c__;
    static integer i__, l, m;
    static doublereal p, gamma, r__, s, alpha, sigma, anorm;
    static integer l1, lendm1, lendp1;
    extern doublereal dlapy2_();
    static doublereal bb;
    extern doublereal dlamch_();
    static integer iscale;
    extern   int dlascl_();
    static doublereal oldgam, safmin;
    extern   int xerbla_();
    static doublereal safmax;
    extern doublereal dlanst_();
    extern   int dlasrt_();
    static integer lendsv;
    static doublereal ssfmin;
    static integer nmaxit;
    static doublereal ssfmax;
    static integer lm1, mm1, nm1;
    static doublereal rt1, rt2, eps, rte;
    static integer lsv;
    static doublereal tst, eps2;
    --e;
    --d__;

     
    *info = 0;

 

    if (*n < 0) {
	*info = -1;
	i__1 = -(*info);
	xerbla_("DSTERF", &i__1, 6L);
	return 0;
    }
    if (*n <= 1) {
	return 0;
    }

 

    eps = dlamch_("E", 1L);
 
    d__1 = eps;
    eps2 = d__1 * d__1;
    safmin = dlamch_("S", 1L);
    safmax = 1. / safmin;
    ssfmax = sqrt(safmax) / 3.;
    ssfmin = sqrt(safmin) / eps2;

 

    nmaxit = *n * 30;
    sigma = 0.;
    jtot = 0;

 
 
 

    l1 = 1;
    nm1 = *n - 1;

L10:
    if (l1 > *n) {
	goto L170;
    }
    if (l1 > 1) {
	e[l1 - 1] = 0.;
    }
    if (l1 <= nm1) {
	i__1 = nm1;
	for (m = l1; m <= i__1; ++m) {
	    tst = (d__1 = e[m], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	    if (tst == 0.) {
		goto L30;
	    }
	    if (tst <= sqrt((d__1 = d__[m], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) )) * sqrt((d__2 = d__[m 
		    + 1], (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) )) * eps) {
		e[m] = 0.;
		goto L30;
	    }
 
	}
    }
    m = *n;

L30:
    l = l1;
    lsv = l;
    lend = m;
    lendsv = lend;
    l1 = m + 1;
    if (lend == l) {
	goto L10;
    }

 

    i__1 = lend - l + 1;
    anorm = dlanst_("I", &i__1, &d__[l], &e[l], 1L);
    iscale = 0;
    if (anorm > ssfmax) {
	iscale = 1;
	i__1 = lend - l + 1;
	dlascl_("G", &c__0, &c__0, &anorm, &ssfmax, &i__1, &c__1, &d__[l], n, 
		info, 1L);
	i__1 = lend - l;
	dlascl_("G", &c__0, &c__0, &anorm, &ssfmax, &i__1, &c__1, &e[l], n, 
		info, 1L);
    } else if (anorm < ssfmin) {
	iscale = 2;
	i__1 = lend - l + 1;
	dlascl_("G", &c__0, &c__0, &anorm, &ssfmin, &i__1, &c__1, &d__[l], n, 
		info, 1L);
	i__1 = lend - l;
	dlascl_("G", &c__0, &c__0, &anorm, &ssfmin, &i__1, &c__1, &e[l], n, 
		info, 1L);
    }

    i__1 = lend - 1;
    for (i__ = l; i__ <= i__1; ++i__) {
 
	d__1 = e[i__];
	e[i__] = d__1 * d__1;
 
    }

 

    if ((d__1 = d__[lend], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) < (d__2 = d__[l], (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) )) {
	lend = lsv;
	l = lendsv;
    }

    if (lend >= l) {

 

 

L50:
	if (l != lend) {
	    lendm1 = lend - 1;
	    i__1 = lendm1;
	    for (m = l; m <= i__1; ++m) {
		tst = (d__1 = e[m], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		if (tst <= eps2 * (d__1 = d__[m] * d__[m + 1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) )) {
		    goto L70;
		}
 
	    }
	}

	m = lend;

L70:
	if (m < lend) {
	    e[m] = 0.;
	}
	p = d__[l];
	if (m == l) {
	    goto L90;
	}

 
 

	if (m == l + 1) {
	    rte = sqrt(e[l]);
	    dlae2_(&d__[l], &rte, &d__[l + 1], &rt1, &rt2);
	    d__[l] = rt1;
	    d__[l + 1] = rt2;
	    e[l] = 0.;
	    l += 2;
	    if (l <= lend) {
		goto L50;
	    }
	    goto L150;
	}

	if (jtot == nmaxit) {
	    goto L150;
	}
	++jtot;

 

	rte = sqrt(e[l]);
	sigma = (d__[l + 1] - p) / (rte * 2.);
	r__ = dlapy2_(&sigma, &c_b89);
	sigma = p - rte / (sigma + d_sign(&r__, &sigma));

	c__ = 1.;
	s = 0.;
	gamma = d__[m] - sigma;
	p = gamma * gamma;

 

	mm1 = m - 1;
	i__1 = l;
	for (i__ = mm1; i__ >= i__1; --i__) {
	    bb = e[i__];
	    r__ = p + bb;
	    if (i__ != m - 1) {
		e[i__ + 1] = s * r__;
	    }
	    oldc = c__;
	    c__ = p / r__;
	    s = bb / r__;
	    oldgam = gamma;
	    alpha = d__[i__];
	    gamma = c__ * (alpha - sigma) - s * oldgam;
	    d__[i__ + 1] = oldgam + (alpha - gamma);
	    if (c__ != 0.) {
		p = gamma * gamma / c__;
	    } else {
		p = oldc * bb;
	    }
 
	}

	e[l] = s * p;
	d__[l] = sigma + gamma;
	goto L50;

 

L90:
	d__[l] = p;

	++l;
	if (l <= lend) {
	    goto L50;
	}
	goto L150;

    } else {

 

 

L100:
	if (l != lend) {
	    lendp1 = lend + 1;
	    i__1 = lendp1;
	    for (m = l; m >= i__1; --m) {
		tst = (d__1 = e[m - 1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		if (tst <= eps2 * (d__1 = d__[m] * d__[m - 1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) )) {
		    goto L120;
		}
 
	    }
	}

	m = lend;

L120:
	if (m > lend) {
	    e[m - 1] = 0.;
	}
	p = d__[l];
	if (m == l) {
	    goto L140;
	}

 
 

	if (m == l - 1) {
	    rte = sqrt(e[l - 1]);
	    dlae2_(&d__[l], &rte, &d__[l - 1], &rt1, &rt2);
	    d__[l] = rt1;
	    d__[l - 1] = rt2;
	    e[l - 1] = 0.;
	    l += -2;
	    if (l >= lend) {
		goto L100;
	    }
	    goto L150;
	}

	if (jtot == nmaxit) {
	    goto L150;
	}
	++jtot;

 

	rte = sqrt(e[l - 1]);
	sigma = (d__[l - 1] - p) / (rte * 2.);
	r__ = dlapy2_(&sigma, &c_b89);
	sigma = p - rte / (sigma + d_sign(&r__, &sigma));

	c__ = 1.;
	s = 0.;
	gamma = d__[m] - sigma;
	p = gamma * gamma;

 

	lm1 = l - 1;
	i__1 = lm1;
	for (i__ = m; i__ <= i__1; ++i__) {
	    bb = e[i__];
	    r__ = p + bb;
	    if (i__ != m) {
		e[i__ - 1] = s * r__;
	    }
	    oldc = c__;
	    c__ = p / r__;
	    s = bb / r__;
	    oldgam = gamma;
	    alpha = d__[i__ + 1];
	    gamma = c__ * (alpha - sigma) - s * oldgam;
	    d__[i__] = oldgam + (alpha - gamma);
	    if (c__ != 0.) {
		p = gamma * gamma / c__;
	    } else {
		p = oldc * bb;
	    }
 
	}

	e[lm1] = s * p;
	d__[l] = sigma + gamma;
	goto L100;

 

L140:
	d__[l] = p;

	--l;
	if (l >= lend) {
	    goto L100;
	}
	goto L150;

    }

 

L150:
    if (iscale == 1) {
	i__1 = lendsv - lsv + 1;
	dlascl_("G", &c__0, &c__0, &ssfmax, &anorm, &i__1, &c__1, &d__[lsv], 
		n, info, 1L);
    }
    if (iscale == 2) {
	i__1 = lendsv - lsv + 1;
	dlascl_("G", &c__0, &c__0, &ssfmin, &anorm, &i__1, &c__1, &d__[lsv], 
		n, info, 1L);
    }

 
 

    if (jtot == nmaxit) {
	i__1 = *n - 1;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    if (e[i__] != 0.) {
		++(*info);
	    }
 
	}
	return 0;
    }
    goto L10;

 

L170:
    dlasrt_("I", n, &d__[1], info, 1L);

    return 0;

 

}  

  int dtpmv_(uplo, trans, diag, n, ap, x, incx, uplo_len, 
	trans_len, diag_len)
char *uplo, *trans, *diag;
integer *n;
doublereal *ap, *x;
integer *incx;
ftnlen uplo_len;
ftnlen trans_len;
ftnlen diag_len;
{
     
    integer i__1, i__2;

     
    static integer info;
    static doublereal temp;
    static integer i__, j, k;
    extern logical lsame_();
    static integer kk, ix, jx, kx;
    extern   int xerbla_();
    static logical nounit;
     
    --x;
    --ap;

     
    info = 0;
    if (! lsame_(uplo, "U", 1L, 1L) && ! lsame_(uplo, "L", 1L, 1L)) {
	info = 1;
    } else if (! lsame_(trans, "N", 1L, 1L) && ! lsame_(trans, "T", 1L, 1L) &&
	     ! lsame_(trans, "C", 1L, 1L)) {
	info = 2;
    } else if (! lsame_(diag, "U", 1L, 1L) && ! lsame_(diag, "N", 1L, 1L)) {
	info = 3;
    } else if (*n < 0) {
	info = 4;
    } else if (*incx == 0) {
	info = 7;
    }
    if (info != 0) {
	xerbla_("DTPMV ", &info, 6L);
	return 0;
    }

 

    if (*n == 0) {
	return 0;
    }

    nounit = lsame_(diag, "N", 1L, 1L);

 
 

    if (*incx <= 0) {
	kx = 1 - (*n - 1) * *incx;
    } else if (*incx != 1) {
	kx = 1;
    }

 
 

    if (lsame_(trans, "N", 1L, 1L)) {

 

	if (lsame_(uplo, "U", 1L, 1L)) {
	    kk = 1;
	    if (*incx == 1) {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    if (x[j] != 0.) {
			temp = x[j];
			k = kk;
			i__2 = j - 1;
			for (i__ = 1; i__ <= i__2; ++i__) {
			    x[i__] += temp * ap[k];
			    ++k;
 
			}
			if (nounit) {
			    x[j] *= ap[kk + j - 1];
			}
		    }
		    kk += j;
 
		}
	    } else {
		jx = kx;
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    if (x[jx] != 0.) {
			temp = x[jx];
			ix = kx;
			i__2 = kk + j - 2;
			for (k = kk; k <= i__2; ++k) {
			    x[ix] += temp * ap[k];
			    ix += *incx;
 
			}
			if (nounit) {
			    x[jx] *= ap[kk + j - 1];
			}
		    }
		    jx += *incx;
		    kk += j;
 
		}
	    }
	} else {
	    kk = *n * (*n + 1) / 2;
	    if (*incx == 1) {
		for (j = *n; j >= 1; --j) {
		    if (x[j] != 0.) {
			temp = x[j];
			k = kk;
			i__1 = j + 1;
			for (i__ = *n; i__ >= i__1; --i__) {
			    x[i__] += temp * ap[k];
			    --k;
 
			}
			if (nounit) {
			    x[j] *= ap[kk - *n + j];
			}
		    }
		    kk -= *n - j + 1;
 
		}
	    } else {
		kx += (*n - 1) * *incx;
		jx = kx;
		for (j = *n; j >= 1; --j) {
		    if (x[jx] != 0.) {
			temp = x[jx];
			ix = kx;
			i__1 = kk - (*n - (j + 1));
			for (k = kk; k >= i__1; --k) {
			    x[ix] += temp * ap[k];
			    ix -= *incx;
 
			}
			if (nounit) {
			    x[jx] *= ap[kk - *n + j];
			}
		    }
		    jx -= *incx;
		    kk -= *n - j + 1;
 
		}
	    }
	}
    } else {

 

	if (lsame_(uplo, "U", 1L, 1L)) {
	    kk = *n * (*n + 1) / 2;
	    if (*incx == 1) {
		for (j = *n; j >= 1; --j) {
		    temp = x[j];
		    if (nounit) {
			temp *= ap[kk];
		    }
		    k = kk - 1;
		    for (i__ = j - 1; i__ >= 1; --i__) {
			temp += ap[k] * x[i__];
			--k;
 
		    }
		    x[j] = temp;
		    kk -= j;
 
		}
	    } else {
		jx = kx + (*n - 1) * *incx;
		for (j = *n; j >= 1; --j) {
		    temp = x[jx];
		    ix = jx;
		    if (nounit) {
			temp *= ap[kk];
		    }
		    i__1 = kk - j + 1;
		    for (k = kk - 1; k >= i__1; --k) {
			ix -= *incx;
			temp += ap[k] * x[ix];
 
		    }
		    x[jx] = temp;
		    jx -= *incx;
		    kk -= j;
 
		}
	    }
	} else {
	    kk = 1;
	    if (*incx == 1) {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    temp = x[j];
		    if (nounit) {
			temp *= ap[kk];
		    }
		    k = kk + 1;
		    i__2 = *n;
		    for (i__ = j + 1; i__ <= i__2; ++i__) {
			temp += ap[k] * x[i__];
			++k;
 
		    }
		    x[j] = temp;
		    kk += *n - j + 1;
 
		}
	    } else {
		jx = kx;
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    temp = x[jx];
		    ix = jx;
		    if (nounit) {
			temp *= ap[kk];
		    }
		    i__2 = kk + *n - j;
		    for (k = kk + 1; k <= i__2; ++k) {
			ix += *incx;
			temp += ap[k] * x[ix];
 
		    }
		    x[jx] = temp;
		    jx += *incx;
		    kk += *n - j + 1;
 
		}
	    }
	}
    }

    return 0;

 

}  

  int dtpsv_(uplo, trans, diag, n, ap, x, incx, uplo_len, 
	trans_len, diag_len)
char *uplo, *trans, *diag;
integer *n;
doublereal *ap, *x;
integer *incx;
ftnlen uplo_len;
ftnlen trans_len;
ftnlen diag_len;
{
     
    integer i__1, i__2;

     
    static integer info;
    static doublereal temp;
    static integer i__, j, k;
    extern logical lsame_();
    static integer kk, ix, jx, kx;
    extern   int xerbla_();
    static logical nounit;
     
    --x;
    --ap;

     
    info = 0;
    if (! lsame_(uplo, "U", 1L, 1L) && ! lsame_(uplo, "L", 1L, 1L)) {
	info = 1;
    } else if (! lsame_(trans, "N", 1L, 1L) && ! lsame_(trans, "T", 1L, 1L) &&
	     ! lsame_(trans, "C", 1L, 1L)) {
	info = 2;
    } else if (! lsame_(diag, "U", 1L, 1L) && ! lsame_(diag, "N", 1L, 1L)) {
	info = 3;
    } else if (*n < 0) {
	info = 4;
    } else if (*incx == 0) {
	info = 7;
    }
    if (info != 0) {
	xerbla_("DTPSV ", &info, 6L);
	return 0;
    }

 

    if (*n == 0) {
	return 0;
    }

    nounit = lsame_(diag, "N", 1L, 1L);

 
 

    if (*incx <= 0) {
	kx = 1 - (*n - 1) * *incx;
    } else if (*incx != 1) {
	kx = 1;
    }

 
 

    if (lsame_(trans, "N", 1L, 1L)) {

 

	if (lsame_(uplo, "U", 1L, 1L)) {
	    kk = *n * (*n + 1) / 2;
	    if (*incx == 1) {
		for (j = *n; j >= 1; --j) {
		    if (x[j] != 0.) {
			if (nounit) {
			    x[j] /= ap[kk];
			}
			temp = x[j];
			k = kk - 1;
			for (i__ = j - 1; i__ >= 1; --i__) {
			    x[i__] -= temp * ap[k];
			    --k;
 
			}
		    }
		    kk -= j;
 
		}
	    } else {
		jx = kx + (*n - 1) * *incx;
		for (j = *n; j >= 1; --j) {
		    if (x[jx] != 0.) {
			if (nounit) {
			    x[jx] /= ap[kk];
			}
			temp = x[jx];
			ix = jx;
			i__1 = kk - j + 1;
			for (k = kk - 1; k >= i__1; --k) {
			    ix -= *incx;
			    x[ix] -= temp * ap[k];
 
			}
		    }
		    jx -= *incx;
		    kk -= j;
 
		}
	    }
	} else {
	    kk = 1;
	    if (*incx == 1) {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    if (x[j] != 0.) {
			if (nounit) {
			    x[j] /= ap[kk];
			}
			temp = x[j];
			k = kk + 1;
			i__2 = *n;
			for (i__ = j + 1; i__ <= i__2; ++i__) {
			    x[i__] -= temp * ap[k];
			    ++k;
 
			}
		    }
		    kk += *n - j + 1;
 
		}
	    } else {
		jx = kx;
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    if (x[jx] != 0.) {
			if (nounit) {
			    x[jx] /= ap[kk];
			}
			temp = x[jx];
			ix = jx;
			i__2 = kk + *n - j;
			for (k = kk + 1; k <= i__2; ++k) {
			    ix += *incx;
			    x[ix] -= temp * ap[k];
 
			}
		    }
		    jx += *incx;
		    kk += *n - j + 1;
 
		}
	    }
	}
    } else {

 

	if (lsame_(uplo, "U", 1L, 1L)) {
	    kk = 1;
	    if (*incx == 1) {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    temp = x[j];
		    k = kk;
		    i__2 = j - 1;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			temp -= ap[k] * x[i__];
			++k;
 
		    }
		    if (nounit) {
			temp /= ap[kk + j - 1];
		    }
		    x[j] = temp;
		    kk += j;
 
		}
	    } else {
		jx = kx;
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    temp = x[jx];
		    ix = kx;
		    i__2 = kk + j - 2;
		    for (k = kk; k <= i__2; ++k) {
			temp -= ap[k] * x[ix];
			ix += *incx;
 
		    }
		    if (nounit) {
			temp /= ap[kk + j - 1];
		    }
		    x[jx] = temp;
		    jx += *incx;
		    kk += j;
 
		}
	    }
	} else {
	    kk = *n * (*n + 1) / 2;
	    if (*incx == 1) {
		for (j = *n; j >= 1; --j) {
		    temp = x[j];
		    k = kk;
		    i__1 = j + 1;
		    for (i__ = *n; i__ >= i__1; --i__) {
			temp -= ap[k] * x[i__];
			--k;
 
		    }
		    if (nounit) {
			temp /= ap[kk - *n + j];
		    }
		    x[j] = temp;
		    kk -= *n - j + 1;
 
		}
	    } else {
		kx += (*n - 1) * *incx;
		jx = kx;
		for (j = *n; j >= 1; --j) {
		    temp = x[jx];
		    ix = kx;
		    i__1 = kk - (*n - (j + 1));
		    for (k = kk; k >= i__1; --k) {
			temp -= ap[k] * x[ix];
			ix -= *incx;
 
		    }
		    if (nounit) {
			temp /= ap[kk - *n + j];
		    }
		    x[jx] = temp;
		    jx -= *incx;
		    kk -= *n - j + 1;
 
		}
	    }
	}
    }

    return 0;

 

}  

  int dtrcon_(norm, uplo, diag, n, a, lda, rcond, work, iwork, 
	info, norm_len, uplo_len, diag_len)
char *norm, *uplo, *diag;
integer *n;
doublereal *a;
integer *lda;
doublereal *rcond, *work;
integer *iwork, *info;
ftnlen norm_len;
ftnlen uplo_len;
ftnlen diag_len;
{
     
    integer a_dim1, a_offset, i__1;
    doublereal d__1;

     
    static integer kase, kase1;
    static doublereal scale;
    extern logical lsame_();
    extern   int drscl_();
    static doublereal anorm;
    static logical upper;
    static doublereal xnorm;
    extern doublereal dlamch_();
    extern   int dlacon_();
    static integer ix;
    extern integer idamax_();
    extern   int xerbla_();
    extern doublereal dlantr_();
    static doublereal ainvnm;
    extern   int dlatrs_();
    static logical onenrm;
    static char normin[1];
    static doublereal smlnum;
    static logical nounit;
     
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --work;
    --iwork;

     
    *info = 0;
    upper = lsame_(uplo, "U", 1L, 1L);
    onenrm = *(unsigned char *)norm == '1' || lsame_(norm, "O", 1L, 1L);
    nounit = lsame_(diag, "N", 1L, 1L);

    if (! onenrm && ! lsame_(norm, "I", 1L, 1L)) {
	*info = -1;
    } else if (! upper && ! lsame_(uplo, "L", 1L, 1L)) {
	*info = -2;
    } else if (! nounit && ! lsame_(diag, "U", 1L, 1L)) {
	*info = -3;
    } else if (*n < 0) {
	*info = -4;
    } else if (*lda < (( 1 ) >= ( *n ) ? ( 1 ) : ( *n )) ) {
	*info = -6;
    }
    if (*info != 0) {
	i__1 = -(*info);
	xerbla_("DTRCON", &i__1, 6L);
	return 0;
    }

 

    if (*n == 0) {
	*rcond = 1.;
	return 0;
    }

    *rcond = 0.;
    smlnum = dlamch_("Safe minimum", 12L) * (doublereal) (( 1 ) >= ( *n ) ? ( 1 ) : ( *n )) ;

 

    anorm = dlantr_(norm, uplo, diag, n, n, &a[a_offset], lda, &work[1], 1L, 
	    1L, 1L);

 

    if (anorm > 0.) {

 

	ainvnm = 0.;
	*(unsigned char *)normin = 'N';
	if (onenrm) {
	    kase1 = 1;
	} else {
	    kase1 = 2;
	}
	kase = 0;
L10:
	dlacon_(n, &work[*n + 1], &work[1], &iwork[1], &ainvnm, &kase);
	if (kase != 0) {
	    if (kase == kase1) {

 

		dlatrs_(uplo, "No transpose", diag, normin, n, &a[a_offset], 
			lda, &work[1], &scale, &work[(*n << 1) + 1], info, 1L,
			 12L, 1L, 1L);
	    } else {

 

		dlatrs_(uplo, "Transpose", diag, normin, n, &a[a_offset], lda,
			 &work[1], &scale, &work[(*n << 1) + 1], info, 1L, 9L,
			 1L, 1L);
	    }
	    *(unsigned char *)normin = 'Y';

 


	    if (scale != 1.) {
		ix = idamax_(n, &work[1], &c__1);
		xnorm = (d__1 = work[ix], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		if (scale < xnorm * smlnum || scale == 0.) {
		    goto L20;
		}
		drscl_(n, &scale, &work[1], &c__1);
	    }
	    goto L10;
	}

 

	if (ainvnm != 0.) {
	    *rcond = 1. / anorm / ainvnm;
	}
    }

L20:
    return 0;

 

}  

  int dtrmm_(side, uplo, transa, diag, m, n, alpha, a, lda, b, 
	ldb, side_len, uplo_len, transa_len, diag_len)
char *side, *uplo, *transa, *diag;
integer *m, *n;
doublereal *alpha, *a;
integer *lda;
doublereal *b;
integer *ldb;
ftnlen side_len;
ftnlen uplo_len;
ftnlen transa_len;
ftnlen diag_len;
{
     
    integer a_dim1, a_offset, b_dim1, b_offset, i__1, i__2, i__3;

     
    static integer info;
    static doublereal temp;
    static integer i__, j, k;
    static logical lside;
    extern logical lsame_();
    static integer nrowa;
    static logical upper;
    extern   int xerbla_();
    static logical nounit;
     
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    b_dim1 = *ldb;
    b_offset = b_dim1 + 1;
    b -= b_offset;

     
    lside = lsame_(side, "L", 1L, 1L);
    if (lside) {
	nrowa = *m;
    } else {
	nrowa = *n;
    }
    nounit = lsame_(diag, "N", 1L, 1L);
    upper = lsame_(uplo, "U", 1L, 1L);

    info = 0;
    if (! lside && ! lsame_(side, "R", 1L, 1L)) {
	info = 1;
    } else if (! upper && ! lsame_(uplo, "L", 1L, 1L)) {
	info = 2;
    } else if (! lsame_(transa, "N", 1L, 1L) && ! lsame_(transa, "T", 1L, 1L) 
	    && ! lsame_(transa, "C", 1L, 1L)) {
	info = 3;
    } else if (! lsame_(diag, "U", 1L, 1L) && ! lsame_(diag, "N", 1L, 1L)) {
	info = 4;
    } else if (*m < 0) {
	info = 5;
    } else if (*n < 0) {
	info = 6;
    } else if (*lda < (( 1 ) >= ( nrowa ) ? ( 1 ) : ( nrowa )) ) {
	info = 9;
    } else if (*ldb < (( 1 ) >= ( *m ) ? ( 1 ) : ( *m )) ) {
	info = 11;
    }
    if (info != 0) {
	xerbla_("DTRMM ", &info, 6L);
	return 0;
    }

 

    if (*n == 0) {
	return 0;
    }

 

    if (*alpha == 0.) {
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    i__2 = *m;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		b[i__ + j * b_dim1] = 0.;
 
	    }
 
	}
	return 0;
    }

 

    if (lside) {
	if (lsame_(transa, "N", 1L, 1L)) {

 

	    if (upper) {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = *m;
		    for (k = 1; k <= i__2; ++k) {
			if (b[k + j * b_dim1] != 0.) {
			    temp = *alpha * b[k + j * b_dim1];
			    i__3 = k - 1;
			    for (i__ = 1; i__ <= i__3; ++i__) {
				b[i__ + j * b_dim1] += temp * a[i__ + k * 
					a_dim1];
 
			    }
			    if (nounit) {
				temp *= a[k + k * a_dim1];
			    }
			    b[k + j * b_dim1] = temp;
			}
 
		    }
 
		}
	    } else {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    for (k = *m; k >= 1; --k) {
			if (b[k + j * b_dim1] != 0.) {
			    temp = *alpha * b[k + j * b_dim1];
			    b[k + j * b_dim1] = temp;
			    if (nounit) {
				b[k + j * b_dim1] *= a[k + k * a_dim1];
			    }
			    i__2 = *m;
			    for (i__ = k + 1; i__ <= i__2; ++i__) {
				b[i__ + j * b_dim1] += temp * a[i__ + k * 
					a_dim1];
 
			    }
			}
 
		    }
 
		}
	    }
	} else {

 

	    if (upper) {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    for (i__ = *m; i__ >= 1; --i__) {
			temp = b[i__ + j * b_dim1];
			if (nounit) {
			    temp *= a[i__ + i__ * a_dim1];
			}
			i__2 = i__ - 1;
			for (k = 1; k <= i__2; ++k) {
			    temp += a[k + i__ * a_dim1] * b[k + j * b_dim1];
 
			}
			b[i__ + j * b_dim1] = *alpha * temp;
 
		    }
 
		}
	    } else {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = *m;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			temp = b[i__ + j * b_dim1];
			if (nounit) {
			    temp *= a[i__ + i__ * a_dim1];
			}
			i__3 = *m;
			for (k = i__ + 1; k <= i__3; ++k) {
			    temp += a[k + i__ * a_dim1] * b[k + j * b_dim1];
 
			}
			b[i__ + j * b_dim1] = *alpha * temp;
 
		    }
 
		}
	    }
	}
    } else {
	if (lsame_(transa, "N", 1L, 1L)) {

 

	    if (upper) {
		for (j = *n; j >= 1; --j) {
		    temp = *alpha;
		    if (nounit) {
			temp *= a[j + j * a_dim1];
		    }
		    i__1 = *m;
		    for (i__ = 1; i__ <= i__1; ++i__) {
			b[i__ + j * b_dim1] = temp * b[i__ + j * b_dim1];
 
		    }
		    i__1 = j - 1;
		    for (k = 1; k <= i__1; ++k) {
			if (a[k + j * a_dim1] != 0.) {
			    temp = *alpha * a[k + j * a_dim1];
			    i__2 = *m;
			    for (i__ = 1; i__ <= i__2; ++i__) {
				b[i__ + j * b_dim1] += temp * b[i__ + k * 
					b_dim1];
 
			    }
			}
 
		    }
 
		}
	    } else {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    temp = *alpha;
		    if (nounit) {
			temp *= a[j + j * a_dim1];
		    }
		    i__2 = *m;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			b[i__ + j * b_dim1] = temp * b[i__ + j * b_dim1];
 
		    }
		    i__2 = *n;
		    for (k = j + 1; k <= i__2; ++k) {
			if (a[k + j * a_dim1] != 0.) {
			    temp = *alpha * a[k + j * a_dim1];
			    i__3 = *m;
			    for (i__ = 1; i__ <= i__3; ++i__) {
				b[i__ + j * b_dim1] += temp * b[i__ + k * 
					b_dim1];
 
			    }
			}
 
		    }
 
		}
	    }
	} else {

 

	    if (upper) {
		i__1 = *n;
		for (k = 1; k <= i__1; ++k) {
		    i__2 = k - 1;
		    for (j = 1; j <= i__2; ++j) {
			if (a[j + k * a_dim1] != 0.) {
			    temp = *alpha * a[j + k * a_dim1];
			    i__3 = *m;
			    for (i__ = 1; i__ <= i__3; ++i__) {
				b[i__ + j * b_dim1] += temp * b[i__ + k * 
					b_dim1];
 
			    }
			}
 
		    }
		    temp = *alpha;
		    if (nounit) {
			temp *= a[k + k * a_dim1];
		    }
		    if (temp != 1.) {
			i__2 = *m;
			for (i__ = 1; i__ <= i__2; ++i__) {
			    b[i__ + k * b_dim1] = temp * b[i__ + k * b_dim1];
 
			}
		    }
 
		}
	    } else {
		for (k = *n; k >= 1; --k) {
		    i__1 = *n;
		    for (j = k + 1; j <= i__1; ++j) {
			if (a[j + k * a_dim1] != 0.) {
			    temp = *alpha * a[j + k * a_dim1];
			    i__2 = *m;
			    for (i__ = 1; i__ <= i__2; ++i__) {
				b[i__ + j * b_dim1] += temp * b[i__ + k * 
					b_dim1];
 
			    }
			}
 
		    }
		    temp = *alpha;
		    if (nounit) {
			temp *= a[k + k * a_dim1];
		    }
		    if (temp != 1.) {
			i__1 = *m;
			for (i__ = 1; i__ <= i__1; ++i__) {
			    b[i__ + k * b_dim1] = temp * b[i__ + k * b_dim1];
 
			}
		    }
 
		}
	    }
	}
    }

    return 0;

 

}  

  int dtrmv_(uplo, trans, diag, n, a, lda, x, incx, uplo_len, 
	trans_len, diag_len)
char *uplo, *trans, *diag;
integer *n;
doublereal *a;
integer *lda;
doublereal *x;
integer *incx;
ftnlen uplo_len;
ftnlen trans_len;
ftnlen diag_len;
{
     
    integer a_dim1, a_offset, i__1, i__2;

     
    static integer info;
    static doublereal temp;
    static integer i__, j;
    extern logical lsame_();
    static integer ix, jx, kx;
    extern   int xerbla_();
    static logical nounit;
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --x;

     
    info = 0;
    if (! lsame_(uplo, "U", 1L, 1L) && ! lsame_(uplo, "L", 1L, 1L)) {
	info = 1;
    } else if (! lsame_(trans, "N", 1L, 1L) && ! lsame_(trans, "T", 1L, 1L) &&
	     ! lsame_(trans, "C", 1L, 1L)) {
	info = 2;
    } else if (! lsame_(diag, "U", 1L, 1L) && ! lsame_(diag, "N", 1L, 1L)) {
	info = 3;
    } else if (*n < 0) {
	info = 4;
    } else if (*lda < (( 1 ) >= ( *n ) ? ( 1 ) : ( *n )) ) {
	info = 6;
    } else if (*incx == 0) {
	info = 8;
    }
    if (info != 0) {
	xerbla_("DTRMV ", &info, 6L);
	return 0;
    }

 

    if (*n == 0) {
	return 0;
    }

    nounit = lsame_(diag, "N", 1L, 1L);

 
 

    if (*incx <= 0) {
	kx = 1 - (*n - 1) * *incx;
    } else if (*incx != 1) {
	kx = 1;
    }

 
 

    if (lsame_(trans, "N", 1L, 1L)) {

 

	if (lsame_(uplo, "U", 1L, 1L)) {
	    if (*incx == 1) {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    if (x[j] != 0.) {
			temp = x[j];
			i__2 = j - 1;
			for (i__ = 1; i__ <= i__2; ++i__) {
			    x[i__] += temp * a[i__ + j * a_dim1];
 
			}
			if (nounit) {
			    x[j] *= a[j + j * a_dim1];
			}
		    }
 
		}
	    } else {
		jx = kx;
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    if (x[jx] != 0.) {
			temp = x[jx];
			ix = kx;
			i__2 = j - 1;
			for (i__ = 1; i__ <= i__2; ++i__) {
			    x[ix] += temp * a[i__ + j * a_dim1];
			    ix += *incx;
 
			}
			if (nounit) {
			    x[jx] *= a[j + j * a_dim1];
			}
		    }
		    jx += *incx;
 
		}
	    }
	} else {
	    if (*incx == 1) {
		for (j = *n; j >= 1; --j) {
		    if (x[j] != 0.) {
			temp = x[j];
			i__1 = j + 1;
			for (i__ = *n; i__ >= i__1; --i__) {
			    x[i__] += temp * a[i__ + j * a_dim1];
 
			}
			if (nounit) {
			    x[j] *= a[j + j * a_dim1];
			}
		    }
 
		}
	    } else {
		kx += (*n - 1) * *incx;
		jx = kx;
		for (j = *n; j >= 1; --j) {
		    if (x[jx] != 0.) {
			temp = x[jx];
			ix = kx;
			i__1 = j + 1;
			for (i__ = *n; i__ >= i__1; --i__) {
			    x[ix] += temp * a[i__ + j * a_dim1];
			    ix -= *incx;
 
			}
			if (nounit) {
			    x[jx] *= a[j + j * a_dim1];
			}
		    }
		    jx -= *incx;
 
		}
	    }
	}
    } else {

 

	if (lsame_(uplo, "U", 1L, 1L)) {
	    if (*incx == 1) {
		for (j = *n; j >= 1; --j) {
		    temp = x[j];
		    if (nounit) {
			temp *= a[j + j * a_dim1];
		    }
		    for (i__ = j - 1; i__ >= 1; --i__) {
			temp += a[i__ + j * a_dim1] * x[i__];
 
		    }
		    x[j] = temp;
 
		}
	    } else {
		jx = kx + (*n - 1) * *incx;
		for (j = *n; j >= 1; --j) {
		    temp = x[jx];
		    ix = jx;
		    if (nounit) {
			temp *= a[j + j * a_dim1];
		    }
		    for (i__ = j - 1; i__ >= 1; --i__) {
			ix -= *incx;
			temp += a[i__ + j * a_dim1] * x[ix];
 
		    }
		    x[jx] = temp;
		    jx -= *incx;
 
		}
	    }
	} else {
	    if (*incx == 1) {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    temp = x[j];
		    if (nounit) {
			temp *= a[j + j * a_dim1];
		    }
		    i__2 = *n;
		    for (i__ = j + 1; i__ <= i__2; ++i__) {
			temp += a[i__ + j * a_dim1] * x[i__];
 
		    }
		    x[j] = temp;
 
		}
	    } else {
		jx = kx;
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    temp = x[jx];
		    ix = jx;
		    if (nounit) {
			temp *= a[j + j * a_dim1];
		    }
		    i__2 = *n;
		    for (i__ = j + 1; i__ <= i__2; ++i__) {
			ix += *incx;
			temp += a[i__ + j * a_dim1] * x[ix];
 
		    }
		    x[jx] = temp;
		    jx += *incx;
 
		}
	    }
	}
    }

    return 0;

 

}  

  int dtrsm_(side, uplo, transa, diag, m, n, alpha, a, lda, b, 
	ldb, side_len, uplo_len, transa_len, diag_len)
char *side, *uplo, *transa, *diag;
integer *m, *n;
doublereal *alpha, *a;
integer *lda;
doublereal *b;
integer *ldb;
ftnlen side_len;
ftnlen uplo_len;
ftnlen transa_len;
ftnlen diag_len;
{
     
    integer a_dim1, a_offset, b_dim1, b_offset, i__1, i__2, i__3;

     
    static integer info;
    static doublereal temp;
    static integer i__, j, k;
    static logical lside;
    extern logical lsame_();
    static integer nrowa;
    static logical upper;
    extern   int xerbla_();
    static logical nounit;
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    b_dim1 = *ldb;
    b_offset = b_dim1 + 1;
    b -= b_offset;

     
    lside = lsame_(side, "L", 1L, 1L);
    if (lside) {
	nrowa = *m;
    } else {
	nrowa = *n;
    }
    nounit = lsame_(diag, "N", 1L, 1L);
    upper = lsame_(uplo, "U", 1L, 1L);

    info = 0;
    if (! lside && ! lsame_(side, "R", 1L, 1L)) {
	info = 1;
    } else if (! upper && ! lsame_(uplo, "L", 1L, 1L)) {
	info = 2;
    } else if (! lsame_(transa, "N", 1L, 1L) && ! lsame_(transa, "T", 1L, 1L) 
	    && ! lsame_(transa, "C", 1L, 1L)) {
	info = 3;
    } else if (! lsame_(diag, "U", 1L, 1L) && ! lsame_(diag, "N", 1L, 1L)) {
	info = 4;
    } else if (*m < 0) {
	info = 5;
    } else if (*n < 0) {
	info = 6;
    } else if (*lda < (( 1 ) >= ( nrowa ) ? ( 1 ) : ( nrowa )) ) {
	info = 9;
    } else if (*ldb < (( 1 ) >= ( *m ) ? ( 1 ) : ( *m )) ) {
	info = 11;
    }
    if (info != 0) {
	xerbla_("DTRSM ", &info, 6L);
	return 0;
    }

 

    if (*n == 0) {
	return 0;
    }

 

    if (*alpha == 0.) {
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    i__2 = *m;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		b[i__ + j * b_dim1] = 0.;
 
	    }
 
	}
	return 0;
    }

 

    if (lside) {
	if (lsame_(transa, "N", 1L, 1L)) {

 

	    if (upper) {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    if (*alpha != 1.) {
			i__2 = *m;
			for (i__ = 1; i__ <= i__2; ++i__) {
			    b[i__ + j * b_dim1] = *alpha * b[i__ + j * b_dim1]
				    ;
 
			}
		    }
		    for (k = *m; k >= 1; --k) {
			if (b[k + j * b_dim1] != 0.) {
			    if (nounit) {
				b[k + j * b_dim1] /= a[k + k * a_dim1];
			    }
			    i__2 = k - 1;
			    for (i__ = 1; i__ <= i__2; ++i__) {
				b[i__ + j * b_dim1] -= b[k + j * b_dim1] * a[
					i__ + k * a_dim1];
 
			    }
			}
 
		    }
 
		}
	    } else {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    if (*alpha != 1.) {
			i__2 = *m;
			for (i__ = 1; i__ <= i__2; ++i__) {
			    b[i__ + j * b_dim1] = *alpha * b[i__ + j * b_dim1]
				    ;
 
			}
		    }
		    i__2 = *m;
		    for (k = 1; k <= i__2; ++k) {
			if (b[k + j * b_dim1] != 0.) {
			    if (nounit) {
				b[k + j * b_dim1] /= a[k + k * a_dim1];
			    }
			    i__3 = *m;
			    for (i__ = k + 1; i__ <= i__3; ++i__) {
				b[i__ + j * b_dim1] -= b[k + j * b_dim1] * a[
					i__ + k * a_dim1];
 
			    }
			}
 
		    }
 
		}
	    }
	} else {

 

	    if (upper) {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = *m;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			temp = *alpha * b[i__ + j * b_dim1];
			i__3 = i__ - 1;
			for (k = 1; k <= i__3; ++k) {
			    temp -= a[k + i__ * a_dim1] * b[k + j * b_dim1];
 
			}
			if (nounit) {
			    temp /= a[i__ + i__ * a_dim1];
			}
			b[i__ + j * b_dim1] = temp;
 
		    }
 
		}
	    } else {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    for (i__ = *m; i__ >= 1; --i__) {
			temp = *alpha * b[i__ + j * b_dim1];
			i__2 = *m;
			for (k = i__ + 1; k <= i__2; ++k) {
			    temp -= a[k + i__ * a_dim1] * b[k + j * b_dim1];
 
			}
			if (nounit) {
			    temp /= a[i__ + i__ * a_dim1];
			}
			b[i__ + j * b_dim1] = temp;
 
		    }
 
		}
	    }
	}
    } else {
	if (lsame_(transa, "N", 1L, 1L)) {

 

	    if (upper) {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    if (*alpha != 1.) {
			i__2 = *m;
			for (i__ = 1; i__ <= i__2; ++i__) {
			    b[i__ + j * b_dim1] = *alpha * b[i__ + j * b_dim1]
				    ;
 
			}
		    }
		    i__2 = j - 1;
		    for (k = 1; k <= i__2; ++k) {
			if (a[k + j * a_dim1] != 0.) {
			    i__3 = *m;
			    for (i__ = 1; i__ <= i__3; ++i__) {
				b[i__ + j * b_dim1] -= a[k + j * a_dim1] * b[
					i__ + k * b_dim1];
 
			    }
			}
 
		    }
		    if (nounit) {
			temp = 1. / a[j + j * a_dim1];
			i__2 = *m;
			for (i__ = 1; i__ <= i__2; ++i__) {
			    b[i__ + j * b_dim1] = temp * b[i__ + j * b_dim1];
 
			}
		    }
 
		}
	    } else {
		for (j = *n; j >= 1; --j) {
		    if (*alpha != 1.) {
			i__1 = *m;
			for (i__ = 1; i__ <= i__1; ++i__) {
			    b[i__ + j * b_dim1] = *alpha * b[i__ + j * b_dim1]
				    ;
 
			}
		    }
		    i__1 = *n;
		    for (k = j + 1; k <= i__1; ++k) {
			if (a[k + j * a_dim1] != 0.) {
			    i__2 = *m;
			    for (i__ = 1; i__ <= i__2; ++i__) {
				b[i__ + j * b_dim1] -= a[k + j * a_dim1] * b[
					i__ + k * b_dim1];
 
			    }
			}
 
		    }
		    if (nounit) {
			temp = 1. / a[j + j * a_dim1];
			i__1 = *m;
			for (i__ = 1; i__ <= i__1; ++i__) {
			    b[i__ + j * b_dim1] = temp * b[i__ + j * b_dim1];
 
			}
		    }
 
		}
	    }
	} else {

 

	    if (upper) {
		for (k = *n; k >= 1; --k) {
		    if (nounit) {
			temp = 1. / a[k + k * a_dim1];
			i__1 = *m;
			for (i__ = 1; i__ <= i__1; ++i__) {
			    b[i__ + k * b_dim1] = temp * b[i__ + k * b_dim1];
 
			}
		    }
		    i__1 = k - 1;
		    for (j = 1; j <= i__1; ++j) {
			if (a[j + k * a_dim1] != 0.) {
			    temp = a[j + k * a_dim1];
			    i__2 = *m;
			    for (i__ = 1; i__ <= i__2; ++i__) {
				b[i__ + j * b_dim1] -= temp * b[i__ + k * 
					b_dim1];
 
			    }
			}
 
		    }
		    if (*alpha != 1.) {
			i__1 = *m;
			for (i__ = 1; i__ <= i__1; ++i__) {
			    b[i__ + k * b_dim1] = *alpha * b[i__ + k * b_dim1]
				    ;
 
			}
		    }
 
		}
	    } else {
		i__1 = *n;
		for (k = 1; k <= i__1; ++k) {
		    if (nounit) {
			temp = 1. / a[k + k * a_dim1];
			i__2 = *m;
			for (i__ = 1; i__ <= i__2; ++i__) {
			    b[i__ + k * b_dim1] = temp * b[i__ + k * b_dim1];
 
			}
		    }
		    i__2 = *n;
		    for (j = k + 1; j <= i__2; ++j) {
			if (a[j + k * a_dim1] != 0.) {
			    temp = a[j + k * a_dim1];
			    i__3 = *m;
			    for (i__ = 1; i__ <= i__3; ++i__) {
				b[i__ + j * b_dim1] -= temp * b[i__ + k * 
					b_dim1];
 
			    }
			}
 
		    }
		    if (*alpha != 1.) {
			i__2 = *m;
			for (i__ = 1; i__ <= i__2; ++i__) {
			    b[i__ + k * b_dim1] = *alpha * b[i__ + k * b_dim1]
				    ;
 
			}
		    }
 
		}
	    }
	}
    }

    return 0;

 

}  

  int dtrsv_(uplo, trans, diag, n, a, lda, x, incx, uplo_len, 
	trans_len, diag_len)
char *uplo, *trans, *diag;
integer *n;
doublereal *a;
integer *lda;
doublereal *x;
integer *incx;
ftnlen uplo_len;
ftnlen trans_len;
ftnlen diag_len;
{
     
    integer a_dim1, a_offset, i__1, i__2;

     
    static integer info;
    static doublereal temp;
    static integer i__, j;
    extern logical lsame_();
    static integer ix, jx, kx;
    extern   int xerbla_();
    static logical nounit;
     
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --x;

     
    info = 0;
    if (! lsame_(uplo, "U", 1L, 1L) && ! lsame_(uplo, "L", 1L, 1L)) {
	info = 1;
    } else if (! lsame_(trans, "N", 1L, 1L) && ! lsame_(trans, "T", 1L, 1L) &&
	     ! lsame_(trans, "C", 1L, 1L)) {
	info = 2;
    } else if (! lsame_(diag, "U", 1L, 1L) && ! lsame_(diag, "N", 1L, 1L)) {
	info = 3;
    } else if (*n < 0) {
	info = 4;
    } else if (*lda < (( 1 ) >= ( *n ) ? ( 1 ) : ( *n )) ) {
	info = 6;
    } else if (*incx == 0) {
	info = 8;
    }
    if (info != 0) {
	xerbla_("DTRSV ", &info, 6L);
	return 0;
    }

 

    if (*n == 0) {
	return 0;
    }

    nounit = lsame_(diag, "N", 1L, 1L);

 
 

    if (*incx <= 0) {
	kx = 1 - (*n - 1) * *incx;
    } else if (*incx != 1) {
	kx = 1;
    }

 
 

    if (lsame_(trans, "N", 1L, 1L)) {

 

	if (lsame_(uplo, "U", 1L, 1L)) {
	    if (*incx == 1) {
		for (j = *n; j >= 1; --j) {
		    if (x[j] != 0.) {
			if (nounit) {
			    x[j] /= a[j + j * a_dim1];
			}
			temp = x[j];
			for (i__ = j - 1; i__ >= 1; --i__) {
			    x[i__] -= temp * a[i__ + j * a_dim1];
 
			}
		    }
 
		}
	    } else {
		jx = kx + (*n - 1) * *incx;
		for (j = *n; j >= 1; --j) {
		    if (x[jx] != 0.) {
			if (nounit) {
			    x[jx] /= a[j + j * a_dim1];
			}
			temp = x[jx];
			ix = jx;
			for (i__ = j - 1; i__ >= 1; --i__) {
			    ix -= *incx;
			    x[ix] -= temp * a[i__ + j * a_dim1];
 
			}
		    }
		    jx -= *incx;
 
		}
	    }
	} else {
	    if (*incx == 1) {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    if (x[j] != 0.) {
			if (nounit) {
			    x[j] /= a[j + j * a_dim1];
			}
			temp = x[j];
			i__2 = *n;
			for (i__ = j + 1; i__ <= i__2; ++i__) {
			    x[i__] -= temp * a[i__ + j * a_dim1];
 
			}
		    }
 
		}
	    } else {
		jx = kx;
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    if (x[jx] != 0.) {
			if (nounit) {
			    x[jx] /= a[j + j * a_dim1];
			}
			temp = x[jx];
			ix = jx;
			i__2 = *n;
			for (i__ = j + 1; i__ <= i__2; ++i__) {
			    ix += *incx;
			    x[ix] -= temp * a[i__ + j * a_dim1];
 
			}
		    }
		    jx += *incx;
 
		}
	    }
	}
    } else {

 

	if (lsame_(uplo, "U", 1L, 1L)) {
	    if (*incx == 1) {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    temp = x[j];
		    i__2 = j - 1;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			temp -= a[i__ + j * a_dim1] * x[i__];
 
		    }
		    if (nounit) {
			temp /= a[j + j * a_dim1];
		    }
		    x[j] = temp;
 
		}
	    } else {
		jx = kx;
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    temp = x[jx];
		    ix = kx;
		    i__2 = j - 1;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			temp -= a[i__ + j * a_dim1] * x[ix];
			ix += *incx;
 
		    }
		    if (nounit) {
			temp /= a[j + j * a_dim1];
		    }
		    x[jx] = temp;
		    jx += *incx;
 
		}
	    }
	} else {
	    if (*incx == 1) {
		for (j = *n; j >= 1; --j) {
		    temp = x[j];
		    i__1 = j + 1;
		    for (i__ = *n; i__ >= i__1; --i__) {
			temp -= a[i__ + j * a_dim1] * x[i__];
 
		    }
		    if (nounit) {
			temp /= a[j + j * a_dim1];
		    }
		    x[j] = temp;
 
		}
	    } else {
		kx += (*n - 1) * *incx;
		jx = kx;
		for (j = *n; j >= 1; --j) {
		    temp = x[jx];
		    ix = kx;
		    i__1 = j + 1;
		    for (i__ = *n; i__ >= i__1; --i__) {
			temp -= a[i__ + j * a_dim1] * x[ix];
			ix -= *incx;
 
		    }
		    if (nounit) {
			temp /= a[j + j * a_dim1];
		    }
		    x[jx] = temp;
		    jx -= *incx;
 
		}
	    }
	}
    }

    return 0;

 

}  

integer ilaenv_(ispec, name__, opts, n1, n2, n3, n4, name_len, opts_len)
integer *ispec;
char *name__, *opts;
integer *n1, *n2, *n3, *n4;
ftnlen name_len;
ftnlen opts_len;
{
     
    integer ret_val;

     
      int s_copy();
    integer s_cmp();

     
    static integer i__;
    static logical cname, sname;
    static integer nbmin;
    static char c1[1], c2[2], c3[3], c4[2];
    static integer ic, nb, iz, nx;
    static char subnam[6];

    switch ((int)*ispec) {
	case 1:  goto L100;
	case 2:  goto L100;
	case 3:  goto L100;
	case 4:  goto L400;
	case 5:  goto L500;
	case 6:  goto L600;
	case 7:  goto L700;
	case 8:  goto L800;
    }

 

    ret_val = -1;
    return ret_val;

L100:

 

    ret_val = 1;
    s_copy(subnam, name__, 6L, name_len);
    ic = *(unsigned char *)subnam;
    iz = 'Z';
    if (iz == 90 || iz == 122) {

 

	if (ic >= 97 && ic <= 122) {
	    *(unsigned char *)subnam = (char) (ic - 32);
	    for (i__ = 2; i__ <= 6; ++i__) {
		ic = *(unsigned char *)&subnam[i__ - 1];
		if (ic >= 97 && ic <= 122) {
		    *(unsigned char *)&subnam[i__ - 1] = (char) (ic - 32);
		}
 
	    }
	}

    } else if (iz == 233 || iz == 169) {

 

	if (ic >= 129 && ic <= 137 || ic >= 145 && ic <= 153 || ic >= 162 && 
		ic <= 169) {
	    *(unsigned char *)subnam = (char) (ic + 64);
	    for (i__ = 2; i__ <= 6; ++i__) {
		ic = *(unsigned char *)&subnam[i__ - 1];
		if (ic >= 129 && ic <= 137 || ic >= 145 && ic <= 153 || ic >= 
			162 && ic <= 169) {
		    *(unsigned char *)&subnam[i__ - 1] = (char) (ic + 64);
		}
 
	    }
	}

    } else if (iz == 218 || iz == 250) {

 

	if (ic >= 225 && ic <= 250) {
	    *(unsigned char *)subnam = (char) (ic - 32);
	    for (i__ = 2; i__ <= 6; ++i__) {
		ic = *(unsigned char *)&subnam[i__ - 1];
		if (ic >= 225 && ic <= 250) {
		    *(unsigned char *)&subnam[i__ - 1] = (char) (ic - 32);
		}
 
	    }
	}
    }

    *(unsigned char *)c1 = *(unsigned char *)subnam;
    sname = *(unsigned char *)c1 == 'S' || *(unsigned char *)c1 == 'D';
    cname = *(unsigned char *)c1 == 'C' || *(unsigned char *)c1 == 'Z';
    if (! (cname || sname)) {
	return ret_val;
    }
    s_copy(c2, subnam + 1, 2L, 2L);
    s_copy(c3, subnam + 3, 3L, 3L);
    s_copy(c4, c3 + 1, 2L, 2L);

    switch ((int)*ispec) {
	case 1:  goto L110;
	case 2:  goto L200;
	case 3:  goto L300;
    }

L110:

 

 
 
 

    nb = 1;

    if (s_cmp(c2, "GE", 2L, 2L) == 0) {
	if (s_cmp(c3, "TRF", 3L, 3L) == 0) {
	    if (sname) {
		nb = 64;
	    } else {
		nb = 64;
	    }
	} else if (s_cmp(c3, "QRF", 3L, 3L) == 0 || s_cmp(c3, "RQF", 3L, 3L) 
		== 0 || s_cmp(c3, "LQF", 3L, 3L) == 0 || s_cmp(c3, "QLF", 3L, 
		3L) == 0) {
	    if (sname) {
		nb = 32;
	    } else {
		nb = 32;
	    }
	} else if (s_cmp(c3, "HRD", 3L, 3L) == 0) {
	    if (sname) {
		nb = 32;
	    } else {
		nb = 32;
	    }
	} else if (s_cmp(c3, "BRD", 3L, 3L) == 0) {
	    if (sname) {
		nb = 32;
	    } else {
		nb = 32;
	    }
	} else if (s_cmp(c3, "TRI", 3L, 3L) == 0) {
	    if (sname) {
		nb = 64;
	    } else {
		nb = 64;
	    }
	}
    } else if (s_cmp(c2, "PO", 2L, 2L) == 0) {
	if (s_cmp(c3, "TRF", 3L, 3L) == 0) {
	    if (sname) {
		nb = 64;
	    } else {
		nb = 64;
	    }
	}
    } else if (s_cmp(c2, "SY", 2L, 2L) == 0) {
	if (s_cmp(c3, "TRF", 3L, 3L) == 0) {
	    if (sname) {
		nb = 64;
	    } else {
		nb = 64;
	    }
	} else if (sname && s_cmp(c3, "TRD", 3L, 3L) == 0) {
	    nb = 1;
	} else if (sname && s_cmp(c3, "GST", 3L, 3L) == 0) {
	    nb = 64;
	}
    } else if (cname && s_cmp(c2, "HE", 2L, 2L) == 0) {
	if (s_cmp(c3, "TRF", 3L, 3L) == 0) {
	    nb = 64;
	} else if (s_cmp(c3, "TRD", 3L, 3L) == 0) {
	    nb = 1;
	} else if (s_cmp(c3, "GST", 3L, 3L) == 0) {
	    nb = 64;
	}
    } else if (sname && s_cmp(c2, "OR", 2L, 2L) == 0) {
	if (*(unsigned char *)c3 == 'G') {
	    if (s_cmp(c4, "QR", 2L, 2L) == 0 || s_cmp(c4, "RQ", 2L, 2L) == 0 
		    || s_cmp(c4, "LQ", 2L, 2L) == 0 || s_cmp(c4, "QL", 2L, 2L)
		     == 0 || s_cmp(c4, "HR", 2L, 2L) == 0 || s_cmp(c4, "TR", 
		    2L, 2L) == 0 || s_cmp(c4, "BR", 2L, 2L) == 0) {
		nb = 32;
	    }
	} else if (*(unsigned char *)c3 == 'M') {
	    if (s_cmp(c4, "QR", 2L, 2L) == 0 || s_cmp(c4, "RQ", 2L, 2L) == 0 
		    || s_cmp(c4, "LQ", 2L, 2L) == 0 || s_cmp(c4, "QL", 2L, 2L)
		     == 0 || s_cmp(c4, "HR", 2L, 2L) == 0 || s_cmp(c4, "TR", 
		    2L, 2L) == 0 || s_cmp(c4, "BR", 2L, 2L) == 0) {
		nb = 32;
	    }
	}
    } else if (cname && s_cmp(c2, "UN", 2L, 2L) == 0) {
	if (*(unsigned char *)c3 == 'G') {
	    if (s_cmp(c4, "QR", 2L, 2L) == 0 || s_cmp(c4, "RQ", 2L, 2L) == 0 
		    || s_cmp(c4, "LQ", 2L, 2L) == 0 || s_cmp(c4, "QL", 2L, 2L)
		     == 0 || s_cmp(c4, "HR", 2L, 2L) == 0 || s_cmp(c4, "TR", 
		    2L, 2L) == 0 || s_cmp(c4, "BR", 2L, 2L) == 0) {
		nb = 32;
	    }
	} else if (*(unsigned char *)c3 == 'M') {
	    if (s_cmp(c4, "QR", 2L, 2L) == 0 || s_cmp(c4, "RQ", 2L, 2L) == 0 
		    || s_cmp(c4, "LQ", 2L, 2L) == 0 || s_cmp(c4, "QL", 2L, 2L)
		     == 0 || s_cmp(c4, "HR", 2L, 2L) == 0 || s_cmp(c4, "TR", 
		    2L, 2L) == 0 || s_cmp(c4, "BR", 2L, 2L) == 0) {
		nb = 32;
	    }
	}
    } else if (s_cmp(c2, "GB", 2L, 2L) == 0) {
	if (s_cmp(c3, "TRF", 3L, 3L) == 0) {
	    if (sname) {
		if (*n4 <= 64) {
		    nb = 1;
		} else {
		    nb = 32;
		}
	    } else {
		if (*n4 <= 64) {
		    nb = 1;
		} else {
		    nb = 32;
		}
	    }
	}
    } else if (s_cmp(c2, "PB", 2L, 2L) == 0) {
	if (s_cmp(c3, "TRF", 3L, 3L) == 0) {
	    if (sname) {
		if (*n2 <= 64) {
		    nb = 1;
		} else {
		    nb = 32;
		}
	    } else {
		if (*n2 <= 64) {
		    nb = 1;
		} else {
		    nb = 32;
		}
	    }
	}
    } else if (s_cmp(c2, "TR", 2L, 2L) == 0) {
	if (s_cmp(c3, "TRI", 3L, 3L) == 0) {
	    if (sname) {
		nb = 64;
	    } else {
		nb = 64;
	    }
	}
    } else if (s_cmp(c2, "LA", 2L, 2L) == 0) {
	if (s_cmp(c3, "UUM", 3L, 3L) == 0) {
	    if (sname) {
		nb = 64;
	    } else {
		nb = 64;
	    }
	}
    } else if (sname && s_cmp(c2, "ST", 2L, 2L) == 0) {
	if (s_cmp(c3, "EBZ", 3L, 3L) == 0) {
	    nb = 1;
	}
    }
    ret_val = nb;
    return ret_val;

L200:

 

    nbmin = 2;
    if (s_cmp(c2, "GE", 2L, 2L) == 0) {
	if (s_cmp(c3, "QRF", 3L, 3L) == 0 || s_cmp(c3, "RQF", 3L, 3L) == 0 || 
		s_cmp(c3, "LQF", 3L, 3L) == 0 || s_cmp(c3, "QLF", 3L, 3L) == 
		0) {
	    if (sname) {
		nbmin = 2;
	    } else {
		nbmin = 2;
	    }
	} else if (s_cmp(c3, "HRD", 3L, 3L) == 0) {
	    if (sname) {
		nbmin = 2;
	    } else {
		nbmin = 2;
	    }
	} else if (s_cmp(c3, "BRD", 3L, 3L) == 0) {
	    if (sname) {
		nbmin = 2;
	    } else {
		nbmin = 2;
	    }
	} else if (s_cmp(c3, "TRI", 3L, 3L) == 0) {
	    if (sname) {
		nbmin = 2;
	    } else {
		nbmin = 2;
	    }
	}
    } else if (s_cmp(c2, "SY", 2L, 2L) == 0) {
	if (s_cmp(c3, "TRF", 3L, 3L) == 0) {
	    if (sname) {
		nbmin = 8;
	    } else {
		nbmin = 8;
	    }
	} else if (sname && s_cmp(c3, "TRD", 3L, 3L) == 0) {
	    nbmin = 2;
	}
    } else if (cname && s_cmp(c2, "HE", 2L, 2L) == 0) {
	if (s_cmp(c3, "TRD", 3L, 3L) == 0) {
	    nbmin = 2;
	}
    } else if (sname && s_cmp(c2, "OR", 2L, 2L) == 0) {
	if (*(unsigned char *)c3 == 'G') {
	    if (s_cmp(c4, "QR", 2L, 2L) == 0 || s_cmp(c4, "RQ", 2L, 2L) == 0 
		    || s_cmp(c4, "LQ", 2L, 2L) == 0 || s_cmp(c4, "QL", 2L, 2L)
		     == 0 || s_cmp(c4, "HR", 2L, 2L) == 0 || s_cmp(c4, "TR", 
		    2L, 2L) == 0 || s_cmp(c4, "BR", 2L, 2L) == 0) {
		nbmin = 2;
	    }
	} else if (*(unsigned char *)c3 == 'M') {
	    if (s_cmp(c4, "QR", 2L, 2L) == 0 || s_cmp(c4, "RQ", 2L, 2L) == 0 
		    || s_cmp(c4, "LQ", 2L, 2L) == 0 || s_cmp(c4, "QL", 2L, 2L)
		     == 0 || s_cmp(c4, "HR", 2L, 2L) == 0 || s_cmp(c4, "TR", 
		    2L, 2L) == 0 || s_cmp(c4, "BR", 2L, 2L) == 0) {
		nbmin = 2;
	    }
	}
    } else if (cname && s_cmp(c2, "UN", 2L, 2L) == 0) {
	if (*(unsigned char *)c3 == 'G') {
	    if (s_cmp(c4, "QR", 2L, 2L) == 0 || s_cmp(c4, "RQ", 2L, 2L) == 0 
		    || s_cmp(c4, "LQ", 2L, 2L) == 0 || s_cmp(c4, "QL", 2L, 2L)
		     == 0 || s_cmp(c4, "HR", 2L, 2L) == 0 || s_cmp(c4, "TR", 
		    2L, 2L) == 0 || s_cmp(c4, "BR", 2L, 2L) == 0) {
		nbmin = 2;
	    }
	} else if (*(unsigned char *)c3 == 'M') {
	    if (s_cmp(c4, "QR", 2L, 2L) == 0 || s_cmp(c4, "RQ", 2L, 2L) == 0 
		    || s_cmp(c4, "LQ", 2L, 2L) == 0 || s_cmp(c4, "QL", 2L, 2L)
		     == 0 || s_cmp(c4, "HR", 2L, 2L) == 0 || s_cmp(c4, "TR", 
		    2L, 2L) == 0 || s_cmp(c4, "BR", 2L, 2L) == 0) {
		nbmin = 2;
	    }
	}
    }
    ret_val = nbmin;
    return ret_val;

L300:

 

    nx = 0;
    if (s_cmp(c2, "GE", 2L, 2L) == 0) {
	if (s_cmp(c3, "QRF", 3L, 3L) == 0 || s_cmp(c3, "RQF", 3L, 3L) == 0 || 
		s_cmp(c3, "LQF", 3L, 3L) == 0 || s_cmp(c3, "QLF", 3L, 3L) == 
		0) {
	    if (sname) {
		nx = 128;
	    } else {
		nx = 128;
	    }
	} else if (s_cmp(c3, "HRD", 3L, 3L) == 0) {
	    if (sname) {
		nx = 128;
	    } else {
		nx = 128;
	    }
	} else if (s_cmp(c3, "BRD", 3L, 3L) == 0) {
	    if (sname) {
		nx = 128;
	    } else {
		nx = 128;
	    }
	}
    } else if (s_cmp(c2, "SY", 2L, 2L) == 0) {
	if (sname && s_cmp(c3, "TRD", 3L, 3L) == 0) {
	    nx = 1;
	}
    } else if (cname && s_cmp(c2, "HE", 2L, 2L) == 0) {
	if (s_cmp(c3, "TRD", 3L, 3L) == 0) {
	    nx = 1;
	}
    } else if (sname && s_cmp(c2, "OR", 2L, 2L) == 0) {
	if (*(unsigned char *)c3 == 'G') {
	    if (s_cmp(c4, "QR", 2L, 2L) == 0 || s_cmp(c4, "RQ", 2L, 2L) == 0 
		    || s_cmp(c4, "LQ", 2L, 2L) == 0 || s_cmp(c4, "QL", 2L, 2L)
		     == 0 || s_cmp(c4, "HR", 2L, 2L) == 0 || s_cmp(c4, "TR", 
		    2L, 2L) == 0 || s_cmp(c4, "BR", 2L, 2L) == 0) {
		nx = 128;
	    }
	}
    } else if (cname && s_cmp(c2, "UN", 2L, 2L) == 0) {
	if (*(unsigned char *)c3 == 'G') {
	    if (s_cmp(c4, "QR", 2L, 2L) == 0 || s_cmp(c4, "RQ", 2L, 2L) == 0 
		    || s_cmp(c4, "LQ", 2L, 2L) == 0 || s_cmp(c4, "QL", 2L, 2L)
		     == 0 || s_cmp(c4, "HR", 2L, 2L) == 0 || s_cmp(c4, "TR", 
		    2L, 2L) == 0 || s_cmp(c4, "BR", 2L, 2L) == 0) {
		nx = 128;
	    }
	}
    }
    ret_val = nx;
    return ret_val;

L400:

 

    ret_val = 6;
    return ret_val;

L500:

 

    ret_val = 2;
    return ret_val;

L600:

 

    ret_val = (integer) ((real) (( *n1 ) <= ( *n2 ) ? ( *n1 ) : ( *n2 ))  * (float)1.6);
    return ret_val;

L700:

 

    ret_val = 1;
    return ret_val;

L800:

 

    ret_val = 50;
    return ret_val;

 

}  

logical lsame_(ca, cb, ca_len, cb_len)
char *ca, *cb;
ftnlen ca_len;
ftnlen cb_len;
{
     
    logical ret_val;

     
    static integer inta, intb, zcode;
    ret_val = *(unsigned char *)ca == *(unsigned char *)cb;
    if (ret_val) {
	return ret_val;
    }

    zcode = 'Z';
    inta = *(unsigned char *)ca;
    intb = *(unsigned char *)cb;

    if (zcode == 90 || zcode == 122) {

 

 

	if (inta >= 97 && inta <= 122) {
	    inta += -32;
	}
	if (intb >= 97 && intb <= 122) {
	    intb += -32;
	}

    } else if (zcode == 233 || zcode == 169) {

 

 

	if (inta >= 129 && inta <= 137 || inta >= 145 && inta <= 153 || inta 
		>= 162 && inta <= 169) {
	    inta += 64;
	}
	if (intb >= 129 && intb <= 137 || intb >= 145 && intb <= 153 || intb 
		>= 162 && intb <= 169) {
	    intb += 64;
	}

    } else if (zcode == 218 || zcode == 250) {

 

 

	if (inta >= 225 && inta <= 250) {
	    inta += -32;
	}
	if (intb >= 225 && intb <= 250) {
	    intb += -32;
	}
    }
    ret_val = inta == intb;

 

 

    return ret_val;
}  

  int xerbla_(srname, info, srname_len)
char *srname;
integer *info;
ftnlen srname_len;
{
     
    static char fmt_9999[] = "(\002 ** On entry to \002,a6,\002 parameter number \002,i2,\002 had \002,\002an illegal value\002)";

     
    integer s_wsfe(), do_fio(), e_wsfe();
      int s_stop();

     
    static cilist io___630 = { 0, 6, 0, fmt_9999, 0 };
    s_wsfe(&io___630);
    do_fio(&c__1, srname, 6L);
    do_fio(&c__1, (char *)&(*info), (ftnlen)sizeof(integer));
    e_wsfe();

    s_stop("", 0L);
}  

 
  int ainvg_(res, adda, neq, t, y, ydot, miter, ml, mu, pw, 
	ipvt, ier)
  int (*res) (), (*adda) ();
integer *neq;
doublereal *t, *y, *ydot;
integer *miter, *ml, *mu;
doublereal *pw;
integer *ipvt, *ier;
{
     
    integer i__1;

     
    extern   int dgbfa_(), dgefa_();
    static integer i__;
    extern   int dgbsl_(), dgesl_();
    static integer lenpw, nrowpw, mlp1;

 
 

 
 
 
 
 
 
 
 
 
 
 
 


     
    --ipvt;
    --pw;
    --ydot;
    --y;

     
    if (*miter >= 4) {
	goto L100;
    }

 


    lenpw = *neq * *neq;
    i__1 = lenpw;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	pw[i__] = 0.;
    }

    *ier = 1;
    (*res)(neq, t, &y[1], &pw[1], &ydot[1], ier);
    if (ierode_ .iero > 0) {
	return 0;
    }
    if (*ier > 1) {
	return 0;
    }

    (*adda)(neq, t, &y[1], &c__0, &c__0, &pw[1], neq);
    if (ierode_ .iero > 0) {
	return 0;
    }
    dgefa_(&pw[1], neq, neq, &ipvt[1], ier);
    if (*ier == 0) {
	goto L20;
    }
    *ier = -(*ier);
    return 0;
L20:
    dgesl_(&pw[1], neq, neq, &ipvt[1], &ydot[1], &c__0);
    return 0;

 


L100:
    nrowpw = (*ml << 1) + *mu + 1;
    lenpw = *neq * nrowpw;
    i__1 = lenpw;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	pw[i__] = 0.;
    }

    *ier = 1;
    (*res)(neq, t, &y[1], &pw[1], &ydot[1], ier);
    if (ierode_ .iero > 0) {
	return 0;
    }
    if (*ier > 1) {
	return 0;
    }

    mlp1 = *ml + 1;
    (*adda)(neq, t, &y[1], ml, mu, &pw[mlp1], &nrowpw);
    if (ierode_ .iero > 0) {
	return 0;
    }
    dgbfa_(&pw[1], &nrowpw, neq, ml, mu, &ipvt[1], ier);
    if (*ier == 0) {
	goto L120;
    }
    *ier = -(*ier);
    return 0;
L120:
    dgbsl_(&pw[1], &nrowpw, neq, ml, mu, &ipvt[1], &ydot[1], &c__0);
    return 0;
 

}  

 
doublereal bnorm_(n, a, nra, ml, mu, w)
integer *n;
doublereal *a;
integer *nra, *ml, *mu;
doublereal *w;
{
     
    integer a_dim1, a_offset, i__1, i__2;
    doublereal ret_val, d__1, d__2;

     
    static integer i__, j, i1;
    static doublereal an;
    static integer jhi, jlo;
    static doublereal sum;
    --w;
    a_dim1 = *nra;
    a_offset = a_dim1 + 1;
    a -= a_offset;

     
    an = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	sum = 0.;
	i1 = i__ + *mu + 1;
 
	i__2 = i__ - *ml;
	jlo = (( i__2 ) >= ( 1 ) ? ( i__2 ) : ( 1 )) ;
 
	i__2 = i__ + *mu;
	jhi = (( i__2 ) <= ( *n ) ? ( i__2 ) : ( *n )) ;
	i__2 = jhi;
	for (j = jlo; j <= i__2; ++j) {
 
	    sum += (d__1 = a[i1 - j + j * a_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) / w[j];
	}
 
	d__1 = an, d__2 = sum * w[i__];
	an = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
 
    }
    ret_val = an;
    return ret_val;
 

}  

 
  int cfode_(meth, elco, tesco)
integer *meth;
doublereal *elco, *tesco;
{
     
    integer i__1;

     
    static doublereal ragq, pint, xpin, fnqm1;
    static integer i__;
    static doublereal agamq, rqfac, tsign, rq1fac;
    static integer ib;
    static doublereal pc[12];
    static integer nq;
    static doublereal fnq;
    static integer nqm1, nqp1;
     
    tesco -= 4;
    elco -= 14;

     
    switch ((int)*meth) {
	case 1:  goto L100;
	case 2:  goto L200;
    }

L100:
    elco[14] = 1.;
    elco[15] = 1.;
    tesco[4] = 0.;
    tesco[5] = 2.;
    tesco[7] = 1.;
    tesco[39] = 0.;
    pc[0] = 1.;
    rqfac = 1.;
    for (nq = 2; nq <= 12; ++nq) {
 

 
 
 
 

	rq1fac = rqfac;
	rqfac /= (doublereal) nq;
	nqm1 = nq - 1;
	fnqm1 = (doublereal) nqm1;
	nqp1 = nq + 1;
 

	pc[nq - 1] = 0.;
	i__1 = nqm1;
	for (ib = 1; ib <= i__1; ++ib) {
	    i__ = nqp1 - ib;
 
	    pc[i__ - 1] = pc[i__ - 2] + fnqm1 * pc[i__ - 1];
	}
	pc[0] = fnqm1 * pc[0];
 

	pint = pc[0];
	xpin = pc[0] / 2.;
	tsign = 1.;
	i__1 = nq;
	for (i__ = 2; i__ <= i__1; ++i__) {
	    tsign = -tsign;
	    pint += tsign * pc[i__ - 1] / (doublereal) i__;
 
	    xpin += tsign * pc[i__ - 1] / (doublereal) (i__ + 1);
	}
 

	elco[nq * 13 + 1] = pint * rq1fac;
	elco[nq * 13 + 2] = 1.;
	i__1 = nq;
	for (i__ = 2; i__ <= i__1; ++i__) {
 
	    elco[i__ + 1 + nq * 13] = rq1fac * pc[i__ - 1] / (doublereal) i__;
	}
	agamq = rqfac * xpin;
	ragq = 1. / agamq;
	tesco[nq * 3 + 2] = ragq;
	if (nq < 12) {
	    tesco[nqp1 * 3 + 1] = ragq * rqfac / (doublereal) nqp1;
	}
	tesco[nqm1 * 3 + 3] = ragq;
 
    }
    return 0;

L200:
    pc[0] = 1.;
    rq1fac = 1.;
    for (nq = 1; nq <= 5; ++nq) {
 

 
 
 
 

	fnq = (doublereal) nq;
	nqp1 = nq + 1;
 

	pc[nqp1 - 1] = 0.;
	i__1 = nq;
	for (ib = 1; ib <= i__1; ++ib) {
	    i__ = nq + 2 - ib;
 
	    pc[i__ - 1] = pc[i__ - 2] + fnq * pc[i__ - 1];
	}
	pc[0] = fnq * pc[0];
 

	i__1 = nqp1;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    elco[i__ + nq * 13] = pc[i__ - 1] / pc[1];
	}
	elco[nq * 13 + 2] = 1.;
	tesco[nq * 3 + 1] = rq1fac;
	tesco[nq * 3 + 2] = (doublereal) nqp1 / elco[nq * 13 + 1];
	tesco[nq * 3 + 3] = (doublereal) (nq + 2) / elco[nq * 13 + 1];
	rq1fac /= fnq;
 
    }
    return 0;
 

}  
 

  int colnew_0_(n__, ncomp, m, aleft, aright, zeta, ipar, ltol,
	 tol, fixpnt, ispace, fspace, iflag, fsub, dfsub, gsub, dgsub, guess)
int n__;
integer *ncomp, *m;
doublereal *aleft, *aright, *zeta;
integer *ipar, *ltol;
doublereal *tol, *fixpnt;
integer *ispace;
doublereal *fspace;
integer *iflag;
  int (*fsub) (), (*dfsub) (), (*gsub) (), (*dgsub) (), (*
	guess) ();
{
     
    static char fmt_99[] = "(//,\002 VERSION *COLNEW* OF COLSYS .    \002,//)"
	    ;
    static char fmt_260[] = "(///\002 THE NUMBER OF (LINEAR) DIFF EQNS IS \002,i3/1x,\002THEIR ORDERS ARE\002,20i3)";
    static char fmt_270[] = "(///\002 THE NUMBER OF (NONLINEAR) DIFF EQNS IS \002,i3/1x,\002THEIR ORDERS ARE\002,20i3)";
    static char fmt_280[] = "(\002 SIDE CONDITION POINTS ZETA\002,8f10.6,4(/27x,8f10.6))";
    static char fmt_340[] = "(\002 THERE ARE\002,i5,\002 FIXED POINTS IN THE MESH -\002,10(6f10.6/))";
    static char fmt_290[] = "(\002 NUMBER OF COLLOC PTS PER INTERVAL IS\002,i3)";
    static char fmt_300[] = "(\002 COMPONENTS OF Z REQUIRING TOLERANCES -\002,8(7x,i2,1x),4(/38x,8i10))";
    static char fmt_310[] = "(\002 CORRESPONDING ERROR TOLERANCES -\002,6x,8d10.2,4(/39x,8d10.2))";
    static char fmt_320[] = "(\002 INITIAL MESH(ES) AND Z,DMZ PROVIDED BY USER\002)";
    static char fmt_330[] = "(\002 NO ADAPTIVE MESH SELECTION\002)";
    static char fmt_350[] = "(\002 THE MAXIMUM NUMBER OF SUBINTERVALS IS MIN (\002,i4,\002 (ALLOWED FROM FSPACE),\002,i4,\002 (ALLOWED FROM ISPACE) )\002)";
    static char fmt_360[] = "(/\002 INSUFFICIENT SPACE TO DOUBLE MESH FOR ERROR ESTIMATE\002)";

     
    integer i__1, i__2, i__3;
    doublereal d__1, d__2;

     
    integer s_wsfe(), e_wsfe(), do_fio();

     
    static integer nrec, lscl, ldmz, idmz, ldqz, lrhs, i__, iread, ndimf, 
	    ndimi, ldscl, nmaxf, nfixf, ldelz, nfixi, nmaxi;
    static doublereal dummy[1];
    static integer lpvtg, k2, lpvtw;
    static doublereal precp1;
    static integer ib, ic, lg, ip, lw, lv, lz, laccum, ldeldz, linteg, lxiold,
	     ldqdmz, nsizef, lslope, nsizei;
    extern   int newmsh_();
    static integer lvalst;
    extern   int consts_();
    static integer nfxpnt;
    extern   int contrl_();
    static integer np1, lxi;

     
    static cilist io___657 = { 0, 6, 0, fmt_99, 0 };
    static cilist io___664 = { 0, 0, 0, fmt_260, 0 };
    static cilist io___666 = { 0, 0, 0, fmt_270, 0 };
    static cilist io___667 = { 0, 0, 0, fmt_280, 0 };
    static cilist io___668 = { 0, 0, 0, fmt_340, 0 };
    static cilist io___669 = { 0, 0, 0, fmt_290, 0 };
    static cilist io___670 = { 0, 0, 0, fmt_300, 0 };
    static cilist io___671 = { 0, 0, 0, fmt_310, 0 };
    static cilist io___672 = { 0, 0, 0, fmt_320, 0 };
    static cilist io___673 = { 0, 0, 0, fmt_330, 0 };
    static cilist io___682 = { 0, 0, 0, fmt_350, 0 };
    static cilist io___683 = { 0, 0, 0, fmt_360, 0 };
    --m;
    --zeta;
    --ipar;
    --ltol;
    --tol;
    --fixpnt;
    --ispace;
    --fspace;

     
    switch(n__) {
	case 1: goto L_colsys;
	}


L_colsys:
    if (ipar[7] <= 0) {
	s_wsfe(&io___657);
	e_wsfe();
    }

    colout_ .iout = 6;
    colout_ .precis = 1.;
L10:
    colout_ .precis /= 2.;
    precp1 = colout_ .precis + 1.;
    if (precp1 > 1.) {
	goto L10;
    }
    colout_ .precis *= 100.;

 
 

    *iflag = -3;
    if (*ncomp < 1 || *ncomp > 20) {
	return 0;
    }
    i__1 = *ncomp;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (m[i__] < 1 || m[i__] > 4) {
	    return 0;
	}
 
    }

 

    colnln_ .nonlin = ipar[1];
    (colord_._1) .k = ipar[2];
    colapr_ .n = ipar[3];
    if (colapr_ .n == 0) {
	colapr_ .n = 5;
    }
    iread = ipar[8];
    colnln_ .iguess = ipar[9];
    if (colnln_ .nonlin == 0 && colnln_ .iguess == 1) {
	colnln_ .iguess = 0;
    }
    if (colnln_ .iguess >= 2 && iread == 0) {
	iread = 1;
    }
    colnln_ .icare = ipar[10];
    (colest_._1) .ntol = ipar[4];
    ndimf = ipar[5];
    ndimi = ipar[6];
    nfxpnt = ipar[11];
    colout_ .iprint = ipar[7];
    (colord_._1) .mstar = 0;
    (colord_._1) .mmax = 0;
    i__1 = *ncomp;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	i__2 = (colord_._1) .mmax, i__3 = m[i__];
	(colord_._1) .mmax = (( i__2 ) >= ( i__3 ) ? ( i__2 ) : ( i__3 )) ;
	(colord_._1) .mstar += m[i__];
	(colord_._1) .mt[i__ - 1] = m[i__];
 
    }
    if ((colord_._1) .k == 0) {
 
	i__1 = (colord_._1) .mmax + 1, i__2 = 5 - (colord_._1) .mmax;
	(colord_._1) .k = (( i__1 ) >= ( i__2 ) ? ( i__1 ) : ( i__2 )) ;
    }
    i__1 = (colord_._1) .mstar;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	(colsid_._1) .tzeta[i__ - 1] = zeta[i__];
    }
    i__1 = (colest_._1) .ntol;
    for (i__ = 1; i__ <= i__1; ++i__) {
	(colest_._1) .lttol[i__ - 1] = ltol[i__];
 
	(colest_._1) .tolin[i__ - 1] = tol[i__];
    }
    (colsid_._1) .tleft = *aleft;
    (colsid_._1) .tright = *aright;
    (colord_._1) .nc = *ncomp;
    (colord_._1) .kd = (colord_._1) .k * *ncomp;

 

    if (colout_ .iprint > -1) {
	goto L80;
    }
    if (colnln_ .nonlin > 0) {
	goto L60;
    }
    io___664.ciunit = colout_ .iout;
    s_wsfe(&io___664);
    do_fio(&c__1, (char *)&(*ncomp), (ftnlen)sizeof(integer));
    i__1 = *ncomp;
    for (ip = 1; ip <= i__1; ++ip) {
	do_fio(&c__1, (char *)&m[ip], (ftnlen)sizeof(integer));
    }
    e_wsfe();
    goto L70;
L60:
    io___666.ciunit = colout_ .iout;
    s_wsfe(&io___666);
    do_fio(&c__1, (char *)&(*ncomp), (ftnlen)sizeof(integer));
    i__1 = *ncomp;
    for (ip = 1; ip <= i__1; ++ip) {
	do_fio(&c__1, (char *)&m[ip], (ftnlen)sizeof(integer));
    }
    e_wsfe();
L70:
    io___667.ciunit = colout_ .iout;
    s_wsfe(&io___667);
    i__1 = (colord_._1) .mstar;
    for (ip = 1; ip <= i__1; ++ip) {
	do_fio(&c__1, (char *)&zeta[ip], (ftnlen)sizeof(doublereal));
    }
    e_wsfe();
    if (nfxpnt > 0) {
	io___668.ciunit = colout_ .iout;
	s_wsfe(&io___668);
	do_fio(&c__1, (char *)&nfxpnt, (ftnlen)sizeof(integer));
	i__1 = nfxpnt;
	for (ip = 1; ip <= i__1; ++ip) {
	    do_fio(&c__1, (char *)&fixpnt[ip], (ftnlen)sizeof(doublereal));
	}
	e_wsfe();
    }
    io___669.ciunit = colout_ .iout;
    s_wsfe(&io___669);
    do_fio(&c__1, (char *)& (colord_._1) .k, (ftnlen)sizeof(integer));
    e_wsfe();
    io___670.ciunit = colout_ .iout;
    s_wsfe(&io___670);
    i__1 = (colest_._1) .ntol;
    for (ip = 1; ip <= i__1; ++ip) {
	do_fio(&c__1, (char *)&ltol[ip], (ftnlen)sizeof(integer));
    }
    e_wsfe();
    io___671.ciunit = colout_ .iout;
    s_wsfe(&io___671);
    i__1 = (colest_._1) .ntol;
    for (ip = 1; ip <= i__1; ++ip) {
	do_fio(&c__1, (char *)&tol[ip], (ftnlen)sizeof(doublereal));
    }
    e_wsfe();
    if (colnln_ .iguess >= 2) {
	io___672.ciunit = colout_ .iout;
	s_wsfe(&io___672);
	e_wsfe();
    }
    if (iread == 2) {
	io___673.ciunit = colout_ .iout;
	s_wsfe(&io___673);
	e_wsfe();
    }
L80:

 

    if ((colord_._1) .k < 0 || (colord_._1) .k > 7) {
	return 0;
    }
    if (colapr_ .n < 0) {
	return 0;
    }
    if (iread < 0 || iread > 2) {
	return 0;
    }
    if (colnln_ .iguess < 0 || colnln_ .iguess > 4) {
	return 0;
    }
    if (colnln_ .icare < 0 || colnln_ .icare > 2) {
	return 0;
    }
    if ((colest_._1) .ntol < 0 || (colest_._1) .ntol > (colord_._1) .mstar) {
	return 0;
    }
    if (nfxpnt < 0) {
	return 0;
    }
    if (colout_ .iprint < -1 || colout_ .iprint > 1) {
	return 0;
    }
    if ((colord_._1) .mstar < 0 || (colord_._1) .mstar > 40) {
	return 0;
    }
    ip = 1;
    i__1 = (colord_._1) .mstar;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if ((d__1 = zeta[i__] - *aleft, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) < colout_ .precis || (d__2 
		= zeta[i__] - *aright, (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) ) < colout_ .precis) {
	    goto L100;
	}
L90:
	if (ip > nfxpnt) {
	    return 0;
	}
	if (zeta[i__] - colout_ .precis < fixpnt[ip]) {
	    goto L95;
	}
	++ip;
	goto L90;
L95:
	if (zeta[i__] + colout_ .precis < fixpnt[ip]) {
	    return 0;
	}
L100:
	;
    }

 
 
 
 

    colmsh_ .mshlmt = 3;
    colmsh_ .mshflg = 0;
    colmsh_ .mshnum = 1;
    colmsh_ .mshalt = 1;
    colnln_ .limit = 40;

 
 

    nrec = 0;
    i__1 = (colord_._1) .mstar;
    for (i__ = 1; i__ <= i__1; ++i__) {
	ib = (colord_._1) .mstar + 1 - i__;
	if (zeta[ib] >= *aright) {
	    nrec = i__;
	}
 
    }
    nfixi = (colord_._1) .mstar;
    nsizei = (colord_._1) .kd + 3 + (colord_._1) .mstar;
    nfixf = nrec * ((colord_._1) .mstar << 1) + (colord_._1) .mstar * 5 + 3;
    nsizef = (colord_._1) .mstar * 3 + 4 + ((colord_._1) .kd + 5) * ((colord_._1) .kd + 
	    (colord_._1) .mstar) + (((colord_._1) .mstar << 1) - nrec << 1) * 
	    (colord_._1) .mstar;
    nmaxf = (ndimf - nfixf) / nsizef;
    nmaxi = (ndimi - nfixi) / nsizei;
    if (colout_ .iprint < 1) {
	io___682.ciunit = colout_ .iout;
	s_wsfe(&io___682);
	do_fio(&c__1, (char *)&nmaxf, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&nmaxi, (ftnlen)sizeof(integer));
	e_wsfe();
    }
    colapr_ .nmax = (( nmaxf ) <= ( nmaxi ) ? ( nmaxf ) : ( nmaxi )) ;
    if (colapr_ .nmax < colapr_ .n) {
	return 0;
    }
    if (colapr_ .nmax < nfxpnt + 1) {
	return 0;
    }
    if (colapr_ .nmax < (nfxpnt << 1) + 2 && colout_ .iprint < 1) {
	io___683.ciunit = colout_ .iout;
	s_wsfe(&io___683);
	e_wsfe();
    }

 

    lxi = 1;
    lg = lxi + colapr_ .nmax + 1;
    lxiold = lg + ((colord_._1) .mstar << 1) * (colapr_ .nmax * (((colord_._1) .mstar <<
	     1) - nrec) + nrec);
    lw = lxiold + colapr_ .nmax + 1;
 
    i__1 = (colord_._1) .kd;
    lv = lw + i__1 * i__1 * colapr_ .nmax;
    lz = lv + (colord_._1) .mstar * (colord_._1) .kd * colapr_ .nmax;
    ldmz = lz + (colord_._1) .mstar * (colapr_ .nmax + 1);
    ldelz = ldmz + (colord_._1) .kd * colapr_ .nmax;
    ldeldz = ldelz + (colord_._1) .mstar * (colapr_ .nmax + 1);
    ldqz = ldeldz + (colord_._1) .kd * colapr_ .nmax;
    ldqdmz = ldqz + (colord_._1) .mstar * (colapr_ .nmax + 1);
    lrhs = ldqdmz + (colord_._1) .kd * colapr_ .nmax;
    lvalst = lrhs + (colord_._1) .kd * colapr_ .nmax + (colord_._1) .mstar;
    lslope = lvalst + ((colord_._1) .mstar << 2) * colapr_ .nmax;
    laccum = lslope + colapr_ .nmax;
    lscl = laccum + colapr_ .nmax + 1;
    ldscl = lscl + (colord_._1) .mstar * (colapr_ .nmax + 1);
    lpvtg = 1;
    lpvtw = lpvtg + (colord_._1) .mstar * (colapr_ .nmax + 1);
    linteg = lpvtw + (colord_._1) .kd * colapr_ .nmax;

 
 

    if (colnln_ .iguess < 2) {
	goto L160;
    }
    colapr_ .nold = colapr_ .n;
    if (colnln_ .iguess == 4) {
	colapr_ .nold = ispace[1];
    }
    colapr_ .nz = (colord_._1) .mstar * (colapr_ .nold + 1);
    colapr_ .ndmz = (colord_._1) .kd * colapr_ .nold;
    np1 = colapr_ .n + 1;
    if (colnln_ .iguess == 4) {
	np1 = np1 + colapr_ .nold + 1;
    }
    i__1 = colapr_ .nz;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	fspace[lz + i__ - 1] = fspace[np1 + i__];
    }
    idmz = np1 + colapr_ .nz;
    i__1 = colapr_ .ndmz;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	fspace[ldmz + i__ - 1] = fspace[idmz + i__];
    }
    np1 = colapr_ .nold + 1;
    if (colnln_ .iguess == 4) {
	goto L140;
    }
    i__1 = np1;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	fspace[lxiold + i__ - 1] = fspace[lxi + i__ - 1];
    }
    goto L160;
L140:
    i__1 = np1;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	fspace[lxiold + i__ - 1] = fspace[colapr_ .n + 1 + i__];
    }
L160:

 

    consts_(& (colord_._1) .k, colloc_ .rho, colloc_ .coef);
    i__1 = iread + 3;
    newmsh_(&i__1, &fspace[lxi], &fspace[lxiold], dummy, dummy, dummy, dummy, 
	    dummy, &nfxpnt, &fixpnt[1]);

 

    if (colnln_ .iguess >= 2) {
	goto L230;
    }
    np1 = colapr_ .n + 1;
    i__1 = np1;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	fspace[i__ + lxiold - 1] = fspace[i__ + lxi - 1];
    }
    colapr_ .nold = colapr_ .n;
    if (colnln_ .nonlin == 0 || colnln_ .iguess == 1) {
	goto L230;
    }

 
 

    i__1 = colapr_ .nz;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	fspace[lz - 1 + i__] = 0.;
    }
    i__1 = colapr_ .ndmz;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	fspace[ldmz - 1 + i__] = 0.;
    }
L230:
    if (colnln_ .iguess >= 2) {
	colnln_ .iguess = 0;
    }
    contrl_(&fspace[lxi], &fspace[lxiold], &fspace[lz], &fspace[ldmz], &
	    fspace[lrhs], &fspace[ldelz], &fspace[ldeldz], &fspace[ldqz], &
	    fspace[ldqdmz], &fspace[lg], &fspace[lw], &fspace[lv], &fspace[
	    lvalst], &fspace[lslope], &fspace[lscl], &fspace[ldscl], &fspace[
	    laccum], &ispace[lpvtg], &ispace[linteg], &ispace[lpvtw], &nfxpnt,
	     &fixpnt[1], iflag, fsub, dfsub, gsub, dgsub, guess);
    if (iercol_ .iero > 0) {
	return 0;
    }

 

    ispace[1] = colapr_ .n;
    ispace[2] = (colord_._1) .k;
    ispace[3] = *ncomp;
    ispace[4] = (colord_._1) .mstar;
    ispace[5] = (colord_._1) .mmax;
    ispace[6] = colapr_ .nz + colapr_ .ndmz + colapr_ .n + 2;
    k2 = (colord_._1) .k * (colord_._1) .k;
    ispace[7] = ispace[6] + k2 - 1;
    i__1 = *ncomp;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	ispace[i__ + 7] = m[i__];
    }
    i__1 = colapr_ .nz;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	fspace[colapr_ .n + 1 + i__] = fspace[lz - 1 + i__];
    }
    idmz = colapr_ .n + 1 + colapr_ .nz;
    i__1 = colapr_ .ndmz;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	fspace[idmz + i__] = fspace[ldmz - 1 + i__];
    }
    ic = idmz + colapr_ .ndmz;
    i__1 = k2;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	fspace[ic + i__] = colloc_ .coef[i__ - 1];
    }
    return 0;
 

}  

  int colnew_(ncomp, m, aleft, aright, zeta, ipar, ltol, tol, 
	fixpnt, ispace, fspace, iflag, fsub, dfsub, gsub, dgsub, guess)
integer *ncomp, *m;
doublereal *aleft, *aright, *zeta;
integer *ipar, *ltol;
doublereal *tol, *fixpnt;
integer *ispace;
doublereal *fspace;
integer *iflag;
  int (*fsub) (), (*dfsub) (), (*gsub) (), (*dgsub) (), (*
	guess) ();
{
    return colnew_0_(0, ncomp, m, aleft, aright, zeta, ipar, ltol, tol, 
	    fixpnt, ispace, fspace, iflag, fsub, dfsub, gsub, dgsub, guess);
    }

  int colsys_(ncomp, m, aleft, aright, zeta, ipar, ltol, tol, 
	fixpnt, ispace, fspace, iflag, fsub, dfsub, gsub, dgsub, guess)
integer *ncomp, *m;
doublereal *aleft, *aright, *zeta;
integer *ipar, *ltol;
doublereal *tol, *fixpnt;
integer *ispace;
doublereal *fspace;
integer *iflag;
  int (*fsub) (), (*dfsub) (), (*gsub) (), (*dgsub) (), (*
	guess) ();
{
    return colnew_0_(1, ncomp, m, aleft, aright, zeta, ipar, ltol, tol, 
	    fixpnt, ispace, fspace, iflag, fsub, dfsub, gsub, dgsub, guess);
    }

  int contrl_(xi, xiold, z__, dmz, rhs, delz, deldmz, dqz, 
	dqdmz, g, w, v, valstr, slope, scale, dscale, accum, ipvtg, integs, 
	ipvtw, nfxpnt, fixpnt, iflag, fsub, dfsub, gsub, dgsub, guess)
doublereal *xi, *xiold, *z__, *dmz, *rhs, *delz, *deldmz, *dqz, *dqdmz, *g, *
	w, *v, *valstr, *slope, *scale, *dscale, *accum;
integer *ipvtg, *integs, *ipvtw, *nfxpnt;
doublereal *fixpnt;
integer *iflag;
  int (*fsub) (), (*dfsub) (), (*gsub) (), (*dgsub) (), (*
	guess) ();
{
     
    static char fmt_495[] = "(//\002 A LOCAL ELIMINATION MATRIX IS SINGULAR \002)";
    static char fmt_490[] = "(//\002 THE GLOBAL BVP-MATRIX IS SINGULAR \002)";
    static char fmt_530[] = "(/\002 FIXED JACOBIAN ITERATIONS,\002)";
    static char fmt_510[] = "(\002 ITERATION = \002,i3,\002  NORM (RHS) = \002,d10.2)";
    static char fmt_560[] = "(/\002 CONVERGENCE AFTER\002,i3,\002 ITERATIONS\002/)";
    static char fmt_540[] = "(/\002 SWITCH TO DAMPED NEWTON ITERATION,\002)";
    static char fmt_500[] = "(/\002 FULL DAMPED NEWTON ITERATION,\002)";
    static char fmt_520[] = "(\002 ITERATION = \002,i3,\002  RELAXATION FACTOR = \002,d10.2/\002 NORM OF SCALED RHS CHANGES FROM \002,d10.2,\002 TO\002,d10.2/\002 NORM   OF   RHS  CHANGES  FROM  \002,d10.2,\002 TO\002,d10.2,d10.2)";
    static char fmt_550[] = "(\002 RELAXATION FACTOR CORRECTED TO RELAX = \002,d10.2/\002 NORM OF SCALED RHS CHANGES FROM \002,d10.2,\002 TO\002,d10.2/\002 NORM   OF   RHS  CHANGES  FROM  \002,d10.2,\002 TO\002,d10.2,d10.2)";
    static char fmt_610[] = "(\002 MESH VALUES FOR Z(\002,i2,\002),\002)";
    static char fmt_620[] = "(\002 \002,8d15.7)";
    static char fmt_570[] = "(/\002 NO CONVERGENCE AFTER \002,i3,\002 ITERATIONS\002/)";
    static char fmt_580[] = "(/\002 NO CONVERGENCE.  RELAXATION FACTOR =\002,d10.3,\002 IS TOO SMALL (LESS THAN\002,d10.3,\002)\002/)";
    static char fmt_590[] = "(\002  (NO CONVERGENCE)\002)";
    static char fmt_600[] = "(\002  (PROBABLY TOLERANCES TOO STRINGENT, OR NMAX TOO \002,\002SMALL)\002)";

     
    integer i__1, i__2, i__3;
    doublereal d__1, d__2;

     
    integer s_wsfe(), e_wsfe(), do_fio();
    double sqrt();

     
    static doublereal fact;
    static integer ifin, icor, ifrz, i__, j;
    static doublereal check, andif;
    extern   int skale_();
    static doublereal anscl;
    static integer imesh, ipred;
    static doublereal anfix, relax;
    static integer iconv, msing;
    static doublereal rnold, anorm, dummy[1], rnorm;
    static integer lj, it, iz;
    static doublereal factor;
    extern   int errchk_();
    static integer ifreez;
    static doublereal relmin;
    static integer noconv;
    extern   int newmsh_();
    static doublereal rlxold;
    static integer lmtfrz;
    static doublereal rstart;
    static integer np1;
    extern   int lsyslv_();
    static doublereal arg;
    static integer inz;

     
    static cilist io___721 = { 0, 0, 0, fmt_495, 0 };
    static cilist io___722 = { 0, 0, 0, fmt_490, 0 };
    static cilist io___726 = { 0, 0, 0, fmt_530, 0 };
    static cilist io___727 = { 0, 0, 0, fmt_510, 0 };
    static cilist io___728 = { 0, 0, 0, fmt_510, 0 };
    static cilist io___733 = { 0, 0, 0, fmt_560, 0 };
    static cilist io___734 = { 0, 0, 0, fmt_510, 0 };
    static cilist io___735 = { 0, 0, 0, fmt_540, 0 };
    static cilist io___737 = { 0, 0, 0, fmt_500, 0 };
    static cilist io___744 = { 0, 0, 0, fmt_520, 0 };
    static cilist io___745 = { 0, 0, 0, fmt_550, 0 };
    static cilist io___749 = { 0, 0, 0, fmt_560, 0 };
    static cilist io___750 = { 0, 0, 0, fmt_560, 0 };
    static cilist io___752 = { 0, 0, 0, fmt_610, 0 };
    static cilist io___753 = { 0, 0, 0, fmt_620, 0 };
    static cilist io___756 = { 0, 0, 0, fmt_570, 0 };
    static cilist io___757 = { 0, 0, 0, fmt_580, 0 };
    static cilist io___758 = { 0, 0, 0, fmt_590, 0 };
    static cilist io___759 = { 0, 0, 0, fmt_600, 0 };
    --fixpnt;
    --ipvtw;
    --integs;
    --ipvtg;
    --accum;
    --dscale;
    --scale;
    --slope;
    --valstr;
    --v;
    --w;
    --g;
    --dqdmz;
    --dqz;
    --deldmz;
    --delz;
    --rhs;
    --dmz;
    --z__;
    --xiold;
    --xi;

     
    relmin = .001;
    rstart = .01;
    lmtfrz = 4;

 

    check = 0.;
    i__1 = (colest_._2) .ntol;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
 
	d__1 = (colest_._2) .tolin[i__ - 1];
	check = (( d__1 ) >= ( check ) ? ( d__1 ) : ( check )) ;
    }
    imesh = 1;
    iconv = 0;
    if (colnln_ .nonlin == 0) {
	iconv = 1;
    }
    icor = 0;
    noconv = 0;
    msing = 0;

 
 
 


L20:

 

    colnln_ .iter = 0;
    if (colnln_ .nonlin > 0) {
	goto L50;
    }

 
 

    lsyslv_(&msing, &xi[1], &xiold[1], dummy, dummy, &z__[1], &dmz[1], &g[1], 
	    &w[1], &v[1], &rhs[1], dummy, &integs[1], &ipvtg[1], &ipvtw[1], &
	    rnorm, &c__0, fsub, dfsub, gsub, dgsub, guess);
    if (iercol_ .iero > 0) {
	return 0;
    }

 

    if (msing == 0) {
	goto L400;
    }
L30:
    if (msing < 0) {
	goto L40;
    }
    if (colout_ .iprint < 1) {
	io___721.ciunit = colout_ .iout;
	s_wsfe(&io___721);
	e_wsfe();
    }
    goto L460;
L40:
    if (colout_ .iprint < 1) {
	io___722.ciunit = colout_ .iout;
	s_wsfe(&io___722);
	e_wsfe();
    }
    *iflag = 0;
    return 0;

 
 

L50:
    relax = 1.;

 

    if (colnln_ .icare == 1 || colnln_ .icare == -1) {
	relax = rstart;
    }
    if (iconv == 0) {
	goto L160;
    }

 
 
 
 

    ifreez = 0;

 
 

    lsyslv_(&msing, &xi[1], &xiold[1], &z__[1], &dmz[1], &delz[1], &deldmz[1],
	     &g[1], &w[1], &v[1], &rhs[1], &dqdmz[1], &integs[1], &ipvtg[1], &
	    ipvtw[1], &rnold, &c__1, fsub, dfsub, gsub, dgsub, guess);
    if (iercol_ .iero > 0) {
	return 0;
    }

    if (colout_ .iprint < 0) {
	io___726.ciunit = colout_ .iout;
	s_wsfe(&io___726);
	e_wsfe();
    }
    if (colout_ .iprint < 0) {
	io___727.ciunit = colout_ .iout;
	s_wsfe(&io___727);
	do_fio(&c__1, (char *)& colnln_ .iter, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&rnold, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    goto L70;

 
 
 

L60:
    if (colout_ .iprint < 0) {
	io___728.ciunit = colout_ .iout;
	s_wsfe(&io___728);
	do_fio(&c__1, (char *)& colnln_ .iter, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&rnorm, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    rnold = rnorm;
    i__1 = ifreez + 3;
    lsyslv_(&msing, &xi[1], &xiold[1], &z__[1], &dmz[1], &delz[1], &deldmz[1],
	     &g[1], &w[1], &v[1], &rhs[1], dummy, &integs[1], &ipvtg[1], &
	    ipvtw[1], &rnorm, &i__1, fsub, dfsub, gsub, dgsub, guess);
    if (iercol_ .iero > 0) {
	return 0;
    }

 

L70:
    if (msing != 0) {
	goto L30;
    }
    if (ifreez == 1) {
	goto L80;
    }

 

    ++ colnln_ .iter;
    ifrz = 0;
L80:

 

    i__1 = colapr_ .nz;
    for (i__ = 1; i__ <= i__1; ++i__) {
	z__[i__] += delz[i__];
 
    }
    i__1 = colapr_ .ndmz;
    for (i__ = 1; i__ <= i__1; ++i__) {
	dmz[i__] += deldmz[i__];
 
    }
    lsyslv_(&msing, &xi[1], &xiold[1], &z__[1], &dmz[1], &delz[1], &deldmz[1],
	     &g[1], &w[1], &v[1], &rhs[1], dummy, &integs[1], &ipvtg[1], &
	    ipvtw[1], &rnorm, &c__2, fsub, dfsub, gsub, dgsub, guess);
    if (iercol_ .iero > 0) {
	return 0;
    }

 
 
 

    if (rnorm < colout_ .precis) {
	goto L390;
    }
    if (rnorm > rnold) {
	goto L130;
    }
    if (ifreez == 1) {
	goto L110;
    }
    ifreez = 1;
    goto L60;

 
 

L110:
    ++ifrz;
    if (ifrz >= lmtfrz) {
	ifreez = 0;
    }
    if (rnold < rnorm * 4.) {
	ifreez = 0;
    }

 

    i__1 = (colest_._2) .ntol;
    for (it = 1; it <= i__1; ++it) {
	inz = (colest_._2) .ltol[it - 1];
	i__2 = colapr_ .nz;
	i__3 = (colord_._2) .mstar;
	for (iz = inz; i__3 < 0 ? iz >= i__2 : iz <= i__2; iz += i__3) {
	    if ((d__1 = delz[iz], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > (colest_._2) .tolin[it - 1] * ((
		    d__2 = z__[iz], (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) ) + 1.)) {
		goto L60;
	    }
 
	}
    }

 

    if (colout_ .iprint < 1) {
	io___733.ciunit = colout_ .iout;
	s_wsfe(&io___733);
	do_fio(&c__1, (char *)& colnln_ .iter, (ftnlen)sizeof(integer));
	e_wsfe();
    }
    goto L400;

 

L130:
    if (colout_ .iprint < 0) {
	io___734.ciunit = colout_ .iout;
	s_wsfe(&io___734);
	do_fio(&c__1, (char *)& colnln_ .iter, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&rnorm, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    if (colout_ .iprint < 0) {
	io___735.ciunit = colout_ .iout;
	s_wsfe(&io___735);
	e_wsfe();
    }
    iconv = 0;
    relax = rstart;
    i__3 = colapr_ .nz;
    for (i__ = 1; i__ <= i__3; ++i__) {
	z__[i__] -= delz[i__];
 
    }
    i__3 = colapr_ .ndmz;
    for (i__ = 1; i__ <= i__3; ++i__) {
	dmz[i__] -= deldmz[i__];
 
    }

 

    np1 = colapr_ .n + 1;
    i__3 = np1;
    for (i__ = 1; i__ <= i__3; ++i__) {
 
	xiold[i__] = xi[i__];
    }
    colapr_ .nold = colapr_ .n;

    colnln_ .iter = 0;

 
 
 

L160:
    if (colout_ .iprint < 0) {
	io___737.ciunit = colout_ .iout;
	s_wsfe(&io___737);
	e_wsfe();
    }
    lsyslv_(&msing, &xi[1], &xiold[1], &z__[1], &dmz[1], &delz[1], &deldmz[1],
	     &g[1], &w[1], &v[1], &rhs[1], &dqdmz[1], &integs[1], &ipvtg[1], &
	    ipvtw[1], &rnold, &c__1, fsub, dfsub, gsub, dgsub, guess);
    if (iercol_ .iero > 0) {
	return 0;
    }

 

    if (msing != 0) {
	goto L30;
    }

 

    if (colnln_ .iguess == 1) {
	colnln_ .iguess = 0;
    }

 

    skale_(& colapr_ .n, & (colord_._2) .mstar, & (colord_._2) .kd, &z__[1], &xi[1], &
	    scale[1], &dscale[1]);
    goto L220;

 

L170:
    rnold = rnorm;
    if (colnln_ .iter >= colnln_ .limit) {
	goto L430;
    }

 

    skale_(& colapr_ .n, & (colord_._2) .mstar, & (colord_._2) .kd, &z__[1], &xi[1], &
	    scale[1], &dscale[1]);

 

    anscl = 0.;
    i__3 = colapr_ .nz;
    for (i__ = 1; i__ <= i__3; ++i__) {
 
	d__1 = delz[i__] * scale[i__];
	anscl += d__1 * d__1;
 
    }
    i__3 = colapr_ .ndmz;
    for (i__ = 1; i__ <= i__3; ++i__) {
 
	d__1 = deldmz[i__] * dscale[i__];
	anscl += d__1 * d__1;
 
    }
    anscl = sqrt(anscl / (doublereal) (colapr_ .nz + colapr_ .ndmz));

 

    lsyslv_(&msing, &xi[1], &xiold[1], &z__[1], &dmz[1], &delz[1], &deldmz[1],
	     &g[1], &w[1], &v[1], &rhs[1], dummy, &integs[1], &ipvtg[1], &
	    ipvtw[1], &rnorm, &c__3, fsub, dfsub, gsub, dgsub, guess);
    if (iercol_ .iero > 0) {
	return 0;
    }

 

    if (msing != 0) {
	goto L30;
    }

 

    andif = 0.;
    i__3 = colapr_ .nz;
    for (i__ = 1; i__ <= i__3; ++i__) {
 
	d__1 = (dqz[i__] - delz[i__]) * scale[i__];
	andif += d__1 * d__1;
 
    }
    i__3 = colapr_ .ndmz;
    for (i__ = 1; i__ <= i__3; ++i__) {
 
	d__1 = (dqdmz[i__] - deldmz[i__]) * dscale[i__];
	andif += d__1 * d__1;
 
    }
    andif = sqrt(andif / (doublereal) (colapr_ .nz + colapr_ .ndmz) + 
	    colout_ .precis);
    relax = relax * anscl / andif;
    if (relax > 1.) {
	relax = 1.;
    }
L220:
    rlxold = relax;
    ipred = 1;
    ++ colnln_ .iter;

 


    i__3 = colapr_ .nz;
    for (i__ = 1; i__ <= i__3; ++i__) {
	z__[i__] += relax * delz[i__];
 
    }
    i__3 = colapr_ .ndmz;
    for (i__ = 1; i__ <= i__3; ++i__) {
	dmz[i__] += relax * deldmz[i__];
 
    }
L250:
    lsyslv_(&msing, &xi[1], &xiold[1], &z__[1], &dmz[1], &dqz[1], &dqdmz[1], &
	    g[1], &w[1], &v[1], &rhs[1], dummy, &integs[1], &ipvtg[1], &ipvtw[
	    1], &rnorm, &c__2, fsub, dfsub, gsub, dgsub, guess);
    if (iercol_ .iero > 0) {
	return 0;
    }

 

    lsyslv_(&msing, &xi[1], &xiold[1], &z__[1], &dmz[1], &dqz[1], &dqdmz[1], &
	    g[1], &w[1], &v[1], &rhs[1], dummy, &integs[1], &ipvtg[1], &ipvtw[
	    1], &rnorm, &c__4, fsub, dfsub, gsub, dgsub, guess);
    if (iercol_ .iero > 0) {
	return 0;
    }

 

    anorm = 0.;
    anfix = 0.;
    i__3 = colapr_ .nz;
    for (i__ = 1; i__ <= i__3; ++i__) {
 
	d__1 = delz[i__] * scale[i__];
	anorm += d__1 * d__1;
 
	d__1 = dqz[i__] * scale[i__];
	anfix += d__1 * d__1;
 
    }
    i__3 = colapr_ .ndmz;
    for (i__ = 1; i__ <= i__3; ++i__) {
 
	d__1 = deldmz[i__] * dscale[i__];
	anorm += d__1 * d__1;
 
	d__1 = dqdmz[i__] * dscale[i__];
	anfix += d__1 * d__1;
 
    }
    anorm = sqrt(anorm / (doublereal) (colapr_ .nz + colapr_ .ndmz));
    anfix = sqrt(anfix / (doublereal) (colapr_ .nz + colapr_ .ndmz));
    if (icor == 1) {
	goto L280;
    }
    if (colout_ .iprint < 0) {
	io___744.ciunit = colout_ .iout;
	s_wsfe(&io___744);
	do_fio(&c__1, (char *)& colnln_ .iter, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&relax, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&anorm, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&anfix, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&rnold, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&rnorm, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    goto L290;
L280:
    if (colout_ .iprint < 0) {
	io___745.ciunit = colout_ .iout;
	s_wsfe(&io___745);
	do_fio(&c__1, (char *)&relax, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&anorm, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&anfix, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&rnold, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&rnorm, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
L290:
    icor = 0;

 

    if (anfix < colout_ .precis || rnorm < colout_ .precis) {
	goto L390;
    }
    if (anfix > anorm) {
	goto L300;
    }

 
 

    if (anfix <= check) {
	goto L350;
    }

 
 

    if (ipred != 1) {
	goto L170;
    }
L300:
    if (colnln_ .iter >= colnln_ .limit) {
	goto L430;
    }

 

    ipred = 0;
    arg = (anfix / anorm - 1.) / relax + 1.;
    if (arg < 0.) {
	goto L170;
    }
 
    d__1 = relax;
    if (arg <= relax * .25 + d__1 * d__1 * .125) {
	goto L310;
    }
    factor = sqrt(arg * 8. + 1.) - 1.;
    if ((d__1 = factor - 1., (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) < factor * .1) {
	goto L170;
    }
    if (factor < .5) {
	factor = .5;
    }
    relax /= factor;
    goto L320;
L310:
    if (relax >= .9) {
	goto L170;
    }
    relax = 1.;
L320:
    icor = 1;
    if (relax < relmin) {
	goto L440;
    }
    fact = relax - rlxold;
    i__3 = colapr_ .nz;
    for (i__ = 1; i__ <= i__3; ++i__) {
	z__[i__] += fact * delz[i__];
 
    }
    i__3 = colapr_ .ndmz;
    for (i__ = 1; i__ <= i__3; ++i__) {
	dmz[i__] += fact * deldmz[i__];
 
    }
    rlxold = relax;
    goto L250;

 

L350:
    i__3 = (colest_._2) .ntol;
    for (it = 1; it <= i__3; ++it) {
	inz = (colest_._2) .ltol[it - 1];
	i__2 = colapr_ .nz;
	i__1 = (colord_._2) .mstar;
	for (iz = inz; i__1 < 0 ? iz >= i__2 : iz <= i__2; iz += i__1) {
	    if ((d__1 = dqz[iz], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > (colest_._2) .tolin[it - 1] * ((d__2 
		    = z__[iz], (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) ) + 1.)) {
		goto L170;
	    }
 
	}
    }

 

    if (colout_ .iprint < 1) {
	io___749.ciunit = colout_ .iout;
	s_wsfe(&io___749);
	do_fio(&c__1, (char *)& colnln_ .iter, (ftnlen)sizeof(integer));
	e_wsfe();
    }

 
 

    i__1 = colapr_ .nz;
    for (i__ = 1; i__ <= i__1; ++i__) {
	z__[i__] += dqz[i__];
 
    }
    i__1 = colapr_ .ndmz;
    for (i__ = 1; i__ <= i__1; ++i__) {
	dmz[i__] += dqdmz[i__];
 
    }
L390:
    if ((anfix < colout_ .precis || rnorm < colout_ .precis) && 
	    colout_ .iprint < 1) {
	io___750.ciunit = colout_ .iout;
	s_wsfe(&io___750);
	do_fio(&c__1, (char *)& colnln_ .iter, (ftnlen)sizeof(integer));
	e_wsfe();
    }
    iconv = 1;
    if (colnln_ .icare == -1) {
	colnln_ .icare = 0;
    }

 
 

L400:
    if (colout_ .iprint >= 0) {
	goto L420;
    }
    i__1 = (colord_._2) .mstar;
    for (j = 1; j <= i__1; ++j) {
	io___752.ciunit = colout_ .iout;
	s_wsfe(&io___752);
	do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
	e_wsfe();
 
	io___753.ciunit = colout_ .iout;
	s_wsfe(&io___753);
	i__2 = colapr_ .nz;
	i__3 = (colord_._2) .mstar;
	for (lj = j; i__3 < 0 ? lj >= i__2 : lj <= i__2; lj += i__3) {
	    do_fio(&c__1, (char *)&z__[lj], (ftnlen)sizeof(doublereal));
	}
	e_wsfe();
    }

 

L420:
    ifin = 1;
    if (imesh == 2) {
	errchk_(&xi[1], &z__[1], &dmz[1], &valstr[1], &ifin);
    }
    if (imesh == 1 || ifin == 0 && colnln_ .icare != 2) {
	goto L460;
    }
    *iflag = 1;
    return 0;

 

L430:
    if (colout_ .iprint < 1) {
	io___756.ciunit = colout_ .iout;
	s_wsfe(&io___756);
	do_fio(&c__1, (char *)& colnln_ .iter, (ftnlen)sizeof(integer));
	e_wsfe();
    }
    goto L450;
L440:
    if (colout_ .iprint < 1) {
	io___757.ciunit = colout_ .iout;
	s_wsfe(&io___757);
	do_fio(&c__1, (char *)&relax, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&relmin, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
L450:
    *iflag = -2;
    ++noconv;
    if (colnln_ .icare == 2 && noconv > 1) {
	return 0;
    }
    if (colnln_ .icare == 0) {
	colnln_ .icare = -1;
    }

 

L460:
    np1 = colapr_ .n + 1;
    i__3 = np1;
    for (i__ = 1; i__ <= i__3; ++i__) {
 
	xiold[i__] = xi[i__];
    }
    colapr_ .nold = colapr_ .n;

 
 

    imesh = 1;
    if (iconv == 0 || colmsh_ .mshnum >= colmsh_ .mshlmt || colmsh_ .mshalt >=
	     colmsh_ .mshlmt) {
	imesh = 2;
    }
    if (colmsh_ .mshalt >= colmsh_ .mshlmt && colmsh_ .mshnum < 
	    colmsh_ .mshlmt) {
	colmsh_ .mshalt = 1;
    }
    newmsh_(&imesh, &xi[1], &xiold[1], &z__[1], &dmz[1], &valstr[1], &slope[1]
	    , &accum[1], nfxpnt, &fixpnt[1]);

 

    if (colapr_ .n <= colapr_ .nmax) {
	goto L480;
    }
    colapr_ .n /= 2;
    *iflag = -1;
    if (iconv == 0 && colout_ .iprint < 1) {
	io___758.ciunit = colout_ .iout;
	s_wsfe(&io___758);
	e_wsfe();
    }
    if (iconv == 1 && colout_ .iprint < 1) {
	io___759.ciunit = colout_ .iout;
	s_wsfe(&io___759);
	e_wsfe();
    }
    return 0;
L480:
    if (iconv == 0) {
	imesh = 1;
    }
    if (colnln_ .icare == 1) {
	iconv = 0;
    }
    goto L20;
 
}  

  int skale_(n, mstar, kd, z__, xi, scale, dscale)
integer *n, *mstar, *kd;
doublereal *z__, *xi, *scale, *dscale;
{
     
    integer z_dim1, z_offset, scale_dim1, scale_offset, dscale_dim1, 
	    dscale_offset, i__1, i__2, i__3, i__4;
    doublereal d__1, d__2;

     
    static doublereal basm[5], scal;
    static integer idmz;
    static doublereal h__;
    static integer j, l, icomp, mj, iz, np1;
    scale_dim1 = *mstar;
    scale_offset = scale_dim1 + 1;
    scale -= scale_offset;
    z_dim1 = *mstar;
    z_offset = z_dim1 + 1;
    z__ -= z_offset;
    dscale_dim1 = *kd;
    dscale_offset = dscale_dim1 + 1;
    dscale -= dscale_offset;
    --xi;

     
    basm[0] = 1.;
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	iz = 1;
	h__ = xi[j + 1] - xi[j];
	i__2 = (colord_._3) .mmax;
	for (l = 1; l <= i__2; ++l) {
	    basm[l] = basm[l - 1] * h__ / (doublereal) l;
 
	}
	i__2 = (colord_._3) .ncomp;
	for (icomp = 1; icomp <= i__2; ++icomp) {
	    scal = ((d__1 = z__[iz + j * z_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) + (d__2 = z__[iz 
		    + (j + 1) * z_dim1], (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) )) * .5 + 1.;
	    mj = (colord_._3) .m[icomp - 1];
	    i__3 = mj;
	    for (l = 1; l <= i__3; ++l) {
		scale[iz + j * scale_dim1] = basm[l - 1] / scal;
		++iz;
 
	    }
	    scal = basm[mj] / scal;
	    i__3 = *kd;
	    i__4 = (colord_._3) .ncomp;
	    for (idmz = icomp; i__4 < 0 ? idmz >= i__3 : idmz <= i__3; idmz +=
		     i__4) {
		dscale[idmz + j * dscale_dim1] = scal;
 
	    }
 
	}
 
    }
    np1 = *n + 1;
    i__1 = *mstar;
    for (iz = 1; iz <= i__1; ++iz) {
	scale[iz + np1 * scale_dim1] = scale[iz + *n * scale_dim1];
 
    }
    return 0;
}  

 
 
 
 
 

  int newmsh_(mode, xi, xiold, z__, dmz, valstr, slope, accum, 
	nfxpnt, fixpnt)
integer *mode;
doublereal *xi, *xiold, *z__, *dmz, *valstr, *slope, *accum;
integer *nfxpnt;
doublereal *fixpnt;
{
     
    static char fmt_360[] = "(/\002 THE FORMER MESH (OF\002,i5,\002 SUBINTERVALS),\002,100(/8f12.6))";
    static char fmt_370[] = "(/\002  EXPECTED N TOO LARGE \002)";
    static char fmt_350[] = "(/\002 MESH SELECTION INFO,\002/\002 DEGREE OF EQUIDISTRIBUTION = \002,f8.5,\002 PREDICTION FOR REQUIRED N =\002,i8)";
    static char fmt_340[] = "(/\002 THE NEW MESH (OF\002,i5,\002 SUBINTERVALS), \002,100(/8f12.6))";

     
    integer i__1, i__2, i__3;
    doublereal d__1, d__2, d__3, d__4, d__5;

     
    integer s_wsfe(), do_fio(), e_wsfe();
    double pow_dd();

     
    static doublereal accl, accr;
    static integer lold;
    static doublereal avrg;
    static integer nmin;
    static doublereal temp;
    static integer lnew;
    static doublereal tsum;
    static integer nmax2, nfxp1, i__, j, l;
    static doublereal x, hiold;
    static integer ileft, iflip, nregn;
    static doublereal xleft, d1[40], d2[40], dummy[1];
    static integer n2, noldp1, jj, in;
    static doublereal dx;
    static integer jz, naccum;
    static doublereal degequ;
    extern   int horder_();
    static integer iright, lcarry;
    static doublereal oneovh, hd6, xright;
    static integer kstore;
    extern   int approx_();
    static integer np1;
    static doublereal slphmx;
    static integer nmx;

     
    static cilist io___772 = { 0, 0, 0, fmt_360, 0 };
    static cilist io___784 = { 0, 0, 0, fmt_370, 0 };
    static cilist io___801 = { 0, 0, 0, fmt_350, 0 };
    static cilist io___812 = { 0, 0, 0, fmt_340, 0 };
     
    --fixpnt;
    --accum;
    --slope;
    --valstr;
    --dmz;
    --z__;
    --xiold;
    --xi;

     
    nfxp1 = *nfxpnt + 1;
    switch ((int)*mode) {
	case 1:  goto L180;
	case 2:  goto L100;
	case 3:  goto L50;
	case 4:  goto L20;
	case 5:  goto L10;
    }

 

L10:
    colmsh_ .mshlmt = 1;

 

L20:
    if (colnln_ .iguess < 2) {
	goto L40;
    }

 

    noldp1 = colapr_ .nold + 1;
    if (colout_ .iprint < 1) {
	io___772.ciunit = colout_ .iout;
	s_wsfe(&io___772);
	do_fio(&c__1, (char *)& colapr_ .nold, (ftnlen)sizeof(integer));
	i__1 = noldp1;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    do_fio(&c__1, (char *)&xiold[i__], (ftnlen)sizeof(doublereal));
	}
	e_wsfe();
    }
    if (colnln_ .iguess != 3) {
	goto L40;
    }

 
 
 

    colapr_ .n = colapr_ .nold / 2;
    i__ = 0;
    i__1 = colapr_ .nold;
    for (j = 1; j <= i__1; j += 2) {
	++i__;
 
	xi[i__] = xiold[j];
    }
L40:
    np1 = colapr_ .n + 1;
    xi[1] = (colsid_._2) .aleft;
    xi[np1] = (colsid_._2) .aright;
    goto L320;

 
 

L50:
    if (colapr_ .n < nfxp1) {
	colapr_ .n = nfxp1;
    }
    np1 = colapr_ .n + 1;
    xi[1] = (colsid_._2) .aleft;
    ileft = 1;
    xleft = (colsid_._2) .aleft;

 

    i__1 = nfxp1;
    for (j = 1; j <= i__1; ++j) {
	xright = (colsid_._2) .aright;
	iright = np1;
	if (j == nfxp1) {
	    goto L60;
	}
	xright = fixpnt[j];

 

 
 

	nmin = (integer) ((xright - (colsid_._2) .aleft) / ((colsid_._2) .aright - 
		(colsid_._2) .aleft) * (doublereal) colapr_ .n + 1.5);
	if (nmin > colapr_ .n - *nfxpnt + j) {
	    nmin = colapr_ .n - *nfxpnt + j;
	}
 
	i__2 = ileft + 1;
	iright = (( i__2 ) >= ( nmin ) ? ( i__2 ) : ( nmin )) ;
L60:
	xi[iright] = xright;

 

 

	nregn = iright - ileft - 1;
	if (nregn == 0) {
	    goto L80;
	}
	dx = (xright - xleft) / (doublereal) (nregn + 1);
	i__2 = nregn;
	for (i__ = 1; i__ <= i__2; ++i__) {
 
	    xi[ileft + i__] = xleft + (doublereal) i__ * dx;
	}
L80:
	ileft = iright;
	xleft = xright;
 
    }
    goto L320;

 

L100:
    n2 = colapr_ .n << 1;

 

    if (n2 <= colapr_ .nmax) {
	goto L120;
    }

 

    if (*mode == 2) {
	goto L110;
    }
    colapr_ .n = colapr_ .nmax / 2;
    goto L220;
L110:
    if (colout_ .iprint < 1) {
	io___784.ciunit = colout_ .iout;
	s_wsfe(&io___784);
	e_wsfe();
    }
    colapr_ .n = n2;
    return 0;

 
 
 
 
 

L120:
    if (colmsh_ .mshflg == 0) {
	goto L140;
    }

 
 

    kstore = 1;
    i__1 = colapr_ .nold;
    for (i__ = 1; i__ <= i__1; ++i__) {
	hd6 = (xiold[i__ + 1] - xiold[i__]) / 6.;
	x = xiold[i__] + hd6;
	approx_(&i__, &x, &valstr[kstore], colbas_ .asave, dummy, &xiold[1], &
		colapr_ .nold, &z__[1], &dmz[1], & (colord_._2) .k, & (colord_._2) .ncomp,
		 & (colord_._2) .mmax, (colord_._2) .m, & (colord_._2) .mstar, &c__4, dummy, &
		c__0);
	x += hd6 * 4.;
	kstore += (colord_._2) .mstar * 3;
	approx_(&i__, &x, &valstr[kstore], & colbas_ .asave[84], dummy, &xiold[
		1], & colapr_ .nold, &z__[1], &dmz[1], & (colord_._2) .k, &
		(colord_._2) .ncomp, & (colord_._2) .mmax, (colord_._2) .m, & (colord_._2) .mstar, &
		c__4, dummy, &c__0);
	kstore += (colord_._2) .mstar;
 
    }
    goto L160;

 
 
 

L140:
    kstore = 1;
    i__1 = colapr_ .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	x = xi[i__];
	hd6 = (xi[i__ + 1] - xi[i__]) / 6.;
	for (j = 1; j <= 4; ++j) {
	    x += hd6;
	    if (j == 3) {
		x += hd6;
	    }
	    approx_(&i__, &x, &valstr[kstore], & colbas_ .asave[j * 28 - 28], 
		    dummy, &xiold[1], & colapr_ .nold, &z__[1], &dmz[1], &
		    (colord_._2) .k, & (colord_._2) .ncomp, & (colord_._2) .mmax, (colord_._2) .m, &
		    (colord_._2) .mstar, &c__4, dummy, &c__0);
	    kstore += (colord_._2) .mstar;
 
	}
    }
L160:
    colmsh_ .mshflg = 0;
    colmsh_ .mshnum = 1;
    *mode = 2;

 

    j = 2;
    i__1 = colapr_ .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	xi[j] = (xiold[i__] + xiold[i__ + 1]) / 2.;
	xi[j + 1] = xiold[i__ + 1];
 
	j += 2;
    }
    colapr_ .n = n2;
    goto L320;

 

L180:
    if (colapr_ .nold == 1) {
	goto L100;
    }
    if (colapr_ .nold <= *nfxpnt << 1) {
	goto L100;
    }

 
 
 

 

    i__ = 1;
    hiold = xiold[2] - xiold[1];
    horder_(&c__1, d1, &hiold, &dmz[1], & (colord_._2) .ncomp, & (colord_._2) .k);
    hiold = xiold[3] - xiold[2];
    horder_(&c__2, d2, &hiold, &dmz[1], & (colord_._2) .ncomp, & (colord_._2) .k);
    accum[1] = 0.;
    slope[1] = 0.;
    oneovh = 2. / (xiold[3] - xiold[1]);
    i__1 = (colest_._2) .ntol;
    for (j = 1; j <= i__1; ++j) {
	jj = (colest_._2) .jtol[j - 1];
	jz = (colest_._2) .ltol[j - 1];
 
 
	d__5 = (d__1 = d2[jj - 1] - d1[jj - 1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) * (colest_._2) .wgtmsh[
		j - 1] * oneovh / ((d__2 = z__[jz], (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) ) + 1.);
	d__3 = slope[1], d__4 = pow_dd(&d__5, & (colest_._2) .root[j - 1]);
	slope[1] = (( d__3 ) >= ( d__4 ) ? ( d__3 ) : ( d__4 )) ;
    }
    slphmx = slope[1] * (xiold[2] - xiold[1]);
    accum[2] = slphmx;
    iflip = 1;

 
 

    i__1 = colapr_ .nold;
    for (i__ = 2; i__ <= i__1; ++i__) {
	hiold = xiold[i__ + 1] - xiold[i__];
	if (iflip == -1) {
	    horder_(&i__, d1, &hiold, &dmz[1], & (colord_._2) .ncomp, & (colord_._2) .k);
	}
	if (iflip == 1) {
	    horder_(&i__, d2, &hiold, &dmz[1], & (colord_._2) .ncomp, & (colord_._2) .k);
	}
	oneovh = 2. / (xiold[i__ + 1] - xiold[i__ - 1]);
	slope[i__] = 0.;

 

	i__2 = (colest_._2) .ntol;
	for (j = 1; j <= i__2; ++j) {
	    jj = (colest_._2) .jtol[j - 1];
	    jz = (colest_._2) .ltol[j - 1] + (i__ - 1) * (colord_._2) .mstar;
 
 
	    d__5 = (d__1 = d2[jj - 1] - d1[jj - 1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) * 
		    (colest_._2) .wgtmsh[j - 1] * oneovh / ((d__2 = z__[jz], (( 
		    d__2 ) >= 0 ? (  		    d__2 ) : -(  		    d__2 )) ) + 1.);
	    d__3 = slope[i__], d__4 = pow_dd(&d__5, & (colest_._2) .root[j - 1]);
	    slope[i__] = (( d__3 ) >= ( d__4 ) ? ( d__3 ) : ( d__4 )) ;
	}

 
 

	temp = slope[i__] * (xiold[i__ + 1] - xiold[i__]);
	slphmx = (( slphmx ) >= ( temp ) ? ( slphmx ) : ( temp )) ;
	accum[i__ + 1] = accum[i__] + temp;
 
	iflip = -iflip;
    }
    avrg = accum[colapr_ .nold + 1] / (doublereal) colapr_ .nold;
    degequ = avrg / (( slphmx ) >= ( colout_ .precis ) ? ( slphmx ) : ( colout_ .precis )) ;

 

    naccum = (integer) (accum[colapr_ .nold + 1] + 1.);
    if (colout_ .iprint < 0) {
	io___801.ciunit = colout_ .iout;
	s_wsfe(&io___801);
	do_fio(&c__1, (char *)&degequ, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&naccum, (ftnlen)sizeof(integer));
	e_wsfe();
    }

 

    if (avrg < colout_ .precis) {
	goto L100;
    }
    if (degequ >= .5) {
	goto L100;
    }

 
 

 
    i__1 = colapr_ .nold + 1;
    nmx = (( i__1 ) >= ( naccum ) ? ( i__1 ) : ( naccum ))  / 2;

 


    nmax2 = colapr_ .nmax / 2;

 

 
    i__1 = (( nmax2 ) <= ( colapr_ .nold ) ? ( nmax2 ) : ( colapr_ .nold )) ;
    colapr_ .n = (( i__1 ) <= ( nmx ) ? ( i__1 ) : ( nmx )) ;
L220:
    noldp1 = colapr_ .nold + 1;
    if (colapr_ .n < nfxp1) {
	colapr_ .n = nfxp1;
    }
    ++ colmsh_ .mshnum;

 
 
 
 

    if (colapr_ .n < colapr_ .nold) {
	colmsh_ .mshnum = colmsh_ .mshlmt;
    }
    if (colapr_ .n > colapr_ .nold / 2) {
	colmsh_ .mshalt = 1;
    }
    if (colapr_ .n == colapr_ .nold / 2) {
	++ colmsh_ .mshalt;
    }
    colmsh_ .mshflg = 0;

 

 
 

    in = 1;
    accl = 0.;
    lold = 2;
    xi[1] = (colsid_._2) .aleft;
    xi[colapr_ .n + 1] = (colsid_._2) .aright;
    i__1 = nfxp1;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (i__ == nfxp1) {
	    goto L250;
	}
	i__2 = noldp1;
	for (j = lold; j <= i__2; ++j) {
	    lnew = j;
	    if (fixpnt[i__] <= xiold[j]) {
		goto L240;
	    }
 
	}
L240:
	accr = accum[lnew] + (fixpnt[i__] - xiold[lnew]) * slope[lnew - 1];
	nregn = (integer) ((accr - accl) / accum[noldp1] * (doublereal) 
		colapr_ .n - .5);
 
	i__2 = nregn, i__3 = colapr_ .n - in - nfxp1 + i__;
	nregn = (( i__2 ) <= ( i__3 ) ? ( i__2 ) : ( i__3 )) ;
	xi[in + nregn + 1] = fixpnt[i__];
	goto L260;
L250:
	accr = accum[noldp1];
	lnew = noldp1;
	nregn = colapr_ .n - in;
L260:
	if (nregn == 0) {
	    goto L300;
	}
	temp = accl;
	tsum = (accr - accl) / (doublereal) (nregn + 1);
	i__2 = nregn;
	for (j = 1; j <= i__2; ++j) {
	    ++in;
	    temp += tsum;
	    i__3 = lnew;
	    for (l = lold; l <= i__3; ++l) {
		lcarry = l;
		if (temp <= accum[l]) {
		    goto L280;
		}
 
	    }
L280:
	    lold = lcarry;
 
	    xi[in] = xiold[lold - 1] + (temp - accum[lold - 1]) / slope[lold 
		    - 1];
	}
L300:
	++in;
	accl = accr;
	lold = lnew;
 
    }
    *mode = 1;
L320:
    np1 = colapr_ .n + 1;
    if (colout_ .iprint < 1) {
	io___812.ciunit = colout_ .iout;
	s_wsfe(&io___812);
	do_fio(&c__1, (char *)& colapr_ .n, (ftnlen)sizeof(integer));
	i__1 = np1;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    do_fio(&c__1, (char *)&xi[i__], (ftnlen)sizeof(doublereal));
	}
	e_wsfe();
    }
    colapr_ .nz = (colord_._2) .mstar * (colapr_ .n + 1);
    colapr_ .ndmz = (colord_._2) .kd * colapr_ .n;
    return 0;
 
}  

  int consts_(k, rho, coef)
integer *k;
doublereal *rho, *coef;
{
     

    static doublereal cnsts1[28] = { .25,.0625,.072169,.018342,.019065,.05819,
	    .0054658,.005337,.01889,.027792,.0016095,.0014964,.0075938,
	    .0057573,.018342,.004673,4.15e-4,.001919,.001468,.006371,.00461,
	    1.342e-4,1.138e-4,4.889e-4,4.177e-4,.001374,.001654,.002863 };
    static doublereal cnsts2[28] = { .125,.002604,.008019,2.17e-5,7.453e-5,
	    5.208e-4,9.689e-8,3.689e-7,3.1e-6,2.451e-5,2.691e-10,1.12e-9,
	    1.076e-8,9.405e-8,1.033e-6,5.097e-13,2.29e-12,2.446e-11,2.331e-10,
	    2.936e-9,3.593e-8,7.001e-16,3.363e-15,3.921e-14,4.028e-13,
	    5.646e-12,7.531e-11,1.129e-9 };

     
    integer coef_dim1, coef_offset, i__1, i__2;

     
    static integer koff, mtot, i__, j, l;
    extern   int rkbas_();
    static integer jcomp, ltoli;
    static doublereal dummy[1];
    static integer mj, iz;
    extern   int vmonde_();
    coef_dim1 = *k;
    coef_offset = coef_dim1 + 1;
    coef -= coef_offset;
    --rho;

     

 

    koff = *k * (*k + 1) / 2;
    iz = 1;
    i__1 = (colord_._4) .ncomp;
    for (j = 1; j <= i__1; ++j) {
	mj = (colord_._4) .m[j - 1];
	i__2 = mj;
	for (l = 1; l <= i__2; ++l) {
	    (colest_._2) .wgterr[iz - 1] = cnsts1[koff - mj + l - 1];
	    ++iz;
 
	}
    }

 

    jcomp = 1;
    mtot = (colord_._4) .m[0];
    i__2 = (colest_._2) .ntol;
    for (i__ = 1; i__ <= i__2; ++i__) {
	ltoli = (colest_._2) .ltol[i__ - 1];
L20:
	if (ltoli <= mtot) {
	    goto L30;
	}
	++jcomp;
	mtot += (colord_._4) .m[jcomp - 1];
	goto L20;
L30:
	(colest_._2) .jtol[i__ - 1] = jcomp;
	(colest_._2) .wgtmsh[i__ - 1] = cnsts2[koff + ltoli - mtot - 1] * 10. / 
		(colest_._2) .tolin[i__ - 1];
	(colest_._2) .root[i__ - 1] = 1. / (doublereal) (*k + mtot - ltoli + 1);
 
    }

 

    switch ((int)*k) {
	case 1:  goto L50;
	case 2:  goto L60;
	case 3:  goto L70;
	case 4:  goto L80;
	case 5:  goto L90;
	case 6:  goto L100;
	case 7:  goto L110;
    }
L50:
    rho[1] = 0.;
    goto L120;
L60:
    rho[2] = .57735026918962576451;
    rho[1] = -rho[2];
    goto L120;
L70:
    rho[3] = .77459666924148337704;
    rho[2] = 0.;
    rho[1] = -rho[3];
    goto L120;
L80:
    rho[4] = .86113631159405257523;
    rho[3] = .3399810435848562648;
    rho[2] = -rho[3];
    rho[1] = -rho[4];
    goto L120;
L90:
    rho[5] = .9061798459386639928;
    rho[4] = .53846931010568309104;
    rho[3] = 0.;
    rho[2] = -rho[4];
    rho[1] = -rho[5];
    goto L120;
L100:
    rho[6] = .93246951420315202781;
    rho[5] = .66120938646626451366;
    rho[4] = .23861918608319690863;
    rho[3] = -rho[4];
    rho[2] = -rho[5];
    rho[1] = -rho[6];
    goto L120;
L110:
    rho[7] = .949107991234275852452;
    rho[6] = .74153118559939443986;
    rho[5] = .4058451513773971669;
    rho[4] = 0.;
    rho[3] = -rho[5];
    rho[2] = -rho[6];
    rho[1] = -rho[7];
L120:

 

    i__2 = *k;
    for (j = 1; j <= i__2; ++j) {
	rho[j] = (rho[j] + 1.) * .5;
 
    }

 
 

    i__2 = *k;
    for (j = 1; j <= i__2; ++j) {
	i__1 = *k;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    coef[i__ + j * coef_dim1] = 0.;
	}
	coef[j + j * coef_dim1] = 1.;
	vmonde_(&rho[1], &coef[j * coef_dim1 + 1], k);
 
    }
    rkbas_(&c_b89, &coef[coef_offset], k, & (colord_._4) .mmax, colbas_ .b, dummy, &
	    c__0);
    i__2 = *k;
    for (i__ = 1; i__ <= i__2; ++i__) {
	rkbas_(&rho[i__], &coef[coef_offset], k, & (colord_._4) .mmax, &
		colbas_ .acol[i__ * 28 - 28], dummy, &c__0);
 
    }
    rkbas_(&c_b1934, &coef[coef_offset], k, & (colord_._4) .mmax, colbas_ .asave, 
	    dummy, &c__0);
    rkbas_(&c_b1936, &coef[coef_offset], k, & (colord_._4) .mmax, & colbas_ .asave[
	    28], dummy, &c__0);
    rkbas_(&c_b1938, &coef[coef_offset], k, & (colord_._4) .mmax, & colbas_ .asave[
	    56], dummy, &c__0);
    rkbas_(&c_b1940, &coef[coef_offset], k, & (colord_._4) .mmax, & colbas_ .asave[
	    84], dummy, &c__0);
    return 0;
}  

  int errchk_(xi, z__, dmz, valstr, ifin)
doublereal *xi, *z__, *dmz, *valstr;
integer *ifin;
{
     
    static char fmt_130[] = "(/\002 THE ESTIMATED ERRORS ARE,\002)";
    static char fmt_120[] = "(\002 U(\002,i2,\002) -\002,4d12.4)";

     
    integer i__1, i__2;
    doublereal d__1, d__2;

     
    integer s_wsfe(), e_wsfe(), do_fio();

     
    static integer knew, ltjz, iback, j, i__, l;
    static doublereal x;
    static integer ltolj;
    static doublereal dummy[1];
    static integer lj, mj;
    static doublereal errest[40];
    static integer kstore;
    extern   int approx_();
    static doublereal err[40];

     
    static cilist io___837 = { 0, 0, 0, fmt_130, 0 };
    static cilist io___840 = { 0, 0, 0, fmt_120, 0 };
    --valstr;
    --dmz;
    --z__;
    --xi;

     
    *ifin = 1;
    colmsh_ .mshflg = 1;
    i__1 = (colord_._2) .mstar;
    for (j = 1; j <= i__1; ++j) {
 
	errest[j - 1] = 0.;
    }
    i__1 = colapr_ .n;
    for (iback = 1; iback <= i__1; ++iback) {
	i__ = colapr_ .n + 1 - iback;

	knew = ((i__ - 1 << 2) + 2) * (colord_._2) .mstar + 1;
	kstore = ((i__ - 1 << 1) + 1) * (colord_._2) .mstar + 1;
	x = xi[i__] + (xi[i__ + 1] - xi[i__]) * 2. / 3.;
	approx_(&i__, &x, &valstr[knew], & colbas_ .asave[56], dummy, &xi[1], &
		colapr_ .n, &z__[1], &dmz[1], & (colord_._2) .k, & (colord_._2) .ncomp, &
		(colord_._2) .mmax, (colord_._2) .m, & (colord_._2) .mstar, &c__4, dummy, &
		c__0);
	i__2 = (colord_._2) .mstar;
	for (l = 1; l <= i__2; ++l) {
	    err[l - 1] = (colest_._2) .wgterr[l - 1] * (d__1 = valstr[knew] - 
		    valstr[kstore], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	    ++knew;
	    ++kstore;
 
	}
	knew = ((i__ - 1 << 2) + 1) * (colord_._2) .mstar + 1;
	kstore = (i__ - 1 << 1) * (colord_._2) .mstar + 1;
	x = xi[i__] + (xi[i__ + 1] - xi[i__]) / 3.;
	approx_(&i__, &x, &valstr[knew], & colbas_ .asave[28], dummy, &xi[1], &
		colapr_ .n, &z__[1], &dmz[1], & (colord_._2) .k, & (colord_._2) .ncomp, &
		(colord_._2) .mmax, (colord_._2) .m, & (colord_._2) .mstar, &c__4, dummy, &
		c__0);
	i__2 = (colord_._2) .mstar;
	for (l = 1; l <= i__2; ++l) {
	    err[l - 1] += (colest_._2) .wgterr[l - 1] * (d__1 = valstr[knew] - 
		    valstr[kstore], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	    ++knew;
	    ++kstore;
 
	}

 

	i__2 = (colord_._2) .mstar;
	for (l = 1; l <= i__2; ++l) {
 
	    d__1 = errest[l - 1], d__2 = err[l - 1];
	    errest[l - 1] = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
 
	}

 
 

	if (*ifin == 0) {
	    goto L60;
	}
	i__2 = (colest_._2) .ntol;
	for (j = 1; j <= i__2; ++j) {
	    ltolj = (colest_._2) .ltol[j - 1];
	    ltjz = ltolj + (i__ - 1) * (colord_._2) .mstar;
	    if (err[ltolj - 1] > (colest_._2) .tolin[j - 1] * ((d__1 = z__[ltjz], 
		    (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) + 1.)) {
		*ifin = 0;
	    }
 
	}
L60:
	;
    }
    if (colout_ .iprint >= 0) {
	return 0;
    }
    io___837.ciunit = colout_ .iout;
    s_wsfe(&io___837);
    e_wsfe();
    lj = 1;
    i__1 = (colord_._2) .ncomp;
    for (j = 1; j <= i__1; ++j) {
	mj = lj - 1 + (colord_._2) .m[j - 1];
	io___840.ciunit = colout_ .iout;
	s_wsfe(&io___840);
	do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
	i__2 = mj;
	for (l = lj; l <= i__2; ++l) {
	    do_fio(&c__1, (char *)&errest[l - 1], (ftnlen)sizeof(doublereal));
	}
	e_wsfe();
	lj = mj + 1;
 
    }
    return 0;
 
}  

 
 
 
 

  int lsyslv_(msing, xi, xiold, z__, dmz, delz, deldmz, g, w, 
	v, rhs, dmzo, integs, ipvtg, ipvtw, rnorm, mode, fsub, dfsub, gsub, 
	dgsub, guess)
integer *msing;
doublereal *xi, *xiold, *z__, *dmz, *delz, *deldmz, *g, *w, *v, *rhs, *dmzo;
integer *integs, *ipvtg, *ipvtw;
doublereal *rnorm;
integer *mode;
  int (*fsub) (), (*dfsub) (), (*gsub) (), (*dgsub) (), (*
	guess) ();
{
     
    integer i__1, i__2, i__3;
    doublereal d__1;

     
    double sqrt();

     
    static integer iold;
    static doublereal gval;
    static integer ncol, idmz, irhs;
    static doublereal hrho, xcol, zval[40];
    static integer izet, nrow;
    static doublereal f[40], h__;
    static integer i__, j, l, lside;
    static doublereal dmval[20], value;
    static integer idmzo;
    static doublereal dummy[1];
    static integer m1;
    static doublereal df[800];
    static integer ig, jj;
    static doublereal at[28];
    static integer iv, iw;
    extern   int gblock_();
    static integer lw;
    extern   int fcblok_();
    static integer iz;
    extern   int sbblok_(), gderiv_(), vwblok_(), dmzsol_(), 
	    approx_();
    static doublereal dgz[40], xii;
     
    --ipvtw;
    --ipvtg;
    integs -= 4;
    --dmzo;
    --rhs;
    --v;
    --w;
    --g;
    --deldmz;
    --delz;
    --dmz;
    --z__;
    --xiold;
    --xi;

     
    m1 = *mode + 1;
    switch ((int)m1) {
	case 1:  goto L10;
	case 2:  goto L30;
	case 3:  goto L30;
	case 4:  goto L30;
	case 5:  goto L310;
    }

 

L10:
    i__1 = (colord_._2) .mstar;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	zval[i__ - 1] = 0.;
    }

 

L30:
    idmz = 1;
    idmzo = 1;
    irhs = 1;
    ig = 1;
    iw = 1;
    iv = 1;
    (colsid_._3) .izeta = 1;
    lside = 0;
    iold = 1;
    ncol = (colord_._2) .mstar << 1;
    *rnorm = 0.;
    if (*mode > 1) {
	goto L80;
    }

 

    i__1 = colapr_ .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	integs[i__ * 3 + 2] = ncol;
	if (i__ < colapr_ .n) {
	    goto L40;
	}
	integs[colapr_ .n * 3 + 3] = ncol;
	lside = (colord_._2) .mstar;
	goto L60;
L40:
	integs[i__ * 3 + 3] = (colord_._2) .mstar;
L50:
	if (lside == (colord_._2) .mstar) {
	    goto L60;
	}
	if ((colsid_._3) .zeta[lside] >= xi[i__] + colout_ .precis) {
	    goto L60;
	}
	++lside;
	goto L50;
L60:
	nrow = (colord_._2) .mstar + lside;
 
	integs[i__ * 3 + 1] = nrow;
    }
L80:
    if (*mode == 2) {
	goto L90;
    }

 

    lw = (colord_._2) .kd * (colord_._2) .kd * colapr_ .n;
    i__1 = lw;
    for (l = 1; l <= i__1; ++l) {
 
	w[l] = 0.;
    }

 

L90:
    i__1 = colapr_ .n;
    for (i__ = 1; i__ <= i__1; ++i__) {

 


	xii = xi[i__];
	h__ = xi[i__ + 1] - xi[i__];
	nrow = integs[i__ * 3 + 1];

 

 

L100:
	if ((colsid_._3) .izeta > (colord_._2) .mstar) {
	    goto L140;
	}
	if ((colsid_._3) .zeta[(colsid_._3) .izeta - 1] > xii + colout_ .precis) {
	    goto L140;
	}

 

	if (*mode == 0) {
	    goto L110;
	}
	if (colnln_ .iguess != 1) {
	    goto L102;
	}

 

	(*guess)(&xii, zval, dmval);
	if (iercol_ .iero > 0) {
	    return 0;
	}
	goto L110;

 

L102:
	if (*mode != 1) {
	    goto L106;
	}
	approx_(&iold, &xii, zval, at, colloc_ .coef, &xiold[1], &
		colapr_ .nold, &z__[1], &dmz[1], & (colord_._2) .k, & (colord_._2) .ncomp,
		 & (colord_._2) .mmax, (colord_._2) .m, & (colord_._2) .mstar, &c__2, dummy, &
		c__0);
	goto L110;
L106:
	approx_(&i__, &xii, zval, at, dummy, &xi[1], & colapr_ .n, &z__[1], &
		dmz[1], & (colord_._2) .k, & (colord_._2) .ncomp, & (colord_._2) .mmax, 
		(colord_._2) .m, & (colord_._2) .mstar, &c__1, dummy, &c__0);
 
	if (*mode == 3) {
	    goto L120;
	}

 

L110:
	(*gsub)(& (colsid_._3) .izeta, zval, &gval);
	if (iercol_ .iero > 0) {
	    return 0;
	}
	rhs[colapr_ .ndmz + (colsid_._3) .izeta] = -gval;
 
	d__1 = gval;
	*rnorm += d__1 * d__1;
	if (*mode == 2) {
	    goto L130;
	}

 

L120:
	gderiv_(&g[ig], &nrow, & (colsid_._3) .izeta, zval, dgz, &c__1, dgsub);
	if (iercol_ .iero > 0) {
	    return 0;
	}
L130:
	++ (colsid_._3) .izeta;
	goto L100;

 

L140:
	i__2 = (colord_._2) .k;
	for (j = 1; j <= i__2; ++j) {
	    hrho = h__ * colloc_ .rho[j - 1];
	    xcol = xii + hrho;

 

 


	    if (*mode == 0) {
		goto L200;
	    }
	    if (colnln_ .iguess != 1) {
		goto L160;
	    }

 

	    (*guess)(&xcol, zval, &dmzo[irhs]);
	    if (iercol_ .iero > 0) {
		return 0;
	    }
	    goto L170;

 

L160:
	    if (*mode != 1) {
		goto L190;
	    }
	    approx_(&iold, &xcol, zval, at, colloc_ .coef, &xiold[1], &
		    colapr_ .nold, &z__[1], &dmz[1], & (colord_._2) .k, &
		    (colord_._2) .ncomp, & (colord_._2) .mmax, (colord_._2) .m, &
		    (colord_._2) .mstar, &c__2, &dmzo[irhs], &c__1);

L170:
	    (*fsub)(&xcol, zval, f);
	    if (iercol_ .iero > 0) {
		return 0;
	    }
	    i__3 = (colord_._2) .ncomp;
	    for (jj = 1; jj <= i__3; ++jj) {
		value = dmzo[irhs] - f[jj - 1];
		rhs[irhs] = -value;
 
		d__1 = value;
		*rnorm += d__1 * d__1;
		++irhs;
 
	    }
	    goto L210;

 

L190:
	    approx_(&i__, &xcol, zval, & colbas_ .acol[j * 28 - 28], 
		    colloc_ .coef, &xi[1], & colapr_ .n, &z__[1], &dmz[1], &
		    (colord_._2) .k, & (colord_._2) .ncomp, & (colord_._2) .mmax, (colord_._2) .m, &
		    (colord_._2) .mstar, &c__4, dummy, &c__0);
	    if (*mode == 3) {
		goto L210;
	    }

 

	    (*fsub)(&xcol, zval, f);
	    if (iercol_ .iero > 0) {
		return 0;
	    }
	    i__3 = (colord_._2) .ncomp;
	    for (jj = 1; jj <= i__3; ++jj) {
		value = dmz[irhs] - f[jj - 1];
		rhs[irhs] = -value;
 
		d__1 = value;
		*rnorm += d__1 * d__1;
		++irhs;
 
	    }
	    goto L220;

 

L200:
	    (*fsub)(&xcol, zval, &rhs[irhs]);
	    if (iercol_ .iero > 0) {
		return 0;
	    }
	    irhs += (colord_._2) .ncomp;

 

L210:
	    vwblok_(&xcol, &hrho, &j, &w[iw], &v[iv], &ipvtw[idmz], &
		    (colord_._2) .kd, zval, df, & colbas_ .acol[j * 28 - 28], &dmzo[
		    idmzo], & (colord_._2) .ncomp, dfsub, msing);
	    if (iercol_ .iero > 0) {
		return 0;
	    }
	    if (*msing != 0) {
		return 0;
	    }
L220:
	    ;
	}

 

	if (*mode != 2) {
	    gblock_(&h__, &g[ig], &nrow, & (colsid_._3) .izeta, &w[iw], &v[iv], &
		    (colord_._2) .kd, dummy, &deldmz[idmz], &ipvtw[idmz], &c__1);
	}
	if (i__ < colapr_ .n) {
	    goto L280;
	}
	(colsid_._3) .izsave = (colsid_._3) .izeta;
L240:
	if ((colsid_._3) .izeta > (colord_._2) .mstar) {
	    goto L290;
	}

 

	if (*mode == 0) {
	    goto L250;
	}
	if (colnln_ .iguess != 1) {
	    goto L245;
	}

 

	(*guess)(& (colsid_._3) .aright, zval, dmval);
	if (iercol_ .iero > 0) {
	    return 0;
	}
	goto L250;

 

L245:
	if (*mode != 1) {
	    goto L246;
	}
	i__2 = colapr_ .nold + 1;
	approx_(&i__2, & (colsid_._3) .aright, zval, at, colloc_ .coef, &xiold[1], &
		colapr_ .nold, &z__[1], &dmz[1], & (colord_._2) .k, & (colord_._2) .ncomp,
		 & (colord_._2) .mmax, (colord_._2) .m, & (colord_._2) .mstar, &c__1, dummy, &
		c__0);
	goto L250;
L246:
	i__2 = colapr_ .n + 1;
	approx_(&i__2, & (colsid_._3) .aright, zval, at, colloc_ .coef, &xi[1], &
		colapr_ .n, &z__[1], &dmz[1], & (colord_._2) .k, & (colord_._2) .ncomp, &
		(colord_._2) .mmax, (colord_._2) .m, & (colord_._2) .mstar, &c__1, dummy, &
		c__0);
 
	if (*mode == 3) {
	    goto L260;
	}

 

L250:
	(*gsub)(& (colsid_._3) .izeta, zval, &gval);
	if (iercol_ .iero > 0) {
	    return 0;
	}
	rhs[colapr_ .ndmz + (colsid_._3) .izeta] = -gval;
 
	d__1 = gval;
	*rnorm += d__1 * d__1;
	if (*mode == 2) {
	    goto L270;
	}

 

L260:
	i__2 = (colsid_._3) .izeta + (colord_._2) .mstar;
	gderiv_(&g[ig], &nrow, &i__2, zval, dgz, &c__2, dgsub);
	if (iercol_ .iero > 0) {
	    return 0;
	}
L270:
	++ (colsid_._3) .izeta;
	goto L240;

 

L280:
	ig += nrow * ncol;
	iv += (colord_._2) .kd * (colord_._2) .mstar;
	iw += (colord_._2) .kd * (colord_._2) .kd;
	idmz += (colord_._2) .kd;
	if (*mode == 1) {
	    idmzo += (colord_._2) .kd;
	}
L290:
	;
    }

 

    if (*mode == 0 || *mode == 3) {
	goto L300;
    }
    *rnorm = sqrt(*rnorm / (doublereal) (colapr_ .nz + colapr_ .ndmz));
    if (*mode != 2) {
	goto L300;
    }
    return 0;

 

 

L300:
    fcblok_(&g[1], &integs[4], & colapr_ .n, &ipvtg[1], df, msing);

 

    *msing = -(*msing);
    if (*msing != 0) {
	return 0;
    }

 

L310:
    i__1 = colapr_ .ndmz;
    for (l = 1; l <= i__1; ++l) {
	deldmz[l] = rhs[l];
 
    }
    iz = 1;
    idmz = 1;
    iw = 1;
    izet = 1;
    i__1 = colapr_ .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	nrow = integs[i__ * 3 + 1];
	(colsid_._3) .izeta = nrow + 1 - (colord_._2) .mstar;
	if (i__ == colapr_ .n) {
	    (colsid_._3) .izeta = (colsid_._3) .izsave;
	}
L322:
	if (izet == (colsid_._3) .izeta) {
	    goto L324;
	}
	delz[iz - 1 + izet] = rhs[colapr_ .ndmz + izet];
	++izet;
	goto L322;
L324:
	h__ = xi[i__ + 1] - xi[i__];
	gblock_(&h__, &g[1], &nrow, & (colsid_._3) .izeta, &w[iw], &v[1], &
		(colord_._2) .kd, &delz[iz], &deldmz[idmz], &ipvtw[idmz], &c__2);
	iz += (colord_._2) .mstar;
	idmz += (colord_._2) .kd;
	iw += (colord_._2) .kd * (colord_._2) .kd;
	if (i__ < colapr_ .n) {
	    goto L320;
	}
L326:
	if (izet > (colord_._2) .mstar) {
	    goto L320;
	}
	delz[iz - 1 + izet] = rhs[colapr_ .ndmz + izet];
	++izet;
	goto L326;
L320:
	;
    }

 

    sbblok_(&g[1], &integs[4], & colapr_ .n, &ipvtg[1], &delz[1]);

 

    dmzsol_(& (colord_._2) .kd, & (colord_._2) .mstar, & colapr_ .n, &v[1], &delz[1], &
	    deldmz[1]);

    if (*mode != 1) {
	return 0;
    }
    i__1 = colapr_ .ndmz;
    for (l = 1; l <= i__1; ++l) {
	dmz[l] = dmzo[l];
 
    }
    iz = 1;
    idmz = 1;
    iw = 1;
    izet = 1;
    i__1 = colapr_ .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	nrow = integs[i__ * 3 + 1];
	(colsid_._3) .izeta = nrow + 1 - (colord_._2) .mstar;
	if (i__ == colapr_ .n) {
	    (colsid_._3) .izeta = (colsid_._3) .izsave;
	}
L330:
	if (izet == (colsid_._3) .izeta) {
	    goto L340;
	}
	z__[iz - 1 + izet] = dgz[izet - 1];
	++izet;
	goto L330;
L340:
	h__ = xi[i__ + 1] - xi[i__];
	gblock_(&h__, &g[1], &nrow, & (colsid_._3) .izeta, &w[iw], df, & (colord_._2) .kd,
		 &z__[iz], &dmz[idmz], &ipvtw[idmz], &c__2);
	iz += (colord_._2) .mstar;
	idmz += (colord_._2) .kd;
	iw += (colord_._2) .kd * (colord_._2) .kd;
	if (i__ < colapr_ .n) {
	    goto L350;
	}
L342:
	if (izet > (colord_._2) .mstar) {
	    goto L350;
	}
	z__[iz - 1 + izet] = dgz[izet - 1];
	++izet;
	goto L342;
L350:
	;
    }
    sbblok_(&g[1], &integs[4], & colapr_ .n, &ipvtg[1], &z__[1]);

 

    dmzsol_(& (colord_._2) .kd, & (colord_._2) .mstar, & colapr_ .n, &v[1], &z__[1], &dmz[
	    1]);

    return 0;
}  

  int gderiv_(gi, nrow, irow, zval, dgz, mode, dgsub)
doublereal *gi;
integer *nrow, *irow;
doublereal *zval, *dgz;
integer *mode;
  int (*dgsub) ();
{
     
    integer gi_dim1, gi_offset, i__1;

     
    static integer j;
    static doublereal dg[40], dot;
     
    gi_dim1 = *nrow;
    gi_offset = gi_dim1 + 1;
    gi -= gi_offset;
    --zval;
    --dgz;

     
    i__1 = (colord_._5) .mstar;
    for (j = 1; j <= i__1; ++j) {
 
	dg[j - 1] = 0.;
    }

 

    (*dgsub)(& (colsid_._2) .izeta, &zval[1], dg);
    if (iercol_ .iero > 0) {
	return 0;
    }

 

    if (colnln_ .nonlin == 0 || colnln_ .iter > 0) {
	goto L30;
    }
    dot = 0.;
    i__1 = (colord_._5) .mstar;
    for (j = 1; j <= i__1; ++j) {
 
	dot += dg[j - 1] * zval[j];
    }
    dgz[(colsid_._2) .izeta] = dot;

 

L30:
    if (*mode == 2) {
	goto L50;
    }

 
 
 


 

    i__1 = (colord_._5) .mstar;
    for (j = 1; j <= i__1; ++j) {
	gi[*irow + j * gi_dim1] = dg[j - 1];
 
	gi[*irow + ((colord_._5) .mstar + j) * gi_dim1] = 0.;
    }
    return 0;

 

L50:
    i__1 = (colord_._5) .mstar;
    for (j = 1; j <= i__1; ++j) {
	gi[*irow + j * gi_dim1] = 0.;
 
	gi[*irow + ((colord_._5) .mstar + j) * gi_dim1] = dg[j - 1];
    }
    return 0;
}  

  int vwblok_(xcol, hrho, jj, wi, vi, ipvtw, kd, zval, df, 
	acol, dmzo, ncomp, dfsub, msing)
doublereal *xcol, *hrho;
integer *jj;
doublereal *wi, *vi;
integer *ipvtw, *kd;
doublereal *zval, *df, *acol, *dmzo;
integer *ncomp;
  int (*dfsub) ();
integer *msing;
{
     
    integer wi_dim1, wi_offset, vi_dim1, vi_offset, df_dim1, df_offset, i__1, 
	    i__2, i__3, i__4;

     
    static doublereal fact, basm[5];
    static integer jcol;
    extern   int dgefa_();
    static integer j, l;
    extern   int dgesl_();
    static integer jcomp, i0, i1, i2;
    static doublereal ha[28]	 ;
    static integer id;
    static doublereal bl;
    static integer mj, jn, ll, ir, jv, jw, iw, lp1, jdf;
    static doublereal ajl;
     
    --ipvtw;
    vi_dim1 = *kd;
    vi_offset = vi_dim1 + 1;
    vi -= vi_offset;
    wi_dim1 = *kd;
    wi_offset = wi_dim1 + 1;
    wi -= wi_offset;
    --zval;
    acol -= 8;
    --dmzo;
    df_dim1 = *ncomp;
    df_offset = df_dim1 + 1;
    df -= df_offset;

     
    if (*jj > 1) {
	goto L30;
    }
    i__1 = *kd;
    for (id = 1; id <= i__1; ++id) {
	wi[id + id * wi_dim1] = 1.;
 
    }

 

L30:
    fact = 1.;
    i__1 = (colord_._6) .mmax;
    for (l = 1; l <= i__1; ++l) {
	fact = fact * *hrho / (doublereal) l;
	basm[l - 1] = fact;
	i__2 = (colord_._6) .k;
	for (j = 1; j <= i__2; ++j) {
	    ha[j + l * 7 - 8] = fact * acol[j + l * 7];
 
	}
    }

 

    i__2 = (colord_._6) .mstar;
    for (jcol = 1; jcol <= i__2; ++jcol) {
	i__1 = *ncomp;
	for (ir = 1; ir <= i__1; ++ir) {
 
	    df[ir + jcol * df_dim1] = 0.;
	}
    }

 
 
 
 
 
 

    (*dfsub)(xcol, &zval[1], &df[df_offset]);
    if (iercol_ .iero > 0) {
	return 0;
    }
    i0 = (*jj - 1) * *ncomp;
    i1 = i0 + 1;
    i2 = i0 + *ncomp;

 

    if (colnln_ .nonlin == 0 || colnln_ .iter > 0) {
	goto L60;
    }
    i__1 = (colord_._6) .mstar;
    for (j = 1; j <= i__1; ++j) {
	fact = -zval[j];
	i__2 = *ncomp;
	for (id = 1; id <= i__2; ++id) {
	    dmzo[i0 + id] += fact * df[id + j * df_dim1];
 
	}
    }

 
 

L60:
    i__2 = (colord_._6) .mstar;
    for (j = 1; j <= i__2; ++j) {
	i__1 = *ncomp;
	for (id = 1; id <= i__1; ++id) {
	    vi[i0 + id + j * vi_dim1] = df[id + j * df_dim1];
 
	}
    }
    jn = 1;
    i__1 = *ncomp;
    for (jcomp = 1; jcomp <= i__1; ++jcomp) {
	mj = (colord_._6) .m[jcomp - 1];
	jn += mj;
	i__2 = mj;
	for (l = 1; l <= i__2; ++l) {
	    jv = jn - l;
	    jw = jcomp;
	    i__3 = (colord_._6) .k;
	    for (j = 1; j <= i__3; ++j) {
		ajl = -ha[j + l * 7 - 8];
		i__4 = i2;
		for (iw = i1; iw <= i__4; ++iw) {
		    wi[iw + jw * wi_dim1] += ajl * vi[iw + jv * vi_dim1];
 
		}
 
		jw += *ncomp;
	    }
	    lp1 = l + 1;
	    if (l == mj) {
		goto L130;
	    }
	    i__3 = mj;
	    for (ll = lp1; ll <= i__3; ++ll) {
		jdf = jn - ll;
		bl = basm[ll - l - 1];
		i__4 = i2;
		for (iw = i1; iw <= i__4; ++iw) {
		    vi[iw + jv * vi_dim1] += bl * vi[iw + jdf * vi_dim1];
 
		}
 
	    }
L130:
	    ;
	}
 
    }
    if (*jj < (colord_._6) .k) {
	return 0;
    }

 


 

    *msing = 0;
    dgefa_(&wi[wi_offset], kd, kd, &ipvtw[1], msing);

 

    if (*msing != 0) {
	return 0;
    }
    i__1 = (colord_._6) .mstar;
    for (j = 1; j <= i__1; ++j) {
	dgesl_(&wi[wi_offset], kd, kd, &ipvtw[1], &vi[j * vi_dim1 + 1], &c__0)
		;
 
    }
    return 0;
}  

  int gblock_(h__, gi, nrow, irow, wi, vi, kd, rhsz, rhsdmz, 
	ipvtw, mode)
doublereal *h__, *gi;
integer *nrow, *irow;
doublereal *wi, *vi;
integer *kd;
doublereal *rhsz, *rhsdmz;
integer *ipvtw, *mode;
{
     
    integer gi_dim1, gi_offset, vi_dim1, vi_offset, i__1, i__2, i__3, i__4;

     
    static doublereal fact, basm[5];
    static integer jcol;
    static doublereal rsum;
    static integer j, l;
    extern   int dgesl_();
    static integer icomp, jcomp;
    static doublereal hb[28]	 ;
    static integer id, jd, mj, ll, ir, ind;
    gi_dim1 = *nrow;
    gi_offset = gi_dim1 + 1;
    gi -= gi_offset;
    --wi;
    vi_dim1 = *kd;
    vi_offset = vi_dim1 + 1;
    vi -= vi_offset;
    --rhsz;
    --rhsdmz;
    --ipvtw;

     
    fact = 1.;
    basm[0] = 1.;
    i__1 = (colord_._7) .mmax;
    for (l = 1; l <= i__1; ++l) {
	fact = fact * *h__ / (doublereal) l;
	basm[l] = fact;
	i__2 = (colord_._7) .k;
	for (j = 1; j <= i__2; ++j) {
 
	    hb[j + l * 7 - 8] = fact * colbas_ .b[j + l * 7 - 8];
	}
 
    }

 

    switch ((int)*mode) {
	case 1:  goto L40;
	case 2:  goto L110;
    }

 

L40:
    i__1 = (colord_._7) .mstar;
    for (j = 1; j <= i__1; ++j) {
	i__2 = (colord_._7) .mstar;
	for (ir = 1; ir <= i__2; ++ir) {
	    gi[*irow - 1 + ir + j * gi_dim1] = 0.;
 
	    gi[*irow - 1 + ir + ((colord_._7) .mstar + j) * gi_dim1] = 0.;
	}
 
	gi[*irow - 1 + j + ((colord_._7) .mstar + j) * gi_dim1] = 1.;
    }

 

    ir = *irow;
    i__1 = (colord_._7) .ncomp;
    for (icomp = 1; icomp <= i__1; ++icomp) {
	mj = (colord_._7) .m[icomp - 1];
	ir += mj;
	i__2 = mj;
	for (l = 1; l <= i__2; ++l) {
	    id = ir - l;
	    i__3 = (colord_._7) .mstar;
	    for (jcol = 1; jcol <= i__3; ++jcol) {
		ind = icomp;
		rsum = 0.;
		i__4 = (colord_._7) .k;
		for (j = 1; j <= i__4; ++j) {
		    rsum -= hb[j + l * 7 - 8] * vi[ind + jcol * vi_dim1];
 
		    ind += (colord_._7) .ncomp;
		}
		gi[id + jcol * gi_dim1] = rsum;
 
	    }
	    jd = id - *irow;
	    i__3 = l;
	    for (ll = 1; ll <= i__3; ++ll) {
		gi[id + (jd + ll) * gi_dim1] -= basm[ll - 1];
 
	    }
 
	}
 
    }
    return 0;

 

L110:
    dgesl_(&wi[1], kd, kd, &ipvtw[1], &rhsdmz[1], &c__0);
    ir = *irow;
    i__1 = (colord_._7) .ncomp;
    for (jcomp = 1; jcomp <= i__1; ++jcomp) {
	mj = (colord_._7) .m[jcomp - 1];
	ir += mj;
	i__2 = mj;
	for (l = 1; l <= i__2; ++l) {
	    ind = jcomp;
	    rsum = 0.;
	    i__3 = (colord_._7) .k;
	    for (j = 1; j <= i__3; ++j) {
		rsum += hb[j + l * 7 - 8] * rhsdmz[ind];
 
		ind += (colord_._7) .ncomp;
	    }
	    rhsz[ir - l] = rsum;
 
	}
 
    }
    return 0;
}  


 
 
 
 

  int appsln_(x, z__, fspace, ispace)
doublereal *x, *z__, *fspace;
integer *ispace;
{
    static doublereal a[28];
    static integer i__;
    static doublereal dummy[1];
    extern   int approx_();
    static integer is4, is5, is6;
    --ispace;
    --fspace;
    --z__;

     
    is6 = ispace[6];
    is5 = ispace[1] + 2;
    is4 = is5 + ispace[4] * (ispace[1] + 1);
    i__ = 1;
    approx_(&i__, x, &z__[1], a, &fspace[is6], &fspace[1], &ispace[1], &
	    fspace[is5], &fspace[is4], &ispace[2], &ispace[3], &ispace[5], &
	    ispace[8], &ispace[4], &c__2, dummy, &c__0);
    return 0;
}  

  int approx_(i__, x, zval, a, coef, xi, n, z__, dmz, k, ncomp,
	 mmax, m, mstar, mode, dmval, modm)
integer *i__;
doublereal *x, *zval, *a, *coef, *xi;
integer *n;
doublereal *z__, *dmz;
integer *k, *ncomp, *mmax, *m, *mstar, *mode;
doublereal *dmval;
integer *modm;
{
     
    static char fmt_900[] = "(\002 ****** DOMAIN ERROR IN APPROX ******\002/\002 X =\002,d20.10,\002   ALEFT =\002,d20.10,\002   ARIGHT =\002,d20.10)";

     
    integer i__1, i__2, i__3;

     
    integer s_wsfe(), do_fio(), e_wsfe();

     
    static doublereal fact;
    static integer idmz;
    static doublereal zsum;
    static integer j, l;
    static doublereal s;
    extern   int rkbas_();
    static integer ileft, jcomp, lb;
    static doublereal bm[4], dm[7];
    static integer mj, ll, ir, iz, iright, ind;

     
    static cilist io___920 = { 0, 0, 0, fmt_900, 0 };
    --dmval;
    --m;
    --dmz;
    --z__;
    --xi;
    --coef;
    a -= 8;
    --zval;

     
    switch ((int)*mode) {
	case 1:  goto L10;
	case 2:  goto L30;
	case 3:  goto L80;
	case 4:  goto L90;
    }

 

L10:
    *x = xi[*i__];
    iz = (*i__ - 1) * *mstar;
    i__1 = *mstar;
    for (j = 1; j <= i__1; ++j) {
	++iz;
	zval[j] = z__[iz];
 
    }
    return 0;

 

L30:
    if (*x >= xi[1] - colout_ .precis && *x <= xi[*n + 1] + colout_ .precis) {
	goto L40;
    }
    if (colout_ .iprint < 1) {
	io___920.ciunit = colout_ .iout;
	s_wsfe(&io___920);
	do_fio(&c__1, (char *)&(*x), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&xi[1], (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&xi[*n + 1], (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    if (*x < xi[1]) {
	*x = xi[1];
    }
    if (*x > xi[*n + 1]) {
	*x = xi[*n + 1];
    }
L40:
    if (*i__ > *n || *i__ < 1) {
	*i__ = (*n + 1) / 2;
    }
    ileft = *i__;
    if (*x < xi[ileft]) {
	goto L60;
    }
    i__1 = *n;
    for (l = ileft; l <= i__1; ++l) {
	*i__ = l;
	if (*x < xi[l + 1]) {
	    goto L80;
	}
 
    }
    goto L80;
L60:
    iright = ileft - 1;
    i__1 = iright;
    for (l = 1; l <= i__1; ++l) {
	*i__ = iright + 1 - l;
	if (*x >= xi[*i__]) {
	    goto L80;
	}
 
    }

 

L80:
    s = (*x - xi[*i__]) / (xi[*i__ + 1] - xi[*i__]);
    rkbas_(&s, &coef[1], k, mmax, &a[8], dm, modm);

 

L90:
    bm[0] = *x - xi[*i__];
    i__1 = *mmax;
    for (l = 2; l <= i__1; ++l) {
	bm[l - 1] = bm[0] / (doublereal) l;
 
    }

 

 
    ir = 1;
    iz = (*i__ - 1) * *mstar + 1;
    idmz = (*i__ - 1) * *k * *ncomp;
    i__1 = *ncomp;
    for (jcomp = 1; jcomp <= i__1; ++jcomp) {
	mj = m[jcomp];
	ir += mj;
	iz += mj;
	i__2 = mj;
	for (l = 1; l <= i__2; ++l) {
	    ind = idmz + jcomp;
	    zsum = 0.;
	    i__3 = *k;
	    for (j = 1; j <= i__3; ++j) {
		zsum += a[j + l * 7] * dmz[ind];
 
		ind += *ncomp;
	    }
	    i__3 = l;
	    for (ll = 1; ll <= i__3; ++ll) {
		lb = l + 1 - ll;
 
		zsum = zsum * bm[lb - 1] + z__[iz - ll];
	    }
 
	    zval[ir - l] = zsum;
	}
 
    }
    if (*modm == 0) {
	return 0;
    }

 

    i__1 = *ncomp;
    for (jcomp = 1; jcomp <= i__1; ++jcomp) {
 
	dmval[jcomp] = 0.;
    }
    ++idmz;
    i__1 = *k;
    for (j = 1; j <= i__1; ++j) {
	fact = dm[j - 1];
	i__2 = *ncomp;
	for (jcomp = 1; jcomp <= i__2; ++jcomp) {
	    dmval[jcomp] += fact * dmz[idmz];
	    ++idmz;
 
	}
 
    }
    return 0;
 
}  

  int rkbas_(s, coef, k, m, rkb, dm, mode)
doublereal *s, *coef;
integer *k, *m;
doublereal *rkb, *dm;
integer *mode;
{
     
    integer coef_dim1, coef_offset, i__1, i__2, i__3;

     
    static integer i__, j, l;
    static doublereal p, t[10];
    static integer lb, kpm1;
     
    coef_dim1 = *k;
    coef_offset = coef_dim1 + 1;
    coef -= coef_offset;
    rkb -= 8;
    --dm;

     
    if (*k == 1) {
	goto L70;
    }
    kpm1 = *k + *m - 1;
    i__1 = kpm1;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	t[i__ - 1] = *s / (doublereal) i__;
    }
    i__1 = *m;
    for (l = 1; l <= i__1; ++l) {
	lb = *k + l + 1;
	i__2 = *k;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    p = coef[i__ * coef_dim1 + 1];
	    i__3 = *k;
	    for (j = 2; j <= i__3; ++j) {
		p = p * t[lb - j - 1] + coef[j + i__ * coef_dim1];
 
	    }
	    rkb[i__ + l * 7] = p;
 
	}
 
    }
    if (*mode == 0) {
	return 0;
    }
    i__1 = *k;
    for (i__ = 1; i__ <= i__1; ++i__) {
	p = coef[i__ * coef_dim1 + 1];
	i__2 = *k;
	for (j = 2; j <= i__2; ++j) {
 
	    p = p * t[*k + 1 - j - 1] + coef[j + i__ * coef_dim1];
	}
	dm[i__] = p;
 
    }
    return 0;
L70:
    rkb[8] = 1.;
    dm[1] = 1.;
    return 0;
}  

  int vmonde_(rho, coef, k)
doublereal *rho, *coef;
integer *k;
{
     
    integer i__1, i__2;

     
    static integer ifac, i__, j, km1, kmi;


 


 
 
 

 



     
    --coef;
    --rho;

     
    if (*k == 1) {
	return 0;
    }
    km1 = *k - 1;
    i__1 = km1;
    for (i__ = 1; i__ <= i__1; ++i__) {
	kmi = *k - i__;
	i__2 = kmi;
	for (j = 1; j <= i__2; ++j) {
	    coef[j] = (coef[j + 1] - coef[j]) / (rho[j + i__] - rho[j]);
 
	}
    }

    ifac = 1;
    i__2 = km1;
    for (i__ = 1; i__ <= i__2; ++i__) {
	kmi = *k + 1 - i__;
	i__1 = kmi;
	for (j = 2; j <= i__1; ++j) {
 
	    coef[j] -= rho[j + i__ - 1] * coef[j - 1];
	}
	coef[kmi] = (doublereal) ifac * coef[kmi];
	ifac *= i__;
 
    }
    coef[1] = (doublereal) ifac * coef[1];
    return 0;
}  

  int horder_(i__, uhigh, hi, dmz, ncomp, k)
integer *i__;
doublereal *uhigh, *hi, *dmz;
integer *ncomp, *k;
{
     
    integer i__1, i__2;

     
    double pow_di();

     
    static doublereal fact;
    static integer idmz, j, id;
    static doublereal dn;
    static integer kin;


 


 
 
 

 
 
 
 
 
 
 
 
 

 


 


     
    --dmz;
    --uhigh;

     
    i__1 = *k - 1;
    dn = 1. / pow_di(hi, &i__1);

 

    i__1 = *ncomp;
    for (id = 1; id <= i__1; ++id) {
	uhigh[id] = 0.;
 
    }
    kin = 1;
    idmz = (*i__ - 1) * *k * *ncomp + 1;
    i__1 = *k;
    for (j = 1; j <= i__1; ++j) {
	fact = dn * colloc_ .coef[kin - 1];
	i__2 = *ncomp;
	for (id = 1; id <= i__2; ++id) {
	    uhigh[id] += fact * dmz[idmz];
	    ++idmz;
 
	}
	kin += *k;
 
    }
    return 0;
}  

  int dmzsol_(kd, mstar, n, v, z__, dmz)
integer *kd, *mstar, *n;
doublereal *v, *z__, *dmz;
{
     
    integer v_dim1, v_offset, dmz_dim1, dmz_offset, i__1, i__2, i__3;

     
    static doublereal fact;
    static integer i__, j, l, jz;


 


 
 
 

 


 

     
    dmz_dim1 = *kd;
    dmz_offset = dmz_dim1 + 1;
    dmz -= dmz_offset;
    v_dim1 = *kd;
    v_offset = v_dim1 + 1;
    v -= v_offset;
    --z__;

     
    jz = 1;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i__2 = *mstar;
	for (j = 1; j <= i__2; ++j) {
	    fact = z__[jz];
	    i__3 = *kd;
	    for (l = 1; l <= i__3; ++l) {
		dmz[l + i__ * dmz_dim1] += fact * v[l + jz * v_dim1];
 
	    }
	    ++jz;
 
	}
 
    }
    return 0;
}  

 
 
 
 
 
 
 

  int fcblok_(bloks, integs, nbloks, ipivot, scrtch, info)
doublereal *bloks;
integer *integs, *nbloks, *ipivot;
doublereal *scrtch;
integer *info;
{
    static integer ncol, last, nrow, i__, index;
    extern   int factrb_(), shiftb_();
    static integer indexn, indexx;



 

 
 
 

 
 
 

 

 
 

 
 
 
 
 
 
 
 
 
 
 
 
 

 


     
    --bloks;
    integs -= 4;
    --ipivot;
    --scrtch;

     
    *info = 0;
    indexx = 1;
    indexn = 1;
    i__ = 1;

 

L10:
    index = indexn;
    nrow = integs[i__ * 3 + 1];
    ncol = integs[i__ * 3 + 2];
    last = integs[i__ * 3 + 3];

 
 

    factrb_(&bloks[index], &ipivot[indexx], &scrtch[1], &nrow, &ncol, &last, 
	    info);

 


    if (*info != 0) {
	goto L20;
    }
    if (i__ == *nbloks) {
	return 0;
    }
    ++i__;
    indexn = nrow * ncol + index;
    indexx += last;

 

    shiftb_(&bloks[index], &nrow, &ncol, &last, &bloks[indexn], &integs[i__ * 
	    3 + 1], &integs[i__ * 3 + 2]);
    goto L10;
L20:
    *info = *info + indexx - 1;
    return 0;
}  

  int factrb_(w, ipivot, d__, nrow, ncol, last, info)
doublereal *w;
integer *ipivot;
doublereal *d__;
integer *nrow, *ncol, *last, *info;
{
     
    integer w_dim1, w_offset, i__1, i__2;
    doublereal d__1, d__2, d__3;

     
    static integer i__, j, k, l;
    static doublereal s, t, colmax;
    static integer kp1;
     
    --d__;
    --ipivot;
    w_dim1 = *nrow;
    w_offset = w_dim1 + 1;
    w -= w_offset;

     
    i__1 = *nrow;
    for (i__ = 1; i__ <= i__1; ++i__) {
	d__[i__] = 0.;
 
    }
    i__1 = *ncol;
    for (j = 1; j <= i__1; ++j) {
	i__2 = *nrow;
	for (i__ = 1; i__ <= i__2; ++i__) {
 
	    d__2 = d__[i__], d__3 = (d__1 = w[i__ + j * w_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	    d__[i__] = (( d__2 ) >= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
 
	}
    }

 
 

    k = 1;

 
 
 
 
 

L30:
    if (d__[k] == 0.) {
	goto L90;
    }
    if (k == *nrow) {
	goto L80;
    }
    l = k;
    kp1 = k + 1;
    colmax = (d__1 = w[k + k * w_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) / d__[k];

 

    i__2 = *nrow;
    for (i__ = kp1; i__ <= i__2; ++i__) {
	if ((d__1 = w[i__ + k * w_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= colmax * d__[i__]) {
	    goto L40;
	}
	colmax = (d__1 = w[i__ + k * w_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) / d__[i__];
	l = i__;
L40:
	;
    }
    ipivot[k] = l;
    t = w[l + k * w_dim1];
    s = d__[l];
    if (l == k) {
	goto L50;
    }
    w[l + k * w_dim1] = w[k + k * w_dim1];
    w[k + k * w_dim1] = t;
    d__[l] = d__[k];
    d__[k] = s;
L50:

 
 

    if ((( t ) >= 0 ? ( t ) : -( t ))  + d__[k] <= d__[k]) {
	goto L90;
    }

 
 
 
 

    t = -1. / t;
    i__2 = *nrow;
    for (i__ = kp1; i__ <= i__2; ++i__) {
 
	w[i__ + k * w_dim1] *= t;
    }
    i__2 = *ncol;
    for (j = kp1; j <= i__2; ++j) {
	t = w[l + j * w_dim1];
	if (l == k) {
	    goto L62;
	}
	w[l + j * w_dim1] = w[k + j * w_dim1];
	w[k + j * w_dim1] = t;
L62:
	if (t == 0.) {
	    goto L70;
	}
	i__1 = *nrow;
	for (i__ = kp1; i__ <= i__1; ++i__) {
 
	    w[i__ + j * w_dim1] += w[i__ + k * w_dim1] * t;
	}
L70:
	;
    }
    k = kp1;

 

    if (k <= *last) {
	goto L30;
    }
    return 0;

 
 

L80:
    if ((d__1 = w[*nrow + *nrow * w_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) + d__[*nrow] > d__[*
	    nrow]) {
	return 0;
    }

 

L90:
    *info = k;
    return 0;
}  

  int shiftb_(ai, nrowi, ncoli, last, ai1, nrowi1, ncoli1)
doublereal *ai;
integer *nrowi, *ncoli, *last;
doublereal *ai1;
integer *nrowi1, *ncoli1;
{
     
    integer ai_dim1, ai_offset, ai1_dim1, ai1_offset, i__1, i__2;

     
    static integer jmax, mmax, j, m, jmaxp1;


 


 
 
 
 
 

 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 


     
    ai_dim1 = *nrowi;
    ai_offset = ai_dim1 + 1;
    ai -= ai_offset;
    ai1_dim1 = *nrowi1;
    ai1_offset = ai1_dim1 + 1;
    ai1 -= ai1_offset;

     
    mmax = *nrowi - *last;
    jmax = *ncoli - *last;
    if (mmax < 1 || jmax < 1) {
	return 0;
    }

 

    i__1 = jmax;
    for (j = 1; j <= i__1; ++j) {
	i__2 = mmax;
	for (m = 1; m <= i__2; ++m) {
 
	    ai1[m + j * ai1_dim1] = ai[*last + m + (*last + j) * ai_dim1];
	}
    }
    if (jmax == *ncoli1) {
	return 0;
    }

 

    jmaxp1 = jmax + 1;
    i__2 = *ncoli1;
    for (j = jmaxp1; j <= i__2; ++j) {
	i__1 = mmax;
	for (m = 1; m <= i__1; ++m) {
 
	    ai1[m + j * ai1_dim1] = 0.;
	}
    }
    return 0;
}  

  int sbblok_(bloks, integs, nbloks, ipivot, x)
doublereal *bloks;
integer *integs, *nbloks, *ipivot;
doublereal *x;
{
     
    integer i__1;

     
    static integer ncol, last, nrow, i__, j, index;
    extern   int subbak_();
    static integer indexx;
    extern   int subfor_();
    static integer nbp1;


 


 

 

 
 
 

 
 
 
 

 



 

     
    --bloks;
    integs -= 4;
    --ipivot;
    --x;

     
    index = 1;
    indexx = 1;
    i__1 = *nbloks;
    for (i__ = 1; i__ <= i__1; ++i__) {
	nrow = integs[i__ * 3 + 1];
	last = integs[i__ * 3 + 3];
	subfor_(&bloks[index], &ipivot[indexx], &nrow, &last, &x[indexx]);
	index = nrow * integs[i__ * 3 + 2] + index;
 
	indexx += last;
    }

 

    nbp1 = *nbloks + 1;
    i__1 = *nbloks;
    for (j = 1; j <= i__1; ++j) {
	i__ = nbp1 - j;
	nrow = integs[i__ * 3 + 1];
	ncol = integs[i__ * 3 + 2];
	last = integs[i__ * 3 + 3];
	index -= nrow * ncol;
	indexx -= last;
 
	subbak_(&bloks[index], &nrow, &ncol, &last, &x[indexx]);
    }
    return 0;
}  

  int subfor_(w, ipivot, nrow, last, x)
doublereal *w;
integer *ipivot, *nrow, *last;
doublereal *x;
{
     
    integer w_dim1, w_offset, i__1, i__2;

     
    static integer i__, k;
    static doublereal t;
    static integer lstep, ip, kp1;


 


 
 
 

 
 
 
 
 
 
 

 



     
    --x;
    --ipivot;
    w_dim1 = *nrow;
    w_offset = w_dim1 + 1;
    w -= w_offset;

     
    if (*nrow == 1) {
	return 0;
    }
 
    i__1 = *nrow - 1;
    lstep = (( i__1 ) <= ( *last ) ? ( i__1 ) : ( *last )) ;
    i__1 = lstep;
    for (k = 1; k <= i__1; ++k) {
	kp1 = k + 1;
	ip = ipivot[k];
	t = x[ip];
	x[ip] = x[k];
	x[k] = t;
	if (t == 0.) {
	    goto L20;
	}
	i__2 = *nrow;
	for (i__ = kp1; i__ <= i__2; ++i__) {
 
	    x[i__] += w[i__ + k * w_dim1] * t;
	}
L20:
	;
    }
 
    return 0;
}  

  int subbak_(w, nrow, ncol, last, x)
doublereal *w;
integer *nrow, *ncol, *last;
doublereal *x;
{
     
    integer w_dim1, w_offset, i__1, i__2;

     
    static integer i__, j, k;
    static doublereal t;
    static integer kb, km1, lm1, lp1;


 


 

 
 
 
 

 
 

 
 
 
 
 

 



     
    --x;
    w_dim1 = *nrow;
    w_offset = w_dim1 + 1;
    w -= w_offset;

     
    lp1 = *last + 1;
    if (lp1 > *ncol) {
	goto L30;
    }
    i__1 = *ncol;
    for (j = lp1; j <= i__1; ++j) {
	t = -x[j];
	if (t == 0.) {
	    goto L20;
	}
	i__2 = *last;
	for (i__ = 1; i__ <= i__2; ++i__) {
 
	    x[i__] += w[i__ + j * w_dim1] * t;
	}
L20:
	;
    }
L30:
    if (*last == 1) {
	goto L60;
    }
    lm1 = *last - 1;
    i__1 = lm1;
    for (kb = 1; kb <= i__1; ++kb) {
	km1 = *last - kb;
	k = km1 + 1;
	x[k] /= w[k + k * w_dim1];
	t = -x[k];
	if (t == 0.) {
	    goto L50;
	}
	i__2 = km1;
	for (i__ = 1; i__ <= i__2; ++i__) {
 
	    x[i__] += w[i__ + k * w_dim1] * t;
	}
L50:
	;
    }
L60:
    x[1] /= w[w_dim1 + 1];
    return 0;
}  

  int ddaini_(x, y, yprime, neq, res, jac, h__, wt, idid, rpar,
	 ipar, phi, delta, e, wm, iwm, hmin, uround, nonneg, ntemp)
doublereal *x, *y, *yprime;
integer *neq;
  int (*res) (), (*jac) ();
doublereal *h__, *wt;
integer *idid;
doublereal *rpar;
integer *ipar;
doublereal *phi, *delta, *e, *wm;
integer *iwm;
doublereal *hmin, *uround;
integer *nonneg, *ntemp;
{
     

    static integer maxit = 10;
    static integer mjac = 5;
    static doublereal damp = .75;

     
    integer phi_dim1, phi_offset, i__1;
    doublereal d__1, d__2;

     
    double pow_dd();

     
    static doublereal rate;
    static integer ires;
    static doublereal xold;
    static integer i__, jcalc, m;
    static doublereal r__, s, ynorm;
    extern   int ddajac_();
    static doublereal cj;
    extern doublereal ddanrm_();
    extern   int ddaslv_();
    static logical convgd;
    static doublereal delnrm, oldnrm;
    static integer ncf, nef, ier, nsf;
    static doublereal err;
    --y;
    --yprime;
    phi_dim1 = *neq;
    phi_offset = phi_dim1 + 1;
    phi -= phi_offset;
    --wt;
    --rpar;
    --ipar;
    --delta;
    --e;
    --wm;
    --iwm;

     


 
 
 
 

 
    *idid = 1;
    nef = 0;
    ncf = 0;
    nsf = 0;
    xold = *x;
    ynorm = ddanrm_(neq, &y[1], &wt[1], &rpar[1], &ipar[1]);

 
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
	phi[i__ + phi_dim1] = y[i__];
 
	phi[i__ + (phi_dim1 << 1)] = yprime[i__];
    }


 
 
 
 

 
L200:
    cj = 1. / *h__;
    *x += *h__;

 
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	y[i__] += *h__ * yprime[i__];
    }

    jcalc = -1;
    m = 0;
    convgd = (1) ;


 
L300:
    ++iwm[12];
    ires = 0;

    (*res)(x, &y[1], &yprime[1], &delta[1], &ires, &rpar[1], &ipar[1]);
    if (ierode_ .iero != 0) {
	return 0;
    }
    if (ires < 0) {
	goto L430;
    }


 
    if (jcalc != -1) {
	goto L310;
    }
    ++iwm[13];
    jcalc = 0;
    ddajac_(neq, x, &y[1], &yprime[1], &delta[1], &cj, h__, &ier, &wt[1], &e[
	    1], &wm[1], &iwm[1], res, &ires, uround, jac, &rpar[1], &ipar[1], 
	    ntemp);
    if (ierode_ .iero != 0) {
	return 0;
    }

    s = 1e6;
    if (ires < 0) {
	goto L430;
    }
    if (ier != 0) {
	goto L430;
    }
    nsf = 0;



 
L310:
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	delta[i__] *= damp;
    }

 
 

    ddaslv_(neq, &delta[1], &wm[1], &iwm[1]);

 
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
	y[i__] -= delta[i__];
 
	yprime[i__] -= cj * delta[i__];
    }

 

    delnrm = ddanrm_(neq, &delta[1], &wt[1], &rpar[1], &ipar[1]);
    if (delnrm <= *uround * 100. * ynorm) {
	goto L400;
    }

    if (m > 0) {
	goto L340;
    }
    oldnrm = delnrm;
    goto L350;

L340:
    d__1 = delnrm / oldnrm;
    d__2 = 1. / m;
    rate = pow_dd(&d__1, &d__2);
    if (rate > .9) {
	goto L430;
    }
    s = rate / (1. - rate);

L350:
    if (s * delnrm <= .33) {
	goto L400;
    }


 
 
 
 
 

    ++m;
    if (m >= maxit) {
	goto L430;
    }

    if (m / mjac * mjac == m) {
	jcalc = -1;
    }
    goto L300;


 
 
L400:
    if (*nonneg == 0) {
	goto L450;
    }
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
 
	d__1 = y[i__];
	delta[i__] = (( d__1 ) <= ( 0. ) ? ( d__1 ) : ( 0. )) ;
    }

    delnrm = ddanrm_(neq, &delta[1], &wt[1], &rpar[1], &ipar[1]);
    if (delnrm > .33) {
	goto L430;
    }

    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
	y[i__] -= delta[i__];
 
	yprime[i__] -= cj * delta[i__];
    }
    goto L450;


 
L430:
    convgd = (0) ;
L450:
    if (! convgd) {
	goto L600;
    }



 
 
 
 
 

    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	e[i__] = y[i__] - phi[i__ + phi_dim1];
    }
    err = ddanrm_(neq, &e[1], &wt[1], &rpar[1], &ipar[1]);

    if (err <= 1.) {
	return 0;
    }



 
 
 
 
 
 
 

L600:
    *x = xold;
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
	y[i__] = phi[i__ + phi_dim1];
 
	yprime[i__] = phi[i__ + (phi_dim1 << 1)];
    }

    if (convgd) {
	goto L640;
    }
    if (ier == 0) {
	goto L620;
    }
    ++nsf;
    *h__ *= .25;
    if (nsf < 3 && (( *h__ ) >= 0 ? ( *h__ ) : -( *h__ ))  >= *hmin) {
	goto L690;
    }
    *idid = -12;
    return 0;
L620:
    if (ires > -2) {
	goto L630;
    }
    *idid = -12;
    return 0;
L630:
    ++ncf;
    *h__ *= .25;
    if (ncf < 10 && (( *h__ ) >= 0 ? ( *h__ ) : -( *h__ ))  >= *hmin) {
	goto L690;
    }
    *idid = -12;
    return 0;

L640:
    ++nef;
    r__ = .9 / (err * 2. + 1e-4);
 
    d__1 = .1, d__2 = (( .5 ) <= ( r__ ) ? ( .5 ) : ( r__ )) ;
    r__ = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    *h__ *= r__;
    if ((( *h__ ) >= 0 ? ( *h__ ) : -( *h__ ))  >= *hmin && nef < 10) {
	goto L690;
    }
    *idid = -12;
    return 0;
L690:
    goto L200;

 
}  

  int ddajac_(neq, x, y, yprime, delta, cj, h__, ier, wt, e, 
	wm, iwm, res, ires, uround, jac, rpar, ipar, ntemp)
integer *neq;
doublereal *x, *y, *yprime, *delta, *cj, *h__;
integer *ier;
doublereal *wt, *e, *wm;
integer *iwm;
  int (*res) ();
integer *ires;
doublereal *uround;
  int (*jac) ();
doublereal *rpar;
integer *ipar, *ntemp;
{
     
    integer i__1, i__2, i__3, i__4, i__5;
    doublereal d__1, d__2, d__3, d__4, d__5;

     
    double sqrt(), d_sign();

     
    static integer nrow;
    static doublereal squr;
    static integer npdm1;
    extern   int dgbfa_(), dgefa_();
    static integer i__, j, k, l, n, mband, lenpd, isave, msave;
    static doublereal ysave;
    static integer i1, i2, mtype, ii, meband;
    static doublereal delinv;
    static integer ipsave;
    static doublereal ypsave;
    static integer mba;
    static doublereal del;
    static integer meb1;
     
    --ipar;
    --rpar;
    --iwm;
    --wm;
    --e;
    --wt;
    --delta;
    --yprime;
    --y;

     
    *ier = 0;
    npdm1 = 0;
    mtype = iwm[4];
    switch ((int)mtype) {
	case 1:  goto L100;
	case 2:  goto L200;
	case 3:  goto L300;
	case 4:  goto L400;
	case 5:  goto L500;
    }


 
L100:
    lenpd = *neq * *neq;
    i__1 = lenpd;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	wm[npdm1 + i__] = 0.;
    }
    (*jac)(x, &y[1], &yprime[1], &wm[1], cj, &rpar[1], &ipar[1]);
    if (ierode_ .iero != 0) {
	return 0;
    }
    goto L230;


 
L200:
    *ires = 0;
    nrow = npdm1;
    squr = sqrt(*uround);
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	d__4 = (d__1 = y[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ), d__5 = (d__2 = *h__ * yprime[i__], 
		(( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) ), d__4 = (( d__4 ) >= ( d__5 ) ? ( d__4 ) : ( d__5 )) , d__5 = (d__3 = wt[i__], 
		(( d__3 ) >= 0 ? ( d__3 ) : -( d__3 )) );
	del = squr * (( d__4 ) >= ( d__5 ) ? ( d__4 ) : ( d__5 )) ;
	d__1 = *h__ * yprime[i__];
	del = d_sign(&del, &d__1);
	del = y[i__] + del - y[i__];
	ysave = y[i__];
	ypsave = yprime[i__];
	y[i__] += del;
	yprime[i__] += *cj * del;
	(*res)(x, &y[1], &yprime[1], &e[1], ires, &rpar[1], &ipar[1]);
	if (ierode_ .iero != 0) {
	    return 0;
	}
	if (*ires < 0) {
	    return 0;
	}
	delinv = 1. / del;
	i__2 = *neq;
	for (l = 1; l <= i__2; ++l) {
 
	    wm[nrow + l] = (e[l] - delta[l]) * delinv;
	}
	nrow += *neq;
	y[i__] = ysave;
	yprime[i__] = ypsave;
 
    }


 
L230:
    dgefa_(&wm[1], neq, neq, &iwm[21], ier);
    return 0;


 
L300:
    return 0;


 
L400:
    lenpd = ((iwm[1] << 1) + iwm[2] + 1) * *neq;
    i__1 = lenpd;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	wm[npdm1 + i__] = 0.;
    }
    (*jac)(x, &y[1], &yprime[1], &wm[1], cj, &rpar[1], &ipar[1]);
    if (ierode_ .iero != 0) {
	return 0;
    }
    meband = (iwm[1] << 1) + iwm[2] + 1;
    goto L550;


 
L500:
    mband = iwm[1] + iwm[2] + 1;
    mba = (( mband ) <= ( *neq ) ? ( mband ) : ( *neq )) ;
    meband = mband + iwm[1];
    meb1 = meband - 1;
    msave = *neq / mband + 1;
    isave = *ntemp - 1;
    ipsave = isave + msave;
    *ires = 0;
    squr = sqrt(*uround);
    i__1 = mba;
    for (j = 1; j <= i__1; ++j) {
	i__2 = *neq;
	i__3 = mband;
	for (n = j; i__3 < 0 ? n >= i__2 : n <= i__2; n += i__3) {
	    k = (n - j) / mband + 1;
	    wm[isave + k] = y[n];
	    wm[ipsave + k] = yprime[n];
 
	    d__4 = (d__1 = y[n], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ), d__5 = (d__2 = *h__ * yprime[n], 
		    (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) ), d__4 = (( d__4 ) >= ( d__5 ) ? ( d__4 ) : ( d__5 )) , d__5 = (d__3 = wt[n], 
		    (( d__3 ) >= 0 ? ( d__3 ) : -( d__3 )) );
	    del = squr * (( d__4 ) >= ( d__5 ) ? ( d__4 ) : ( d__5 )) ;
	    d__1 = *h__ * yprime[n];
	    del = d_sign(&del, &d__1);
	    del = y[n] + del - y[n];
	    y[n] += del;
 
	    yprime[n] += *cj * del;
	}
	(*res)(x, &y[1], &yprime[1], &e[1], ires, &rpar[1], &ipar[1]);
	if (ierode_ .iero != 0) {
	    return 0;
	}
	if (*ires < 0) {
	    return 0;
	}
	i__3 = *neq;
	i__2 = mband;
	for (n = j; i__2 < 0 ? n >= i__3 : n <= i__3; n += i__2) {
	    k = (n - j) / mband + 1;
	    y[n] = wm[isave + k];
	    yprime[n] = wm[ipsave + k];
 
	    d__4 = (d__1 = y[n], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ), d__5 = (d__2 = *h__ * yprime[n], 
		    (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) ), d__4 = (( d__4 ) >= ( d__5 ) ? ( d__4 ) : ( d__5 )) , d__5 = (d__3 = wt[n], 
		    (( d__3 ) >= 0 ? ( d__3 ) : -( d__3 )) );
	    del = squr * (( d__4 ) >= ( d__5 ) ? ( d__4 ) : ( d__5 )) ;
	    d__1 = *h__ * yprime[n];
	    del = d_sign(&del, &d__1);
	    del = y[n] + del - y[n];
	    delinv = 1. / del;
 
	    i__4 = 1, i__5 = n - iwm[2];
	    i1 = (( i__4 ) >= ( i__5 ) ? ( i__4 ) : ( i__5 )) ;
 
	    i__4 = *neq, i__5 = n + iwm[1];
	    i2 = (( i__4 ) <= ( i__5 ) ? ( i__4 ) : ( i__5 )) ;
	    ii = n * meb1 - iwm[1] + npdm1;
	    i__4 = i2;
	    for (i__ = i1; i__ <= i__4; ++i__) {
 
		wm[ii + i__] = (e[i__] - delta[i__]) * delinv;
	    }
 
	}
 
    }


 
L550:
    dgbfa_(&wm[1], &meband, neq, &iwm[1], &iwm[2], &iwm[21], ier);
    return 0;
 
}  

doublereal ddanrm_(neq, v, wt, rpar, ipar)
integer *neq;
doublereal *v, *wt, *rpar;
integer *ipar;
{
     
    integer i__1;
    doublereal ret_val, d__1, d__2;

     
    double sqrt();

     
    static doublereal vmax;
    static integer i__;
    static doublereal sum;
    --wt;
    --v;
    --rpar;
    --ipar;

     
    ret_val = 0.;
    vmax = 0.;
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if ((d__1 = v[i__] / wt[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > vmax) {
	    vmax = (d__2 = v[i__] / wt[i__], (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) );
	}
 
    }
    if (vmax <= 0.) {
	goto L30;
    }
    sum = 0.;
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
 
	d__1 = v[i__] / wt[i__] / vmax;
	sum += d__1 * d__1;
    }
    ret_val = vmax * sqrt(sum / *neq);
L30:
    return ret_val;
 
}  

  int ddaslv_(neq, delta, wm, iwm)
integer *neq;
doublereal *delta, *wm;
integer *iwm;
{
    extern   int dgbsl_(), dgesl_();
    static integer mtype, meband;
    --iwm;
    --wm;
    --delta;

     
    mtype = iwm[4];
    switch ((int)mtype) {
	case 1:  goto L100;
	case 2:  goto L100;
	case 3:  goto L300;
	case 4:  goto L400;
	case 5:  goto L400;
    }

 
L100:
    dgesl_(&wm[1], neq, neq, &iwm[21], &delta[1], &c__0);
    return 0;

 
L300:
    return 0;

 
L400:
    meband = (iwm[1] << 1) + iwm[2] + 1;
    dgbsl_(&wm[1], &meband, neq, &iwm[1], &iwm[2], &iwm[21], &delta[1], &c__0)
	    ;
    return 0;
 
}  

  int ddassl_(res, neq, t, y, yprime, tout, info, rtol, atol, 
	idid, rwork, lrw, iwork, liw, rpar, ipar, jac)
  int (*res) ();
integer *neq;
doublereal *t, *y, *yprime, *tout;
integer *info;
doublereal *rtol, *atol;
integer *idid;
doublereal *rwork;
integer *lrw, *iwork, *liw;
doublereal *rpar;
integer *ipar;
  int (*jac) ();
{
     
    address a__1[4], a__2[5], a__3[6], a__4[3], a__5[2];
    integer i__1, i__2[4], i__3[5], i__4[6], i__5[3], i__6[2];
    doublereal d__1, d__2;
    char ch__1[118], ch__2[81], ch__3[128], ch__4[62], ch__5[110], ch__6[121],
	     ch__7[90], ch__8[132], ch__9[126], ch__10[85], ch__11[98], 
	    ch__12[21], ch__13[30], ch__14[61], ch__15[71], ch__16[32], 
	    ch__17[51], ch__18[78], ch__19[66], ch__20[49], ch__21[27];

     
    integer s_wsfi(), do_fio(), e_wsfi();
      int s_cat();
    double d_sign();

     
    static logical done;
    static integer lphi;
    static doublereal hmax, hmin;
    static char xern1[8], xern2[8], xern3[16], xern4[16];
    static doublereal h__;
    static integer i__, mband;
    static doublereal r__;
    static integer lenpd;
    static doublereal atoli;
    static integer msave, itemp, leniw, nzflg, ntemp, lenrw;
    static doublereal tdist;
    static integer mxord;
    static doublereal rtoli, tnext, tstop;
    static integer le;
    extern doublereal dlamch_();
    extern   int ddaini_();
    static doublereal ho, rh, tn;
    extern doublereal ddanrm_();
    extern   int ddatrp_(), ddastp_(), ddawts_(), xermsg_();
    static doublereal uround, ypnorm;
    static integer lpd, lwm, lwt;

     
    static icilist io___1060 = { 0, xern1, 0, "(I8)", 8, 1 };
    static icilist io___1084 = { 0, xern3, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1085 = { 0, xern3, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1086 = { 0, xern3, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1087 = { 0, xern3, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1089 = { 0, xern4, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1090 = { 0, xern3, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1091 = { 0, xern4, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1092 = { 0, xern3, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1093 = { 0, xern4, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1094 = { 0, xern3, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1095 = { 0, xern4, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1096 = { 0, xern3, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1097 = { 0, xern4, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1098 = { 0, xern3, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1099 = { 0, xern4, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1100 = { 0, xern3, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1101 = { 0, xern4, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1102 = { 0, xern1, 0, "(I8)", 8, 1 };
    static icilist io___1103 = { 0, xern1, 0, "(I8)", 8, 1 };
    static icilist io___1104 = { 0, xern1, 0, "(I8)", 8, 1 };
    static icilist io___1106 = { 0, xern2, 0, "(I8)", 8, 1 };
    static icilist io___1107 = { 0, xern1, 0, "(I8)", 8, 1 };
    static icilist io___1108 = { 0, xern2, 0, "(I8)", 8, 1 };
    static icilist io___1109 = { 0, xern3, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1110 = { 0, xern4, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1111 = { 0, xern3, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1112 = { 0, xern3, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1113 = { 0, xern4, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1114 = { 0, xern3, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1115 = { 0, xern4, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1116 = { 0, xern3, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1117 = { 0, xern4, 0, "(1P,D15.6)", 16, 1 };
    static icilist io___1118 = { 0, xern1, 0, "(I8)", 8, 1 };
    static icilist io___1119 = { 0, xern1, 0, "(I8)", 8, 1 };
    static icilist io___1120 = { 0, xern3, 0, "(1P,D15.6)", 16, 1 };
    --ipar;
    --rpar;
    --iwork;
    --rwork;
    --atol;
    --rtol;
    --info;
    --yprime;
    --y;

     
    if (info[1] != 0) {
	goto L100;
    }
    for (i__ = 2; i__ <= 11; ++i__) {
	if (info[i__] != 0 && info[i__] != 1) {
	    goto L701;
	}
 
    }

    if (*neq <= 0) {
	goto L702;
    }

 
    mxord = 5;
    if (info[9] == 0) {
	goto L20;
    }
    mxord = iwork[3];
    if (mxord < 1 || mxord > 5) {
	goto L703;
    }
L20:
    iwork[3] = mxord;

 
    if (info[6] != 0) {
	goto L40;
    }
 
    i__1 = *neq;
    lenpd = i__1 * i__1;
    lenrw = (iwork[3] + 4) * *neq + 40 + lenpd;
    if (info[5] != 0) {
	goto L30;
    }
    iwork[4] = 2;
    goto L60;
L30:
    iwork[4] = 1;
    goto L60;
L40:
    if (iwork[1] < 0 || iwork[1] >= *neq) {
	goto L717;
    }
    if (iwork[2] < 0 || iwork[2] >= *neq) {
	goto L718;
    }
    lenpd = ((iwork[1] << 1) + iwork[2] + 1) * *neq;
    if (info[5] != 0) {
	goto L50;
    }
    iwork[4] = 5;
    mband = iwork[1] + iwork[2] + 1;
    msave = *neq / mband + 1;
    lenrw = (iwork[3] + 4) * *neq + 40 + lenpd + (msave << 1);
    goto L60;
L50:
    iwork[4] = 4;
    lenrw = (iwork[3] + 4) * *neq + 40 + lenpd;

 
L60:
    leniw = *neq + 20;
    iwork[16] = lenpd;
    if (*lrw < lenrw) {
	goto L704;
    }
    if (*liw < leniw) {
	goto L705;
    }

 
    if (*tout == *t) {
	goto L719;
    }

 
    if (info[7] == 0) {
	goto L70;
    }
    hmax = rwork[2];
    if (hmax <= 0.) {
	goto L710;
    }
L70:

 
    iwork[11] = 0;
    iwork[12] = 0;
    iwork[13] = 0;

    iwork[10] = 0;
    *idid = 1;
    goto L200;

 

 
 
 
 
 


L100:
    if (info[1] == 1) {
	goto L110;
    }
    if (info[1] != -1) {
	goto L701;
    }

 
 
 
 
    s_wsfi(&io___1060);
    do_fio(&c__1, (char *)&(*idid), (ftnlen)sizeof(integer));
    e_wsfi();
 
    i__2[0] = 57, a__1[0] = "THE LAST STEP TERMINATED WITH A NEGATIVE VALUE OF IDID = ";
    i__2[1] = 8, a__1[1] = xern1;
    i__2[2] = 39, a__1[2] = " AND NO APPROPRIATE ACTION WAS TAKEN.  ";
    i__2[3] = 14, a__1[3] = "RUN TERMINATED";
    s_cat(ch__1, a__1, i__2, &c__4, 118L);
    xermsg_("SLATEC", "DDASSL", ch__1, &c_n998, &c__2, 6L, 6L, 118L);
    return 0;
L110:
    iwork[10] = iwork[11];

 

 
 
 
 
 


L200:
 
    nzflg = 0;
    rtoli = rtol[1];
    atoli = atol[1];
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (info[2] == 1) {
	    rtoli = rtol[i__];
	}
	if (info[2] == 1) {
	    atoli = atol[i__];
	}
	if (rtoli > 0. || atoli > 0.) {
	    nzflg = 1;
	}
	if (rtoli < 0.) {
	    goto L706;
	}
	if (atoli < 0.) {
	    goto L707;
	}
 
    }
    if (nzflg == 0) {
	goto L708;
    }

 
 
    le = *neq + 41;
    lwt = le + *neq;
    lphi = lwt + *neq;
    lpd = lphi + (iwork[3] + 1) * *neq;
    lwm = lpd;
    ntemp = iwork[16] + 1;
    if (info[1] == 1) {
	goto L400;
    }

 

 
 
 
 
 


    tn = *t;
    *idid = 1;

 
    ddawts_(neq, &info[2], &rtol[1], &atol[1], &y[1], &rwork[lwt], &rpar[1], &
	    ipar[1]);
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (rwork[lwt + i__ - 1] <= 0.) {
	    goto L713;
	}
 
    }

 
    uround = dlamch_("P", 1L);
    rwork[9] = uround;
 
    d__1 = (( *t ) >= 0 ? ( *t ) : -( *t )) , d__2 = (( *tout ) >= 0 ? ( *tout ) : -( *tout )) ;
    hmin = uround * 4. * (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;

 
    tdist = (d__1 = *tout - *t, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
    if (tdist < hmin) {
	goto L714;
    }

 
    if (info[8] == 0) {
	goto L310;
    }
    ho = rwork[3];
    if ((*tout - *t) * ho < 0.) {
	goto L711;
    }
    if (ho == 0.) {
	goto L712;
    }
    goto L320;
L310:

 
 
    ho = tdist * .001;
    ypnorm = ddanrm_(neq, &yprime[1], &rwork[lwt], &rpar[1], &ipar[1]);
    if (ypnorm > .5 / ho) {
	ho = .5 / ypnorm;
    }
    d__1 = *tout - *t;
    ho = d_sign(&ho, &d__1);
 
L320:
    if (info[7] == 0) {
	goto L330;
    }
    rh = (( ho ) >= 0 ? ( ho ) : -( ho ))  / rwork[2];
    if (rh > 1.) {
	ho /= rh;
    }
 
L330:
    if (info[4] == 0) {
	goto L340;
    }
    tstop = rwork[1];
    if ((tstop - *t) * ho < 0.) {
	goto L715;
    }
    if ((*t + ho - tstop) * ho > 0.) {
	ho = tstop - *t;
    }
    if ((tstop - *tout) * ho < 0.) {
	goto L709;
    }

 
L340:
    if (info[11] == 0) {
	goto L350;
    }
    ddaini_(&tn, &y[1], &yprime[1], neq, res, jac, &ho, &rwork[lwt], idid, &
	    rpar[1], &ipar[1], &rwork[lphi], &rwork[41], &rwork[le], &rwork[
	    lwm], &iwork[1], &hmin, &rwork[9], &info[10], &ntemp);
    if (ierode_ .iero != 0) {
	return 0;
    }
    if (*idid < 0) {
	goto L390;
    }

 
L350:
    h__ = ho;
    rwork[3] = h__;

 
    itemp = lphi + *neq;
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
	rwork[lphi + i__ - 1] = y[i__];
 
	rwork[itemp + i__ - 1] = h__ * yprime[i__];
    }

L390:
    goto L500;

 
 
 
 
 
 

L400:
    uround = rwork[9];
    done = (0) ;
    tn = rwork[4];
    h__ = rwork[3];
    if (info[7] == 0) {
	goto L410;
    }
    rh = (( h__ ) >= 0 ? ( h__ ) : -( h__ ))  / rwork[2];
    if (rh > 1.) {
	h__ /= rh;
    }
L410:
    if (*t == *tout) {
	goto L719;
    }
    if ((*t - *tout) * h__ > 0.) {
	goto L711;
    }
    if (info[4] == 1) {
	goto L430;
    }
    if (info[3] == 1) {
	goto L420;
    }
    if ((tn - *tout) * h__ < 0.) {
	goto L490;
    }
    ddatrp_(&tn, tout, &y[1], &yprime[1], neq, &iwork[8], &rwork[lphi], &
	    rwork[29]);
    *t = *tout;
    *idid = 3;
    done = (1) ;
    goto L490;
L420:
    if ((tn - *t) * h__ <= 0.) {
	goto L490;
    }
    if ((tn - *tout) * h__ > 0.) {
	goto L425;
    }
    ddatrp_(&tn, &tn, &y[1], &yprime[1], neq, &iwork[8], &rwork[lphi], &rwork[
	    29]);
    *t = tn;
    *idid = 1;
    done = (1) ;
    goto L490;
L425:
    ddatrp_(&tn, tout, &y[1], &yprime[1], neq, &iwork[8], &rwork[lphi], &
	    rwork[29]);
    *t = *tout;
    *idid = 3;
    done = (1) ;
    goto L490;
L430:
    if (info[3] == 1) {
	goto L440;
    }
    tstop = rwork[1];
    if ((tn - tstop) * h__ > 0.) {
	goto L715;
    }
    if ((tstop - *tout) * h__ < 0.) {
	goto L709;
    }
    if ((tn - *tout) * h__ < 0.) {
	goto L450;
    }
    ddatrp_(&tn, tout, &y[1], &yprime[1], neq, &iwork[8], &rwork[lphi], &
	    rwork[29]);
    *t = *tout;
    *idid = 3;
    done = (1) ;
    goto L490;
L440:
    tstop = rwork[1];
    if ((tn - tstop) * h__ > 0.) {
	goto L715;
    }
    if ((tstop - *tout) * h__ < 0.) {
	goto L709;
    }
    if ((tn - *t) * h__ <= 0.) {
	goto L450;
    }
    if ((tn - *tout) * h__ > 0.) {
	goto L445;
    }
    ddatrp_(&tn, &tn, &y[1], &yprime[1], neq, &iwork[8], &rwork[lphi], &rwork[
	    29]);
    *t = tn;
    *idid = 1;
    done = (1) ;
    goto L490;
L445:
    ddatrp_(&tn, tout, &y[1], &yprime[1], neq, &iwork[8], &rwork[lphi], &
	    rwork[29]);
    *t = *tout;
    *idid = 3;
    done = (1) ;
    goto L490;
L450:
 
    if ((d__1 = tn - tstop, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > uround * 100. * ((( tn ) >= 0 ? ( tn ) : -( tn ))  + (( h__ ) >= 0 ? ( h__ ) : -( h__ )) ))
	     {
	goto L460;
    }
    ddatrp_(&tn, &tstop, &y[1], &yprime[1], neq, &iwork[8], &rwork[lphi], &
	    rwork[29]);
    *idid = 2;
    *t = tstop;
    done = (1) ;
    goto L490;
L460:
    tnext = tn + h__;
    if ((tnext - tstop) * h__ <= 0.) {
	goto L490;
    }
    h__ = tstop - tn;
    rwork[3] = h__;

L490:
    if (done) {
	goto L580;
    }

 
 
 
 
 
 
 
 
 

L500:
 
    if (*idid == -12) {
	goto L527;
    }

 
    if (iwork[11] - iwork[10] < 500) {
	goto L510;
    }
    *idid = -1;
    goto L527;

 
L510:
    ddawts_(neq, &info[2], &rtol[1], &atol[1], &rwork[lphi], &rwork[lwt], &
	    rpar[1], &ipar[1]);
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (rwork[i__ + lwt - 1] > 0.) {
	    goto L520;
	}
	*idid = -3;
	goto L527;
L520:
	;
    }

 
    r__ = ddanrm_(neq, &rwork[lphi], &rwork[lwt], &rpar[1], &ipar[1]) * 100. *
	     uround;
    if (r__ <= 1.) {
	goto L525;
    }
 
    if (info[2] == 1) {
	goto L523;
    }
    rtol[1] = r__ * rtol[1];
    atol[1] = r__ * atol[1];
    *idid = -2;
    goto L527;
L523:
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
	rtol[i__] = r__ * rtol[i__];
 
	atol[i__] = r__ * atol[i__];
    }
    *idid = -2;
    goto L527;
L525:

 
 
    d__1 = (( tn ) >= 0 ? ( tn ) : -( tn )) , d__2 = (( *tout ) >= 0 ? ( *tout ) : -( *tout )) ;
    hmin = uround * 4. * (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;

 
    if (info[7] == 0) {
	goto L526;
    }
    rh = (( h__ ) >= 0 ? ( h__ ) : -( h__ ))  / rwork[2];
    if (rh > 1.) {
	h__ /= rh;
    }
L526:

    ddastp_(&tn, &y[1], &yprime[1], neq, res, jac, &h__, &rwork[lwt], &info[1]
	    , idid, &rpar[1], &ipar[1], &rwork[lphi], &rwork[41], &rwork[le], 
	    &rwork[lwm], &iwork[1], &rwork[11], &rwork[17], &rwork[23], &
	    rwork[29], &rwork[35], &rwork[5], &rwork[6], &rwork[7], &rwork[8],
	     &hmin, &rwork[9], &iwork[6], &iwork[5], &iwork[7], &iwork[8], &
	    iwork[9], &info[10], &ntemp);
    if (ierode_ .iero != 0) {
	return 0;
    }
L527:
    if (*idid < 0) {
	goto L600;
    }

 
 
 
 

    if (info[4] != 0) {
	goto L540;
    }
    if (info[3] != 0) {
	goto L530;
    }
    if ((tn - *tout) * h__ < 0.) {
	goto L500;
    }
    ddatrp_(&tn, tout, &y[1], &yprime[1], neq, &iwork[8], &rwork[lphi], &
	    rwork[29]);
    *idid = 3;
    *t = *tout;
    goto L580;
L530:
    if ((tn - *tout) * h__ >= 0.) {
	goto L535;
    }
    *t = tn;
    *idid = 1;
    goto L580;
L535:
    ddatrp_(&tn, tout, &y[1], &yprime[1], neq, &iwork[8], &rwork[lphi], &
	    rwork[29]);
    *idid = 3;
    *t = *tout;
    goto L580;
L540:
    if (info[3] != 0) {
	goto L550;
    }
    if ((tn - *tout) * h__ < 0.) {
	goto L542;
    }
    ddatrp_(&tn, tout, &y[1], &yprime[1], neq, &iwork[8], &rwork[lphi], &
	    rwork[29]);
    *t = *tout;
    *idid = 3;
    goto L580;
L542:
    if ((d__1 = tn - tstop, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= uround * 100. * ((( tn ) >= 0 ? ( tn ) : -( tn ))  + (( h__ ) >= 0 ? ( h__ ) : -( h__ )) )
	    ) {
	goto L545;
    }
    tnext = tn + h__;
    if ((tnext - tstop) * h__ <= 0.) {
	goto L500;
    }
    h__ = tstop - tn;
    goto L500;
L545:
    ddatrp_(&tn, &tstop, &y[1], &yprime[1], neq, &iwork[8], &rwork[lphi], &
	    rwork[29]);
    *idid = 2;
    *t = tstop;
    goto L580;
L550:
    if ((tn - *tout) * h__ >= 0.) {
	goto L555;
    }
    if ((d__1 = tn - tstop, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= uround * 100. * ((( tn ) >= 0 ? ( tn ) : -( tn ))  + (( h__ ) >= 0 ? ( h__ ) : -( h__ )) )
	    ) {
	goto L552;
    }
    *t = tn;
    *idid = 1;
    goto L580;
L552:
    ddatrp_(&tn, &tstop, &y[1], &yprime[1], neq, &iwork[8], &rwork[lphi], &
	    rwork[29]);
    *idid = 2;
    *t = tstop;
    goto L580;
L555:
    ddatrp_(&tn, tout, &y[1], &yprime[1], neq, &iwork[8], &rwork[lphi], &
	    rwork[29]);
    *t = *tout;
    *idid = 3;
    goto L580;

 
 
 
 

L580:
    rwork[4] = tn;
    rwork[3] = h__;
    return 0;

 

 
 
 


L600:
    itemp = -(*idid);
    switch ((int)itemp) {
	case 1:  goto L610;
	case 2:  goto L620;
	case 3:  goto L630;
	case 4:  goto L690;
	case 5:  goto L690;
	case 6:  goto L640;
	case 7:  goto L650;
	case 8:  goto L660;
	case 9:  goto L670;
	case 10:  goto L675;
	case 11:  goto L680;
	case 12:  goto L685;
    }

 
 
L610:
    s_wsfi(&io___1084);
    do_fio(&c__1, (char *)&tn, (ftnlen)sizeof(doublereal));
    e_wsfi();
 
    i__2[0] = 15, a__1[0] = "AT CURRENT T = ";
    i__2[1] = 16, a__1[1] = xern3;
    i__2[2] = 25, a__1[2] = " 500 STEPS TAKEN ON THIS ";
    i__2[3] = 25, a__1[3] = "CALL BEFORE REACHING TOUT";
    s_cat(ch__2, a__1, i__2, &c__4, 81L);
    xermsg_("SLATEC", "DDASSL", ch__2, idid, &c__1, 6L, 6L, 81L);
    goto L690;

 
L620:
    s_wsfi(&io___1085);
    do_fio(&c__1, (char *)&tn, (ftnlen)sizeof(doublereal));
    e_wsfi();
 
    i__3[0] = 7, a__2[0] = "AT T = ";
    i__3[1] = 16, a__2[1] = xern3;
    i__3[2] = 33, a__2[2] = " TOO MUCH ACCURACY REQUESTED FOR ";
    i__3[3] = 54, a__2[3] = "PRECISION OF MACHINE. RTOL AND ATOL WERE INCREASED TO ";
    i__3[4] = 18, a__2[4] = "APPROPRIATE VALUES";
    s_cat(ch__3, a__2, i__3, &c__5, 128L);
    xermsg_("SLATEC", "DDASSL", ch__3, idid, &c__1, 6L, 6L, 128L);
    goto L690;

 
L630:
    s_wsfi(&io___1086);
    do_fio(&c__1, (char *)&tn, (ftnlen)sizeof(doublereal));
    e_wsfi();
 
    i__2[0] = 7, a__1[0] = "AT T = ";
    i__2[1] = 16, a__1[1] = xern3;
    i__2[2] = 36, a__1[2] = " SOME ELEMENT OF WT HAS BECOME .LE. ";
    i__2[3] = 3, a__1[3] = "0.0";
    s_cat(ch__4, a__1, i__2, &c__4, 62L);
    xermsg_("SLATEC", "DDASSL", ch__4, idid, &c__1, 6L, 6L, 62L);
    goto L690;

 
L640:
    s_wsfi(&io___1087);
    do_fio(&c__1, (char *)&tn, (ftnlen)sizeof(doublereal));
    e_wsfi();
    s_wsfi(&io___1089);
    do_fio(&c__1, (char *)&h__, (ftnlen)sizeof(doublereal));
    e_wsfi();
 
    i__3[0] = 7, a__2[0] = "AT T = ";
    i__3[1] = 16, a__2[1] = xern3;
    i__3[2] = 18, a__2[2] = " AND STEPSIZE H = ";
    i__3[3] = 16, a__2[3] = xern4;
    i__3[4] = 53, a__2[4] = " THE ERROR TEST FAILED REPEATEDLY OR WITH ABS(H)=HMIN";
    s_cat(ch__5, a__2, i__3, &c__5, 110L);
    xermsg_("SLATEC", "DDASSL", ch__5, idid, &c__1, 6L, 6L, 110L);
    goto L690;

 
L650:
    s_wsfi(&io___1090);
    do_fio(&c__1, (char *)&tn, (ftnlen)sizeof(doublereal));
    e_wsfi();
    s_wsfi(&io___1091);
    do_fio(&c__1, (char *)&h__, (ftnlen)sizeof(doublereal));
    e_wsfi();
 
    i__4[0] = 7, a__3[0] = "AT T = ";
    i__4[1] = 16, a__3[1] = xern3;
    i__4[2] = 18, a__3[2] = " AND STEPSIZE H = ";
    i__4[3] = 16, a__3[3] = xern4;
    i__4[4] = 53, a__3[4] = " THE CORRECTOR FAILED TO CONVERGE REPEATEDLY OR WITH ";
    i__4[5] = 11, a__3[5] = "ABS(H)=HMIN";
    s_cat(ch__6, a__3, i__4, &c__6, 121L);
    xermsg_("SLATEC", "DDASSL", ch__6, idid, &c__1, 6L, 6L, 121L);
    goto L690;

 
L660:
    s_wsfi(&io___1092);
    do_fio(&c__1, (char *)&tn, (ftnlen)sizeof(doublereal));
    e_wsfi();
    s_wsfi(&io___1093);
    do_fio(&c__1, (char *)&h__, (ftnlen)sizeof(doublereal));
    e_wsfi();
 
    i__3[0] = 7, a__2[0] = "AT T = ";
    i__3[1] = 16, a__2[1] = xern3;
    i__3[2] = 18, a__2[2] = " AND STEPSIZE H = ";
    i__3[3] = 16, a__2[3] = xern4;
    i__3[4] = 33, a__2[4] = " THE ITERATION MATRIX IS SINGULAR";
    s_cat(ch__7, a__2, i__3, &c__5, 90L);
    xermsg_("SLATEC", "DDASSL", ch__7, idid, &c__1, 6L, 6L, 90L);
    goto L690;

 
L670:
    s_wsfi(&io___1094);
    do_fio(&c__1, (char *)&tn, (ftnlen)sizeof(doublereal));
    e_wsfi();
    s_wsfi(&io___1095);
    do_fio(&c__1, (char *)&h__, (ftnlen)sizeof(doublereal));
    e_wsfi();
 
    i__4[0] = 7, a__3[0] = "AT T = ";
    i__4[1] = 16, a__3[1] = xern3;
    i__4[2] = 18, a__3[2] = " AND STEPSIZE H = ";
    i__4[3] = 16, a__3[3] = xern4;
    i__4[4] = 57, a__3[4] = " THE CORRECTOR COULD NOT CONVERGE.  ALSO, THE ERROR TEST ";
    i__4[5] = 18, a__3[5] = "FAILED REPEATEDLY.";
    s_cat(ch__8, a__3, i__4, &c__6, 132L);
    xermsg_("SLATEC", "DDASSL", ch__8, idid, &c__1, 6L, 6L, 132L);
    goto L690;

 
L675:
    s_wsfi(&io___1096);
    do_fio(&c__1, (char *)&tn, (ftnlen)sizeof(doublereal));
    e_wsfi();
    s_wsfi(&io___1097);
    do_fio(&c__1, (char *)&h__, (ftnlen)sizeof(doublereal));
    e_wsfi();
 
    i__4[0] = 7, a__3[0] = "AT T = ";
    i__4[1] = 16, a__3[1] = xern3;
    i__4[2] = 18, a__3[2] = " AND STEPSIZE H = ";
    i__4[3] = 16, a__3[3] = xern4;
    i__4[4] = 57, a__3[4] = " THE CORRECTOR COULD NOT CONVERGE BECAUSE IRES WAS EQUAL ";
    i__4[5] = 12, a__3[5] = "TO MINUS ONE";
    s_cat(ch__9, a__3, i__4, &c__6, 126L);
    xermsg_("SLATEC", "DDASSL", ch__9, idid, &c__1, 6L, 6L, 126L);
    goto L690;

 
L680:
    s_wsfi(&io___1098);
    do_fio(&c__1, (char *)&tn, (ftnlen)sizeof(doublereal));
    e_wsfi();
    s_wsfi(&io___1099);
    do_fio(&c__1, (char *)&h__, (ftnlen)sizeof(doublereal));
    e_wsfi();
 
    i__3[0] = 7, a__2[0] = "AT T = ";
    i__3[1] = 16, a__2[1] = xern3;
    i__3[2] = 18, a__2[2] = " AND STEPSIZE H = ";
    i__3[3] = 16, a__2[3] = xern4;
    i__3[4] = 28, a__2[4] = " IRES WAS EQUAL TO MINUS TWO";
    s_cat(ch__10, a__2, i__3, &c__5, 85L);
    xermsg_("SLATEC", "DDASSL", ch__10, idid, &c__1, 6L, 6L, 85L);
    goto L690;

 
L685:
    s_wsfi(&io___1100);
    do_fio(&c__1, (char *)&tn, (ftnlen)sizeof(doublereal));
    e_wsfi();
    s_wsfi(&io___1101);
    do_fio(&c__1, (char *)&ho, (ftnlen)sizeof(doublereal));
    e_wsfi();
 
    i__3[0] = 7, a__2[0] = "AT T = ";
    i__3[1] = 16, a__2[1] = xern3;
    i__3[2] = 18, a__2[2] = " AND STEPSIZE H = ";
    i__3[3] = 16, a__2[3] = xern4;
    i__3[4] = 41, a__2[4] = " THE INITIAL YPRIME COULD NOT BE COMPUTED";
    s_cat(ch__11, a__2, i__3, &c__5, 98L);
    xermsg_("SLATEC", "DDASSL", ch__11, idid, &c__1, 6L, 6L, 98L);
    goto L690;

L690:
    info[1] = -1;
    *t = tn;
    rwork[4] = tn;
    rwork[3] = h__;
    return 0;

 

 
 
 
 
 

 

L701:
    xermsg_("SLATEC", "DDASSL", "SOME ELEMENT OF INFO VECTOR IS NOT ZERO OR ONE", &c__1, &c__1, 6L, 6L, 46L);
    goto L750;

L702:
    s_wsfi(&io___1102);
    do_fio(&c__1, (char *)&(*neq), (ftnlen)sizeof(integer));
    e_wsfi();
 
    i__5[0] = 6, a__4[0] = "NEQ = ";
    i__5[1] = 8, a__4[1] = xern1;
    i__5[2] = 7, a__4[2] = " .LE. 0";
    s_cat(ch__12, a__4, i__5, &c__3, 21L);
    xermsg_("SLATEC", "DDASSL", ch__12, &c__2, &c__1, 6L, 6L, 21L);
    goto L750;

L703:
    s_wsfi(&io___1103);
    do_fio(&c__1, (char *)&mxord, (ftnlen)sizeof(integer));
    e_wsfi();
 
    i__5[0] = 9, a__4[0] = "MAXORD = ";
    i__5[1] = 8, a__4[1] = xern1;
    i__5[2] = 13, a__4[2] = " NOT IN RANGE";
    s_cat(ch__13, a__4, i__5, &c__3, 30L);
    xermsg_("SLATEC", "DDASSL", ch__13, &c__3, &c__1, 6L, 6L, 30L);
    goto L750;

L704:
    s_wsfi(&io___1104);
    do_fio(&c__1, (char *)&lenrw, (ftnlen)sizeof(integer));
    e_wsfi();
    s_wsfi(&io___1106);
    do_fio(&c__1, (char *)&(*lrw), (ftnlen)sizeof(integer));
    e_wsfi();
 
    i__2[0] = 29, a__1[0] = "RWORK LENGTH NEEDED, LENRW = ";
    i__2[1] = 8, a__1[1] = xern1;
    i__2[2] = 16, a__1[2] = ", EXCEEDS LRW = ";
    i__2[3] = 8, a__1[3] = xern2;
    s_cat(ch__14, a__1, i__2, &c__4, 61L);
    xermsg_("SLATEC", "DDASSL", ch__14, &c__4, &c__1, 6L, 6L, 61L);
    goto L750;

L705:
    s_wsfi(&io___1107);
    do_fio(&c__1, (char *)&leniw, (ftnlen)sizeof(integer));
    e_wsfi();
    s_wsfi(&io___1108);
    do_fio(&c__1, (char *)&(*liw), (ftnlen)sizeof(integer));
    e_wsfi();
 
    i__2[0] = 29, a__1[0] = "IWORK LENGTH NEEDED, LENIW = ";
    i__2[1] = 8, a__1[1] = xern1;
    i__2[2] = 16, a__1[2] = ", EXCEEDS LIW = ";
    i__2[3] = 8, a__1[3] = xern2;
    s_cat(ch__14, a__1, i__2, &c__4, 61L);
    xermsg_("SLATEC", "DDASSL", ch__14, &c__5, &c__1, 6L, 6L, 61L);
    goto L750;

L706:
    xermsg_("SLATEC", "DDASSL", "SOME ELEMENT OF RTOL IS .LT. 0", &c__6, &
	    c__1, 6L, 6L, 30L);
    goto L750;

L707:
    xermsg_("SLATEC", "DDASSL", "SOME ELEMENT OF ATOL IS .LT. 0", &c__7, &
	    c__1, 6L, 6L, 30L);
    goto L750;

L708:
    xermsg_("SLATEC", "DDASSL", "ALL ELEMENTS OF RTOL AND ATOL ARE ZERO", &
	    c__8, &c__1, 6L, 6L, 38L);
    goto L750;

L709:
    s_wsfi(&io___1109);
    do_fio(&c__1, (char *)&tstop, (ftnlen)sizeof(doublereal));
    e_wsfi();
    s_wsfi(&io___1110);
    do_fio(&c__1, (char *)&(*tout), (ftnlen)sizeof(doublereal));
    e_wsfi();
 
    i__2[0] = 24, a__1[0] = "INFO(4) = 1 AND TSTOP = ";
    i__2[1] = 16, a__1[1] = xern3;
    i__2[2] = 15, a__1[2] = " BEHIND TOUT = ";
    i__2[3] = 16, a__1[3] = xern4;
    s_cat(ch__15, a__1, i__2, &c__4, 71L);
    xermsg_("SLATEC", "DDASSL", ch__15, &c__9, &c__1, 6L, 6L, 71L);
    goto L750;

L710:
    s_wsfi(&io___1111);
    do_fio(&c__1, (char *)&hmax, (ftnlen)sizeof(doublereal));
    e_wsfi();
 
    i__5[0] = 7, a__4[0] = "HMAX = ";
    i__5[1] = 16, a__4[1] = xern3;
    i__5[2] = 9, a__4[2] = " .LT. 0.0";
    s_cat(ch__16, a__4, i__5, &c__3, 32L);
    xermsg_("SLATEC", "DDASSL", ch__16, &c__10, &c__1, 6L, 6L, 32L);
    goto L750;

L711:
    s_wsfi(&io___1112);
    do_fio(&c__1, (char *)&(*tout), (ftnlen)sizeof(doublereal));
    e_wsfi();
    s_wsfi(&io___1113);
    do_fio(&c__1, (char *)&(*t), (ftnlen)sizeof(doublereal));
    e_wsfi();
 
    i__2[0] = 7, a__1[0] = "TOUT = ";
    i__2[1] = 16, a__1[1] = xern3;
    i__2[2] = 12, a__1[2] = " BEHIND T = ";
    i__2[3] = 16, a__1[3] = xern4;
    s_cat(ch__17, a__1, i__2, &c__4, 51L);
    xermsg_("SLATEC", "DDASSL", ch__17, &c__11, &c__1, 6L, 6L, 51L);
    goto L750;

L712:
    xermsg_("SLATEC", "DDASSL", "INFO(8)=1 AND H0=0.0", &c__12, &c__1, 6L, 6L,
	     20L);
    goto L750;

L713:
    xermsg_("SLATEC", "DDASSL", "SOME ELEMENT OF WT IS .LE. 0.0", &c__13, &
	    c__1, 6L, 6L, 30L);
    goto L750;

L714:
    s_wsfi(&io___1114);
    do_fio(&c__1, (char *)&(*tout), (ftnlen)sizeof(doublereal));
    e_wsfi();
    s_wsfi(&io___1115);
    do_fio(&c__1, (char *)&(*t), (ftnlen)sizeof(doublereal));
    e_wsfi();
 
    i__3[0] = 7, a__2[0] = "TOUT = ";
    i__3[1] = 16, a__2[1] = xern3;
    i__3[2] = 18, a__2[2] = " TOO CLOSE TO T = ";
    i__3[3] = 16, a__2[3] = xern4;
    i__3[4] = 21, a__2[4] = " TO START INTEGRATION";
    s_cat(ch__18, a__2, i__3, &c__5, 78L);
    xermsg_("SLATEC", "DDASSL", ch__18, &c__14, &c__1, 6L, 6L, 78L);
    goto L750;

L715:
    s_wsfi(&io___1116);
    do_fio(&c__1, (char *)&tstop, (ftnlen)sizeof(doublereal));
    e_wsfi();
    s_wsfi(&io___1117);
    do_fio(&c__1, (char *)&(*t), (ftnlen)sizeof(doublereal));
    e_wsfi();
 
    i__2[0] = 22, a__1[0] = "INFO(4)=1 AND TSTOP = ";
    i__2[1] = 16, a__1[1] = xern3;
    i__2[2] = 12, a__1[2] = " BEHIND T = ";
    i__2[3] = 16, a__1[3] = xern4;
    s_cat(ch__19, a__1, i__2, &c__4, 66L);
    xermsg_("SLATEC", "DDASSL", ch__19, &c__15, &c__1, 6L, 6L, 66L);
    goto L750;

L717:
    s_wsfi(&io___1118);
    do_fio(&c__1, (char *)&iwork[1], (ftnlen)sizeof(integer));
    e_wsfi();
 
    i__5[0] = 5, a__4[0] = "ML = ";
    i__5[1] = 8, a__4[1] = xern1;
    i__5[2] = 36, a__4[2] = " ILLEGAL.  EITHER .LT. 0 OR .GT. NEQ";
    s_cat(ch__20, a__4, i__5, &c__3, 49L);
    xermsg_("SLATEC", "DDASSL", ch__20, &c__17, &c__1, 6L, 6L, 49L);
    goto L750;

L718:
    s_wsfi(&io___1119);
    do_fio(&c__1, (char *)&iwork[2], (ftnlen)sizeof(integer));
    e_wsfi();
 
    i__5[0] = 5, a__4[0] = "MU = ";
    i__5[1] = 8, a__4[1] = xern1;
    i__5[2] = 36, a__4[2] = " ILLEGAL.  EITHER .LT. 0 OR .GT. NEQ";
    s_cat(ch__20, a__4, i__5, &c__3, 49L);
    xermsg_("SLATEC", "DDASSL", ch__20, &c__18, &c__1, 6L, 6L, 49L);
    goto L750;

L719:
    s_wsfi(&io___1120);
    do_fio(&c__1, (char *)&(*tout), (ftnlen)sizeof(doublereal));
    e_wsfi();
 
    i__6[0] = 11, a__5[0] = "TOUT = T = ";
    i__6[1] = 16, a__5[1] = xern3;
    s_cat(ch__21, a__5, i__6, &c__2, 27L);
    xermsg_("SLATEC", "DDASSL", ch__21, &c__19, &c__1, 6L, 6L, 27L);
    goto L750;

L750:
    *idid = -33;
    if (info[1] == -1) {
	xermsg_("SLATEC", "DDASSL", "REPEATED OCCURRENCES OF ILLEGAL INPUT$$RUN TERMINATED. APPARENT INFINITE LOOP", &c_n999, &c__2, 6L, 6L, 77L);
    }

    info[1] = -1;
    return 0;
 

}  

  int ddastp_(x, y, yprime, neq, res, jac, h__, wt, jstart, 
	idid, rpar, ipar, phi, delta, e, wm, iwm, alpha, beta, gamma, psi, 
	sigma, cj, cjold, hold, s, hmin, uround, iphase, jcalc, k, kold, ns, 
	nonneg, ntemp)
doublereal *x, *y, *yprime;
integer *neq;
  int (*res) (), (*jac) ();
doublereal *h__, *wt;
integer *jstart, *idid;
doublereal *rpar;
integer *ipar;
doublereal *phi, *delta, *e, *wm;
integer *iwm;
doublereal *alpha, *beta, *gamma, *psi, *sigma, *cj, *cjold, *hold, *s, *hmin,
	 *uround;
integer *iphase, *jcalc, *k, *kold, *ns, *nonneg, *ntemp;
{
     

    static integer maxit = 4;
    static doublereal xrate = .25;

     
    integer phi_dim1, phi_offset, i__1, i__2;
    doublereal d__1, d__2;

     
    double pow_dd();

     
    static doublereal rate, hnew;
    static integer ires, knew;
    static doublereal terk, xold, erkm1, erkm2, erkp1, temp1, temp2;
    static integer i__, j, m, kdiff;
    static doublereal r__, enorm;
    static integer j1;
    static doublereal pnorm, alpha0, terkm1, terkm2;
    extern   int ddajac_();
    static doublereal terkp1, ck;
    extern doublereal ddanrm_();
    static doublereal alphas;
    extern   int ddaslv_(), ddatrp_();
    static doublereal cjlast, delnrm;
    static logical convgd;
    static doublereal oldnrm;
    static integer km1, kp1, kp2, ncf, nef, ier;
    static doublereal erk;
    static integer nsf;
    static doublereal err, est;
    static integer nsp1;

 
 
 
 
 





     
    --y;
    --yprime;
    phi_dim1 = *neq;
    phi_offset = phi_dim1 + 1;
    phi -= phi_offset;
    --wt;
    --rpar;
    --ipar;
    --delta;
    --e;
    --wm;
    --iwm;
    --alpha;
    --beta;
    --gamma;
    --psi;
    --sigma;

     





 

 
 
 
 
 


 
 
    *idid = 1;
    xold = *x;
    ncf = 0;
    nsf = 0;
    nef = 0;
    if (*jstart != 0) {
	goto L120;
    }

 
 
    iwm[14] = 0;
    iwm[15] = 0;
    *k = 1;
    *kold = 0;
    *hold = 0.;
    *jstart = 1;
    psi[1] = *h__;
    *cjold = 1. / *h__;
    *cj = *cjold;
    *s = 100.;
    *jcalc = -1;
    delnrm = 1.;
    *iphase = 0;
    *ns = 0;
L120:





 

 
 
 
 

L200:
    kp1 = *k + 1;
    kp2 = *k + 2;
    km1 = *k - 1;
    xold = *x;
    if (*h__ != *hold || *k != *kold) {
	*ns = 0;
    }
 
    i__1 = *ns + 1, i__2 = *kold + 2;
    *ns = (( i__1 ) <= ( i__2 ) ? ( i__1 ) : ( i__2 )) ;
    nsp1 = *ns + 1;
    if (kp1 < *ns) {
	goto L230;
    }

    beta[1] = 1.;
    alpha[1] = 1.;
    temp1 = *h__;
    gamma[1] = 0.;
    sigma[1] = 1.;
    i__1 = kp1;
    for (i__ = 2; i__ <= i__1; ++i__) {
	temp2 = psi[i__ - 1];
	psi[i__ - 1] = temp1;
	beta[i__] = beta[i__ - 1] * psi[i__ - 1] / temp2;
	temp1 = temp2 + *h__;
	alpha[i__] = *h__ / temp1;
	sigma[i__] = (i__ - 1) * sigma[i__ - 1] * alpha[i__];
	gamma[i__] = gamma[i__ - 1] + alpha[i__ - 1] / *h__;
 
    }
    psi[kp1] = temp1;
L230:

 
    alphas = 0.;
    alpha0 = 0.;
    i__1 = *k;
    for (i__ = 1; i__ <= i__1; ++i__) {
	alphas -= 1. / i__;
	alpha0 -= alpha[i__];
 
    }

 
    cjlast = *cj;
    *cj = -alphas / *h__;

 
    ck = (d__1 = alpha[kp1] + alphas - alpha0, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
 
    d__1 = ck, d__2 = alpha[kp1];
    ck = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;

 
    temp1 = (1. - xrate) / (xrate + 1.);
    temp2 = 1. / temp1;
    if (*cj / *cjold < temp1 || *cj / *cjold > temp2) {
	*jcalc = -1;
    }
    if (*cj != cjlast) {
	*s = 100.;
    }

 
    if (kp1 < nsp1) {
	goto L280;
    }
    i__1 = kp1;
    for (j = nsp1; j <= i__1; ++j) {
	i__2 = *neq;
	for (i__ = 1; i__ <= i__2; ++i__) {
 
	    phi[i__ + j * phi_dim1] = beta[j] * phi[i__ + j * phi_dim1];
	}
 
    }
L280:

 
    *x += *h__;





 

 
 
 
 


 
L300:
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
	y[i__] = phi[i__ + phi_dim1];
 
	yprime[i__] = 0.;
    }
    i__1 = kp1;
    for (j = 2; j <= i__1; ++j) {
	i__2 = *neq;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    y[i__] += phi[i__ + j * phi_dim1];
 
	    yprime[i__] += gamma[j] * phi[i__ + j * phi_dim1];
	}
 
    }
    pnorm = ddanrm_(neq, &y[1], &wt[1], &rpar[1], &ipar[1]);



 
 
    convgd = (1) ;
    m = 0;
    ++iwm[12];
    ires = 0;
    (*res)(x, &y[1], &yprime[1], &delta[1], &ires, &rpar[1], &ipar[1]);
    if (ierode_ .iero != 0) {
	return 0;
    }
    if (ires < 0) {
	goto L380;
    }


 
 
 
 
 
    if (*jcalc != -1) {
	goto L340;
    }
    ++iwm[13];
    *jcalc = 0;
    ddajac_(neq, x, &y[1], &yprime[1], &delta[1], cj, h__, &ier, &wt[1], &e[1]
	    , &wm[1], &iwm[1], res, &ires, uround, jac, &rpar[1], &ipar[1], 
	    ntemp);
    if (ierode_ .iero != 0) {
	return 0;
    }
    *cjold = *cj;
    *s = 100.;
    if (ires < 0) {
	goto L380;
    }
    if (ier != 0) {
	goto L380;
    }
    nsf = 0;


 
L340:
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	e[i__] = 0.;
    }


 
L350:

 
    temp1 = 2. / (*cj / *cjold + 1.);
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	delta[i__] *= temp1;
    }

 
 
    ddaslv_(neq, &delta[1], &wm[1], &iwm[1]);

 
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
	y[i__] -= delta[i__];
	e[i__] -= delta[i__];
 
	yprime[i__] -= *cj * delta[i__];
    }

 
    delnrm = ddanrm_(neq, &delta[1], &wt[1], &rpar[1], &ipar[1]);
    if (delnrm <= *uround * 100. * pnorm) {
	goto L375;
    }
    if (m > 0) {
	goto L365;
    }
    oldnrm = delnrm;
    goto L367;
L365:
    d__1 = delnrm / oldnrm;
    d__2 = 1. / m;
    rate = pow_dd(&d__1, &d__2);
    if (rate > .9) {
	goto L370;
    }
    *s = rate / (1. - rate);
L367:
    if (*s * delnrm <= .33) {
	goto L375;
    }

 
 
 
 
    ++m;
    if (m >= maxit) {
	goto L370;
    }

 
 
    ++iwm[12];
    ires = 0;
    (*res)(x, &y[1], &yprime[1], &delta[1], &ires, &rpar[1], &ipar[1]);
    if (ierode_ .iero != 0) {
	return 0;
    }
    if (ires < 0) {
	goto L380;
    }
    goto L350;


 
 
 
 
L370:
    if (*jcalc == 0) {
	goto L380;
    }
    *jcalc = -1;
    goto L300;


 
 
 
 
L375:
    if (*nonneg == 0) {
	goto L390;
    }
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
 
	d__1 = y[i__];
	delta[i__] = (( d__1 ) <= ( 0. ) ? ( d__1 ) : ( 0. )) ;
    }
    delnrm = ddanrm_(neq, &delta[1], &wt[1], &rpar[1], &ipar[1]);
    if (delnrm > .33) {
	goto L380;
    }
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	e[i__] -= delta[i__];
    }
    goto L390;


 
 
 
L380:
    convgd = (0) ;
L390:
    *jcalc = 1;
    if (! convgd) {
	goto L600;
    }





 

 
 
 
 
 
 


 
    enorm = ddanrm_(neq, &e[1], &wt[1], &rpar[1], &ipar[1]);
    erk = sigma[*k + 1] * enorm;
    terk = (*k + 1) * erk;
    est = erk;
    knew = *k;
    if (*k == 1) {
	goto L430;
    }
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	delta[i__] = phi[i__ + kp1 * phi_dim1] + e[i__];
    }
    erkm1 = sigma[*k] * ddanrm_(neq, &delta[1], &wt[1], &rpar[1], &ipar[1]);
    terkm1 = *k * erkm1;
    if (*k > 2) {
	goto L410;
    }
    if (terkm1 <= terk * .5) {
	goto L420;
    }
    goto L430;
L410:
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	delta[i__] = phi[i__ + *k * phi_dim1] + delta[i__];
    }
    erkm2 = sigma[*k - 1] * ddanrm_(neq, &delta[1], &wt[1], &rpar[1], &ipar[1]
	    );
    terkm2 = (*k - 1) * erkm2;
    if ((( terkm1 ) >= ( terkm2 ) ? ( terkm1 ) : ( terkm2 ))  > terk) {
	goto L430;
    }
 
L420:
    knew = *k - 1;
    est = erkm1;


 
 
L430:
    err = ck * enorm;
    if (err > 1.) {
	goto L600;
    }





 

 
 
 
 
 
 

    *idid = 1;
    ++iwm[11];
    kdiff = *k - *kold;
    *kold = *k;
    *hold = *h__;


 
 
 
 
 
    if (knew == km1 || *k == iwm[3]) {
	*iphase = 1;
    }
    if (*iphase == 0) {
	goto L545;
    }
    if (knew == km1) {
	goto L540;
    }
    if (*k == iwm[3]) {
	goto L550;
    }
    if (kp1 >= *ns || kdiff == 1) {
	goto L550;
    }
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	delta[i__] = e[i__] - phi[i__ + kp2 * phi_dim1];
    }
    erkp1 = 1. / (*k + 2) * ddanrm_(neq, &delta[1], &wt[1], &rpar[1], &ipar[1]
	    );
    terkp1 = (*k + 2) * erkp1;
    if (*k > 1) {
	goto L520;
    }
    if (terkp1 >= terk * .5) {
	goto L550;
    }
    goto L530;
L520:
    if (terkm1 <= (( terk ) <= ( terkp1 ) ? ( terk ) : ( terkp1 )) ) {
	goto L540;
    }
    if (terkp1 >= terk || *k == iwm[3]) {
	goto L550;
    }

 
L530:
    *k = kp1;
    est = erkp1;
    goto L550;

 
L540:
    *k = km1;
    est = erkm1;
    goto L550;

 
 
L545:
    *k = kp1;
    hnew = *h__ * 2.;
    *h__ = hnew;
    goto L575;


 
 
L550:
    hnew = *h__;
    temp2 = (doublereal) (*k + 1);
    d__1 = est * 2. + 1e-4;
    d__2 = -1. / temp2;
    r__ = pow_dd(&d__1, &d__2);
    if (r__ < 2.) {
	goto L555;
    }
    hnew = *h__ * 2.;
    goto L560;
L555:
    if (r__ > 1.) {
	goto L560;
    }
 
    d__1 = .5, d__2 = (( .9 ) <= ( r__ ) ? ( .9 ) : ( r__ )) ;
    r__ = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    hnew = *h__ * r__;
L560:
    *h__ = hnew;


 
L575:
    if (*kold == iwm[3]) {
	goto L585;
    }
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	phi[i__ + kp2 * phi_dim1] = e[i__];
    }
L585:
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	phi[i__ + kp1 * phi_dim1] += e[i__];
    }
    i__1 = kp1;
    for (j1 = 2; j1 <= i__1; ++j1) {
	j = kp1 - j1 + 1;
	i__2 = *neq;
	for (i__ = 1; i__ <= i__2; ++i__) {
 
	    phi[i__ + j * phi_dim1] += phi[i__ + (j + 1) * phi_dim1];
	}
    }
    return 0;





 

 
 
 
 
 
 
 

L600:
    *iphase = 1;

 
    *x = xold;
    if (kp1 < nsp1) {
	goto L630;
    }
    i__2 = kp1;
    for (j = nsp1; j <= i__2; ++j) {
	temp1 = 1. / beta[j];
	i__1 = *neq;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    phi[i__ + j * phi_dim1] = temp1 * phi[i__ + j * phi_dim1];
	}
 
    }
L630:
    i__2 = kp1;
    for (i__ = 2; i__ <= i__2; ++i__) {
 
	psi[i__ - 1] = psi[i__] - *h__;
    }


 
 
    if (convgd) {
	goto L660;
    }
    ++iwm[15];


 
 
 
    if (ier == 0) {
	goto L650;
    }

 
 
 
 
    ++nsf;
    r__ = .25;
    *h__ *= r__;
    if (nsf < 3 && (( *h__ ) >= 0 ? ( *h__ ) : -( *h__ ))  >= *hmin) {
	goto L690;
    }
    *idid = -8;
    goto L675;


 
 
 
 
L650:
    if (ires > -2) {
	goto L655;
    }
    *idid = -11;
    goto L675;
L655:
    ++ncf;
    r__ = .25;
    *h__ *= r__;
    if (ncf < 10 && (( *h__ ) >= 0 ? ( *h__ ) : -( *h__ ))  >= *hmin) {
	goto L690;
    }
    *idid = -7;
    if (ires < 0) {
	*idid = -10;
    }
    if (nef >= 3) {
	*idid = -9;
    }
    goto L675;


 
 
 
L660:
    ++nef;
    ++iwm[14];
    if (nef > 1) {
	goto L665;
    }

 
 
 
    *k = knew;
    temp2 = (doublereal) (*k + 1);
    d__1 = est * 2. + 1e-4;
    d__2 = -1. / temp2;
    r__ = pow_dd(&d__1, &d__2) * .9;
 
    d__1 = .25, d__2 = (( .9 ) <= ( r__ ) ? ( .9 ) : ( r__ )) ;
    r__ = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    *h__ *= r__;
    if ((( *h__ ) >= 0 ? ( *h__ ) : -( *h__ ))  >= *hmin) {
	goto L690;
    }
    *idid = -6;
    goto L675;

 
 
 
L665:
    if (nef > 2) {
	goto L670;
    }
    *k = knew;
    *h__ *= .25;
    if ((( *h__ ) >= 0 ? ( *h__ ) : -( *h__ ))  >= *hmin) {
	goto L690;
    }
    *idid = -6;
    goto L675;

 
 
L670:
    *k = 1;
    *h__ *= .25;
    if ((( *h__ ) >= 0 ? ( *h__ ) : -( *h__ ))  >= *hmin) {
	goto L690;
    }
    *idid = -6;
    goto L675;




 
 
L675:
    ddatrp_(x, x, &y[1], &yprime[1], neq, k, &phi[phi_offset], &psi[1]);
    return 0;


 
L690:
    goto L200;

 
}  

  int ddatrp_(x, xout, yout, ypout, neq, kold, phi, psi)
doublereal *x, *xout, *yout, *ypout;
integer *neq, *kold;
doublereal *phi, *psi;
{
     
    integer phi_dim1, phi_offset, i__1, i__2;

     
    static doublereal temp1, c__, d__;
    static integer i__, j;
    static doublereal gamma;
    static integer koldp1;
     
    --yout;
    --ypout;
    phi_dim1 = *neq;
    phi_offset = phi_dim1 + 1;
    phi -= phi_offset;
    --psi;

     
    koldp1 = *kold + 1;
    temp1 = *xout - *x;
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
	yout[i__] = phi[i__ + phi_dim1];
 
	ypout[i__] = 0.;
    }
    c__ = 1.;
    d__ = 0.;
    gamma = temp1 / psi[1];
    i__1 = koldp1;
    for (j = 2; j <= i__1; ++j) {
	d__ = d__ * gamma + c__ / psi[j - 1];
	c__ *= gamma;
	gamma = (temp1 + psi[j - 1]) / psi[j];
	i__2 = *neq;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    yout[i__] += c__ * phi[i__ + j * phi_dim1];
 
	    ypout[i__] += d__ * phi[i__ + j * phi_dim1];
	}
 
    }
    return 0;

 
}  

  int ddawts_(neq, iwt, rtol, atol, y, wt, rpar, ipar)
integer *neq, *iwt;
doublereal *rtol, *atol, *y, *wt, *rpar;
integer *ipar;
{
     
    integer i__1;
    doublereal d__1;

     
    static integer i__;
    static doublereal atoli, rtoli;

 
 
 
 
 
 
 
 

 
 
 
 
 
 

 
 
 
 
 
 
 
 



 
     
    --ipar;
    --rpar;
    --wt;
    --y;
    --atol;
    --rtol;

     
    rtoli = rtol[1];
    atoli = atol[1];
    i__1 = *neq;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (*iwt == 0) {
	    goto L10;
	}
	rtoli = rtol[i__];
	atoli = atol[i__];
L10:
	wt[i__] = rtoli * (d__1 = y[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) + atoli;
 
    }
    return 0;
 

}  

  int xerhlt_(messg, messg_len)
char *messg;
ftnlen messg_len;
{
     
      int s_stop();

 
 
 
 
 
 
 
 
 

 
 
 
 
 
 

 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
    s_stop("", 0L);
}  

 
  int xermsg_(librar, subrou, messg, nerr, level, librar_len, 
	subrou_len, messg_len)
char *librar, *subrou, *messg;
integer *nerr, *level;
ftnlen librar_len;
ftnlen subrou_len;
ftnlen messg_len;
{
     
    address a__1[2];
    integer i__1, i__2[2];
    char ch__1[87];

     
      int s_copy();
    integer i_len(), s_wsfi(), do_fio(), e_wsfi();
      int s_cat();

     
    static char temp[72];
    static integer i__, ltemp;
    extern   int xerhlt_();
    static integer lkntrl, mkntrl;
    extern   int xerprn_();

     
    static icilist io___1178 = { 0, temp, 0, "('ERROR NUMBER = ', I8)", 72, 1 
	    };


 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 

 
 
 

    if (*nerr < -9999999 || *nerr > 99999999 || *nerr == 0 || *level < -1 || *
	    level > 2) {
	xerprn_(" ***", &c_n1, "FATAL ERROR IN...$$ XERMSG -- INVALID ERROR NUMBER OR LEVEL$$ JOB ABORT DUE TO FATAL ERROR.", &c__72, 4L, 91L);
	xerhlt_(" ***XERMSG -- INVALID INPUT", 27L);
	return 0;
    }

 

    lkntrl = 1;
    mkntrl = 1;

 
 

 
 

    if (lkntrl != 0) {
	s_copy(temp, "MESSAGE FROM ROUTINE ", 21L, 21L);
 
	i__1 = i_len(subrou, subrou_len);
	i__ = (( i__1 ) <= ( 16 ) ? ( i__1 ) : ( 16 )) ;
	s_copy(temp + 21, subrou, i__, i__);
	i__1 = i__ + 21;
	s_copy(temp + i__1, " IN LIBRARY ", i__ + 33 - i__1, 12L);
	ltemp = i__ + 33;
 
	i__1 = i_len(librar, librar_len);
	i__ = (( i__1 ) <= ( 16 ) ? ( i__1 ) : ( 16 )) ;
	i__1 = ltemp;
	s_copy(temp + i__1, librar, ltemp + i__ - i__1, i__);
	i__1 = ltemp + i__;
	s_copy(temp + i__1, ".", ltemp + i__ + 1 - i__1, 1L);
	ltemp = ltemp + i__ + 1;
	xerprn_(" ***", &c_n1, temp, &c__72, 4L, ltemp);
    }

 
 
 
 
 
 
 
 
 
 
 
 
 

    if (lkntrl > 0) {

 

	if (*level <= 0) {
	    s_copy(temp, "INFORMATIVE MESSAGE,", 20L, 20L);
	    ltemp = 20;
	} else if (*level == 1) {
	    s_copy(temp, "POTENTIALLY RECOVERABLE ERROR,", 30L, 30L);
	    ltemp = 30;
	} else {
	    s_copy(temp, "FATAL ERROR,", 12L, 12L);
	    ltemp = 12;
	}

 

	if (mkntrl == 2 && *level >= 1 || mkntrl == 1 && *level == 2) {
	    i__1 = ltemp;
	    s_copy(temp + i__1, " PROGRAM ABORTED.", ltemp + 17 - i__1, 17L);
	    ltemp += 17;
	} else {
	    i__1 = ltemp;
	    s_copy(temp + i__1, " PROGRAM CONTINUES.", ltemp + 19 - i__1, 19L)
		    ;
	    ltemp += 19;
	}

	xerprn_(" ***", &c_n1, temp, &c__72, 4L, ltemp);
    }

 

    xerprn_(" *  ", &c_n1, messg, &c__72, 4L, messg_len);

 

    if (lkntrl > 0) {
	s_wsfi(&io___1178);
	do_fio(&c__1, (char *)&(*nerr), (ftnlen)sizeof(integer));
	e_wsfi();
	for (i__ = 16; i__ <= 22; ++i__) {
	    if (*(unsigned char *)&temp[i__ - 1] != ' ') {
		goto L20;
	    }
 
	}

L20:
 
	i__2[0] = 15, a__1[0] = temp;
	i__2[1] = 23 - (i__ - 1), a__1[1] = temp + (i__ - 1);
	s_cat(ch__1, a__1, i__2, &c__2, 87L);
	xerprn_(" *  ", &c_n1, ch__1, &c__72, 4L, 23 - (i__ - 1) + 15);
    }

 


    if (lkntrl != 0) {
	xerprn_(" *  ", &c_n1, " ", &c__72, 4L, 1L);
	xerprn_(" ***", &c_n1, "END OF MESSAGE", &c__72, 4L, 14L);
	xerprn_("    ", &c__0, " ", &c__72, 4L, 1L);
    }

 
 

 
    if (*level <= 0 || *level == 1 && mkntrl <= 1) {
	return 0;
    }

 
 
 


    if (lkntrl > 0) {
	if (*level == 1) {
	    xerprn_(" ***", &c_n1, "JOB ABORT DUE TO UNRECOVERED ERROR.", &
		    c__72, 4L, 35L);
	} else {
	    xerprn_(" ***", &c_n1, "JOB ABORT DUE TO FATAL ERROR.", &c__72, 
		    4L, 29L);
	}
	xerhlt_(" ", 1L);
    }
    return 0;
}  

 
  int xerprn_(prefix, npref, messg, nwrap, prefix_len, 
	messg_len)
char *prefix;
integer *npref;
char *messg;
integer *nwrap;
ftnlen prefix_len;
ftnlen messg_len;
{
     
    integer i__1, i__2;

     
    integer i_len();
      int s_copy();
    integer s_wsfe(), do_fio(), e_wsfe(), i_indx(), s_cmp();

     
    static integer i__, n;
    static char cbuff[148];
    static integer lpref, nextc, lwrap, nunit, iu[5], lpiece, idelta, lenmsg;
    extern   int xgetua_();

     
    static cilist io___1187 = { 0, 0, 0, "(A)", 0 };
    static cilist io___1191 = { 0, 0, 0, "(A)", 0 };
 
    xgetua_(iu, &nunit);
    n = 6;
    i__1 = nunit;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (iu[i__ - 1] == 0) {
	    iu[i__ - 1] = n;
	}
 
    }

 

 

 

    if (*npref < 0) {
	lpref = i_len(prefix, prefix_len);
    } else {
	lpref = *npref;
    }
    lpref = (( 16 ) <= ( lpref ) ? ( 16 ) : ( lpref )) ;
    if (lpref != 0) {
	s_copy(cbuff, prefix, lpref, prefix_len);
    }

 

 

 
    i__1 = 16, i__2 = (( 132 ) <= ( *nwrap ) ? ( 132 ) : ( *nwrap )) ;
    lwrap = (( i__1 ) >= ( i__2 ) ? ( i__1 ) : ( i__2 )) ;

 

    lenmsg = i_len(messg, messg_len);
    n = lenmsg;
    i__1 = n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (*(unsigned char *)&messg[lenmsg - 1] != ' ') {
	    goto L30;
	}
	--lenmsg;
 
    }
L30:

 

    if (lenmsg == 0) {
	i__1 = lpref;
	s_copy(cbuff + i__1, " ", lpref + 1 - i__1, 1L);
	i__1 = nunit;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    io___1187.ciunit = iu[i__ - 1];
	    s_wsfe(&io___1187);
	    do_fio(&c__1, cbuff, lpref + 1);
	    e_wsfe();
 
	}
	return 0;
    }
 

    nextc = 1;
L50:
    lpiece = i_indx(messg + (nextc - 1), "$$", lenmsg - (nextc - 1), 2L);
    if (lpiece == 0) {

 

	idelta = 0;
 
	i__1 = lwrap, i__2 = lenmsg + 1 - nextc;
	lpiece = (( i__1 ) <= ( i__2 ) ? ( i__1 ) : ( i__2 )) ;
	if (lpiece < lenmsg + 1 - nextc) {
	    for (i__ = lpiece + 1; i__ >= 2; --i__) {
		i__1 = nextc + i__ - 2;
		if (s_cmp(messg + i__1, " ", nextc + i__ - 1 - i__1, 1L) == 0)
			 {
		    lpiece = i__ - 1;
		    idelta = 1;
		    goto L54;
		}
 
	    }
	}
L54:
	i__1 = lpref;
	s_copy(cbuff + i__1, messg + (nextc - 1), lpref + lpiece - i__1, 
		nextc + lpiece - 1 - (nextc - 1));
	nextc = nextc + lpiece + idelta;
    } else if (lpiece == 1) {

 
 

	nextc += 2;
	goto L50;
    } else if (lpiece > lwrap + 1) {

 

	idelta = 0;
	lpiece = lwrap;
	for (i__ = lpiece + 1; i__ >= 2; --i__) {
	    i__1 = nextc + i__ - 2;
	    if (s_cmp(messg + i__1, " ", nextc + i__ - 1 - i__1, 1L) == 0) {
		lpiece = i__ - 1;
		idelta = 1;
		goto L58;
	    }
 
	}
L58:
	i__1 = lpref;
	s_copy(cbuff + i__1, messg + (nextc - 1), lpref + lpiece - i__1, 
		nextc + lpiece - 1 - (nextc - 1));
	nextc = nextc + lpiece + idelta;
    } else {

 
 

	--lpiece;
	i__1 = lpref;
	s_copy(cbuff + i__1, messg + (nextc - 1), lpref + lpiece - i__1, 
		nextc + lpiece - 1 - (nextc - 1));
	nextc = nextc + lpiece + 2;
    }

 

    i__1 = nunit;
    for (i__ = 1; i__ <= i__1; ++i__) {
	io___1191.ciunit = iu[i__ - 1];
	s_wsfe(&io___1191);
	do_fio(&c__1, cbuff, lpref + lpiece);
	e_wsfe();
 
    }

    if (nextc <= lenmsg) {
	goto L50;
    }
    return 0;
}  

 
  int xgetua_(iunita, n)
integer *iunita, *n;
{
     
    integer i__1;

     
    static integer i__;
     
    --iunita;

     
    if (xeruni_ .nunit <= 0) {
	xeruni_ .nunit = 1;
	xeruni_ .iunit[0] = 0;
    }
    *n = xeruni_ .nunit;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	iunita[i__] = xeruni_ .iunit[i__ - 1];
 
    }
    return 0;
}  

 
  int xsetua_(iunita, n)
integer *iunita, *n;
{
     
    address a__1[2];
    integer i__1[2], i__2;
    char ch__1[37];

     
    integer s_wsfi(), do_fio(), e_wsfi();
      int s_cat();

     
    static char xern1[8];
    static integer i__;
    extern   int xermsg_();

     
    static icilist io___1194 = { 0, xern1, 0, "(I8)", 8, 1 };
     
    --iunita;

     
    if (*n < 1 || *n > 5) {
	s_wsfi(&io___1194);
	do_fio(&c__1, (char *)&(*n), (ftnlen)sizeof(integer));
	e_wsfi();
 
	i__1[0] = 29, a__1[0] = "INVALID NUMBER OF UNITS, N = ";
	i__1[1] = 8, a__1[1] = xern1;
	s_cat(ch__1, a__1, i__1, &c__2, 37L);
	xermsg_("SLATEC", "XSETUA", ch__1, &c__1, &c__2, 6L, 6L, 37L);
	return 0;
    }

    i__2 = *n;
    for (i__ = 1; i__ <= i__2; ++i__) {
	xeruni_ .iunit[i__ - 1] = iunita[i__];
 
    }
    xeruni_ .nunit = *n;
    return 0;
}  

 
  int dqag0_(f, a, b, epsabs, epsrel, result, abserr, work, 
	lwork, iwork, liwork, ifail)
doublereal (*f) ();
doublereal *a, *b, *epsabs, *epsrel, *result, *abserr, *work;
integer *lwork, *iwork, *liwork, *ifail;
{
     
    doublereal d__1, d__2;

     
    extern   int dqags_();
    static integer limit, ibl, iel, ier, irl;
     
    --work;
    --iwork;

     
    if (*lwork < 4) {
	goto L20;
    }
    if (*liwork < *lwork / 8 + 2) {
	goto L20;
    }
 
    limit = *lwork / 4;
 
    ibl = limit + 1;
    iel = limit + ibl;
    irl = limit + iel;
 
    d__1 = (( *epsabs ) >= 0 ? ( *epsabs ) : -( *epsabs )) ;
    d__2 = (( *epsrel ) >= 0 ? ( *epsrel ) : -( *epsrel )) ;
    dqags_(f, a, b, &d__1, &d__2, &work[1], &work[ibl], &work[iel], &work[irl]
	    , &limit, &iwork[1], liwork, result, abserr, &ier);
    if (ier != 0) {
	goto L40;
    }
    *ifail = 0;
    goto L60;
 
L20:
    ier = 6;
L40:
    *ifail = 1;
L60:
    return 0;
}  

 
  int dqags_(f, a, b, epsabs, epsrel, alist__, blist, elist, 
	rlist, limit, iord, liord, result, abserr, ier)
doublereal (*f) ();
doublereal *a, *b, *epsabs, *epsrel, *alist__, *blist, *elist, *rlist;
integer *limit, *iord, *liord;
doublereal *result, *abserr;
integer *ier;
{
     
    integer i__1, i__2;
    doublereal d__1, d__2;

     
    static doublereal area, dres;
    static integer ksgn, last, nres;
    static doublereal area1, area2;
    static integer last1;
    static doublereal area12;
    static integer k;
    static doublereal small, erro12;
    extern   int order_();
    static integer ierro;
    static doublereal a1, a2, b1, b2, defab1, defab2, oflow;
    static integer ktmin, nrmax;
    static doublereal uflow;
    static logical noext;
    static integer iroff1, iroff2, iroff3;
    static doublereal res3la[3], error1, error2;
    static integer id, numrl2;
    static doublereal rlist2[52], defabs;
    extern doublereal dlamch_();
    static doublereal epmach;
    extern   int epsalg_();
    static doublereal erlarg, abseps, correc, errbnd, resabs, erlast, errmax;
    static integer maxerr;
    static doublereal reseps;
    static logical extrap;
    static doublereal ertest;
    extern   int quarul_();
    static doublereal errsum;
     
    --rlist;
    --elist;
    --blist;
    --alist__;
    --iord;
    epmach = dlamch_("p", 1L);
    uflow = dlamch_("u", 1L);
    oflow = dlamch_("o", 1L);
    ierajf_ .iero = 0;
    last1 = 1;
    *ier = 0;
    ierro = 0;
    quarul_(f, a, b, result, abserr, &defabs, &resabs);
    if (ierajf_ .iero > 0) {
	*ier = 6;
	return 0;
    }

 

    dres = (( *result ) >= 0 ? ( *result ) : -( *result )) ;
 
    d__1 = *epsabs, d__2 = *epsrel * dres;
    errbnd = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    if (*abserr <= epmach * 100. * defabs && *abserr > errbnd) {
	*ier = 2;
    }
    if (*limit < 2 && *abserr > errbnd) {
	*ier = 1;
    }
    if (*ier != 0 || *abserr <= errbnd) {
	goto L320;
    }

 
 

    alist__[1] = *a;
    blist[1] = *b;
    rlist[1] = *result;
    rlist2[0] = *result;
    errmax = *abserr;
    maxerr = 1;
    area = *result;
    errsum = *abserr;
    *abserr = oflow;
    nrmax = 1;
    nres = 0;
    numrl2 = 2;
    ktmin = 0;
    extrap = (0) ;
    noext = (0) ;
    iroff1 = 0;
    iroff2 = 0;
    iroff3 = 0;
    ksgn = -1;
    if (dres >= (1. - epmach * 50.) * defabs) {
	ksgn = 1;
    }

 
 

    if (*limit < 2) {
	goto L220;
    }
    i__1 = *limit;
    for (last = 2; last <= i__1; ++last) {

 
 

	last1 = last;
	a1 = alist__[maxerr];
	b1 = (alist__[maxerr] + blist[maxerr]) * .5;
	a2 = b1;
	b2 = blist[maxerr];
	erlast = errmax;
	quarul_(f, &a1, &b1, &area1, &error1, &resabs, &defab1);
	if (ierajf_ .iero > 0) {
	    *ier = 6;
	    return 0;
	}
	quarul_(f, &a2, &b2, &area2, &error2, &resabs, &defab2);
	if (ierajf_ .iero > 0) {
	    *ier = 6;
	    return 0;
	}

 
 

	area12 = area1 + area2;
	erro12 = error1 + error2;
	errsum = errsum + erro12 - errmax;
	area = area + area12 - rlist[maxerr];
	if (defab1 == error1 || defab2 == error2) {
	    goto L40;
	}
	if ((d__1 = rlist[maxerr] - area12, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > (( area12 ) >= 0 ? ( area12 ) : -( area12 ))  * 1e-5 ||
		 erro12 < errmax * .99) {
	    goto L20;
	}
	if (extrap) {
	    ++iroff2;
	}
	if (! extrap) {
	    ++iroff1;
	}
L20:
	if (last > 10 && erro12 > errmax) {
	    ++iroff3;
	}
L40:
	rlist[maxerr] = area1;
	rlist[last] = area2;
 
	d__1 = *epsabs, d__2 = *epsrel * (( area ) >= 0 ? ( area ) : -( area )) ;
	errbnd = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	if (errsum <= errbnd) {
	    goto L280;
	}

 
 

	if (iroff1 + iroff2 >= 10 || iroff3 >= 20) {
	    *ier = 2;
	}
	if (iroff2 >= 5) {
	    ierro = 3;
	}

 
 

	if (last == *limit) {
	    *ier = 1;
	}

 
 

 
	d__1 = (( a1 ) >= 0 ? ( a1 ) : -( a1 )) , d__2 = (( b2 ) >= 0 ? ( b2 ) : -( b2 )) ;
	if ((( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 ))  <= (epmach * 100. + 1.) * ((( a2 ) >= 0 ? ( a2 ) : -( a2 ))  + uflow * 1e3)) 
		{
	    *ier = 4;
	}
	if (*ier != 0) {
	    goto L220;
	}

 

	if (error2 > error1) {
	    goto L60;
	}
	alist__[last] = a2;
	blist[maxerr] = b1;
	blist[last] = b2;
	elist[maxerr] = error1;
	elist[last] = error2;
	goto L80;
L60:
	alist__[maxerr] = a2;
	alist__[last] = a1;
	blist[last] = b1;
	rlist[maxerr] = area2;
	rlist[last] = area1;
	elist[maxerr] = error2;
	elist[last] = error1;

 
 
 
 
 

L80:
	order_(limit, &last, &maxerr, &errmax, &elist[1], &iord[1], liord, &
		nrmax);
	if (last == 2) {
	    goto L180;
	}
	if (noext) {
	    goto L200;
	}
	erlarg -= erlast;
	if ((d__1 = b1 - a1, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > small) {
	    erlarg += erro12;
	}
	if (extrap) {
	    goto L100;
	}

 
 

	if ((d__1 = blist[maxerr] - alist__[maxerr], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > small) {
	    goto L200;
	}
	extrap = (1) ;
	nrmax = 2;
L100:
	if (ierro == 3 || erlarg <= ertest) {
	    goto L140;
	}

 
 
 
 

	id = nrmax;
	i__2 = dqa001_ .jupbnd;
	for (k = id; k <= i__2; ++k) {
	    maxerr = iord[nrmax];
	    errmax = elist[maxerr];
	    if ((d__1 = blist[maxerr] - alist__[maxerr], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > small) {
		goto L200;
	    }
	    ++nrmax;
 
	}

 

L140:
	++numrl2;
	rlist2[numrl2 - 1] = area;
	epsalg_(&numrl2, rlist2, &reseps, &abseps, res3la, &nres);
	++ktmin;
	if (ktmin > 5 && *abserr < errsum * .001) {
	    *ier = 5;
	}
	if (abseps >= *abserr) {
	    goto L160;
	}
	ktmin = 0;
	*abserr = abseps;
	*result = reseps;
	correc = erlarg;
 
	d__1 = *epsabs, d__2 = *epsrel * (( reseps ) >= 0 ? ( reseps ) : -( reseps )) ;
	ertest = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	if (*abserr <= ertest) {
	    goto L220;
	}

 

L160:
	if (numrl2 == 1) {
	    noext = (1) ;
	}
	if (*ier == 5) {
	    goto L220;
	}
	maxerr = iord[1];
	errmax = elist[maxerr];
	nrmax = 1;
	extrap = (0) ;
	small *= .5;
	erlarg = errsum;
	goto L200;
L180:
	small = (d__1 = *b - *a, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) * .375;
	erlarg = errsum;
	ertest = errbnd;
	rlist2[1] = area;
L200:
	;
    }

 
 

L220:
    if (*abserr == oflow) {
	goto L280;
    }
    if (*ier + ierro == 0) {
	goto L260;
    }
    if (ierro == 3) {
	*abserr += correc;
    }
    if (*ier == 0) {
	*ier = 3;
    }
    if (*result != 0. && area != 0.) {
	goto L240;
    }
    if (*abserr > errsum) {
	goto L280;
    }
    if (area == 0.) {
	goto L320;
    }
    goto L260;
L240:
    if (*abserr / (( *result ) >= 0 ? ( *result ) : -( *result ))  > errsum / (( area ) >= 0 ? ( area ) : -( area )) ) {
	goto L280;
    }

 

L260:
 
    d__1 = (( *result ) >= 0 ? ( *result ) : -( *result )) , d__2 = (( area ) >= 0 ? ( area ) : -( area )) ;
    if (ksgn == -1 && (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 ))  <= defabs * .01) {
	goto L320;
    }
    if (.01 > *result / area || *result / area > 100. || errsum > (( area ) >= 0 ? ( area ) : -( area )) ) {
	*ier = 6;
    }
    goto L320;

 

L280:
    *result = 0.;
    i__1 = last;
    for (k = 1; k <= i__1; ++k) {
	*result += rlist[k];
 
    }
    *abserr = errsum;
L320:
    if (*ier > 2) {
	--(*ier);
    }
    iord[1] = last1 << 2;
    return 0;
}  

 
  int epsalg_(n, epstab, result, abserr, res3la, nres)
integer *n;
doublereal *epstab, *result, *abserr, *res3la;
integer *nres;
{
     

    static integer limexp = 50;

     
    integer i__1;
    doublereal d__1, d__2, d__3;

     
    static doublereal e1abs;
    static integer i__;
    static doublereal e0, e1, e2, e3, error, oflow;
    static integer k1, k2, k3;
    static doublereal delta1, delta2, delta3;
    static integer ib, ie;
    extern doublereal dlamch_();
    static doublereal epmach, ss, epsinf;
    static integer newelm, ib2, ind;
    static doublereal res;
    static integer num;
    static doublereal err1, err2, err3, tol1, tol2, tol3;
    --res3la;
    --epstab;
    epmach = dlamch_("p", 1L);
    oflow = dlamch_("o", 1L);

    ++(*nres);
    *abserr = oflow;
    *result = epstab[*n];
    if (*n < 3) {
	goto L200;
    }
    epstab[*n + 2] = epstab[*n];
    newelm = (*n - 1) / 2;
    epstab[*n] = oflow;
    num = *n;
    k1 = *n;
    i__1 = newelm;
    for (i__ = 1; i__ <= i__1; ++i__) {
	k2 = k1 - 1;
	k3 = k1 - 2;
	res = epstab[k1 + 2];
	e0 = epstab[k3];
	e1 = epstab[k2];
	e2 = res;
	e1abs = (( e1 ) >= 0 ? ( e1 ) : -( e1 )) ;
	delta2 = e2 - e1;
	err2 = (( delta2 ) >= 0 ? ( delta2 ) : -( delta2 )) ;
 
	d__1 = (( e2 ) >= 0 ? ( e2 ) : -( e2 )) ;
	tol2 = (( d__1 ) >= ( e1abs ) ? ( d__1 ) : ( e1abs ))  * epmach;
	delta3 = e1 - e0;
	err3 = (( delta3 ) >= 0 ? ( delta3 ) : -( delta3 )) ;
 
	d__1 = e1abs, d__2 = (( e0 ) >= 0 ? ( e0 ) : -( e0 )) ;
	tol3 = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 ))  * epmach;
	if (err2 > tol2 || err3 > tol3) {
	    goto L20;
	}

 
 
 
 

	*result = res;
	*abserr = err2 + err3;
	goto L200;
L20:
	e3 = epstab[k1];
	epstab[k1] = e1;
	delta1 = e1 - e3;
	err1 = (( delta1 ) >= 0 ? ( delta1 ) : -( delta1 )) ;
 
	d__1 = e1abs, d__2 = (( e3 ) >= 0 ? ( e3 ) : -( e3 )) ;
	tol1 = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 ))  * epmach;

 
 

	if (err1 < tol1 || err2 < tol2 || err3 < tol3) {
	    goto L40;
	}
	ss = 1. / delta1 + 1. / delta2 - 1. / delta3;
	epsinf = (d__1 = ss * e1, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );

 
 

 

	if (epsinf > 1e-4) {
	    goto L60;
	}
L40:
	*n = i__ + i__ - 1;
	goto L100;

 
 

L60:
	res = e1 + 1. / ss;
	epstab[k1] = res;
	k1 += -2;
	error = err2 + (d__1 = res - e2, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) + err3;
	if (error > *abserr) {
	    goto L80;
	}
	*abserr = error;
	*result = res;
L80:
	;
    }

 

L100:
    if (*n == limexp) {
	*n = (limexp / 2 << 1) - 1;
    }
    ib = 1;
    if (num / 2 << 1 == num) {
	ib = 2;
    }
    ie = newelm + 1;
    i__1 = ie;
    for (i__ = 1; i__ <= i__1; ++i__) {
	ib2 = ib + 2;
	epstab[ib] = epstab[ib2];
	ib = ib2;
 
    }
    if (num == *n) {
	goto L160;
    }
    ind = num - *n + 1;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	epstab[i__] = epstab[ind];
	++ind;
 
    }
L160:
    if (*nres >= 4) {
	goto L180;
    }
    res3la[*nres] = *result;
    *abserr = oflow;
    goto L200;

 

L180:
    *abserr = (d__1 = *result - res3la[3], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) + (d__2 = *result - 
	    res3la[2], (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) ) + (d__3 = *result - res3la[1], (( d__3 ) >= 0 ? ( d__3 ) : -( d__3 )) );
    res3la[1] = res3la[2];
    res3la[2] = res3la[3];
    res3la[3] = *result;
L200:
 
    d__1 = *abserr, d__2 = epmach * 5. * (( *result ) >= 0 ? ( *result ) : -( *result )) ;
    *abserr = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    return 0;
}  

 
  int ewset_(n, itol, rtol, atol, ycur, ewt)
integer *n, *itol;
doublereal *rtol, *atol, *ycur, *ewt;
{
     
    integer i__1;
    doublereal d__1;

     
    static integer i__;
    static doublereal atoli, rtoli;

 
 

 
 
 
 
 
 
 

     
    --ewt;
    --ycur;
    --rtol;
    --atol;

     
    rtoli = rtol[1];
    atoli = atol[1];
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (*itol >= 3) {
	    rtoli = rtol[i__];
	}
	if (*itol == 2 || *itol == 4) {
	    atoli = atol[i__];
	}
	ewt[i__] = rtoli * (d__1 = ycur[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) + atoli;
 
    }
    return 0;
 

}  

 
doublereal fnorm_(n, a, w)
integer *n;
doublereal *a, *w;
{
     
    integer a_dim1, a_offset, i__1, i__2;
    doublereal ret_val, d__1, d__2;

     
    static integer i__, j;
    static doublereal an, sum;

 
 

 
 
 
 
 
 
 

     
    --w;
    a_dim1 = *n;
    a_offset = a_dim1 + 1;
    a -= a_offset;

     
    an = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	sum = 0.;
	i__2 = *n;
	for (j = 1; j <= i__2; ++j) {
 
	    sum += (d__1 = a[i__ + j * a_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) / w[j];
	}
 
	d__1 = an, d__2 = sum * w[i__];
	an = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
 
    }
    ret_val = an;
    return ret_val;
 

}  

 
  int intdy_(t, k, yh, nyh, dky, iflag)
doublereal *t;
integer *k;
doublereal *yh;
integer *nyh;
doublereal *dky;
integer *iflag;
{
     
    integer yh_dim1, yh_offset, i__1, i__2;

     
    double pow_di();

     
    static doublereal c__;
    static integer i__, j;
    static doublereal r__, s;
    static integer ic, jb, jj;
    static doublereal tp;
    static integer jb2, jj1, jp1;
    extern   int xerrwv_();
    yh_dim1 = *nyh;
    yh_offset = yh_dim1 + 1;
    yh -= yh_offset;
    --dky;

     
    *iflag = 0;
    if (*k < 0 || *k > (ls0001_._1) .nq) {
	goto L80;
    }
    tp = (ls0001_._1) .tn - (ls0001_._1) .hu * ((ls0001_._1) .uround * 100. + 1.);
    if ((*t - tp) * (*t - (ls0001_._1) .tn) > 0.) {
	goto L90;
    }

    s = (*t - (ls0001_._1) .tn) / (ls0001_._1) .h__;
    ic = 1;
    if (*k == 0) {
	goto L15;
    }
    jj1 = (ls0001_._1) .l - *k;
    i__1 = (ls0001_._1) .nq;
    for (jj = jj1; jj <= i__1; ++jj) {
 
	ic *= jj;
    }
L15:
    c__ = (doublereal) ic;
    i__1 = (ls0001_._1) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	dky[i__] = c__ * yh[i__ + (ls0001_._1) .l * yh_dim1];
    }
    if (*k == (ls0001_._1) .nq) {
	goto L55;
    }
    jb2 = (ls0001_._1) .nq - *k;
    i__1 = jb2;
    for (jb = 1; jb <= i__1; ++jb) {
	j = (ls0001_._1) .nq - jb;
	jp1 = j + 1;
	ic = 1;
	if (*k == 0) {
	    goto L35;
	}
	jj1 = jp1 - *k;
	i__2 = j;
	for (jj = jj1; jj <= i__2; ++jj) {
 
	    ic *= jj;
	}
L35:
	c__ = (doublereal) ic;
	i__2 = (ls0001_._1) .n;
	for (i__ = 1; i__ <= i__2; ++i__) {
 
	    dky[i__] = c__ * yh[i__ + jp1 * yh_dim1] + s * dky[i__];
	}
 
    }
    if (*k == 0) {
	return 0;
    }
L55:
    i__1 = -(*k);
    r__ = pow_di(& (ls0001_._1) .h__, &i__1);
    i__1 = (ls0001_._1) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	dky[i__] = r__ * dky[i__];
    }
    return 0;

L80:
    xerrwv_("intdy--  k (=i1) illegal      ", &c__30, &c__51, &c__1, &c__1, k,
	     &c__0, &c__0, &c_b61, &c_b61, 30L);
    *iflag = -1;
    return 0;
L90:
    xerrwv_("intdy--  t (=r1) illegal      ", &c__30, &c__52, &c__1, &c__0, &
	    c__0, &c__0, &c__1, t, &c_b61, 30L);
    xerrwv_("      t n est pas entre tcur - hu (= r1) et tcur (=r2)", &c__60, 
	    &c__52, &c__1, &c__0, &c__0, &c__0, &c__2, &tp, & (ls0001_._1) .tn, 54L)
	    ;
    *iflag = -2;
    return 0;
 

}  

  int lsdisc_(f, neq, y, t, tout, rwork, lrw, istate)
  int (*f) ();
integer *neq;
doublereal *y, *t, *tout, *rwork;
integer *lrw, *istate;
{
     
    integer i__1;

     
      int s_copy();

     

    static integer j;
    extern   int dcopy_(), error_();
    static integer itout, it;
    static doublereal tt;

 
     
    --y;
    --rwork;

     
    it = (integer) (*t);
    itout = (integer) (*tout);
    ierode_ .iero = 0;
    if (itout < it) {
	s_copy(cha1_ .buf, "ode discrete : a requested k is smaller  than initial one", 4096L, 57L);
	error_(&c__999);
	return 0;
    } else if (itout == it) {
	*istate = 2;
	return 0;
    } else {
	i__1 = itout - 1;
	for (j = it; j <= i__1; ++j) {
	    tt = (doublereal) j;
	    (*f)(neq, &tt, &y[1], &rwork[1]);
	    if (ierode_ .iero > 0) {
		return 0;
	    }
	    dcopy_(neq, &rwork[1], &c__1, &y[1], &c__1);
 
	}
	*t = *tout;
	*istate = 2;
	return 0;
    }
}  




  int lsoda_(f, neq, y, t, tout, itol, rtol, atol, itask, 
	istate, iopt, rwork, lrw, iwork, liw, jac, jt)
  int (*f) ();
integer *neq;
doublereal *y, *t, *tout;
integer *itol;
doublereal *rtol, *atol;
integer *itask, *istate, *iopt;
doublereal *rwork;
integer *lrw, *iwork, *liw;
  int (*jac) ();
integer *jt;
{
     

    static integer mord[2] = { 12,5 };
    static integer mxstp0 = 500;
    static integer mxhnl0 = 10;

     
    integer i__1;
    doublereal d__1, d__2;

     
    double sqrt(), d_sign();

     
    extern   int prja_();
    static doublereal hmax;
    static logical ihit;
    static doublereal ewti, size;
    static integer len1c, len1n, len1s, i__, iflag;
    static doublereal atoli;
    static integer leniw, lenwm;
    extern   int stoda_();
    static integer imxer;
    static doublereal tcrit;
    static integer lenrw;
    static doublereal h0;
    static integer i1, i2;
    static doublereal rtoli, tdist, tolsf;
    extern   int ewset_();
    static doublereal tnext;
    extern   int intdy_();
    static doublereal w0;
    extern   int solsy_();
    extern doublereal dlamch_();
    static integer ml;
    static doublereal rh;
    static integer mu;
    static doublereal tp;
    static integer leniwc, lenrwc, lf0, lenrwn, lenrws;
    extern doublereal vmnorm_();
    extern   int xerrwv_();
    static doublereal big;
    static integer kgo;
    static doublereal ayi, hmx, tol, sum;
    static integer len1, len2;
     
    --neq;
    --y;
    --rtol;
    --atol;
    --rwork;
    --iwork;
    ierode_ .iero = 0;
    if (*istate < 1 || *istate > 3) {
	goto L601;
    }
    if (*itask < 1 || *itask > 5) {
	goto L602;
    }
    if (*istate == 1) {
	goto L10;
    }
    if ((ls0001_._2) .init == 0) {
	goto L603;
    }
    if (*istate == 2) {
	goto L200;
    }
    goto L20;
L10:
    (ls0001_._2) .init = 0;
    if (*tout == *t) {
	goto L430;
    }
L20:
    (ls0001_._2) .ntrep = 0;
 

 
 
 
 

 
 
 

    if (neq[1] <= 0) {
	goto L604;
    }
    if (*istate == 1) {
	goto L25;
    }
    if (neq[1] > (ls0001_._2) .n) {
	goto L605;
    }
L25:
    (ls0001_._2) .n = neq[1];
    if (*itol < 1 || *itol > 4) {
	goto L606;
    }
    if (*iopt < 0 || *iopt > 1) {
	goto L607;
    }
    if (*jt == 3 || *jt < 1 || *jt > 5) {
	goto L608;
    }
    (lsa001_._1) .jtyp = *jt;
    if (*jt <= 2) {
	goto L30;
    }
    ml = iwork[1];
    mu = iwork[2];
    if (ml < 0 || ml >= (ls0001_._2) .n) {
	goto L609;
    }
    if (mu < 0 || mu >= (ls0001_._2) .n) {
	goto L610;
    }
L30:
 

    if (*iopt == 1) {
	goto L40;
    }
    (lsa001_._1) .ixpr = 0;
    (ls0001_._2) .mxstep = mxstp0;
    (ls0001_._2) .mxhnil = mxhnl0;
    (ls0001_._2) .hmxi = 0.;
    (ls0001_._2) .hmin = 0.;
    if (*istate != 1) {
	goto L60;
    }
    h0 = 0.;
    (lsa001_._1) .mxordn = mord[0];
    (lsa001_._1) .mxords = mord[1];
    goto L60;
L40:
    (lsa001_._1) .ixpr = iwork[5];
    if ((lsa001_._1) .ixpr < 0 || (lsa001_._1) .ixpr > 1) {
	goto L611;
    }
    (ls0001_._2) .mxstep = iwork[6];
    if ((ls0001_._2) .mxstep < 0) {
	goto L612;
    }
    if ((ls0001_._2) .mxstep == 0) {
	(ls0001_._2) .mxstep = mxstp0;
    }
    (ls0001_._2) .mxhnil = iwork[7];
    if ((ls0001_._2) .mxhnil < 0) {
	goto L613;
    }
    if ((ls0001_._2) .mxhnil == 0) {
	(ls0001_._2) .mxhnil = mxhnl0;
    }
    if (*istate != 1) {
	goto L50;
    }
    h0 = rwork[5];
    (lsa001_._1) .mxordn = iwork[8];
    if ((lsa001_._1) .mxordn < 0) {
	goto L628;
    }
    if ((lsa001_._1) .mxordn == 0) {
	(lsa001_._1) .mxordn = 100;
    }
    (lsa001_._1) .mxordn = (( (lsa001_._1) .mxordn ) <= ( mord[0] ) ? ( (lsa001_._1) .mxordn ) : ( mord[0] )) ;
    (lsa001_._1) .mxords = iwork[9];
    if ((lsa001_._1) .mxords < 0) {
	goto L629;
    }
    if ((lsa001_._1) .mxords == 0) {
	(lsa001_._1) .mxords = 100;
    }
    (lsa001_._1) .mxords = (( (lsa001_._1) .mxords ) <= ( mord[1] ) ? ( (lsa001_._1) .mxords ) : ( mord[1] )) ;
    if ((*tout - *t) * h0 < 0.) {
	goto L614;
    }
L50:
    hmax = rwork[6];
    if (hmax < 0.) {
	goto L615;
    }
    (ls0001_._2) .hmxi = 0.;
    if (hmax > 0.) {
	(ls0001_._2) .hmxi = 1. / hmax;
    }
    (ls0001_._2) .hmin = rwork[7];
    if ((ls0001_._2) .hmin < 0.) {
	goto L616;
    }
 

 
 
 
 
 
 
 
 
 
 
 
 

L60:
    if (*istate == 1) {
	(ls0001_._2) .meth = 1;
    }
    if (*istate == 1) {
	(ls0001_._2) .nyh = (ls0001_._2) .n;
    }
    (ls0001_._2) .lyh = 21;
    len1n = ((lsa001_._1) .mxordn + 1) * (ls0001_._2) .nyh + 20;
    len1s = ((lsa001_._1) .mxords + 1) * (ls0001_._2) .nyh + 20;
    (ls0001_._2) .lwm = len1s + 1;
    if (*jt <= 2) {
	lenwm = (ls0001_._2) .n * (ls0001_._2) .n + 2;
    }
    if (*jt >= 4) {
	lenwm = ((ml << 1) + mu + 1) * (ls0001_._2) .n + 2;
    }
    len1s += lenwm;
    len1c = len1n;
    if ((ls0001_._2) .meth == 2) {
	len1c = len1s;
    }
    len1 = (( len1n ) >= ( len1s ) ? ( len1n ) : ( len1s )) ;
    len2 = (ls0001_._2) .n * 3;
    lenrw = len1 + len2;
    lenrwn = len1n + len2;
    lenrws = len1s + len2;
    lenrwc = len1c + len2;
    iwork[17] = lenrw;
    (ls0001_._2) .liwm = 1;
    leniw = (ls0001_._2) .n + 20;
    leniwc = 20;
    if ((ls0001_._2) .meth == 2) {
	leniwc = leniw;
    }
    iwork[18] = leniw;
    if (*istate == 1 && *lrw < lenrwc) {
	goto L617;
    }
    if (*istate == 1 && *liw < leniwc) {
	goto L618;
    }
    if (*istate == 3 && *lrw < lenrwc) {
	goto L550;
    }
    if (*istate == 3 && *liw < leniwc) {
	goto L555;
    }
    (ls0001_._2) .lewt = len1 + 1;
    (lsa001_._1) .insufr = 0;
    if (*lrw >= lenrw) {
	goto L65;
    }
    (lsa001_._1) .insufr = 2;
    (ls0001_._2) .lewt = len1c + 1;
    xerrwv_("lsoda-- attention size of  rwork now suffisent", &c__60, &c__103,
	     &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 46L);
    xerrwv_("but may become too small : integration continues", &c__60, &
	    c__103, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 48L);
    xerrwv_("required size is i1 given size is i2", &c__50, &c__103, &c__1, &
	    c__2, &lenrw, lrw, &c__0, &c_b61, &c_b61, 36L);
L65:
    (ls0001_._2) .lsavf = (ls0001_._2) .lewt + (ls0001_._2) .n;
    (ls0001_._2) .lacor = (ls0001_._2) .lsavf + (ls0001_._2) .n;
    (lsa001_._1) .insufi = 0;
    if (*liw >= leniw) {
	goto L70;
    }
    (lsa001_._1) .insufi = 2;
    xerrwv_("lsoda-- size for  iwork now sufficient", &c__60, &c__104, &c__1, 
	    &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 38L);
    xerrwv_("may become too small.  integration continues", &c__60, &c__104, &
	    c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 44L);
    xerrwv_("required size is i1, given size is i2", &c__50, &c__104, &c__1, &
	    c__2, &leniw, liw, &c__0, &c_b61, &c_b61, 37L);
L70:
 

    rtoli = rtol[1];
    atoli = atol[1];
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (*itol >= 3) {
	    rtoli = rtol[i__];
	}
	if (*itol == 2 || *itol == 4) {
	    atoli = atol[i__];
	}
	if (rtoli < 0.) {
	    goto L619;
	}
	if (atoli < 0.) {
	    goto L620;
	}
 
    }
    if (*istate == 1) {
	goto L100;
    }
 

    (ls0001_._2) .jstart = -1;
    if ((ls0001_._2) .n == (ls0001_._2) .nyh) {
	goto L200;
    }
 

    i1 = (ls0001_._2) .lyh + (ls0001_._2) .l * (ls0001_._2) .nyh;
    i2 = (ls0001_._2) .lyh + ((ls0001_._2) .maxord + 1) * (ls0001_._2) .nyh - 1;
    if (i1 > i2) {
	goto L200;
    }
    i__1 = i2;
    for (i__ = i1; i__ <= i__1; ++i__) {
 
	rwork[i__] = 0.;
    }
    goto L200;
 

 
 
 
 
 
 

L100:
    (ls0001_._2) .uround = dlamch_("p", 1L);
    (ls0001_._2) .tn = *t;
    (lsa001_._1) .tsw = *t;
    (ls0001_._2) .maxord = (lsa001_._1) .mxordn;
    if (*itask != 4 && *itask != 5) {
	goto L110;
    }
    tcrit = rwork[1];
    if ((tcrit - *tout) * (*tout - *t) < 0.) {
	goto L625;
    }
    if (h0 != 0. && (*t + h0 - tcrit) * h0 > 0.) {
	h0 = tcrit - *t;
    }
L110:
    (ls0001_._2) .jstart = 0;
    (ls0001_._2) .nhnil = 0;
    (ls0001_._2) .nst = 0;
    (ls0001_._2) .nje = 0;
    (ls0001_._2) .nslast = 0;
    (ls0001_._2) .hu = 0.;
    (ls0001_._2) .nqu = 0;
    (lsa001_._1) .mused = 0;
    (ls0001_._2) .miter = 0;
    (ls0001_._2) .ccmax = .3;
    (ls0001_._2) .maxcor = 3;
    (ls0001_._2) .msbp = 20;
    (ls0001_._2) .mxncf = 10;
 

    lf0 = (ls0001_._2) .lyh + (ls0001_._2) .nyh;
    (*f)(&neq[1], t, &y[1], &rwork[lf0]);
    if (ierode_ .iero > 0) {
	return 0;
    }
    (ls0001_._2) .nfe = 1;
 

    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	rwork[i__ + (ls0001_._2) .lyh - 1] = y[i__];
    }
 

    (ls0001_._2) .nq = 1;
    (ls0001_._2) .h__ = 1.;
    ewset_(& (ls0001_._2) .n, itol, &rtol[1], &atol[1], &rwork[(ls0001_._2) .lyh], &
	    rwork[(ls0001_._2) .lewt]);
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (rwork[i__ + (ls0001_._2) .lewt - 1] <= 0.) {
	    goto L621;
	}
 
	rwork[i__ + (ls0001_._2) .lewt - 1] = 1. / rwork[i__ + (ls0001_._2) .lewt - 1];
    }
 

 
 
 
 
 
 
 

 

 
 
 
 
 
 
 
 

    if (h0 != 0.) {
	goto L180;
    }
    tdist = (d__1 = *tout - *t, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
 
    d__1 = (( *t ) >= 0 ? ( *t ) : -( *t )) , d__2 = (( *tout ) >= 0 ? ( *tout ) : -( *tout )) ;
    w0 = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    if (tdist < (ls0001_._2) .uround * 2. * w0) {
	goto L622;
    }
    tol = rtol[1];
    if (*itol <= 2) {
	goto L140;
    }
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
 
	d__1 = tol, d__2 = rtol[i__];
	tol = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    }
L140:
    if (tol > 0.) {
	goto L160;
    }
    atoli = atol[1];
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (*itol == 2 || *itol == 4) {
	    atoli = atol[i__];
	}
	ayi = (d__1 = y[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	if (ayi != 0.) {
 
	    d__1 = tol, d__2 = atoli / ayi;
	    tol = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	}
 
    }
L160:
 
    d__1 = tol, d__2 = (ls0001_._2) .uround * 100.;
    tol = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    tol = (( tol ) <= ( .001 ) ? ( tol ) : ( .001 )) ;
    sum = vmnorm_(& (ls0001_._2) .n, &rwork[lf0], &rwork[(ls0001_._2) .lewt]);
 
    d__1 = sum;
    sum = 1. / (tol * w0 * w0) + tol * (d__1 * d__1);
    h0 = 1. / sqrt(sum);
    h0 = (( h0 ) <= ( tdist ) ? ( h0 ) : ( tdist )) ;
    d__1 = *tout - *t;
    h0 = d_sign(&h0, &d__1);
 

L180:
    rh = (( h0 ) >= 0 ? ( h0 ) : -( h0 ))  * (ls0001_._2) .hmxi;
    if (rh > 1.) {
	h0 /= rh;
    }
 

    (ls0001_._2) .h__ = h0;
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	rwork[i__ + lf0 - 1] = h0 * rwork[i__ + lf0 - 1];
    }
    goto L270;
 

 
 
 
 

L200:
    (ls0001_._2) .nslast = (ls0001_._2) .nst;
    switch ((int)*itask) {
	case 1:  goto L210;
	case 2:  goto L250;
	case 3:  goto L220;
	case 4:  goto L230;
	case 5:  goto L240;
    }
L210:
    if (((ls0001_._2) .tn - *tout) * (ls0001_._2) .h__ < 0.) {
	goto L250;
    }
    intdy_(tout, &c__0, &rwork[(ls0001_._2) .lyh], & (ls0001_._2) .nyh, &y[1], &iflag);
    if (iflag != 0) {
	goto L627;
    }
    *t = *tout;
    goto L420;
L220:
    tp = (ls0001_._2) .tn - (ls0001_._2) .hu * ((ls0001_._2) .uround * 100. + 1.);
    if ((tp - *tout) * (ls0001_._2) .h__ > 0.) {
	goto L623;
    }
    if (((ls0001_._2) .tn - *tout) * (ls0001_._2) .h__ < 0.) {
	goto L250;
    }
    *t = (ls0001_._2) .tn;
    goto L400;
L230:
    tcrit = rwork[1];
    if (((ls0001_._2) .tn - tcrit) * (ls0001_._2) .h__ > 0.) {
	goto L624;
    }
    if ((tcrit - *tout) * (ls0001_._2) .h__ < 0.) {
	goto L625;
    }
    if (((ls0001_._2) .tn - *tout) * (ls0001_._2) .h__ < 0.) {
	goto L245;
    }
    intdy_(tout, &c__0, &rwork[(ls0001_._2) .lyh], & (ls0001_._2) .nyh, &y[1], &iflag);
    if (iflag != 0) {
	goto L627;
    }
    *t = *tout;
    goto L420;
L240:
    tcrit = rwork[1];
    if (((ls0001_._2) .tn - tcrit) * (ls0001_._2) .h__ > 0.) {
	goto L624;
    }
L245:
    hmx = (( (ls0001_._2) .tn ) >= 0 ? ( (ls0001_._2) .tn ) : -( (ls0001_._2) .tn ))  + (( (ls0001_._2) .h__ ) >= 0 ? ( (ls0001_._2) .h__ ) : -( (ls0001_._2) .h__ )) ;
    ihit = (d__1 = (ls0001_._2) .tn - tcrit, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= (ls0001_._2) .uround * 100. *
	     hmx;
    if (ihit) {
	*t = tcrit;
    }
    if (ihit) {
	goto L400;
    }
    tnext = (ls0001_._2) .tn + (ls0001_._2) .h__ * ((ls0001_._2) .uround * 4. + 1.);
    if ((tnext - tcrit) * (ls0001_._2) .h__ <= 0.) {
	goto L250;
    }
    (ls0001_._2) .h__ = (tcrit - (ls0001_._2) .tn) * (1. - (ls0001_._2) .uround * 4.);
 
 
    if (*istate == 2 && (ls0001_._2) .jstart != -1) {
	(ls0001_._2) .jstart = -2;
    }
 

 
 
 

 

 
 
 
 

L250:
    if ((ls0001_._2) .meth == (lsa001_._1) .mused) {
	goto L255;
    }
    if ((lsa001_._1) .insufr == 1) {
	goto L550;
    }
    if ((lsa001_._1) .insufi == 1) {
	goto L555;
    }
L255:
    if ((ls0001_._2) .nst - (ls0001_._2) .nslast >= (ls0001_._2) .mxstep) {
	goto L500;
    }
    ewset_(& (ls0001_._2) .n, itol, &rtol[1], &atol[1], &rwork[(ls0001_._2) .lyh], &
	    rwork[(ls0001_._2) .lewt]);
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (rwork[i__ + (ls0001_._2) .lewt - 1] <= 0.) {
	    goto L510;
	}
 
	rwork[i__ + (ls0001_._2) .lewt - 1] = 1. / rwork[i__ + (ls0001_._2) .lewt - 1];
    }
L270:
    tolsf = (ls0001_._2) .uround * vmnorm_(& (ls0001_._2) .n, &rwork[(ls0001_._2) .lyh], &
	    rwork[(ls0001_._2) .lewt]);
    if (tolsf <= .01) {
	goto L280;
    }
    tolsf *= 200.;
    if ((ls0001_._2) .nst == 0) {
	goto L626;
    }
    goto L520;
L280:
    if ((ls0001_._2) .tn + (ls0001_._2) .h__ != (ls0001_._2) .tn) {
	goto L290;
    }
    ++ (ls0001_._2) .nhnil;
    if ((ls0001_._2) .nhnil > (ls0001_._2) .mxhnil) {
	goto L290;
    }
    xerrwv_("lsoda--  caution... t (=r1) and h (=r2) are", &c__50, &c__101, &
	    c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 43L);
    xerrwv_("     such that t + h = t at next step", &c__60, &c__101, &c__1, &
	    c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 37L);
    xerrwv_("      (h = pas). integration continues", &c__50, &c__101, &c__1, 
	    &c__0, &c__0, &c__0, &c__2, & (ls0001_._2) .tn, & (ls0001_._2) .h__, 38L);
    if ((ls0001_._2) .nhnil < (ls0001_._2) .mxhnil) {
	goto L290;
    }
    xerrwv_("lsoda--  previous message precedent given i1 times", &c__50, &
	    c__102, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 50L);
    xerrwv_("     will no more be repeated", &c__50, &c__102, &c__1, &c__1, &
	    (ls0001_._2) .mxhnil, &c__0, &c__0, &c_b61, &c_b61, 29L);
L290:
 

 

 

    stoda_(&neq[1], &y[1], &rwork[(ls0001_._2) .lyh], & (ls0001_._2) .nyh, &rwork[
	    (ls0001_._2) .lyh], &rwork[(ls0001_._2) .lewt], &rwork[(ls0001_._2) .lsavf], &
	    rwork[(ls0001_._2) .lacor], &rwork[(ls0001_._2) .lwm], &iwork[(ls0001_._2) .liwm]
	    , f, jac, prja_, solsy_);
    if (ierode_ .iero > 0) {
	return 0;
    }
    kgo = 1 - (ls0001_._2) .kflag;
    switch ((int)kgo) {
	case 1:  goto L300;
	case 2:  goto L530;
	case 3:  goto L540;
    }
 

 
 
 
 
 
 
 
 

L300:
    (ls0001_._2) .init = 1;
    if ((ls0001_._2) .meth == (lsa001_._1) .mused) {
	goto L310;
    }
    (lsa001_._1) .tsw = (ls0001_._2) .tn;
    (ls0001_._2) .maxord = (lsa001_._1) .mxordn;
    if ((ls0001_._2) .meth == 2) {
	(ls0001_._2) .maxord = (lsa001_._1) .mxords;
    }
    if ((ls0001_._2) .meth == 2) {
	rwork[(ls0001_._2) .lwm] = sqrt((ls0001_._2) .uround);
    }
    (lsa001_._1) .insufr = (( (lsa001_._1) .insufr ) <= ( 1 ) ? ( (lsa001_._1) .insufr ) : ( 1 )) ;
    (lsa001_._1) .insufi = (( (lsa001_._1) .insufi ) <= ( 1 ) ? ( (lsa001_._1) .insufi ) : ( 1 )) ;
    (ls0001_._2) .jstart = -1;
    if ((lsa001_._1) .ixpr == 0) {
	goto L310;
    }
    if ((ls0001_._2) .meth == 2) {
	xerrwv_("lsoda-- using stiff method  ", &c__60, &c__105, &c__1, &c__0,
		 &c__0, &c__0, &c__0, &c_b61, &c_b61, 28L);
    }
    if ((ls0001_._2) .meth == 1) {
	xerrwv_("lsoda-- using adams formulas (non stiff)", &c__60, &c__106, &
		c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 40L);
    }
    xerrwv_("     a t = r1, trial with step h = r2,  step nst = i1 ", &c__60, 
	    &c__107, &c__1, &c__1, & (ls0001_._2) .nst, &c__0, &c__2, & (ls0001_._2) .tn, 
	    & (ls0001_._2) .h__, 54L);
L310:
    switch ((int)*itask) {
	case 1:  goto L320;
	case 2:  goto L400;
	case 3:  goto L330;
	case 4:  goto L340;
	case 5:  goto L350;
    }
 

L320:
    if (((ls0001_._2) .tn - *tout) * (ls0001_._2) .h__ < 0.) {
	goto L250;
    }
    intdy_(tout, &c__0, &rwork[(ls0001_._2) .lyh], & (ls0001_._2) .nyh, &y[1], &iflag);
    *t = *tout;
    goto L420;
 

L330:
    if (((ls0001_._2) .tn - *tout) * (ls0001_._2) .h__ >= 0.) {
	goto L400;
    }
    goto L250;
 

L340:
    if (((ls0001_._2) .tn - *tout) * (ls0001_._2) .h__ < 0.) {
	goto L345;
    }
    intdy_(tout, &c__0, &rwork[(ls0001_._2) .lyh], & (ls0001_._2) .nyh, &y[1], &iflag);
    *t = *tout;
    goto L420;
L345:
    hmx = (( (ls0001_._2) .tn ) >= 0 ? ( (ls0001_._2) .tn ) : -( (ls0001_._2) .tn ))  + (( (ls0001_._2) .h__ ) >= 0 ? ( (ls0001_._2) .h__ ) : -( (ls0001_._2) .h__ )) ;
    ihit = (d__1 = (ls0001_._2) .tn - tcrit, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= (ls0001_._2) .uround * 100. *
	     hmx;
    if (ihit) {
	goto L400;
    }
    tnext = (ls0001_._2) .tn + (ls0001_._2) .h__ * ((ls0001_._2) .uround * 4. + 1.);
    if ((tnext - tcrit) * (ls0001_._2) .h__ <= 0.) {
	goto L250;
    }
    (ls0001_._2) .h__ = (tcrit - (ls0001_._2) .tn) * (1. - (ls0001_._2) .uround * 4.);
 
 
    if ((ls0001_._2) .jstart != -1) {
	(ls0001_._2) .jstart = -2;
    }
    goto L250;
 

L350:
    hmx = (( (ls0001_._2) .tn ) >= 0 ? ( (ls0001_._2) .tn ) : -( (ls0001_._2) .tn ))  + (( (ls0001_._2) .h__ ) >= 0 ? ( (ls0001_._2) .h__ ) : -( (ls0001_._2) .h__ )) ;
    ihit = (d__1 = (ls0001_._2) .tn - tcrit, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= (ls0001_._2) .uround * 100. *
	     hmx;
 

 
 
 
 
 
 
 
 

L400:
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	y[i__] = rwork[i__ + (ls0001_._2) .lyh - 1];
    }
    *t = (ls0001_._2) .tn;
    if (*itask != 4 && *itask != 5) {
	goto L420;
    }
    if (ihit) {
	*t = tcrit;
    }
L420:
    *istate = 2;
    (ls0001_._2) .illin = 0;
    rwork[11] = (ls0001_._2) .hu;
    rwork[12] = (ls0001_._2) .h__;
    rwork[13] = (ls0001_._2) .tn;
    rwork[15] = (lsa001_._1) .tsw;
    iwork[11] = (ls0001_._2) .nst;
    iwork[12] = (ls0001_._2) .nfe;
    iwork[13] = (ls0001_._2) .nje;
    iwork[14] = (ls0001_._2) .nqu;
    iwork[15] = (ls0001_._2) .nq;
    iwork[19] = (lsa001_._1) .mused;
    iwork[20] = (ls0001_._2) .meth;
    return 0;

L430:
    ++ (ls0001_._2) .ntrep;
    if ((ls0001_._2) .ntrep < 5) {
	return 0;
    }
    xerrwv_("lsoda--  repeated calls with istate = 1 and tout = t (=r1)  ", &
	    c__60, &c__301, &c__1, &c__0, &c__0, &c__0, &c__1, t, &c_b61, 60L)
	    ;
    goto L800;
 

 
 
 
 

 
 
 
 

 

L500:
    xerrwv_("lsoda--  at t (=r1), mxstep (=i1) steps   ", &c__50, &c__201, &
	    c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 42L);
    xerrwv_("needed before reaching totu", &c__50, &c__201, &c__1, &c__1, &
	    (ls0001_._2) .mxstep, &c__0, &c__1, & (ls0001_._2) .tn, &c_b61, 27L);
    *istate = -1;
    goto L580;
 

L510:
    ewti = rwork[(ls0001_._2) .lewt + i__ - 1];
    xerrwv_("lsoda--  at t (=r1), ewt(i1) is r2 .le. 0.", &c__50, &c__202, &
	    c__1, &c__1, &i__, &c__0, &c__2, & (ls0001_._2) .tn, &ewti, 42L);
    *istate = -6;
    goto L580;
 

L520:
    xerrwv_("lsoda--  a t (=r1),  too much precision required", &c__50, &
	    c__203, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 48L);
    xerrwv_(" with respect to epsilon  tolsf (=r2) ", &c__50, &c__203, &c__1, 
	    &c__0, &c__0, &c__0, &c__2, & (ls0001_._2) .tn, &tolsf, 38L);
    rwork[14] = tolsf;
    *istate = -2;
    goto L580;
 

L530:
    xerrwv_("lsoda--  at t(=r1) and for step h(=r2), error", &c__50, &c__204, 
	    &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 45L);
    xerrwv_("      failed with abs(h) = hmin", &c__50, &c__204, &c__1, &c__0, 
	    &c__0, &c__0, &c__2, & (ls0001_._2) .tn, & (ls0001_._2) .h__, 31L);
    *istate = -4;
    goto L560;
 

L540:
    xerrwv_("lsoda--  at t (=r1) and step h (=r2), the", &c__50, &c__205, &
	    c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 41L);
    xerrwv_("   corrector does not converge ", &c__50, &c__205, &c__1, &c__0, 
	    &c__0, &c__0, &c__0, &c_b61, &c_b61, 31L);
    xerrwv_("      with abs(h) = hmin   ", &c__30, &c__205, &c__1, &c__0, &
	    c__0, &c__0, &c__2, & (ls0001_._2) .tn, & (ls0001_._2) .h__, 27L);
    *istate = -5;
    goto L560;
 

L550:
    xerrwv_("lsoda--  a t(=r1), rwork too small", &c__50, &c__206, &c__1, &
	    c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 34L);
    xerrwv_("        to continue. integration ok.", &c__60, &c__206, &c__1, &
	    c__0, &c__0, &c__0, &c__1, & (ls0001_._2) .tn, &c_b61, 36L);
    *istate = -7;
    goto L580;
 

L555:
    xerrwv_("lsoda--  at t(=r1)  iwork too small", &c__50, &c__207, &c__1, &
	    c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 35L);
    xerrwv_("       to continue.  integration ok.", &c__60, &c__207, &c__1, &
	    c__0, &c__0, &c__0, &c__1, & (ls0001_._2) .tn, &c_b61, 36L);
    *istate = -7;
    goto L580;
 

L560:
    big = 0.;
    imxer = 1;
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	size = (d__1 = rwork[i__ + (ls0001_._2) .lacor - 1] * rwork[i__ + 
		(ls0001_._2) .lewt - 1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	if (big >= size) {
	    goto L570;
	}
	big = size;
	imxer = i__;
L570:
	;
    }
    iwork[16] = imxer;
 

L580:
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	y[i__] = rwork[i__ + (ls0001_._2) .lyh - 1];
    }
    *t = (ls0001_._2) .tn;
    (ls0001_._2) .illin = 0;
    rwork[11] = (ls0001_._2) .hu;
    rwork[12] = (ls0001_._2) .h__;
    rwork[13] = (ls0001_._2) .tn;
    rwork[15] = (lsa001_._1) .tsw;
    iwork[11] = (ls0001_._2) .nst;
    iwork[12] = (ls0001_._2) .nfe;
    iwork[13] = (ls0001_._2) .nje;
    iwork[14] = (ls0001_._2) .nqu;
    iwork[15] = (ls0001_._2) .nq;
    iwork[19] = (lsa001_._1) .mused;
    iwork[20] = (ls0001_._2) .meth;
    return 0;
 

 
 
 
 
 
 
 

L601:
    xerrwv_("lsoda--  istate (=i1) illegal ", &c__30, &c__1, &c__1, &c__1, 
	    istate, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L602:
    xerrwv_("lsoda--  itask (=i1) illegal  ", &c__30, &c__2, &c__1, &c__1, 
	    itask, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L603:
    xerrwv_("lsoda--  istate .gt. 1 ", &c__50, &c__3, &c__1, &c__0, &c__0, &
	    c__0, &c__0, &c_b61, &c_b61, 23L);
    goto L700;
L604:
    xerrwv_("lsoda--  neq (=i1) .lt. 1     ", &c__30, &c__4, &c__1, &c__1, &
	    neq[1], &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L605:
    xerrwv_("lsoda--  istate and neq  increased from i1 to i2", &c__50, &c__5,
	     &c__1, &c__2, & (ls0001_._2) .n, &neq[1], &c__0, &c_b61, &c_b61, 48L);
    goto L700;
L606:
    xerrwv_("lsoda--  itol (=i1) illegal   ", &c__30, &c__6, &c__1, &c__1, 
	    itol, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L607:
    xerrwv_("lsoda--  iopt (=i1) illegal   ", &c__30, &c__7, &c__1, &c__1, 
	    iopt, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L608:
    xerrwv_("lsoda--  jt (=i1) illegal     ", &c__30, &c__8, &c__1, &c__1, jt,
	     &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L609:
    xerrwv_("lsoda--  ml (=i1) illegal.. .lt.0 or .ge.neq (=i2)", &c__50, &
	    c__9, &c__1, &c__2, &ml, &neq[1], &c__0, &c_b61, &c_b61, 50L);
    goto L700;
L610:
    xerrwv_("lsoda--  mu (=i1) illegal.. .lt.0 or .ge.neq (=i2)", &c__50, &
	    c__10, &c__1, &c__2, &mu, &neq[1], &c__0, &c_b61, &c_b61, 50L);
    goto L700;
L611:
    xerrwv_("lsoda--  ixpr (=i1) illegal   ", &c__30, &c__11, &c__1, &c__1, &
	    (lsa001_._1) .ixpr, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L612:
    xerrwv_("lsoda--  mxstep (=i1) .lt. 0  ", &c__30, &c__12, &c__1, &c__1, &
	    (ls0001_._2) .mxstep, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L613:
    xerrwv_("lsoda--  mxhnil (=i1) .lt. 0  ", &c__30, &c__13, &c__1, &c__1, &
	    (ls0001_._2) .mxhnil, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L614:
    xerrwv_("lsoda--  tout (=r1)  .gt.  t (=r2)      ", &c__40, &c__14, &c__1,
	     &c__0, &c__0, &c__0, &c__2, tout, t, 40L);
    xerrwv_("      h0 (=r1) gives direction", &c__50, &c__14, &c__1, &c__0, &
	    c__0, &c__0, &c__1, &h0, &c_b61, 30L);
    goto L700;
L615:
    xerrwv_("lsoda--  hmax (=r1) .lt. 0.0  ", &c__30, &c__15, &c__1, &c__0, &
	    c__0, &c__0, &c__1, &hmax, &c_b61, 30L);
    goto L700;
L616:
    xerrwv_("lsoda--  hmin (=r1) .lt. 0.0  ", &c__30, &c__16, &c__1, &c__0, &
	    c__0, &c__0, &c__1, & (ls0001_._2) .hmin, &c_b61, 30L);
    goto L700;
L617:
    xerrwv_("lsoda-- required size for iwork (i1) larger than i2", &c__60, &
	    c__17, &c__1, &c__2, &lenrw, lrw, &c__0, &c_b61, &c_b61, 51L);
    goto L700;
L618:
    xerrwv_("lsoda-- required size for iwork (=i1) larger than i2", &c__60, &
	    c__18, &c__1, &c__2, &leniw, liw, &c__0, &c_b61, &c_b61, 52L);
    goto L700;
L619:
    xerrwv_("lsoda--  rtol(i1) is r1 .lt. 0.0        ", &c__40, &c__19, &c__1,
	     &c__1, &i__, &c__0, &c__1, &rtoli, &c_b61, 40L);
    goto L700;
L620:
    xerrwv_("lsoda--  atol(i1) is r1 .lt. 0.0        ", &c__40, &c__20, &c__1,
	     &c__1, &i__, &c__0, &c__1, &atoli, &c_b61, 40L);
    goto L700;
L621:
    ewti = rwork[(ls0001_._2) .lewt + i__ - 1];
    xerrwv_("lsoda--  ewt(i1) is r1 .le. 0.0         ", &c__40, &c__21, &c__1,
	     &c__1, &i__, &c__0, &c__1, &ewti, &c_b61, 40L);
    goto L700;
L622:
    xerrwv_("lsoda--  tout (=r1) too close to t(=r2) to integrate", &c__60, &
	    c__22, &c__1, &c__0, &c__0, &c__0, &c__2, tout, t, 52L);
    goto L700;
L623:
    xerrwv_("lsoda--  itask = i1 and tout (=r1) .gt. tcur - hu (= r2)  ", &
	    c__60, &c__23, &c__1, &c__1, itask, &c__0, &c__2, tout, &tp, 58L);
    goto L700;
L624:
    xerrwv_("lsoda--  itask = 4 or 5 and tcrit (=r1) .gt. tcur (=r2)   ", &
	    c__60, &c__24, &c__1, &c__0, &c__0, &c__0, &c__2, &tcrit, &
	    (ls0001_._2) .tn, 58L);
    goto L700;
L625:
    xerrwv_("lsoda--  itask = 4 or 5 and tcrit (=r1)  .gt.  tout (=r2)", &
	    c__60, &c__25, &c__1, &c__0, &c__0, &c__0, &c__2, &tcrit, tout, 
	    57L);
    goto L700;
L626:
    xerrwv_("lsoda-- precision asked ", &c__50, &c__26, &c__1, &c__0, &c__0, &
	    c__0, &c__0, &c_b61, &c_b61, 24L);
    xerrwv_("too accurate. tolsf (=r1)", &c__60, &c__26, &c__1, &c__0, &c__0, 
	    &c__0, &c__1, &tolsf, &c_b61, 25L);
    rwork[14] = tolsf;
    goto L700;
L627:
    xerrwv_("lsoda--  problems due to intdy. itask=i1,tout=r1", &c__50, &
	    c__27, &c__1, &c__1, itask, &c__0, &c__1, tout, &c_b61, 48L);
    goto L700;
L628:
    xerrwv_("lsoda--  mxordn (=i1) .lt. 0  ", &c__30, &c__28, &c__1, &c__1, &
	    (lsa001_._1) .mxordn, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L629:
    xerrwv_("lsoda--  mxords (=i1) .lt. 0  ", &c__30, &c__29, &c__1, &c__1, &
	    (lsa001_._1) .mxords, &c__0, &c__0, &c_b61, &c_b61, 30L);

L700:
    if ((ls0001_._2) .illin == 5) {
	goto L710;
    }
    ++ (ls0001_._2) .illin;
    *istate = -3;
    return 0;
L710:
    xerrwv_("lsoda--  incorrect input", &c__50, &c__302, &c__1, &c__0, &c__0, 
	    &c__0, &c__0, &c_b61, &c_b61, 24L);

L800:
    xerrwv_("lsoda-- infinite loop? ", &c__50, &c__303, &c__2, &c__0, &c__0, &
	    c__0, &c__0, &c_b61, &c_b61, 23L);
    return 0;
 

}  

  int lsodar_(f, neq, y, t, tout, itol, rtol, atol, itask, 
	istate, iopt, rwork, lrw, iwork, liw, jac, jt, g, ng, jroot)
  int (*f) ();
integer *neq;
doublereal *y, *t, *tout;
integer *itol;
doublereal *rtol, *atol;
integer *itask, *istate, *iopt;
doublereal *rwork;
integer *lrw, *iwork, *liw;
  int (*jac) ();
integer *jt;
  int (*g) ();
integer *ng, *jroot;
{
     

    static integer mord[2] = { 12,5 };
    static integer mxstp0 = 500;
    static integer mxhnl0 = 10;

     
    integer i__1;
    doublereal d__1, d__2;

     
    double sqrt(), d_sign();

     
    extern   int prja_();
    static doublereal hmax;
    static integer irfp;
    static logical ihit;
    static doublereal ewti, size;
    static integer len1c, len1n, len1s, i__, iflag;
    extern   int rchek_();
    static doublereal atoli;
    static integer leniw, lenwm, lenyh, imxer;
    static doublereal tcrit;
    extern   int dcopy_();
    static integer lenrw, i1, i2;
    static doublereal h0, rtoli, tdist, tnext, tolsf, w0;
    extern   int solsy_();
    extern   int ewset_(), intdy_(), stoda_();
    extern doublereal dlamch_();
    static integer ml;
    static doublereal rh;
    static integer mu;
    static doublereal tp;
    static integer leniwc, lenrwc, lf0, lenrwn, lenrws, lyhnew;
    extern doublereal vmnorm_();
    extern   int xerrwv_();
    static doublereal big;
    static integer kgo;
    static doublereal ayi, hmx;
    static integer irt;
    static doublereal tol, sum;
    static integer len1, len2;
    --neq;
    --y;
    --rtol;
    --atol;
    --rwork;
    --iwork;
    --jroot;
    if (*istate < 1 || *istate > 3) {
	goto L601;
    }
    if (*itask < 1 || *itask > 5) {
	goto L602;
    }
    (lsr001_._1) .itaskc = *itask;
    if (*istate == 1) {
	goto L10;
    }
    if ((ls0001_._2) .init == 0) {
	goto L603;
    }
    if (*istate == 2) {
	goto L200;
    }
    goto L20;
L10:
    (ls0001_._2) .init = 0;
    if (*tout == *t) {
	goto L430;
    }
L20:
    (ls0001_._2) .ntrep = 0;
 

 
 
 
 

 
 
 

    if (neq[1] <= 0) {
	goto L604;
    }
    if (*istate == 1) {
	goto L25;
    }
    if (neq[1] > (ls0001_._2) .n) {
	goto L605;
    }
L25:
    (ls0001_._2) .n = neq[1];
    if (*itol < 1 || *itol > 4) {
	goto L606;
    }
    if (*iopt < 0 || *iopt > 1) {
	goto L607;
    }
    if (*jt == 3 || *jt < 1 || *jt > 5) {
	goto L608;
    }
    (lsa001_._1) .jtyp = *jt;
    if (*jt <= 2) {
	goto L30;
    }
    ml = iwork[1];
    mu = iwork[2];
    if (ml < 0 || ml >= (ls0001_._2) .n) {
	goto L609;
    }
    if (mu < 0 || mu >= (ls0001_._2) .n) {
	goto L610;
    }
L30:
    if (*ng < 0) {
	goto L630;
    }
    if (*istate == 1) {
	goto L35;
    }
    if ((lsr001_._1) .irfnd == 0 && *ng != (lsr001_._1) .ngc) {
	goto L631;
    }
L35:
    (lsr001_._1) .ngc = *ng;
 

    if (*iopt == 1) {
	goto L40;
    }
    (lsa001_._1) .ixpr = 0;
    (ls0001_._2) .mxstep = mxstp0;
    (ls0001_._2) .mxhnil = mxhnl0;
    (ls0001_._2) .hmxi = 0.;
    (ls0001_._2) .hmin = 0.;
    if (*istate != 1) {
	goto L60;
    }
    h0 = 0.;
    (lsa001_._1) .mxordn = mord[0];
    (lsa001_._1) .mxords = mord[1];
    goto L60;
L40:
    (lsa001_._1) .ixpr = iwork[5];
    if ((lsa001_._1) .ixpr < 0 || (lsa001_._1) .ixpr > 1) {
	goto L611;
    }
    (ls0001_._2) .mxstep = iwork[6];
    if ((ls0001_._2) .mxstep < 0) {
	goto L612;
    }
    if ((ls0001_._2) .mxstep == 0) {
	(ls0001_._2) .mxstep = mxstp0;
    }
    (ls0001_._2) .mxhnil = iwork[7];
    if ((ls0001_._2) .mxhnil < 0) {
	goto L613;
    }
    if ((ls0001_._2) .mxhnil == 0) {
	(ls0001_._2) .mxhnil = mxhnl0;
    }
    if (*istate != 1) {
	goto L50;
    }
    h0 = rwork[5];
    (lsa001_._1) .mxordn = iwork[8];
    if ((lsa001_._1) .mxordn < 0) {
	goto L628;
    }
    if ((lsa001_._1) .mxordn == 0) {
	(lsa001_._1) .mxordn = 100;
    }
    (lsa001_._1) .mxordn = (( (lsa001_._1) .mxordn ) <= ( mord[0] ) ? ( (lsa001_._1) .mxordn ) : ( mord[0] )) ;
    (lsa001_._1) .mxords = iwork[9];
    if ((lsa001_._1) .mxords < 0) {
	goto L629;
    }
    if ((lsa001_._1) .mxords == 0) {
	(lsa001_._1) .mxords = 100;
    }
    (lsa001_._1) .mxords = (( (lsa001_._1) .mxords ) <= ( mord[1] ) ? ( (lsa001_._1) .mxords ) : ( mord[1] )) ;
    if ((*tout - *t) * h0 < 0.) {
	goto L614;
    }
L50:
    hmax = rwork[6];
    if (hmax < 0.) {
	goto L615;
    }
    (ls0001_._2) .hmxi = 0.;
    if (hmax > 0.) {
	(ls0001_._2) .hmxi = 1. / hmax;
    }
    (ls0001_._2) .hmin = rwork[7];
    if ((ls0001_._2) .hmin < 0.) {
	goto L616;
    }
 

 
 
 
 
 
 
 
 
 
 
 
 
 

L60:
    if (*istate == 1) {
	(ls0001_._2) .meth = 1;
    }
    if (*istate == 1) {
	(ls0001_._2) .nyh = (ls0001_._2) .n;
    }
    (lsr001_._1) .lg0 = 21;
    (lsr001_._1) .lg1 = (lsr001_._1) .lg0 + *ng;
    (lsr001_._1) .lgx = (lsr001_._1) .lg1 + *ng;
    lyhnew = (lsr001_._1) .lgx + *ng;
    if (*istate == 1) {
	(ls0001_._2) .lyh = lyhnew;
    }
    if (lyhnew == (ls0001_._2) .lyh) {
	goto L62;
    }
 

    lenyh = (ls0001_._2) .l * (ls0001_._2) .nyh;
    if (*lrw < lyhnew - 1 + lenyh) {
	goto L62;
    }
    i1 = 1;
    if (lyhnew > (ls0001_._2) .lyh) {
	i1 = -1;
    }
    dcopy_(&lenyh, &rwork[(ls0001_._2) .lyh], &i1, &rwork[lyhnew], &i1);
    (ls0001_._2) .lyh = lyhnew;
L62:
    len1n = lyhnew - 1 + ((lsa001_._1) .mxordn + 1) * (ls0001_._2) .nyh;
    len1s = lyhnew - 1 + ((lsa001_._1) .mxords + 1) * (ls0001_._2) .nyh;
    (ls0001_._2) .lwm = len1s + 1;
    if (*jt <= 2) {
	lenwm = (ls0001_._2) .n * (ls0001_._2) .n + 2;
    }
    if (*jt >= 4) {
	lenwm = ((ml << 1) + mu + 1) * (ls0001_._2) .n + 2;
    }
    len1s += lenwm;
    len1c = len1n;
    if ((ls0001_._2) .meth == 2) {
	len1c = len1s;
    }
    len1 = (( len1n ) >= ( len1s ) ? ( len1n ) : ( len1s )) ;
    len2 = (ls0001_._2) .n * 3;
    lenrw = len1 + len2;
    lenrwn = len1n + len2;
    lenrws = len1s + len2;
    lenrwc = len1c + len2;
    iwork[17] = lenrw;
    (ls0001_._2) .liwm = 1;
    leniw = (ls0001_._2) .n + 20;
    leniwc = 20;
    if ((ls0001_._2) .meth == 2) {
	leniwc = leniw;
    }
    iwork[18] = leniw;
    if (*istate == 1 && *lrw < lenrwc) {
	goto L617;
    }
    if (*istate == 1 && *liw < leniwc) {
	goto L618;
    }
    if (*istate == 3 && *lrw < lenrwc) {
	goto L550;
    }
    if (*istate == 3 && *liw < leniwc) {
	goto L555;
    }
    (ls0001_._2) .lewt = len1 + 1;
    (lsa001_._1) .insufr = 0;
    if (*lrw >= lenrw) {
	goto L65;
    }
    (lsa001_._1) .insufr = 2;
    (ls0001_._2) .lewt = len1c + 1;
    xerrwv_("lsodar-  warning.. rwork length is sufficient for now, but  ", &
	    c__60, &c__103, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61,
	     60L);
    xerrwv_("      may not be later.  integration will proceed anyway.   ", &
	    c__60, &c__103, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61,
	     60L);
    xerrwv_("      length needed is lenrw = i1, while lrw = i2.", &c__50, &
	    c__103, &c__1, &c__2, &lenrw, lrw, &c__0, &c_b61, &c_b61, 50L);
L65:
    (ls0001_._2) .lsavf = (ls0001_._2) .lewt + (ls0001_._2) .n;
    (ls0001_._2) .lacor = (ls0001_._2) .lsavf + (ls0001_._2) .n;
    (lsa001_._1) .insufi = 0;
    if (*liw >= leniw) {
	goto L70;
    }
    (lsa001_._1) .insufi = 2;
    xerrwv_("lsodar-  warning.. iwork length is sufficient for now, but  ", &
	    c__60, &c__104, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61,
	     60L);
    xerrwv_("      may not be later.  integration will proceed anyway.   ", &
	    c__60, &c__104, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61,
	     60L);
    xerrwv_("      length needed is leniw = i1, while liw = i2.", &c__50, &
	    c__104, &c__1, &c__2, &leniw, liw, &c__0, &c_b61, &c_b61, 50L);
L70:
 

    rtoli = rtol[1];
    atoli = atol[1];
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (*itol >= 3) {
	    rtoli = rtol[i__];
	}
	if (*itol == 2 || *itol == 4) {
	    atoli = atol[i__];
	}
	if (rtoli < 0.) {
	    goto L619;
	}
	if (atoli < 0.) {
	    goto L620;
	}
 
    }
    if (*istate == 1) {
	goto L100;
    }
 

    (ls0001_._2) .jstart = -1;
    if ((ls0001_._2) .n == (ls0001_._2) .nyh) {
	goto L200;
    }
 

    i1 = (ls0001_._2) .lyh + (ls0001_._2) .l * (ls0001_._2) .nyh;
    i2 = (ls0001_._2) .lyh + ((ls0001_._2) .maxord + 1) * (ls0001_._2) .nyh - 1;
    if (i1 > i2) {
	goto L200;
    }
    i__1 = i2;
    for (i__ = i1; i__ <= i__1; ++i__) {
 
	rwork[i__] = 0.;
    }
    goto L200;
 

 
 
 
 
 
 

L100:
    (ls0001_._2) .uround = dlamch_("p", 1L);
    (ls0001_._2) .tn = *t;
    (lsa001_._1) .tsw = *t;
    (ls0001_._2) .maxord = (lsa001_._1) .mxordn;
    if (*itask != 4 && *itask != 5) {
	goto L110;
    }
    tcrit = rwork[1];
    if ((tcrit - *tout) * (*tout - *t) < 0.) {
	goto L625;
    }
    if (h0 != 0. && (*t + h0 - tcrit) * h0 > 0.) {
	h0 = tcrit - *t;
    }
L110:
    (ls0001_._2) .jstart = 0;
    (ls0001_._2) .nhnil = 0;
    (ls0001_._2) .nst = 0;
    (ls0001_._2) .nje = 0;
    (ls0001_._2) .nslast = 0;
    (ls0001_._2) .hu = 0.;
    (ls0001_._2) .nqu = 0;
    (lsa001_._1) .mused = 0;
    (ls0001_._2) .miter = 0;
    (ls0001_._2) .ccmax = .3;
    (ls0001_._2) .maxcor = 3;
    (ls0001_._2) .msbp = 20;
    (ls0001_._2) .mxncf = 10;
 

    lf0 = (ls0001_._2) .lyh + (ls0001_._2) .nyh;
    (*f)(&neq[1], t, &y[1], &rwork[lf0]);
    if (ierode_ .iero > 0) {
	return 0;
    }
    (ls0001_._2) .nfe = 1;
 

    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	rwork[i__ + (ls0001_._2) .lyh - 1] = y[i__];
    }
 

    (ls0001_._2) .nq = 1;
    (ls0001_._2) .h__ = 1.;
    ewset_(& (ls0001_._2) .n, itol, &rtol[1], &atol[1], &rwork[(ls0001_._2) .lyh], &
	    rwork[(ls0001_._2) .lewt]);
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (rwork[i__ + (ls0001_._2) .lewt - 1] <= 0.) {
	    goto L621;
	}
 
	rwork[i__ + (ls0001_._2) .lewt - 1] = 1. / rwork[i__ + (ls0001_._2) .lewt - 1];
    }
 

 
 
 
 
 
 
 

 

 
 
 
 
 
 
 
 

    if (h0 != 0.) {
	goto L180;
    }
    tdist = (d__1 = *tout - *t, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
 
    d__1 = (( *t ) >= 0 ? ( *t ) : -( *t )) , d__2 = (( *tout ) >= 0 ? ( *tout ) : -( *tout )) ;
    w0 = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    if (tdist < (ls0001_._2) .uround * 2. * w0) {
	goto L622;
    }
    tol = rtol[1];
    if (*itol <= 2) {
	goto L140;
    }
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
 
	d__1 = tol, d__2 = rtol[i__];
	tol = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    }
L140:
    if (tol > 0.) {
	goto L160;
    }
    atoli = atol[1];
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (*itol == 2 || *itol == 4) {
	    atoli = atol[i__];
	}
	ayi = (d__1 = y[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	if (ayi != 0.) {
 
	    d__1 = tol, d__2 = atoli / ayi;
	    tol = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	}
 
    }
L160:
 
    d__1 = tol, d__2 = (ls0001_._2) .uround * 100.;
    tol = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    tol = (( tol ) <= ( .001 ) ? ( tol ) : ( .001 )) ;
    sum = vmnorm_(& (ls0001_._2) .n, &rwork[lf0], &rwork[(ls0001_._2) .lewt]);
 
    d__1 = sum;
    sum = 1. / (tol * w0 * w0) + tol * (d__1 * d__1);
    h0 = 1. / sqrt(sum);
    h0 = (( h0 ) <= ( tdist ) ? ( h0 ) : ( tdist )) ;
    d__1 = *tout - *t;
    h0 = d_sign(&h0, &d__1);
 

L180:
    rh = (( h0 ) >= 0 ? ( h0 ) : -( h0 ))  * (ls0001_._2) .hmxi;
    if (rh > 1.) {
	h0 /= rh;
    }
 

    (ls0001_._2) .h__ = h0;
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	rwork[i__ + lf0 - 1] = h0 * rwork[i__ + lf0 - 1];
    }

 

    (lsr001_._1) .irfnd = 0;
    (lsr001_._1) .toutc = *tout;
    if ((lsr001_._1) .ngc == 0) {
	goto L270;
    }
    rchek_(&c__1, g, &neq[1], &y[1], &rwork[(ls0001_._2) .lyh], & (ls0001_._2) .nyh, &
	    rwork[(lsr001_._1) .lg0], &rwork[(lsr001_._1) .lg1], &rwork[(lsr001_._1) .lgx], &
	    jroot[1], &irt);
    if (ierode_ .iero > 0) {
	return 0;
    }
    if (irt == 0) {
	goto L270;
    }
    goto L632;
 

 
 
 
 
 
 
 
 

L200:
    (ls0001_._2) .nslast = (ls0001_._2) .nst;

    irfp = (lsr001_._1) .irfnd;
    if ((lsr001_._1) .ngc == 0) {
	goto L205;
    }
    if (*itask == 1 || *itask == 4) {
	(lsr001_._1) .toutc = *tout;
    }
    rchek_(&c__2, g, &neq[1], &y[1], &rwork[(ls0001_._2) .lyh], & (ls0001_._2) .nyh, &
	    rwork[(lsr001_._1) .lg0], &rwork[(lsr001_._1) .lg1], &rwork[(lsr001_._1) .lgx], &
	    jroot[1], &irt);
    if (ierode_ .iero > 0) {
	return 0;
    }
    if (irt != 1) {
	goto L205;
    }
    (lsr001_._1) .irfnd = 1;
    *istate = 3;
    *t = (lsr001_._1) .t0;
    goto L425;
L205:
    (lsr001_._1) .irfnd = 0;
    if (irfp == 1 && (lsr001_._1) .tlast != (ls0001_._2) .tn && *itask == 2) {
	goto L400;
    }

    switch ((int)*itask) {
	case 1:  goto L210;
	case 2:  goto L250;
	case 3:  goto L220;
	case 4:  goto L230;
	case 5:  goto L240;
    }
L210:
    if (((ls0001_._2) .tn - *tout) * (ls0001_._2) .h__ < 0.) {
	goto L250;
    }
    intdy_(tout, &c__0, &rwork[(ls0001_._2) .lyh], & (ls0001_._2) .nyh, &y[1], &iflag);
    if (iflag != 0) {
	goto L627;
    }
    *t = *tout;
    goto L420;
L220:
    tp = (ls0001_._2) .tn - (ls0001_._2) .hu * ((ls0001_._2) .uround * 100. + 1.);
    if ((tp - *tout) * (ls0001_._2) .h__ > 0.) {
	goto L623;
    }
    if (((ls0001_._2) .tn - *tout) * (ls0001_._2) .h__ < 0.) {
	goto L250;
    }
    *t = (ls0001_._2) .tn;
    goto L400;
L230:
    tcrit = rwork[1];
    if (((ls0001_._2) .tn - tcrit) * (ls0001_._2) .h__ > 0.) {
	goto L624;
    }
    if ((tcrit - *tout) * (ls0001_._2) .h__ < 0.) {
	goto L625;
    }
    if (((ls0001_._2) .tn - *tout) * (ls0001_._2) .h__ < 0.) {
	goto L245;
    }
    intdy_(tout, &c__0, &rwork[(ls0001_._2) .lyh], & (ls0001_._2) .nyh, &y[1], &iflag);
    if (iflag != 0) {
	goto L627;
    }
    *t = *tout;
    goto L420;
L240:
    tcrit = rwork[1];
    if (((ls0001_._2) .tn - tcrit) * (ls0001_._2) .h__ > 0.) {
	goto L624;
    }
L245:
    hmx = (( (ls0001_._2) .tn ) >= 0 ? ( (ls0001_._2) .tn ) : -( (ls0001_._2) .tn ))  + (( (ls0001_._2) .h__ ) >= 0 ? ( (ls0001_._2) .h__ ) : -( (ls0001_._2) .h__ )) ;
    ihit = (d__1 = (ls0001_._2) .tn - tcrit, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= (ls0001_._2) .uround * 100. *
	     hmx;
    if (ihit) {
	*t = tcrit;
    }
    if (irfp == 1 && (lsr001_._1) .tlast != (ls0001_._2) .tn && *itask == 5) {
	goto L400;
    }
    if (ihit) {
	goto L400;
    }
    tnext = (ls0001_._2) .tn + (ls0001_._2) .h__ * ((ls0001_._2) .uround * 4. + 1.);
    if ((tnext - tcrit) * (ls0001_._2) .h__ <= 0.) {
	goto L250;
    }
    (ls0001_._2) .h__ = (tcrit - (ls0001_._2) .tn) * (1. - (ls0001_._2) .uround * 4.);
    if (*istate == 2) {
	(ls0001_._2) .jstart = -2;
    }
 

 
 
 

 

 
 
 
 

L250:
    if ((ls0001_._2) .meth == (lsa001_._1) .mused) {
	goto L255;
    }
    if ((lsa001_._1) .insufr == 1) {
	goto L550;
    }
    if ((lsa001_._1) .insufi == 1) {
	goto L555;
    }
L255:
    if ((ls0001_._2) .nst - (ls0001_._2) .nslast >= (ls0001_._2) .mxstep) {
	goto L500;
    }
    ewset_(& (ls0001_._2) .n, itol, &rtol[1], &atol[1], &rwork[(ls0001_._2) .lyh], &
	    rwork[(ls0001_._2) .lewt]);
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (rwork[i__ + (ls0001_._2) .lewt - 1] <= 0.) {
	    goto L510;
	}
 
	rwork[i__ + (ls0001_._2) .lewt - 1] = 1. / rwork[i__ + (ls0001_._2) .lewt - 1];
    }
L270:
    tolsf = (ls0001_._2) .uround * vmnorm_(& (ls0001_._2) .n, &rwork[(ls0001_._2) .lyh], &
	    rwork[(ls0001_._2) .lewt]);
    if (tolsf <= .01) {
	goto L280;
    }
    tolsf *= 200.;
    if ((ls0001_._2) .nst == 0) {
	goto L626;
    }
    goto L520;
L280:
    if ((ls0001_._2) .tn + (ls0001_._2) .h__ != (ls0001_._2) .tn) {
	goto L290;
    }
    ++ (ls0001_._2) .nhnil;
    if ((ls0001_._2) .nhnil > (ls0001_._2) .mxhnil) {
	goto L290;
    }
    xerrwv_("lsodar-  warning..internal t (=r1) and h (=r2) are", &c__50, &
	    c__101, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 50L);
    xerrwv_("      such that in the machine, t + h = t on the next step ", &
	    c__60, &c__101, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61,
	     59L);
    xerrwv_("      (h = step size). solver will continue anyway", &c__50, &
	    c__101, &c__1, &c__0, &c__0, &c__0, &c__2, & (ls0001_._2) .tn, &
	    (ls0001_._2) .h__, 50L);
    if ((ls0001_._2) .nhnil < (ls0001_._2) .mxhnil) {
	goto L290;
    }
    xerrwv_("sodar-  above warning has been issued i1 times.  ", &c__50, &
	    c__102, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 49L);
    xerrwv_("     it will not be issued again for this problem", &c__50, &
	    c__102, &c__1, &c__1, & (ls0001_._2) .mxhnil, &c__0, &c__0, &c_b61, &
	    c_b61, 49L);
L290:
 

 

 

    stoda_(&neq[1], &y[1], &rwork[(ls0001_._2) .lyh], & (ls0001_._2) .nyh, &rwork[
	    (ls0001_._2) .lyh], &rwork[(ls0001_._2) .lewt], &rwork[(ls0001_._2) .lsavf], &
	    rwork[(ls0001_._2) .lacor], &rwork[(ls0001_._2) .lwm], &iwork[(ls0001_._2) .liwm]
	    , f, jac, prja_, solsy_);
    if (ierode_ .iero > 0) {
	return 0;
    }
    kgo = 1 - (ls0001_._2) .kflag;
    switch ((int)kgo) {
	case 1:  goto L300;
	case 2:  goto L530;
	case 3:  goto L540;
    }
 

 
 
 
 
 
 
 
 
 

L300:
    (ls0001_._2) .init = 1;
    if ((ls0001_._2) .meth == (lsa001_._1) .mused) {
	goto L310;
    }
    (lsa001_._1) .tsw = (ls0001_._2) .tn;
    (ls0001_._2) .maxord = (lsa001_._1) .mxordn;
    if ((ls0001_._2) .meth == 2) {
	(ls0001_._2) .maxord = (lsa001_._1) .mxords;
    }
    if ((ls0001_._2) .meth == 2) {
	rwork[(ls0001_._2) .lwm] = sqrt((ls0001_._2) .uround);
    }
    (lsa001_._1) .insufr = (( (lsa001_._1) .insufr ) <= ( 1 ) ? ( (lsa001_._1) .insufr ) : ( 1 )) ;
    (lsa001_._1) .insufi = (( (lsa001_._1) .insufi ) <= ( 1 ) ? ( (lsa001_._1) .insufi ) : ( 1 )) ;
    (ls0001_._2) .jstart = -1;
    if ((lsa001_._1) .ixpr == 0) {
	goto L310;
    }
    if ((ls0001_._2) .meth == 2) {
	xerrwv_("lsodar- a switch to the bdf (stiff) method has occurred     "
		, &c__60, &c__105, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, 
		&c_b61, 60L);
    }
    if ((ls0001_._2) .meth == 1) {
	xerrwv_("lsodar- a switch to the adams (nonstiff) method has occurred"
		, &c__60, &c__106, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, 
		&c_b61, 60L);
    }
    xerrwv_("     at t = r1,  tentative step size h = r2,  step nst = i1 ", &
	    c__60, &c__107, &c__1, &c__1, & (ls0001_._2) .nst, &c__0, &c__2, &
	    (ls0001_._2) .tn, & (ls0001_._2) .h__, 60L);
L310:

    if ((lsr001_._1) .ngc == 0) {
	goto L315;
    }
    rchek_(&c__3, g, &neq[1], &y[1], &rwork[(ls0001_._2) .lyh], & (ls0001_._2) .nyh, &
	    rwork[(lsr001_._1) .lg0], &rwork[(lsr001_._1) .lg1], &rwork[(lsr001_._1) .lgx], &
	    jroot[1], &irt);
    if (ierode_ .iero > 0) {
	return 0;
    }
    if (irt != 1) {
	goto L315;
    }
    (lsr001_._1) .irfnd = 1;
    *istate = 3;
    *t = (lsr001_._1) .t0;
    goto L425;
L315:

    switch ((int)*itask) {
	case 1:  goto L320;
	case 2:  goto L400;
	case 3:  goto L330;
	case 4:  goto L340;
	case 5:  goto L350;
    }
 

L320:
    if (((ls0001_._2) .tn - *tout) * (ls0001_._2) .h__ < 0.) {
	goto L250;
    }
    intdy_(tout, &c__0, &rwork[(ls0001_._2) .lyh], & (ls0001_._2) .nyh, &y[1], &iflag);
    *t = *tout;
    goto L420;
 

L330:
    if (((ls0001_._2) .tn - *tout) * (ls0001_._2) .h__ >= 0.) {
	goto L400;
    }
    goto L250;
 

L340:
    if (((ls0001_._2) .tn - *tout) * (ls0001_._2) .h__ < 0.) {
	goto L345;
    }
    intdy_(tout, &c__0, &rwork[(ls0001_._2) .lyh], & (ls0001_._2) .nyh, &y[1], &iflag);
    *t = *tout;
    goto L420;
L345:
    hmx = (( (ls0001_._2) .tn ) >= 0 ? ( (ls0001_._2) .tn ) : -( (ls0001_._2) .tn ))  + (( (ls0001_._2) .h__ ) >= 0 ? ( (ls0001_._2) .h__ ) : -( (ls0001_._2) .h__ )) ;
    ihit = (d__1 = (ls0001_._2) .tn - tcrit, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= (ls0001_._2) .uround * 100. *
	     hmx;
    if (ihit) {
	goto L400;
    }
    tnext = (ls0001_._2) .tn + (ls0001_._2) .h__ * ((ls0001_._2) .uround * 4. + 1.);
    if ((tnext - tcrit) * (ls0001_._2) .h__ <= 0.) {
	goto L250;
    }
    (ls0001_._2) .h__ = (tcrit - (ls0001_._2) .tn) * (1. - (ls0001_._2) .uround * 4.);
    (ls0001_._2) .jstart = -2;
    goto L250;
 

L350:
    hmx = (( (ls0001_._2) .tn ) >= 0 ? ( (ls0001_._2) .tn ) : -( (ls0001_._2) .tn ))  + (( (ls0001_._2) .h__ ) >= 0 ? ( (ls0001_._2) .h__ ) : -( (ls0001_._2) .h__ )) ;
    ihit = (d__1 = (ls0001_._2) .tn - tcrit, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= (ls0001_._2) .uround * 100. *
	     hmx;
 

 
 
 
 
 
 
 
 

L400:
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	y[i__] = rwork[i__ + (ls0001_._2) .lyh - 1];
    }
    *t = (ls0001_._2) .tn;
    if (*itask != 4 && *itask != 5) {
	goto L420;
    }
    if (ihit) {
	*t = tcrit;
    }
L420:
    *istate = 2;
L425:
    (ls0001_._2) .illin = 0;
    rwork[11] = (ls0001_._2) .hu;
    rwork[12] = (ls0001_._2) .h__;
    rwork[13] = (ls0001_._2) .tn;
    rwork[15] = (lsa001_._1) .tsw;
    iwork[11] = (ls0001_._2) .nst;
    iwork[12] = (ls0001_._2) .nfe;
    iwork[13] = (ls0001_._2) .nje;
    iwork[14] = (ls0001_._2) .nqu;
    iwork[15] = (ls0001_._2) .nq;
    iwork[19] = (lsa001_._1) .mused;
    iwork[20] = (ls0001_._2) .meth;
    iwork[10] = (lsr001_._1) .nge;
    (lsr001_._1) .tlast = *t;
    return 0;

L430:
    ++ (ls0001_._2) .ntrep;
    if ((ls0001_._2) .ntrep < 5) {
	return 0;
    }
    xerrwv_("lsodar-  repeated calls with istate = 1 and tout = t (=r1)  ", &
	    c__60, &c__301, &c__1, &c__0, &c__0, &c__0, &c__1, t, &c_b61, 60L)
	    ;
    goto L800;
 

 
 
 
 

 
 
 
 

 

L500:
    xerrwv_("lsodar-  at current t (=r1), mxstep (=i1) steps", &c__50, &
	    c__201, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 47L);
    xerrwv_("      taken on this call before reaching tout     ", &c__50, &
	    c__201, &c__1, &c__1, & (ls0001_._2) .mxstep, &c__0, &c__1, &
	    (ls0001_._2) .tn, &c_b61, 50L);
    *istate = -1;
    goto L580;
 

L510:
    ewti = rwork[(ls0001_._2) .lewt + i__ - 1];
    xerrwv_("lsodar-  at t (=r1), ewt(i1) has become r2 .le. 0.", &c__50, &
	    c__202, &c__1, &c__1, &i__, &c__0, &c__2, & (ls0001_._2) .tn, &ewti, 
	    50L);
    *istate = -6;
    goto L580;
 

L520:
    xerrwv_("lsodar-  at t (=r1), too much accuracy requested ", &c__50, &
	    c__203, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 49L);
    xerrwv_("      for precision of machine..  see tolsf (=r2)", &c__50, &
	    c__203, &c__1, &c__0, &c__0, &c__0, &c__2, & (ls0001_._2) .tn, &tolsf, 
	    49L);
    rwork[14] = tolsf;
    *istate = -2;
    goto L580;
 

L530:
    xerrwv_("lsodar-  at t(=r1) and step size h(=r2), the error", &c__50, &
	    c__204, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 50L);
    xerrwv_("      test failed repeatedly or with abs(h) = hmin", &c__50, &
	    c__204, &c__1, &c__0, &c__0, &c__0, &c__2, & (ls0001_._2) .tn, &
	    (ls0001_._2) .h__, 50L);
    *istate = -4;
    goto L560;
 

L540:
    xerrwv_("lsodar-  at t (=r1) and step size h (=r2), the   ", &c__50, &
	    c__205, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 49L);
    xerrwv_("      corrector convergence failed repeatedly    ", &c__50, &
	    c__205, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 49L);
    xerrwv_("      or with abs(h) = hmin   ", &c__30, &c__205, &c__1, &c__0, &
	    c__0, &c__0, &c__2, & (ls0001_._2) .tn, & (ls0001_._2) .h__, 30L);
    *istate = -5;
    goto L560;
 

L550:
    xerrwv_("lsodar-  at current t(=r1), rwork length too small", &c__50, &
	    c__206, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 50L);
    xerrwv_("      to proceed.  the integration was otherwise successful.", &
	    c__60, &c__206, &c__1, &c__0, &c__0, &c__0, &c__1, & (ls0001_._2) .tn, &
	    c_b61, 60L);
    *istate = -7;
    goto L580;
 

L555:
    xerrwv_("lsodar-  at current t(=r1), iwork length too small", &c__50, &
	    c__207, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 50L);
    xerrwv_("      to proceed.  the integration was otherwise successful.", &
	    c__60, &c__207, &c__1, &c__0, &c__0, &c__0, &c__1, & (ls0001_._2) .tn, &
	    c_b61, 60L);
    *istate = -7;
    goto L580;
 

L560:
    big = 0.;
    imxer = 1;
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	size = (d__1 = rwork[i__ + (ls0001_._2) .lacor - 1] * rwork[i__ + 
		(ls0001_._2) .lewt - 1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	if (big >= size) {
	    goto L570;
	}
	big = size;
	imxer = i__;
L570:
	;
    }
    iwork[16] = imxer;
 

L580:
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	y[i__] = rwork[i__ + (ls0001_._2) .lyh - 1];
    }
    *t = (ls0001_._2) .tn;
    (ls0001_._2) .illin = 0;
    rwork[11] = (ls0001_._2) .hu;
    rwork[12] = (ls0001_._2) .h__;
    rwork[13] = (ls0001_._2) .tn;
    rwork[15] = (lsa001_._1) .tsw;
    iwork[11] = (ls0001_._2) .nst;
    iwork[12] = (ls0001_._2) .nfe;
    iwork[13] = (ls0001_._2) .nje;
    iwork[14] = (ls0001_._2) .nqu;
    iwork[15] = (ls0001_._2) .nq;
    iwork[19] = (lsa001_._1) .mused;
    iwork[20] = (ls0001_._2) .meth;
    iwork[10] = (lsr001_._1) .nge;
    (lsr001_._1) .tlast = *t;
    return 0;
 

 
 
 
 
 
 
 

L601:
    xerrwv_("lsodar-  istate (=i1) illegal ", &c__30, &c__1, &c__1, &c__1, 
	    istate, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L602:
    xerrwv_("lsodar-  itask (=i1) illegal  ", &c__30, &c__2, &c__1, &c__1, 
	    itask, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L603:
    xerrwv_("lsodar-  istate .gt. 1 but lsodar not initialized ", &c__50, &
	    c__3, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 50L);
    goto L700;
L604:
    xerrwv_("lsodar-  neq (=i1) .lt. 1     ", &c__30, &c__4, &c__1, &c__1, &
	    neq[1], &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L605:
    xerrwv_("lsodar-  istate = 3 and neq increased (i1 to i2)  ", &c__50, &
	    c__5, &c__1, &c__2, & (ls0001_._2) .n, &neq[1], &c__0, &c_b61, &c_b61, 
	    50L);
    goto L700;
L606:
    xerrwv_("lsodar-  itol (=i1) illegal   ", &c__30, &c__6, &c__1, &c__1, 
	    itol, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L607:
    xerrwv_("lsodar-  iopt (=i1) illegal   ", &c__30, &c__7, &c__1, &c__1, 
	    iopt, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L608:
    xerrwv_("lsodar-  jt (=i1) illegal     ", &c__30, &c__8, &c__1, &c__1, jt,
	     &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L609:
    xerrwv_("lsodar-  ml (=i1) illegal.. .lt.0 or .ge.neq (=i2)", &c__50, &
	    c__9, &c__1, &c__2, &ml, &neq[1], &c__0, &c_b61, &c_b61, 50L);
    goto L700;
L610:
    xerrwv_("lsodar-  mu (=i1) illegal.. .lt.0 or .ge.neq (=i2)", &c__50, &
	    c__10, &c__1, &c__2, &mu, &neq[1], &c__0, &c_b61, &c_b61, 50L);
    goto L700;
L611:
    xerrwv_("lsodar-  ixpr (=i1) illegal   ", &c__30, &c__11, &c__1, &c__1, &
	    (lsa001_._1) .ixpr, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L612:
    xerrwv_("lsodar-  mxstep (=i1) .lt. 0  ", &c__30, &c__12, &c__1, &c__1, &
	    (ls0001_._2) .mxstep, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L613:
    xerrwv_("lsodar-  mxhnil (=i1) .lt. 0  ", &c__30, &c__13, &c__1, &c__1, &
	    (ls0001_._2) .mxhnil, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L614:
    xerrwv_("lsodar-  tout (=r1) behind t (=r2)      ", &c__40, &c__14, &c__1,
	     &c__0, &c__0, &c__0, &c__2, tout, t, 40L);
    xerrwv_("      integration direction is given by h0 (=r1)  ", &c__50, &
	    c__14, &c__1, &c__0, &c__0, &c__0, &c__1, &h0, &c_b61, 50L);
    goto L700;
L615:
    xerrwv_("lsodar-  hmax (=r1) .lt. 0.0  ", &c__30, &c__15, &c__1, &c__0, &
	    c__0, &c__0, &c__1, &hmax, &c_b61, 30L);
    goto L700;
L616:
    xerrwv_("lsodar-  hmin (=r1) .lt. 0.0  ", &c__30, &c__16, &c__1, &c__0, &
	    c__0, &c__0, &c__1, & (ls0001_._2) .hmin, &c_b61, 30L);
    goto L700;
L617:
    xerrwv_("lsodar-  rwork length needed, lenrw (=i1), exceeds lrw (=i2)", &
	    c__60, &c__17, &c__1, &c__2, &lenrw, lrw, &c__0, &c_b61, &c_b61, 
	    60L);
    goto L700;
L618:
    xerrwv_("lsodar-  iwork length needed, leniw (=i1), exceeds liw (=i2)", &
	    c__60, &c__18, &c__1, &c__2, &leniw, liw, &c__0, &c_b61, &c_b61, 
	    60L);
    goto L700;
L619:
    xerrwv_("lsodar-  rtol(i1) is r1 .lt. 0.0        ", &c__40, &c__19, &c__1,
	     &c__1, &i__, &c__0, &c__1, &rtoli, &c_b61, 40L);
    goto L700;
L620:
    xerrwv_("lsodar-  atol(i1) is r1 .lt. 0.0        ", &c__40, &c__20, &c__1,
	     &c__1, &i__, &c__0, &c__1, &atoli, &c_b61, 40L);
    goto L700;
L621:
    ewti = rwork[(ls0001_._2) .lewt + i__ - 1];
    xerrwv_("lsodar-  ewt(i1) is r1 .le. 0.0         ", &c__40, &c__21, &c__1,
	     &c__1, &i__, &c__0, &c__1, &ewti, &c_b61, 40L);
    goto L700;
L622:
    xerrwv_("lsodar-  tout (=r1) too close to t(=r2) to start integration", &
	    c__60, &c__22, &c__1, &c__0, &c__0, &c__0, &c__2, tout, t, 60L);
    goto L700;
L623:
    xerrwv_("lsodar-  itask = i1 and tout (=r1) behind tcur - hu (= r2)  ", &
	    c__60, &c__23, &c__1, &c__1, itask, &c__0, &c__2, tout, &tp, 60L);
    goto L700;
L624:
    xerrwv_("lsodar-  itask = 4 or 5 and tcrit (=r1) behind tcur (=r2)   ", &
	    c__60, &c__24, &c__1, &c__0, &c__0, &c__0, &c__2, &tcrit, &
	    (ls0001_._2) .tn, 60L);
    goto L700;
L625:
    xerrwv_("lsodar-  itask = 4 or 5 and tcrit (=r1) behind tout (=r2)   ", &
	    c__60, &c__25, &c__1, &c__0, &c__0, &c__0, &c__2, &tcrit, tout, 
	    60L);
    goto L700;
L626:
    xerrwv_("lsodar-  at start of problem, too much accuracy   ", &c__50, &
	    c__26, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 50L);
    xerrwv_("      requested for precision of machine..  see tolsf (=r1) ", &
	    c__60, &c__26, &c__1, &c__0, &c__0, &c__0, &c__1, &tolsf, &c_b61, 
	    60L);
    rwork[14] = tolsf;
    goto L700;
L627:
    xerrwv_("lsodar-  trouble from intdy. itask = i1, tout = r1", &c__50, &
	    c__27, &c__1, &c__1, itask, &c__0, &c__1, tout, &c_b61, 50L);
    goto L700;
L628:
    xerrwv_("lsodar-  mxordn (=i1) .lt. 0  ", &c__30, &c__28, &c__1, &c__1, &
	    (lsa001_._1) .mxordn, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L629:
    xerrwv_("lsodar-  mxords (=i1) .lt. 0  ", &c__30, &c__29, &c__1, &c__1, &
	    (lsa001_._1) .mxords, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L630:
    xerrwv_("lsodar-  ng (=i1) .lt. 0      ", &c__30, &c__30, &c__1, &c__1, 
	    ng, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L631:
    xerrwv_("lsodar-  ng changed (from i1 to i2) illegally,    ", &c__50, &
	    c__31, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 50L);
    xerrwv_("      i.e. not immediately after a root was found ", &c__50, &
	    c__31, &c__1, &c__2, & (lsr001_._1) .ngc, ng, &c__0, &c_b61, &c_b61, 
	    50L);
    goto L700;
L632:
    xerrwv_("lsodar-  one or more components of g has a root   ", &c__50, &
	    c__32, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 50L);
    xerrwv_("      too near to the initial point     ", &c__40, &c__32, &c__1,
	     &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 40L);

L700:
    if ((ls0001_._2) .illin == 5) {
	goto L710;
    }
    ++ (ls0001_._2) .illin;
    (lsr001_._1) .tlast = *t;
    *istate = -3;
    return 0;
L710:
    xerrwv_("lsodar-  repeated occurrences of illegal input    ", &c__50, &
	    c__302, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 50L);

L800:
    xerrwv_("lsodar-  run aborted.. apparent infinite loop     ", &c__50, &
	    c__303, &c__2, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 50L);
    return 0;
 

}  

  int lsode_(f, neq, y, t, tout, itol, rtol, atol, itask, 
	istate, iopt, rwork, lrw, iwork, liw, jac, mf)
  int (*f) ();
integer *neq;
doublereal *y, *t, *tout;
integer *itol;
doublereal *rtol, *atol;
integer *itask, *istate, *iopt;
doublereal *rwork;
integer *lrw, *iwork, *liw;
  int (*jac) ();
integer *mf;
{
     

    static integer mord[2] = { 12,5 };
    static integer mxstp0 = 500;
    static integer mxhnl0 = 10;

     
    integer i__1, i__2;
    doublereal d__1, d__2;

     
    double sqrt(), d_sign();

     
    static doublereal hmax;
    static logical ihit;
    static doublereal ewti, size;
    static integer i__, iflag;
    static doublereal atoli;
    static integer leniw;
    extern   int prepj_();
    static integer lenwm;
    extern   int stode_();
    static integer imxer;
    static doublereal tcrit;
    static integer lenrw;
    static doublereal h0;
    static integer i1, i2;
    static doublereal rtoli, tdist, tolsf;
    extern doublereal vnorm_();
    static doublereal tnext;
    extern   int ewset_(), intdy_();
    static doublereal w0;
    extern   int solsy_();
    extern doublereal dlamch_();
    static integer ml;
    static doublereal rh;
    static integer mu;
    static doublereal tp;
    static integer lf0;
    extern   int xerrwv_();
    static doublereal big;
    static integer kgo;
    static doublereal ayi, hmx, tol, sum;
     
    --neq;
    --y;
    --rtol;
    --atol;
    --rwork;
    --iwork;
    ierode_ .iero = 0;
    if (*istate < 1 || *istate > 3) {
	goto L601;
    }
    if (*itask < 1 || *itask > 5) {
	goto L602;
    }
    if (*istate == 1) {
	goto L10;
    }
    if ((ls0001_._2) .init == 0) {
	goto L603;
    }
    if (*istate == 2) {
	goto L200;
    }
    goto L20;
L10:
    (ls0001_._2) .init = 0;
    if (*tout == *t) {
	goto L430;
    }
L20:
    (ls0001_._2) .ntrep = 0;
 

 
 
 
 

 
 
 

    if (neq[1] <= 0) {
	goto L604;
    }
    if (*istate == 1) {
	goto L25;
    }
    if (neq[1] > (ls0001_._2) .n) {
	goto L605;
    }
L25:
    (ls0001_._2) .n = neq[1];
    if (*itol < 1 || *itol > 4) {
	goto L606;
    }
    if (*iopt < 0 || *iopt > 1) {
	goto L607;
    }
    (ls0001_._2) .meth = *mf / 10;
    (ls0001_._2) .miter = *mf - (ls0001_._2) .meth * 10;
    if ((ls0001_._2) .meth < 1 || (ls0001_._2) .meth > 2) {
	goto L608;
    }
    if ((ls0001_._2) .miter < 0 || (ls0001_._2) .miter > 5) {
	goto L608;
    }
    if ((ls0001_._2) .miter <= 3) {
	goto L30;
    }
    ml = iwork[1];
    mu = iwork[2];
    if (ml < 0 || ml >= (ls0001_._2) .n) {
	goto L609;
    }
    if (mu < 0 || mu >= (ls0001_._2) .n) {
	goto L610;
    }
L30:
 

    if (*iopt == 1) {
	goto L40;
    }
    (ls0001_._2) .maxord = mord[(ls0001_._2) .meth - 1];
    (ls0001_._2) .mxstep = mxstp0;
    (ls0001_._2) .mxhnil = mxhnl0;
    if (*istate == 1) {
	h0 = 0.;
    }
    (ls0001_._2) .hmxi = 0.;
    (ls0001_._2) .hmin = 0.;
    goto L60;
L40:
    (ls0001_._2) .maxord = iwork[5];
    if ((ls0001_._2) .maxord < 0) {
	goto L611;
    }
    if ((ls0001_._2) .maxord == 0) {
	(ls0001_._2) .maxord = 100;
    }
 
    i__1 = (ls0001_._2) .maxord, i__2 = mord[(ls0001_._2) .meth - 1];
    (ls0001_._2) .maxord = (( i__1 ) <= ( i__2 ) ? ( i__1 ) : ( i__2 )) ;
    (ls0001_._2) .mxstep = iwork[6];
    if ((ls0001_._2) .mxstep < 0) {
	goto L612;
    }
    if ((ls0001_._2) .mxstep == 0) {
	(ls0001_._2) .mxstep = mxstp0;
    }
    (ls0001_._2) .mxhnil = iwork[7];
    if ((ls0001_._2) .mxhnil < 0) {
	goto L613;
    }
    if ((ls0001_._2) .mxhnil == 0) {
	(ls0001_._2) .mxhnil = mxhnl0;
    }
    if (*istate != 1) {
	goto L50;
    }
    h0 = rwork[5];
    if ((*tout - *t) * h0 < 0.) {
	goto L614;
    }
L50:
    hmax = rwork[6];
    if (hmax < 0.) {
	goto L615;
    }
    (ls0001_._2) .hmxi = 0.;
    if (hmax > 0.) {
	(ls0001_._2) .hmxi = 1. / hmax;
    }
    (ls0001_._2) .hmin = rwork[7];
    if ((ls0001_._2) .hmin < 0.) {
	goto L616;
    }
 

 
 
 
 
 

L60:
    (ls0001_._2) .lyh = 21;
    if (*istate == 1) {
	(ls0001_._2) .nyh = (ls0001_._2) .n;
    }
    (ls0001_._2) .lwm = (ls0001_._2) .lyh + ((ls0001_._2) .maxord + 1) * (ls0001_._2) .nyh;
    if ((ls0001_._2) .miter == 0) {
	lenwm = 0;
    }
    if ((ls0001_._2) .miter == 1 || (ls0001_._2) .miter == 2) {
	lenwm = (ls0001_._2) .n * (ls0001_._2) .n + 2;
    }
    if ((ls0001_._2) .miter == 3) {
	lenwm = (ls0001_._2) .n + 2;
    }
    if ((ls0001_._2) .miter >= 4) {
	lenwm = ((ml << 1) + mu + 1) * (ls0001_._2) .n + 2;
    }
    (ls0001_._2) .lewt = (ls0001_._2) .lwm + lenwm;
    (ls0001_._2) .lsavf = (ls0001_._2) .lewt + (ls0001_._2) .n;
    (ls0001_._2) .lacor = (ls0001_._2) .lsavf + (ls0001_._2) .n;
    lenrw = (ls0001_._2) .lacor + (ls0001_._2) .n - 1;
    iwork[17] = lenrw;
    (ls0001_._2) .liwm = 1;
    leniw = (ls0001_._2) .n + 20;
    if ((ls0001_._2) .miter == 0 || (ls0001_._2) .miter == 3) {
	leniw = 20;
    }
    iwork[18] = leniw;
    if (lenrw > *lrw) {
	goto L617;
    }
    if (leniw > *liw) {
	goto L618;
    }
 

    rtoli = rtol[1];
    atoli = atol[1];
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (*itol >= 3) {
	    rtoli = rtol[i__];
	}
	if (*itol == 2 || *itol == 4) {
	    atoli = atol[i__];
	}
	if (rtoli < 0.) {
	    goto L619;
	}
	if (atoli < 0.) {
	    goto L620;
	}
 
    }
    if (*istate == 1) {
	goto L100;
    }
 

    (ls0001_._2) .jstart = -1;
    if ((ls0001_._2) .nq <= (ls0001_._2) .maxord) {
	goto L90;
    }
 

    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	rwork[i__ + (ls0001_._2) .lsavf - 1] = rwork[i__ + (ls0001_._2) .lwm - 1];
    }
 

L90:
    if ((ls0001_._2) .miter > 0) {
	rwork[(ls0001_._2) .lwm] = sqrt((ls0001_._2) .uround);
    }
    if ((ls0001_._2) .n == (ls0001_._2) .nyh) {
	goto L200;
    }
 

    i1 = (ls0001_._2) .lyh + (ls0001_._2) .l * (ls0001_._2) .nyh;
    i2 = (ls0001_._2) .lyh + ((ls0001_._2) .maxord + 1) * (ls0001_._2) .nyh - 1;
    if (i1 > i2) {
	goto L200;
    }
    i__1 = i2;
    for (i__ = i1; i__ <= i__1; ++i__) {
 
	rwork[i__] = 0.;
    }
    goto L200;
 

 
 
 
 
 
 

L100:
    (ls0001_._2) .uround = dlamch_("p", 1L);
    (ls0001_._2) .tn = *t;
    if (*itask != 4 && *itask != 5) {
	goto L110;
    }
    tcrit = rwork[1];
    if ((tcrit - *tout) * (*tout - *t) < 0.) {
	goto L625;
    }
    if (h0 != 0. && (*t + h0 - tcrit) * h0 > 0.) {
	h0 = tcrit - *t;
    }
L110:
    (ls0001_._2) .jstart = 0;
    if ((ls0001_._2) .miter > 0) {
	rwork[(ls0001_._2) .lwm] = sqrt((ls0001_._2) .uround);
    }
    (ls0001_._2) .nhnil = 0;
    (ls0001_._2) .nst = 0;
    (ls0001_._2) .nje = 0;
    (ls0001_._2) .nslast = 0;
    (ls0001_._2) .hu = 0.;
    (ls0001_._2) .nqu = 0;
    (ls0001_._2) .ccmax = .3;
    (ls0001_._2) .maxcor = 3;
    (ls0001_._2) .msbp = 20;
    (ls0001_._2) .mxncf = 10;
 

    lf0 = (ls0001_._2) .lyh + (ls0001_._2) .nyh;
    (*f)(&neq[1], t, &y[1], &rwork[lf0]);
    if (ierode_ .iero > 0) {
	return 0;
    }
    (ls0001_._2) .nfe = 1;
 

    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	rwork[i__ + (ls0001_._2) .lyh - 1] = y[i__];
    }
 

    (ls0001_._2) .nq = 1;
    (ls0001_._2) .h__ = 1.;
    ewset_(& (ls0001_._2) .n, itol, &rtol[1], &atol[1], &rwork[(ls0001_._2) .lyh], &
	    rwork[(ls0001_._2) .lewt]);
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (rwork[i__ + (ls0001_._2) .lewt - 1] <= 0.) {
	    goto L621;
	}
 
	rwork[i__ + (ls0001_._2) .lewt - 1] = 1. / rwork[i__ + (ls0001_._2) .lewt - 1];
    }
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

    if (h0 != 0.) {
	goto L180;
    }
    tdist = (d__1 = *tout - *t, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
 
    d__1 = (( *t ) >= 0 ? ( *t ) : -( *t )) , d__2 = (( *tout ) >= 0 ? ( *tout ) : -( *tout )) ;
    w0 = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    if (tdist < (ls0001_._2) .uround * 2. * w0) {
	goto L622;
    }
    tol = rtol[1];
    if (*itol <= 2) {
	goto L140;
    }
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
 
	d__1 = tol, d__2 = rtol[i__];
	tol = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    }
L140:
    if (tol > 0.) {
	goto L160;
    }
    atoli = atol[1];
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (*itol == 2 || *itol == 4) {
	    atoli = atol[i__];
	}
	ayi = (d__1 = y[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	if (ayi != 0.) {
 
	    d__1 = tol, d__2 = atoli / ayi;
	    tol = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	}
 
    }
L160:
 
    d__1 = tol, d__2 = (ls0001_._2) .uround * 100.;
    tol = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    tol = (( tol ) <= ( .001 ) ? ( tol ) : ( .001 )) ;
    sum = vnorm_(& (ls0001_._2) .n, &rwork[lf0], &rwork[(ls0001_._2) .lewt]);
 
    d__1 = sum;
    sum = 1. / (tol * w0 * w0) + tol * (d__1 * d__1);
    h0 = 1. / sqrt(sum);
    h0 = (( h0 ) <= ( tdist ) ? ( h0 ) : ( tdist )) ;
    d__1 = *tout - *t;
    h0 = d_sign(&h0, &d__1);
 

L180:
    rh = (( h0 ) >= 0 ? ( h0 ) : -( h0 ))  * (ls0001_._2) .hmxi;
    if (rh > 1.) {
	h0 /= rh;
    }
 

    (ls0001_._2) .h__ = h0;
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	rwork[i__ + lf0 - 1] = h0 * rwork[i__ + lf0 - 1];
    }
    goto L270;
 

 
 
 
 

L200:
    (ls0001_._2) .nslast = (ls0001_._2) .nst;
    switch ((int)*itask) {
	case 1:  goto L210;
	case 2:  goto L250;
	case 3:  goto L220;
	case 4:  goto L230;
	case 5:  goto L240;
    }
L210:
    if (((ls0001_._2) .tn - *tout) * (ls0001_._2) .h__ < 0.) {
	goto L250;
    }
    intdy_(tout, &c__0, &rwork[(ls0001_._2) .lyh], & (ls0001_._2) .nyh, &y[1], &iflag);
    if (iflag != 0) {
	goto L627;
    }
    *t = *tout;
    goto L420;
L220:
    tp = (ls0001_._2) .tn - (ls0001_._2) .hu * ((ls0001_._2) .uround * 100. + 1.);
    if ((tp - *tout) * (ls0001_._2) .h__ > 0.) {
	goto L623;
    }
    if (((ls0001_._2) .tn - *tout) * (ls0001_._2) .h__ < 0.) {
	goto L250;
    }
    goto L400;
L230:
    tcrit = rwork[1];
    if (((ls0001_._2) .tn - tcrit) * (ls0001_._2) .h__ > 0.) {
	goto L624;
    }
    if ((tcrit - *tout) * (ls0001_._2) .h__ < 0.) {
	goto L625;
    }
    if (((ls0001_._2) .tn - *tout) * (ls0001_._2) .h__ < 0.) {
	goto L245;
    }
    intdy_(tout, &c__0, &rwork[(ls0001_._2) .lyh], & (ls0001_._2) .nyh, &y[1], &iflag);
    if (iflag != 0) {
	goto L627;
    }
    *t = *tout;
    goto L420;
L240:
    tcrit = rwork[1];
    if (((ls0001_._2) .tn - tcrit) * (ls0001_._2) .h__ > 0.) {
	goto L624;
    }
L245:
    hmx = (( (ls0001_._2) .tn ) >= 0 ? ( (ls0001_._2) .tn ) : -( (ls0001_._2) .tn ))  + (( (ls0001_._2) .h__ ) >= 0 ? ( (ls0001_._2) .h__ ) : -( (ls0001_._2) .h__ )) ;
    ihit = (d__1 = (ls0001_._2) .tn - tcrit, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= (ls0001_._2) .uround * 100. *
	     hmx;
    if (ihit) {
	goto L400;
    }
    tnext = (ls0001_._2) .tn + (ls0001_._2) .h__ * ((ls0001_._2) .uround * 4. + 1.);
    if ((tnext - tcrit) * (ls0001_._2) .h__ <= 0.) {
	goto L250;
    }
    (ls0001_._2) .h__ = (tcrit - (ls0001_._2) .tn) * (1. - (ls0001_._2) .uround * 4.);
    if (*istate == 2) {
	(ls0001_._2) .jstart = -2;
    }
 

 
 
 

 

 
 
 
 

L250:
    if ((ls0001_._2) .nst - (ls0001_._2) .nslast >= (ls0001_._2) .mxstep) {
	goto L500;
    }
    ewset_(& (ls0001_._2) .n, itol, &rtol[1], &atol[1], &rwork[(ls0001_._2) .lyh], &
	    rwork[(ls0001_._2) .lewt]);
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (rwork[i__ + (ls0001_._2) .lewt - 1] <= 0.) {
	    goto L510;
	}
 
	rwork[i__ + (ls0001_._2) .lewt - 1] = 1. / rwork[i__ + (ls0001_._2) .lewt - 1];
    }
L270:
    tolsf = (ls0001_._2) .uround * vnorm_(& (ls0001_._2) .n, &rwork[(ls0001_._2) .lyh], &
	    rwork[(ls0001_._2) .lewt]);
    if (tolsf <= 1.) {
	goto L280;
    }
    tolsf *= 2.;
    if ((ls0001_._2) .nst == 0) {
	goto L626;
    }
    goto L520;
L280:
    if ((ls0001_._2) .tn + (ls0001_._2) .h__ != (ls0001_._2) .tn) {
	goto L290;
    }
    ++ (ls0001_._2) .nhnil;
    if ((ls0001_._2) .nhnil > (ls0001_._2) .mxhnil) {
	goto L290;
    }
    xerrwv_("lsode--  caution... t (=r1) and h (=r2) are", &c__50, &c__101, &
	    c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 43L);
    xerrwv_("     such that t + h = t at next step", &c__60, &c__101, &c__1, &
	    c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 37L);
    xerrwv_("      (h = pas).  integration continues", &c__50, &c__101, &c__1,
	     &c__0, &c__0, &c__0, &c__2, & (ls0001_._2) .tn, & (ls0001_._2) .h__, 39L);
    if ((ls0001_._2) .nhnil < (ls0001_._2) .mxhnil) {
	goto L290;
    }
    xerrwv_("lsode--  preceding message given i1 times", &c__50, &c__102, &
	    c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 41L);
    xerrwv_("     wiil not be repeated", &c__50, &c__102, &c__1, &c__1, &
	    (ls0001_._2) .mxhnil, &c__0, &c__0, &c_b61, &c_b61, 25L);
L290:
 

 

 

    stode_(&neq[1], &y[1], &rwork[(ls0001_._2) .lyh], & (ls0001_._2) .nyh, &rwork[
	    (ls0001_._2) .lyh], &rwork[(ls0001_._2) .lewt], &rwork[(ls0001_._2) .lsavf], &
	    rwork[(ls0001_._2) .lacor], &rwork[(ls0001_._2) .lwm], &iwork[(ls0001_._2) .liwm]
	    , f, jac, prepj_, solsy_);
    if (ierode_ .iero > 0) {
	return 0;
    }
    kgo = 1 - (ls0001_._2) .kflag;
    switch ((int)kgo) {
	case 1:  goto L300;
	case 2:  goto L530;
	case 3:  goto L540;
    }
 

 
 
 
 

L300:
    (ls0001_._2) .init = 1;
    switch ((int)*itask) {
	case 1:  goto L310;
	case 2:  goto L400;
	case 3:  goto L330;
	case 4:  goto L340;
	case 5:  goto L350;
    }
 

L310:
    if (((ls0001_._2) .tn - *tout) * (ls0001_._2) .h__ < 0.) {
	goto L250;
    }
    intdy_(tout, &c__0, &rwork[(ls0001_._2) .lyh], & (ls0001_._2) .nyh, &y[1], &iflag);
    *t = *tout;
    goto L420;
 

L330:
    if (((ls0001_._2) .tn - *tout) * (ls0001_._2) .h__ >= 0.) {
	goto L400;
    }
    goto L250;
 

L340:
    if (((ls0001_._2) .tn - *tout) * (ls0001_._2) .h__ < 0.) {
	goto L345;
    }
    intdy_(tout, &c__0, &rwork[(ls0001_._2) .lyh], & (ls0001_._2) .nyh, &y[1], &iflag);
    *t = *tout;
    goto L420;
L345:
    hmx = (( (ls0001_._2) .tn ) >= 0 ? ( (ls0001_._2) .tn ) : -( (ls0001_._2) .tn ))  + (( (ls0001_._2) .h__ ) >= 0 ? ( (ls0001_._2) .h__ ) : -( (ls0001_._2) .h__ )) ;
    ihit = (d__1 = (ls0001_._2) .tn - tcrit, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= (ls0001_._2) .uround * 100. *
	     hmx;
    if (ihit) {
	goto L400;
    }
    tnext = (ls0001_._2) .tn + (ls0001_._2) .h__ * ((ls0001_._2) .uround * 4. + 1.);
    if ((tnext - tcrit) * (ls0001_._2) .h__ <= 0.) {
	goto L250;
    }
    (ls0001_._2) .h__ = (tcrit - (ls0001_._2) .tn) * (1. - (ls0001_._2) .uround * 4.);
    (ls0001_._2) .jstart = -2;
    goto L250;
 

L350:
    hmx = (( (ls0001_._2) .tn ) >= 0 ? ( (ls0001_._2) .tn ) : -( (ls0001_._2) .tn ))  + (( (ls0001_._2) .h__ ) >= 0 ? ( (ls0001_._2) .h__ ) : -( (ls0001_._2) .h__ )) ;
    ihit = (d__1 = (ls0001_._2) .tn - tcrit, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= (ls0001_._2) .uround * 100. *
	     hmx;
 

 
 
 
 
 
 
 
 

L400:
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	y[i__] = rwork[i__ + (ls0001_._2) .lyh - 1];
    }
    *t = (ls0001_._2) .tn;
    if (*itask != 4 && *itask != 5) {
	goto L420;
    }
    if (ihit) {
	*t = tcrit;
    }
L420:
    *istate = 2;
    (ls0001_._2) .illin = 0;
    rwork[11] = (ls0001_._2) .hu;
    rwork[12] = (ls0001_._2) .h__;
    rwork[13] = (ls0001_._2) .tn;
    iwork[11] = (ls0001_._2) .nst;
    iwork[12] = (ls0001_._2) .nfe;
    iwork[13] = (ls0001_._2) .nje;
    iwork[14] = (ls0001_._2) .nqu;
    iwork[15] = (ls0001_._2) .nq;
    return 0;

L430:
    ++ (ls0001_._2) .ntrep;
    if ((ls0001_._2) .ntrep < 5) {
	return 0;
    }
    xerrwv_("lsode--  calls with istate = 1 and tout = t (=r1)  ", &c__60, &
	    c__301, &c__1, &c__0, &c__0, &c__0, &c__1, t, &c_b61, 51L);
    goto L800;
 

 
 
 
 

 
 
 
 

 

L500:
    xerrwv_("lsode--  at t (=r1), mxstep (=i1) steps   ", &c__50, &c__201, &
	    c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 42L);
    xerrwv_("necessary before reaching tout", &c__50, &c__201, &c__1, &c__1, &
	    (ls0001_._2) .mxstep, &c__0, &c__1, & (ls0001_._2) .tn, &c_b61, 30L);
    *istate = -1;
    goto L580;
 

L510:
    ewti = rwork[(ls0001_._2) .lewt + i__ - 1];
    xerrwv_("lsode--  at t (=r1),ewt(i1) (=r2) is .le.0", &c__50, &c__202, &
	    c__1, &c__1, &i__, &c__0, &c__2, & (ls0001_._2) .tn, &ewti, 42L);
    *istate = -6;
    goto L580;
 

L520:
    xerrwv_("lsode--  a t (=r1),  too much precision required", &c__50, &
	    c__203, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 48L);
    xerrwv_(" w.r.t. machine precision tolsf (=r2) ", &c__50, &c__203, &c__1, 
	    &c__0, &c__0, &c__0, &c__2, & (ls0001_._2) .tn, &tolsf, 38L);
    rwork[14] = tolsf;
    *istate = -2;
    goto L580;
 

L530:
    xerrwv_("lsode--  at t(=r1) for step h(=r2), error test", &c__50, &c__204,
	     &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 46L);
    xerrwv_("    failed with abs(h) = hmin", &c__50, &c__204, &c__1, &c__0, &
	    c__0, &c__0, &c__2, & (ls0001_._2) .tn, & (ls0001_._2) .h__, 29L);
    *istate = -4;
    goto L560;
 

L540:
    xerrwv_("lsode--  at t (=r1) with step h (=r2), ", &c__50, &c__205, &c__1,
	     &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 39L);
    xerrwv_("     corrector does not converge ", &c__50, &c__205, &c__1, &
	    c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 33L);
    xerrwv_("      with abs(h) = hmin   ", &c__30, &c__205, &c__1, &c__0, &
	    c__0, &c__0, &c__2, & (ls0001_._2) .tn, & (ls0001_._2) .h__, 27L);
    *istate = -5;
 

L560:
    big = 0.;
    imxer = 1;
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	size = (d__1 = rwork[i__ + (ls0001_._2) .lacor - 1] * rwork[i__ + 
		(ls0001_._2) .lewt - 1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	if (big >= size) {
	    goto L570;
	}
	big = size;
	imxer = i__;
L570:
	;
    }
    iwork[16] = imxer;
 

L580:
    i__1 = (ls0001_._2) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	y[i__] = rwork[i__ + (ls0001_._2) .lyh - 1];
    }
    *t = (ls0001_._2) .tn;
    (ls0001_._2) .illin = 0;
    rwork[11] = (ls0001_._2) .hu;
    rwork[12] = (ls0001_._2) .h__;
    rwork[13] = (ls0001_._2) .tn;
    iwork[11] = (ls0001_._2) .nst;
    iwork[12] = (ls0001_._2) .nfe;
    iwork[13] = (ls0001_._2) .nje;
    iwork[14] = (ls0001_._2) .nqu;
    iwork[15] = (ls0001_._2) .nq;
    return 0;
 

 
 
 
 
 
 
 

L601:
    xerrwv_("lsode--  istate (=i1) illegal ", &c__30, &c__1, &c__1, &c__1, 
	    istate, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L602:
    xerrwv_("lsode--  itask (=i1) illegal  ", &c__30, &c__2, &c__1, &c__1, 
	    itask, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L603:
    xerrwv_("lsode--  istate .gt. 1 ", &c__50, &c__3, &c__1, &c__0, &c__0, &
	    c__0, &c__0, &c_b61, &c_b61, 23L);
    goto L700;
L604:
    xerrwv_("lsode--  neq (=i1) .lt. 1     ", &c__30, &c__4, &c__1, &c__1, &
	    neq[1], &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L605:
    xerrwv_("lsode--  istate and neq  increased from i1 to i2", &c__50, &c__5,
	     &c__1, &c__2, & (ls0001_._2) .n, &neq[1], &c__0, &c_b61, &c_b61, 48L);
    goto L700;
L606:
    xerrwv_("lsode--  itol (=i1) illegal   ", &c__30, &c__6, &c__1, &c__1, 
	    itol, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L607:
    xerrwv_("lsode--  iopt (=i1) illegal   ", &c__30, &c__7, &c__1, &c__1, 
	    iopt, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L608:
    xerrwv_("lsode--  mf (=i1) illegal     ", &c__30, &c__8, &c__1, &c__1, mf,
	     &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L609:
    xerrwv_("lsode--  ml (=i1) illegal.. .lt.0 or .ge.neq (=i2)", &c__50, &
	    c__9, &c__1, &c__2, &ml, &neq[1], &c__0, &c_b61, &c_b61, 50L);
    goto L700;
L610:
    xerrwv_("lsode--  mu (=i1) illegal.. .lt.0 or .ge.neq (=i2)", &c__50, &
	    c__10, &c__1, &c__2, &mu, &neq[1], &c__0, &c_b61, &c_b61, 50L);
    goto L700;
L611:
    xerrwv_("lsode--  maxord (=i1) .lt. 0  ", &c__30, &c__11, &c__1, &c__1, &
	    (ls0001_._2) .maxord, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L612:
    xerrwv_("lsode--  mxstep (=i1) .lt. 0  ", &c__30, &c__12, &c__1, &c__1, &
	    (ls0001_._2) .mxstep, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L613:
    xerrwv_("lsode--  mxhnil (=i1) .lt. 0  ", &c__30, &c__13, &c__1, &c__1, &
	    (ls0001_._2) .mxhnil, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L614:
    xerrwv_("lsode--  tout (=r1)  .gt.  t (=r2)      ", &c__40, &c__14, &c__1,
	     &c__0, &c__0, &c__0, &c__2, tout, t, 40L);
    xerrwv_("      h0 (=r1) gives integration direction", &c__50, &c__14, &
	    c__1, &c__0, &c__0, &c__0, &c__1, &h0, &c_b61, 42L);
    goto L700;
L615:
    xerrwv_("lsode--  hmax (=r1) .lt. 0.0  ", &c__30, &c__15, &c__1, &c__0, &
	    c__0, &c__0, &c__1, &hmax, &c_b61, 30L);
    goto L700;
L616:
    xerrwv_("lsode--  hmin (=r1) .lt. 0.0  ", &c__30, &c__16, &c__1, &c__0, &
	    c__0, &c__0, &c__1, & (ls0001_._2) .hmin, &c_b61, 30L);
    goto L700;
L617:
    xerrwv_("lsode-- necessary size for rwork (i1) larger than i2", &c__60, &
	    c__17, &c__1, &c__2, &lenrw, lrw, &c__0, &c_b61, &c_b61, 52L);
    goto L700;
L618:
    xerrwv_("lsode-- necessary size for iwork (i1) larger than liw (i2)", &
	    c__60, &c__18, &c__1, &c__2, &leniw, liw, &c__0, &c_b61, &c_b61, 
	    58L);
    goto L700;
L619:
    xerrwv_("lsode--  rtol(i1) est r1 .lt. 0.0        ", &c__40, &c__19, &
	    c__1, &c__1, &i__, &c__0, &c__1, &rtoli, &c_b61, 41L);
    goto L700;
L620:
    xerrwv_("lsode--  atol(i1) est r1 .lt. 0.0        ", &c__40, &c__20, &
	    c__1, &c__1, &i__, &c__0, &c__1, &atoli, &c_b61, 41L);
    goto L700;
L621:
    ewti = rwork[(ls0001_._2) .lewt + i__ - 1];
    xerrwv_("lsode--  ewt(i1) (=r1) est .le. 0.0         ", &c__40, &c__21, &
	    c__1, &c__1, &i__, &c__0, &c__1, &ewti, &c_b61, 44L);
    goto L700;
L622:
    xerrwv_("lsode--  tout (=r1) too close to t(=r2) ", &c__60, &c__22, &c__1,
	     &c__0, &c__0, &c__0, &c__2, tout, t, 40L);
    goto L700;
L623:
    xerrwv_("lsode--  itask (=i1) and tout (=r1) .gt. tcur - hu (= r2)  ", &
	    c__60, &c__23, &c__1, &c__1, itask, &c__0, &c__2, tout, &tp, 59L);
    goto L700;
L624:
    xerrwv_("lsode--  itask = 4 or 5 and tcrit (=r1) .gt. tcur (=r2)   ", &
	    c__60, &c__24, &c__1, &c__0, &c__0, &c__0, &c__2, &tcrit, &
	    (ls0001_._2) .tn, 58L);
    goto L700;
L625:
    xerrwv_("lsode--  itask = 4 or 5 and tcrit (=r1)  .gt.  tout (=r2)", &
	    c__60, &c__25, &c__1, &c__0, &c__0, &c__0, &c__2, &tcrit, tout, 
	    57L);
    goto L700;
L626:
    xerrwv_("lsode-- initial precision required", &c__50, &c__26, &c__1, &
	    c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 34L);
    xerrwv_("too high wrt machine precision tolsf (=r1)", &c__60, &c__26, &
	    c__1, &c__0, &c__0, &c__0, &c__1, &tolsf, &c_b61, 42L);
    rwork[14] = tolsf;
    goto L700;
L627:
    xerrwv_("lsode--  problems in intdy. itask=i1,tout=r1", &c__50, &c__27, &
	    c__1, &c__1, itask, &c__0, &c__1, tout, &c_b61, 44L);

L700:
    if ((ls0001_._2) .illin == 5) {
	goto L710;
    }
    ++ (ls0001_._2) .illin;
    *istate = -3;
    return 0;
L710:
    xerrwv_("lsode-- incorrect inputs", &c__50, &c__302, &c__1, &c__0, &c__0, 
	    &c__0, &c__0, &c_b61, &c_b61, 24L);

L800:
    xerrwv_("lsode-- infinite loop ", &c__50, &c__303, &c__2, &c__0, &c__0, &
	    c__0, &c__0, &c_b61, &c_b61, 22L);
    return 0;
 

}  

 
  int lsodi_(res, adda, jac, neq, y, ydoti, t, tout, itol, 
	rtol, atol, itask, istate, iopt, rwork, lrw, iwork, liw, mf)
  int (*res) (), (*adda) (), (*jac) ();
integer *neq;
doublereal *y, *ydoti, *t, *tout;
integer *itol;
doublereal *rtol, *atol;
integer *itask, *istate, *iopt;
doublereal *rwork;
integer *lrw, *iwork, *liw, *mf;
{
     

    static integer mord[2] = { 12,5 };
    static integer mxstp0 = 500;
    static integer mxhnl0 = 10;

     
    integer i__1, i__2;
    doublereal d__1, d__2;

     
    double sqrt(), d_sign();

     
    static doublereal hmax;
    static logical ihit;
    static integer ires;
    static doublereal ewti, size;
    static integer i__, iflag;
    extern   int ainvg_();
    static doublereal atoli;
    static integer leniw, lenwm;
    extern   int stodi_();
    static integer imxer;
    static doublereal tcrit;
    static integer i1, i2, lenrw;
    static doublereal h0, rtoli, tdist, tnext, tolsf;
    extern doublereal vnorm_();
    extern   int ewset_();
    static doublereal w0;
    extern   int solsy_();
    extern   int intdy_();
    extern doublereal dlamch_();
    static integer ml;
    static doublereal rh;
    static integer lp, mu;
    static doublereal tp;
    extern   int prepji_();
    extern   int xerrwv_();
    static doublereal big;
    static integer ier, kgo;
    static doublereal ayi, hmx, tol, sum;
    static integer lyd0;
     
    --neq;
    --y;
    --ydoti;
    --rtol;
    --atol;
    --rwork;
    --iwork;

    ierode_ .iero = 0;
    if (*istate < 0 || *istate > 3) {
	goto L601;
    }
    if (*itask < 1 || *itask > 5) {
	goto L602;
    }
    if (*istate <= 1) {
	goto L10;
    }
    if ((ls0001_._3) .init == 0) {
	goto L603;
    }
    if (*istate == 2) {
	goto L200;
    }
    goto L20;
L10:
    (ls0001_._3) .init = 0;
    if (*tout == *t) {
	goto L430;
    }
L20:
    (ls0001_._3) .ntrep = 0;
 

 
 

 
 

 
 
 

    if (neq[1] <= 0) {
	goto L604;
    }
    if (*istate <= 1) {
	goto L25;
    }
    if (neq[1] > (ls0001_._3) .n) {
	goto L605;
    }
L25:
    (ls0001_._3) .n = neq[1];
    if (*itol < 1 || *itol > 4) {
	goto L606;
    }
    if (*iopt < 0 || *iopt > 1) {
	goto L607;
    }
    (ls0001_._3) .meth = *mf / 10;
    (ls0001_._3) .miter = *mf - (ls0001_._3) .meth * 10;
    if ((ls0001_._3) .meth < 1 || (ls0001_._3) .meth > 2) {
	goto L608;
    }
    if ((ls0001_._3) .miter <= 0 || (ls0001_._3) .miter > 5) {
	goto L608;
    }
    if ((ls0001_._3) .miter == 3) {
	goto L608;
    }
    if ((ls0001_._3) .miter < 3) {
	goto L30;
    }
    ml = iwork[1];
    mu = iwork[2];
    if (ml < 0 || ml >= (ls0001_._3) .n) {
	goto L609;
    }
    if (mu < 0 || mu >= (ls0001_._3) .n) {
	goto L610;
    }
L30:
 

    if (*iopt == 1) {
	goto L40;
    }
    (ls0001_._3) .maxord = mord[(ls0001_._3) .meth - 1];
    (ls0001_._3) .mxstep = mxstp0;
    (ls0001_._3) .mxhnil = mxhnl0;
    if (*istate <= 1) {
	h0 = 0.;
    }
    (ls0001_._3) .hmxi = 0.;
    (ls0001_._3) .hmin = 0.;
    goto L60;
L40:
    (ls0001_._3) .maxord = iwork[5];
    if ((ls0001_._3) .maxord < 0) {
	goto L611;
    }
    if ((ls0001_._3) .maxord == 0) {
	(ls0001_._3) .maxord = 100;
    }
 
    i__1 = (ls0001_._3) .maxord, i__2 = mord[(ls0001_._3) .meth - 1];
    (ls0001_._3) .maxord = (( i__1 ) <= ( i__2 ) ? ( i__1 ) : ( i__2 )) ;
    (ls0001_._3) .mxstep = iwork[6];
    if ((ls0001_._3) .mxstep < 0) {
	goto L612;
    }
    if ((ls0001_._3) .mxstep == 0) {
	(ls0001_._3) .mxstep = mxstp0;
    }
    (ls0001_._3) .mxhnil = iwork[7];
    if ((ls0001_._3) .mxhnil < 0) {
	goto L613;
    }
    if ((ls0001_._3) .mxhnil == 0) {
	(ls0001_._3) .mxhnil = mxhnl0;
    }
    if (*istate > 1) {
	goto L50;
    }
    h0 = rwork[5];
    if ((*tout - *t) * h0 < 0.) {
	goto L614;
    }
L50:
    hmax = rwork[6];
    if (hmax < 0.) {
	goto L615;
    }
    (ls0001_._3) .hmxi = 0.;
    if (hmax > 0.) {
	(ls0001_._3) .hmxi = 1. / hmax;
    }
    (ls0001_._3) .hmin = rwork[7];
    if ((ls0001_._3) .hmin < 0.) {
	goto L616;
    }
 

 
 
 
 
 

L60:
    (ls0001_._3) .lyh = 21;
    if (*istate <= 1) {
	(ls0001_._3) .nyh = (ls0001_._3) .n;
    }
    (ls0001_._3) .lwm = (ls0001_._3) .lyh + ((ls0001_._3) .maxord + 1) * (ls0001_._3) .nyh;
    if ((ls0001_._3) .miter <= 2) {
	lenwm = (ls0001_._3) .n * (ls0001_._3) .n + 2;
    }
    if ((ls0001_._3) .miter >= 4) {
	lenwm = ((ml << 1) + mu + 1) * (ls0001_._3) .n + 2;
    }
    (ls0001_._3) .lewt = (ls0001_._3) .lwm + lenwm;
    (ls0001_._3) .lsavr = (ls0001_._3) .lewt + (ls0001_._3) .n;
    (ls0001_._3) .lacor = (ls0001_._3) .lsavr + (ls0001_._3) .n;
    lenrw = (ls0001_._3) .lacor + (ls0001_._3) .n - 1;
    iwork[17] = lenrw;
    (ls0001_._3) .liwm = 1;
    leniw = (ls0001_._3) .n + 20;
    iwork[18] = leniw;
    if (lenrw > *lrw) {
	goto L617;
    }
    if (leniw > *liw) {
	goto L618;
    }
 

    rtoli = rtol[1];
    atoli = atol[1];
    i__1 = (ls0001_._3) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (*itol >= 3) {
	    rtoli = rtol[i__];
	}
	if (*itol == 2 || *itol == 4) {
	    atoli = atol[i__];
	}
	if (rtoli < 0.) {
	    goto L619;
	}
	if (atoli < 0.) {
	    goto L620;
	}
 
    }
    if (*istate <= 1) {
	goto L100;
    }
 

    (ls0001_._3) .jstart = -1;
    if ((ls0001_._3) .nq <= (ls0001_._3) .maxord) {
	goto L90;
    }
 

    i__1 = (ls0001_._3) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	ydoti[i__] = rwork[i__ + (ls0001_._3) .lwm - 1];
    }
 

L90:
    rwork[(ls0001_._3) .lwm] = sqrt((ls0001_._3) .uround);
    if ((ls0001_._3) .n == (ls0001_._3) .nyh) {
	goto L200;
    }
 

    i1 = (ls0001_._3) .lyh + (ls0001_._3) .l * (ls0001_._3) .nyh;
    i2 = (ls0001_._3) .lyh + ((ls0001_._3) .maxord + 1) * (ls0001_._3) .nyh - 1;
    if (i1 > i2) {
	goto L200;
    }
    i__1 = i2;
    for (i__ = i1; i__ <= i__1; ++i__) {
 
	rwork[i__] = 0.;
    }
    goto L200;
 

 
 
 
 
 
 

L100:
    (ls0001_._3) .uround = dlamch_("p", 1L);
    (ls0001_._3) .tn = *t;
    if (*itask != 4 && *itask != 5) {
	goto L105;
    }
    tcrit = rwork[1];
    if ((tcrit - *tout) * (*tout - *t) < 0.) {
	goto L625;
    }
    if (h0 != 0. && (*t + h0 - tcrit) * h0 > 0.) {
	h0 = tcrit - *t;
    }
L105:
    (ls0001_._3) .jstart = 0;
    rwork[(ls0001_._3) .lwm] = sqrt((ls0001_._3) .uround);
    (ls0001_._3) .nhnil = 0;
    (ls0001_._3) .nst = 0;
    (ls0001_._3) .nre = 0;
    (ls0001_._3) .nje = 0;
    (ls0001_._3) .nslast = 0;
    (ls0001_._3) .hu = 0.;
    (ls0001_._3) .nqu = 0;
    (ls0001_._3) .ccmax = .3;
    (ls0001_._3) .maxcor = 3;
    (ls0001_._3) .msbp = 20;
    (ls0001_._3) .mxncf = 10;
 

    lyd0 = (ls0001_._3) .lyh + (ls0001_._3) .nyh;
    lp = (ls0001_._3) .lwm + 1;
    if (*istate == 1) {
	goto L120;
    }
 

    ainvg_(res, adda, &neq[1], t, &y[1], &rwork[lyd0], & (ls0001_._3) .miter, &ml, &
	    mu, &rwork[lp], &iwork[21], &ier);
    ++ (ls0001_._3) .nre;
    if (ier < 0) {
	goto L560;
    } else if (ier == 0) {
	goto L110;
    } else {
	goto L565;
    }
L110:
    if (ierode_ .iero > 0) {
	return 0;
    }
    i__1 = (ls0001_._3) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	rwork[i__ + (ls0001_._3) .lyh - 1] = y[i__];
    }
    goto L130;
 

L120:
    i__1 = (ls0001_._3) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	rwork[i__ + (ls0001_._3) .lyh - 1] = y[i__];
 
	rwork[i__ + lyd0 - 1] = ydoti[i__];
    }
 

L130:
    (ls0001_._3) .nq = 1;
    (ls0001_._3) .h__ = 1.;
    ewset_(& (ls0001_._3) .n, itol, &rtol[1], &atol[1], &rwork[(ls0001_._3) .lyh], &
	    rwork[(ls0001_._3) .lewt]);
    i__1 = (ls0001_._3) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (rwork[i__ + (ls0001_._3) .lewt - 1] <= 0.) {
	    goto L621;
	}
 
	rwork[i__ + (ls0001_._3) .lewt - 1] = 1. / rwork[i__ + (ls0001_._3) .lewt - 1];
    }
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

    if (h0 != 0.) {
	goto L180;
    }
    tdist = (d__1 = *tout - *t, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
 
    d__1 = (( *t ) >= 0 ? ( *t ) : -( *t )) , d__2 = (( *tout ) >= 0 ? ( *tout ) : -( *tout )) ;
    w0 = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    if (tdist < (ls0001_._3) .uround * 2. * w0) {
	goto L622;
    }
    tol = rtol[1];
    if (*itol <= 2) {
	goto L145;
    }
    i__1 = (ls0001_._3) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
 
	d__1 = tol, d__2 = rtol[i__];
	tol = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    }
L145:
    if (tol > 0.) {
	goto L160;
    }
    atoli = atol[1];
    i__1 = (ls0001_._3) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (*itol == 2 || *itol == 4) {
	    atoli = atol[i__];
	}
	ayi = (d__1 = y[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	if (ayi != 0.) {
 
	    d__1 = tol, d__2 = atoli / ayi;
	    tol = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	}
 
    }
L160:
 
    d__1 = tol, d__2 = (ls0001_._3) .uround * 100.;
    tol = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    tol = (( tol ) <= ( .001 ) ? ( tol ) : ( .001 )) ;
    sum = vnorm_(& (ls0001_._3) .n, &rwork[lyd0], &rwork[(ls0001_._3) .lewt]);
 
    d__1 = sum;
    sum = 1. / (tol * w0 * w0) + tol * (d__1 * d__1);
    h0 = 1. / sqrt(sum);
    h0 = (( h0 ) <= ( tdist ) ? ( h0 ) : ( tdist )) ;
    d__1 = *tout - *t;
    h0 = d_sign(&h0, &d__1);
 

L180:
    rh = (( h0 ) >= 0 ? ( h0 ) : -( h0 ))  * (ls0001_._3) .hmxi;
    if (rh > 1.) {
	h0 /= rh;
    }
 

    (ls0001_._3) .h__ = h0;
    i__1 = (ls0001_._3) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	rwork[i__ + lyd0 - 1] = h0 * rwork[i__ + lyd0 - 1];
    }
    goto L270;
 

 
 
 
 

L200:
    (ls0001_._3) .nslast = (ls0001_._3) .nst;
    switch ((int)*itask) {
	case 1:  goto L210;
	case 2:  goto L250;
	case 3:  goto L220;
	case 4:  goto L230;
	case 5:  goto L240;
    }
L210:
    if (((ls0001_._3) .tn - *tout) * (ls0001_._3) .h__ < 0.) {
	goto L250;
    }
    intdy_(tout, &c__0, &rwork[(ls0001_._3) .lyh], & (ls0001_._3) .nyh, &y[1], &iflag);
    if (iflag != 0) {
	goto L627;
    }
    *t = *tout;
    goto L420;
L220:
    tp = (ls0001_._3) .tn - (ls0001_._3) .hu * ((ls0001_._3) .uround * 100. + 1.);
    if ((tp - *tout) * (ls0001_._3) .h__ > 0.) {
	goto L623;
    }
    if (((ls0001_._3) .tn - *tout) * (ls0001_._3) .h__ < 0.) {
	goto L250;
    }
    goto L400;
L230:
    tcrit = rwork[1];
    if (((ls0001_._3) .tn - tcrit) * (ls0001_._3) .h__ > 0.) {
	goto L624;
    }
    if ((tcrit - *tout) * (ls0001_._3) .h__ < 0.) {
	goto L625;
    }
    if (((ls0001_._3) .tn - *tout) * (ls0001_._3) .h__ < 0.) {
	goto L245;
    }
    intdy_(tout, &c__0, &rwork[(ls0001_._3) .lyh], & (ls0001_._3) .nyh, &y[1], &iflag);
    if (iflag != 0) {
	goto L627;
    }
    *t = *tout;
    goto L420;
L240:
    tcrit = rwork[1];
    if (((ls0001_._3) .tn - tcrit) * (ls0001_._3) .h__ > 0.) {
	goto L624;
    }
L245:
    hmx = (( (ls0001_._3) .tn ) >= 0 ? ( (ls0001_._3) .tn ) : -( (ls0001_._3) .tn ))  + (( (ls0001_._3) .h__ ) >= 0 ? ( (ls0001_._3) .h__ ) : -( (ls0001_._3) .h__ )) ;
    ihit = (d__1 = (ls0001_._3) .tn - tcrit, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= (ls0001_._3) .uround * 100. *
	     hmx;
    if (ihit) {
	goto L400;
    }
    tnext = (ls0001_._3) .tn + (ls0001_._3) .h__ * ((ls0001_._3) .uround * 4. + 1.);
    if ((tnext - tcrit) * (ls0001_._3) .h__ <= 0.) {
	goto L250;
    }
    (ls0001_._3) .h__ = (tcrit - (ls0001_._3) .tn) * (1. - (ls0001_._3) .uround * 4.);
    if (*istate == 2) {
	(ls0001_._3) .jstart = -2;
    }
 

 
 
 

 

 
 
 
 

L250:
    if ((ls0001_._3) .nst - (ls0001_._3) .nslast >= (ls0001_._3) .mxstep) {
	goto L500;
    }
    ewset_(& (ls0001_._3) .n, itol, &rtol[1], &atol[1], &rwork[(ls0001_._3) .lyh], &
	    rwork[(ls0001_._3) .lewt]);
    i__1 = (ls0001_._3) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (rwork[i__ + (ls0001_._3) .lewt - 1] <= 0.) {
	    goto L510;
	}
 
	rwork[i__ + (ls0001_._3) .lewt - 1] = 1. / rwork[i__ + (ls0001_._3) .lewt - 1];
    }
L270:
    tolsf = (ls0001_._3) .uround * vnorm_(& (ls0001_._3) .n, &rwork[(ls0001_._3) .lyh], &
	    rwork[(ls0001_._3) .lewt]);
    if (tolsf <= 1.) {
	goto L280;
    }
    tolsf *= 2.;
    if ((ls0001_._3) .nst == 0) {
	goto L626;
    }
    goto L520;
L280:
    if ((ls0001_._3) .tn + (ls0001_._3) .h__ != (ls0001_._3) .tn) {
	goto L290;
    }
    ++ (ls0001_._3) .nhnil;
    if ((ls0001_._3) .nhnil > (ls0001_._3) .mxhnil) {
	goto L290;
    }
    xerrwv_("lsodi--  attention.. t (=r1) and h (=r2) are", &c__50, &c__101, &
	    c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 44L);
    xerrwv_("    such that  t + h = t at next step", &c__60, &c__101, &c__1, &
	    c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 37L);
    xerrwv_("      (h = pas). integration continues", &c__50, &c__101, &c__1, 
	    &c__0, &c__0, &c__0, &c__2, & (ls0001_._3) .tn, & (ls0001_._3) .h__, 38L);
    if ((ls0001_._3) .nhnil < (ls0001_._3) .mxhnil) {
	goto L290;
    }
    xerrwv_("lsodi--  previous message has been given i1 times", &c__50, &
	    c__102, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 49L);
    xerrwv_("     it will not be repeated", &c__50, &c__102, &c__1, &c__1, &
	    (ls0001_._3) .mxhnil, &c__0, &c__0, &c_b61, &c_b61, 28L);
L290:
 

 
 
 
 

    stodi_(&neq[1], &y[1], &rwork[(ls0001_._3) .lyh], & (ls0001_._3) .nyh, &rwork[
	    (ls0001_._3) .lyh], &rwork[(ls0001_._3) .lewt], &ydoti[1], &rwork[
	    (ls0001_._3) .lsavr], &rwork[(ls0001_._3) .lacor], &rwork[(ls0001_._3) .lwm], &
	    iwork[(ls0001_._3) .liwm], res, adda, jac, prepji_, solsy_);
    if (ierode_ .iero > 0) {
	return 0;
    }
    kgo = 1 - (ls0001_._3) .kflag;
    switch ((int)kgo) {
	case 1:  goto L300;
	case 2:  goto L530;
	case 3:  goto L540;
	case 4:  goto L400;
	case 5:  goto L550;
    }

 
 
 

 
 
 
 

L300:
    (ls0001_._3) .init = 1;
    switch ((int)*itask) {
	case 1:  goto L310;
	case 2:  goto L400;
	case 3:  goto L330;
	case 4:  goto L340;
	case 5:  goto L350;
    }
 

L310:
    if (((ls0001_._3) .tn - *tout) * (ls0001_._3) .h__ < 0.) {
	goto L250;
    }
    intdy_(tout, &c__0, &rwork[(ls0001_._3) .lyh], & (ls0001_._3) .nyh, &y[1], &iflag);
    *t = *tout;
    goto L420;
 

L330:
    if (((ls0001_._3) .tn - *tout) * (ls0001_._3) .h__ >= 0.) {
	goto L400;
    }
    goto L250;
 

L340:
    if (((ls0001_._3) .tn - *tout) * (ls0001_._3) .h__ < 0.) {
	goto L345;
    }
    intdy_(tout, &c__0, &rwork[(ls0001_._3) .lyh], & (ls0001_._3) .nyh, &y[1], &iflag);
    *t = *tout;
    goto L420;
L345:
    hmx = (( (ls0001_._3) .tn ) >= 0 ? ( (ls0001_._3) .tn ) : -( (ls0001_._3) .tn ))  + (( (ls0001_._3) .h__ ) >= 0 ? ( (ls0001_._3) .h__ ) : -( (ls0001_._3) .h__ )) ;
    ihit = (d__1 = (ls0001_._3) .tn - tcrit, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= (ls0001_._3) .uround * 100. *
	     hmx;
    if (ihit) {
	goto L400;
    }
    tnext = (ls0001_._3) .tn + (ls0001_._3) .h__ * ((ls0001_._3) .uround * 4. + 1.);
    if ((tnext - tcrit) * (ls0001_._3) .h__ <= 0.) {
	goto L250;
    }
    (ls0001_._3) .h__ = (tcrit - (ls0001_._3) .tn) * (1. - (ls0001_._3) .uround * 4.);
    (ls0001_._3) .jstart = -2;
    goto L250;
 

L350:
    hmx = (( (ls0001_._3) .tn ) >= 0 ? ( (ls0001_._3) .tn ) : -( (ls0001_._3) .tn ))  + (( (ls0001_._3) .h__ ) >= 0 ? ( (ls0001_._3) .h__ ) : -( (ls0001_._3) .h__ )) ;
    ihit = (d__1 = (ls0001_._3) .tn - tcrit, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= (ls0001_._3) .uround * 100. *
	     hmx;
 

 
 
 
 
 

 

 
 

L400:
    i__1 = (ls0001_._3) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	y[i__] = rwork[i__ + (ls0001_._3) .lyh - 1];
    }
    *t = (ls0001_._3) .tn;
    if (*itask != 4 && *itask != 5) {
	goto L420;
    }
    if (ihit) {
	*t = tcrit;
    }
L420:
    *istate = 2;
    if ((ls0001_._3) .kflag == -3) {
	*istate = 3;
    }
    (ls0001_._3) .illin = 0;
    rwork[11] = (ls0001_._3) .hu;
    rwork[12] = (ls0001_._3) .h__;
    rwork[13] = (ls0001_._3) .tn;
    iwork[11] = (ls0001_._3) .nst;
    iwork[12] = (ls0001_._3) .nre;
    iwork[13] = (ls0001_._3) .nje;
    iwork[14] = (ls0001_._3) .nqu;
    iwork[15] = (ls0001_._3) .nq;
    return 0;

L430:
    ++ (ls0001_._3) .ntrep;
    if ((ls0001_._3) .ntrep < 5) {
	return 0;
    }
    xerrwv_("lsodi--  repeated calls with istate=0 or 1 and tout=t (r1)  ", &
	    c__60, &c__301, &c__1, &c__0, &c__0, &c__0, &c__1, t, &c_b61, 60L)
	    ;
    goto L800;
 

 
 
 
 

 
 
 
 

 

L500:
    xerrwv_("lsodi--  at t (=r1), mxstep (=i1) steps   ", &c__50, &c__201, &
	    c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 42L);
    xerrwv_("necessary before reaching tout", &c__50, &c__201, &c__1, &c__1, &
	    (ls0001_._3) .mxstep, &c__0, &c__1, & (ls0001_._3) .tn, &c_b61, 30L);
    *istate = -1;
    goto L580;
 

L510:
    ewti = rwork[(ls0001_._3) .lewt + i__ - 1];
    xerrwv_("lsodi--  at t (=r1), ewt(i1) (r2) is .le. 0", &c__50, &c__202, &
	    c__1, &c__1, &i__, &c__0, &c__2, & (ls0001_._3) .tn, &ewti, 43L);
    *istate = -6;
    goto L590;
L520:
    xerrwv_("lsodi--  at t (=r1),  too much precision required", &c__50, &
	    c__203, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 49L);
 

    xerrwv_(" w.r.t. machine precision  tolsf (=r2) ", &c__50, &c__203, &c__1,
	     &c__0, &c__0, &c__0, &c__2, & (ls0001_._3) .tn, &tolsf, 39L);
    rwork[14] = tolsf;
    *istate = -2;
    goto L590;
 

L530:
    xerrwv_("lsodi--  at t(=r1) anf for h(=r2), error", &c__50, &c__204, &
	    c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 40L);
    xerrwv_("      test failed with abs(h) = hmin", &c__50, &c__204, &c__1, &
	    c__0, &c__0, &c__0, &c__2, & (ls0001_._3) .tn, & (ls0001_._3) .h__, 36L);
    *istate = -4;
    goto L570;
 

L540:
    xerrwv_("lsodi--  at t (=r1) for step h (=r2), le", &c__50, &c__205, &
	    c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 40L);
    xerrwv_("    corrector does not converge ", &c__50, &c__205, &c__1, &c__0,
	     &c__0, &c__0, &c__0, &c_b61, &c_b61, 32L);
    xerrwv_("      with abs(h) = hmin   ", &c__30, &c__205, &c__1, &c__0, &
	    c__0, &c__0, &c__2, & (ls0001_._3) .tn, & (ls0001_._3) .h__, 27L);
    *istate = -5;
    goto L570;
 

L550:
    xerrwv_("lsodi--  at t (=r1) repeated error (ires=3) due to ", &c__50, &
	    c__206, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 51L);
    xerrwv_("routine which evaluates the residue", &c__30, &c__206, &c__1, &
	    c__0, &c__0, &c__0, &c__1, & (ls0001_._3) .tn, &c_b61, 35L);
    *istate = -7;
    goto L590;
 

L560:
    ier = -ier;
    xerrwv_("lsodi-- initialization failed dy/dt: singular matrix", &c__60, &
	    c__207, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 52L);
    xerrwv_("dgefa or dgbfa return info=(i1)", &c__50, &c__207, &c__1, &c__1, 
	    &ier, &c__0, &c__0, &c_b61, &c_b61, 31L);
    *istate = -8;
    return 0;
 

L565:
    xerrwv_("lsodi--  initialisation failed dy/dt:  routine", &c__50, &c__208,
	     &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 46L);
    xerrwv_("      of residue evaluation returns:", &c__50, &c__208, &c__1, &
	    c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 36L);
    xerrwv_("       ires = (i1)", &c__20, &c__208, &c__1, &c__1, &ier, &c__0, 
	    &c__0, &c_b61, &c_b61, 18L);
    *istate = -8;
    return 0;
 

L570:
    big = 0.;
    imxer = 1;
    i__1 = (ls0001_._3) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	size = (d__1 = rwork[i__ + (ls0001_._3) .lacor - 1] * rwork[i__ + 
		(ls0001_._3) .lewt - 1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	if (big >= size) {
	    goto L575;
	}
	big = size;
	imxer = i__;
L575:
	;
    }
    iwork[16] = imxer;
 

L580:
    lyd0 = (ls0001_._3) .lyh + (ls0001_._3) .nyh;
    i__1 = (ls0001_._3) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	rwork[i__ + (ls0001_._3) .lsavr - 1] = rwork[i__ + lyd0 - 1] / 
		(ls0001_._3) .h__;
 
	y[i__] = rwork[i__ + (ls0001_._3) .lyh - 1];
    }
    ires = 1;
    (*res)(&neq[1], & (ls0001_._3) .tn, &y[1], &rwork[(ls0001_._3) .lsavr], &ydoti[1], &
	    ires);
    if (ierode_ .iero > 0) {
	return 0;
    }
    ++ (ls0001_._3) .nre;
    if (ires <= 1) {
	goto L595;
    }
    xerrwv_("lsodi--  routine for evaluation od residue returns", &c__50, &
	    c__210, &c__1, &c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 50L);
    xerrwv_("    ires=i1 ", &c__50, &c__210, &c__1, &c__1, &ires, &c__0, &
	    c__0, &c_b61, &c_b61, 12L);
    goto L595;
 

L590:
    i__1 = (ls0001_._3) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	y[i__] = rwork[i__ + (ls0001_._3) .lyh - 1];
    }
L595:
    *t = (ls0001_._3) .tn;
    (ls0001_._3) .illin = 0;
    rwork[11] = (ls0001_._3) .hu;
    rwork[12] = (ls0001_._3) .h__;
    rwork[13] = (ls0001_._3) .tn;
    iwork[11] = (ls0001_._3) .nst;
    iwork[12] = (ls0001_._3) .nre;
    iwork[13] = (ls0001_._3) .nje;
    iwork[14] = (ls0001_._3) .nqu;
    iwork[15] = (ls0001_._3) .nq;
    return 0;
 

 
 
 
 
 
 
 

L601:
    xerrwv_("lsodi--  istate (=i1) illegal ", &c__30, &c__1, &c__1, &c__1, 
	    istate, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L602:
    xerrwv_("lsodi--  itask (=i1) illegal  ", &c__30, &c__2, &c__1, &c__1, 
	    itask, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L603:
    xerrwv_("lsodi--  istate .gt. 1 ", &c__50, &c__3, &c__1, &c__0, &c__0, &
	    c__0, &c__0, &c_b61, &c_b61, 23L);
    goto L700;
L604:
    xerrwv_("lsodi--  neq (=i1) .lt. 1     ", &c__30, &c__4, &c__1, &c__1, &
	    neq[1], &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L605:
    xerrwv_("lsodi--  istate = 3 et neq jumps from i1 to i2", &c__50, &c__5, &
	    c__1, &c__2, & (ls0001_._3) .n, &neq[1], &c__0, &c_b61, &c_b61, 46L);
    goto L700;
L606:
    xerrwv_("lsodi--  itol (=i1) illegal   ", &c__30, &c__6, &c__1, &c__1, 
	    itol, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L607:
    xerrwv_("lsodi--  iopt (=i1) illegal   ", &c__30, &c__7, &c__1, &c__1, 
	    iopt, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L608:
    xerrwv_("lsodi--  mf (=i1) illegal     ", &c__30, &c__8, &c__1, &c__1, mf,
	     &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L609:
    xerrwv_("lsodi--  ml (=i1) illegal.. .lt.0 or .ge.neq (=i2)", &c__50, &
	    c__9, &c__1, &c__2, &ml, &neq[1], &c__0, &c_b61, &c_b61, 50L);
    goto L700;
L610:
    xerrwv_("lsodi--  mu (=i1) illegal.. .lt.0 or .ge.neq (=i2)", &c__50, &
	    c__10, &c__1, &c__2, &mu, &neq[1], &c__0, &c_b61, &c_b61, 50L);
    goto L700;
L611:
    xerrwv_("lsodi--  maxord (=i1) .lt. 0  ", &c__30, &c__11, &c__1, &c__1, &
	    (ls0001_._3) .maxord, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L612:
    xerrwv_("lsodi--  mxstep (=i1) .lt. 0  ", &c__30, &c__12, &c__1, &c__1, &
	    (ls0001_._3) .mxstep, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L613:
    xerrwv_("lsodi--  mxhnil (=i1) .lt. 0  ", &c__30, &c__13, &c__1, &c__1, &
	    (ls0001_._3) .mxhnil, &c__0, &c__0, &c_b61, &c_b61, 30L);
    goto L700;
L614:
    xerrwv_("lsodi--  tout (=r1)  .gt.  t (=r2)      ", &c__40, &c__14, &c__1,
	     &c__0, &c__0, &c__0, &c__2, tout, t, 40L);
    xerrwv_("      h0 (=r1) gives integration direction", &c__50, &c__14, &
	    c__1, &c__0, &c__0, &c__0, &c__1, &h0, &c_b61, 42L);
    goto L700;
L615:
    xerrwv_("lsodi--  hmax (=r1) .lt. 0.0  ", &c__30, &c__15, &c__1, &c__0, &
	    c__0, &c__0, &c__1, &hmax, &c_b61, 30L);
    goto L700;
L616:
    xerrwv_("lsodi--  hmin (=r1) .lt. 0.0  ", &c__30, &c__16, &c__1, &c__0, &
	    c__0, &c__0, &c__1, & (ls0001_._3) .hmin, &c_b61, 30L);
    goto L700;
L617:
    xerrwv_("lsodi-- necessary size for  rwork (i1) larger than i2", &c__60, &
	    c__17, &c__1, &c__2, &lenrw, lrw, &c__0, &c_b61, &c_b61, 53L);
    goto L700;
L618:
    xerrwv_("lsodi-- necessary size for  iwork (i1) larger than i2", &c__60, &
	    c__18, &c__1, &c__2, &leniw, liw, &c__0, &c_b61, &c_b61, 53L);
    goto L700;
L619:
    xerrwv_("lsodi--  rtol(i1) is r1 .lt. 0.0        ", &c__40, &c__19, &c__1,
	     &c__1, &i__, &c__0, &c__1, &rtoli, &c_b61, 40L);
    goto L700;
L620:
    xerrwv_("lsodi--  atol(i1) is r1 .lt. 0.0        ", &c__40, &c__20, &c__1,
	     &c__1, &i__, &c__0, &c__1, &atoli, &c_b61, 40L);
    goto L700;
L621:
    ewti = rwork[(ls0001_._3) .lewt + i__ - 1];
    xerrwv_("lsodi--  ewt(i1) (=r1) is  .le. 0.0         ", &c__40, &c__21, &
	    c__1, &c__1, &i__, &c__0, &c__1, &ewti, &c_b61, 44L);
    goto L700;
L622:
    xerrwv_("lsodi--  tout (=r1) too close to t(=r2) ", &c__60, &c__22, &c__1,
	     &c__0, &c__0, &c__0, &c__2, tout, t, 40L);
    goto L700;
L623:
    xerrwv_("lsodi--  itask = i1 and tout (=r1) .gt. tcur - hu (= r2)  ", &
	    c__60, &c__23, &c__1, &c__1, itask, &c__0, &c__2, tout, &tp, 58L);
    goto L700;
L624:
    xerrwv_("lsodi--  itask = 4 or 5 and tcrit (=r1) .gt. tcur (=r2)   ", &
	    c__60, &c__24, &c__1, &c__0, &c__0, &c__0, &c__2, &tcrit, &
	    (ls0001_._3) .tn, 58L);
    goto L700;
L625:
    xerrwv_("lsodi--  itask = 4 or 5 and tcrit (=r1)  .gt.  tout (=r2)", &
	    c__60, &c__25, &c__1, &c__0, &c__0, &c__0, &c__2, &tcrit, tout, 
	    57L);
    goto L700;
L626:
    xerrwv_("lsodi-- too much accuracy required", &c__50, &c__26, &c__1, &
	    c__0, &c__0, &c__0, &c__0, &c_b61, &c_b61, 34L);
    xerrwv_("w.r.t machine precision tolsf (=r1)", &c__60, &c__26, &c__1, &
	    c__0, &c__0, &c__0, &c__1, &tolsf, &c_b61, 35L);
    rwork[14] = tolsf;
    goto L700;
L627:
    xerrwv_("lsodi--  problems due to intdy. itask=i1,tout=r1", &c__50, &
	    c__27, &c__1, &c__1, itask, &c__0, &c__1, tout, &c_b61, 48L);

L700:
    if ((ls0001_._3) .illin == 5) {
	goto L710;
    }
    ++ (ls0001_._3) .illin;
    *istate = -3;
    return 0;
L710:
    xerrwv_("lsodi--  incorrect inputs", &c__50, &c__302, &c__1, &c__0, &c__0,
	     &c__0, &c__0, &c_b61, &c_b61, 25L);

L800:
    xerrwv_("lsodi-- infinite loop", &c__50, &c__303, &c__2, &c__0, &c__0, &
	    c__0, &c__0, &c_b61, &c_b61, 21L);
    return 0;
 

}  

 
  int order_(limit, last, maxerr, ermax, elist, iord, liord, 
	nrmax)
integer *limit, *last, *maxerr;
doublereal *ermax, *elist;
integer *iord, *liord, *nrmax;
{
     
    integer i__1;

     
    static integer ibeg, jbnd, i__, j, k, isucc;
    static doublereal errmin, errmax;
    static integer ido;
     
    --elist;
    --iord;

     
    if (*last > 2) {
	goto L20;
    }
    iord[1] = 1;
    iord[2] = 2;
    goto L180;

L20:
    errmax = elist[*maxerr];
    if (*nrmax == 1) {
	goto L60;
    }
    ido = *nrmax - 1;
    i__1 = ido;
    for (i__ = 1; i__ <= i__1; ++i__) {
	isucc = iord[*nrmax - 1];
	if (errmax <= elist[isucc]) {
	    goto L60;
	}
	iord[*nrmax] = isucc;
	--(*nrmax);
 
    }

 
 
 
 

L60:
    dqa001_ .jupbnd = *last;
    if (*last > *limit / 2 + 2) {
	dqa001_ .jupbnd = *limit + 3 - *last;
    }
    errmin = elist[*last];

 
 
 

    jbnd = dqa001_ .jupbnd - 1;
    ibeg = *nrmax + 1;
    if (ibeg > jbnd) {
	goto L100;
    }
    i__1 = jbnd;
    for (i__ = ibeg; i__ <= i__1; ++i__) {
	isucc = iord[i__];
	if (errmax >= elist[isucc]) {
	    goto L120;
	}
	iord[i__ - 1] = isucc;
 
    }
L100:
    iord[jbnd] = *maxerr;
    iord[dqa001_ .jupbnd] = *last;
    goto L180;

 

L120:
    iord[i__ - 1] = *maxerr;
    k = jbnd;
    i__1 = jbnd;
    for (j = i__; j <= i__1; ++j) {
	isucc = iord[k];
	if (errmin < elist[isucc]) {
	    goto L160;
	}
	iord[k + 1] = isucc;
	--k;
 
    }
    iord[i__] = *last;
    goto L180;
L160:
    iord[k + 1] = *last;

 

L180:
    *maxerr = iord[*nrmax];
    *ermax = elist[*maxerr];
    return 0;
}  

 
  int prepj_(neq, y, yh, nyh, ewt, ftem, savf, wm, iwm, f, jac)
integer *neq;
doublereal *y, *yh;
integer *nyh;
doublereal *ewt, *ftem, *savf, *wm;
integer *iwm;
  int (*f) (), (*jac) ();
{
     
    integer yh_dim1, yh_offset, i__1, i__2, i__3, i__4;
    doublereal d__1, d__2;

     
    static integer lenp;
    static doublereal srur;
    extern   int dgbfa_(), dgefa_();
    static integer i__, j, mband;
    static doublereal r__;
    static integer i1, i2, j1;
    extern doublereal vnorm_();
    static doublereal r0, di;
    static integer ii, jj, meband, ml, mu;
    static doublereal yi, yj, hl0;
    static integer ml3;
    static doublereal fac;
    static integer mba, ier;
    static doublereal con, yjj;
    static integer meb1;

 
 

 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

     
    --neq;
    --y;
    yh_dim1 = *nyh;
    yh_offset = yh_dim1 + 1;
    yh -= yh_offset;
    --ewt;
    --ftem;
    --savf;
    --wm;
    --iwm;

     
    ++ (ls0001_._1) .nje;
    (ls0001_._1) .ierpj = 0;
    (ls0001_._1) .jcur = 1;
    hl0 = (ls0001_._1) .h__ * (ls0001_._1) .el0;
    switch ((int)(ls0001_._1) .miter) {
	case 1:  goto L100;
	case 2:  goto L200;
	case 3:  goto L300;
	case 4:  goto L400;
	case 5:  goto L500;
    }
 

L100:
    lenp = (ls0001_._1) .n * (ls0001_._1) .n;
    i__1 = lenp;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	wm[i__ + 2] = 0.;
    }
    (*jac)(&neq[1], & (ls0001_._1) .tn, &y[1], &c__0, &c__0, &wm[3], & (ls0001_._1) .n);
    if (ierode_ .iero > 0) {
	return 0;
    }
    con = -hl0;
    i__1 = lenp;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	wm[i__ + 2] *= con;
    }
    goto L240;
 

L200:
    fac = vnorm_(& (ls0001_._1) .n, &savf[1], &ewt[1]);
    r0 = (( (ls0001_._1) .h__ ) >= 0 ? ( (ls0001_._1) .h__ ) : -( (ls0001_._1) .h__ ))  * 1e3 * (ls0001_._1) .uround * (doublereal) (ls0001_._1) .n *
	     fac;
    if (r0 == 0.) {
	r0 = 1.;
    }
    srur = wm[1];
    j1 = 2;
    i__1 = (ls0001_._1) .n;
    for (j = 1; j <= i__1; ++j) {
	yj = y[j];
 
	d__1 = srur * (( yj ) >= 0 ? ( yj ) : -( yj )) , d__2 = r0 / ewt[j];
	r__ = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	y[j] += r__;
	fac = -hl0 / r__;
	(*f)(&neq[1], & (ls0001_._1) .tn, &y[1], &ftem[1]);
	if (ierode_ .iero > 0) {
	    return 0;
	}
	i__2 = (ls0001_._1) .n;
	for (i__ = 1; i__ <= i__2; ++i__) {
 
	    wm[i__ + j1] = (ftem[i__] - savf[i__]) * fac;
	}
	y[j] = yj;
	j1 += (ls0001_._1) .n;
 
    }
    (ls0001_._1) .nfe += (ls0001_._1) .n;
 

L240:
    j = 3;
    i__1 = (ls0001_._1) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	wm[j] += 1.;
 
	j += (ls0001_._1) .n + 1;
    }
 

    dgefa_(&wm[3], & (ls0001_._1) .n, & (ls0001_._1) .n, &iwm[21], &ier);
    if (ier != 0) {
	(ls0001_._1) .ierpj = 1;
    }
    return 0;
 

L300:
    wm[2] = hl0;
    r__ = (ls0001_._1) .el0 * .1;
    i__1 = (ls0001_._1) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	y[i__] += r__ * ((ls0001_._1) .h__ * savf[i__] - yh[i__ + (yh_dim1 << 1)]);
    }
    (*f)(&neq[1], & (ls0001_._1) .tn, &y[1], &wm[3]);
    if (ierode_ .iero > 0) {
	return 0;
    }
    ++ (ls0001_._1) .nfe;
    i__1 = (ls0001_._1) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	r0 = (ls0001_._1) .h__ * savf[i__] - yh[i__ + (yh_dim1 << 1)];
	di = r0 * .1 - (ls0001_._1) .h__ * (wm[i__ + 2] - savf[i__]);
	wm[i__ + 2] = 1.;
	if ((( r0 ) >= 0 ? ( r0 ) : -( r0 ))  < (ls0001_._1) .uround / ewt[i__]) {
	    goto L320;
	}
	if ((( di ) >= 0 ? ( di ) : -( di ))  == 0.) {
	    goto L330;
	}
	wm[i__ + 2] = r0 * .1 / di;
L320:
	;
    }
    return 0;
L330:
    (ls0001_._1) .ierpj = 1;
    return 0;
 

L400:
    ml = iwm[1];
    mu = iwm[2];
 
 
    ml3 = 3;
 
    mband = ml + mu + 1;
    meband = mband + ml;
    lenp = meband * (ls0001_._1) .n;
    i__1 = lenp;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	wm[i__ + 2] = 0.;
    }
    (*jac)(&neq[1], & (ls0001_._1) .tn, &y[1], &ml, &mu, &wm[ml3], &meband);
    if (ierode_ .iero > 0) {
	return 0;
    }
    con = -hl0;
    i__1 = lenp;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	wm[i__ + 2] *= con;
    }
    goto L570;
 

L500:
    ml = iwm[1];
    mu = iwm[2];
    mband = ml + mu + 1;
    mba = (( mband ) <= ( (ls0001_._1) .n ) ? ( mband ) : ( (ls0001_._1) .n )) ;
    meband = mband + ml;
    meb1 = meband - 1;
    srur = wm[1];
    fac = vnorm_(& (ls0001_._1) .n, &savf[1], &ewt[1]);
    r0 = (( (ls0001_._1) .h__ ) >= 0 ? ( (ls0001_._1) .h__ ) : -( (ls0001_._1) .h__ ))  * 1e3 * (ls0001_._1) .uround * (doublereal) (ls0001_._1) .n *
	     fac;
    if (r0 == 0.) {
	r0 = 1.;
    }
    i__1 = mba;
    for (j = 1; j <= i__1; ++j) {
	i__2 = (ls0001_._1) .n;
	i__3 = mband;
	for (i__ = j; i__3 < 0 ? i__ >= i__2 : i__ <= i__2; i__ += i__3) {
	    yi = y[i__];
 
	    d__1 = srur * (( yi ) >= 0 ? ( yi ) : -( yi )) , d__2 = r0 / ewt[i__];
	    r__ = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
 
	    y[i__] += r__;
	}
	(*f)(&neq[1], & (ls0001_._1) .tn, &y[1], &ftem[1]);
	if (ierode_ .iero > 0) {
	    return 0;
	}
	i__3 = (ls0001_._1) .n;
	i__2 = mband;
	for (jj = j; i__2 < 0 ? jj >= i__3 : jj <= i__3; jj += i__2) {
	    y[jj] = yh[jj + yh_dim1];
	    yjj = y[jj];
 
	    d__1 = srur * (( yjj ) >= 0 ? ( yjj ) : -( yjj )) , d__2 = r0 / ewt[jj];
	    r__ = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	    fac = -hl0 / r__;
 
	    i__4 = jj - mu;
	    i1 = (( i__4 ) >= ( 1 ) ? ( i__4 ) : ( 1 )) ;
 
	    i__4 = jj + ml;
	    i2 = (( i__4 ) <= ( (ls0001_._1) .n ) ? ( i__4 ) : ( (ls0001_._1) .n )) ;
	    ii = jj * meb1 - ml + 2;
	    i__4 = i2;
	    for (i__ = i1; i__ <= i__4; ++i__) {
 
		wm[ii + i__] = (ftem[i__] - savf[i__]) * fac;
	    }
 
	}
 
    }
    (ls0001_._1) .nfe += mba;
 

L570:
    ii = mband + 2;
    i__1 = (ls0001_._1) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	wm[ii] += 1.;
 
	ii += meband;
    }
 

    dgbfa_(&wm[3], &meband, & (ls0001_._1) .n, &ml, &mu, &iwm[21], &ier);
    if (ier != 0) {
	(ls0001_._1) .ierpj = 1;
    }
    return 0;
 

}  

 
  int prepji_(neq, y, yh, nyh, ewt, rtem, savr, s, wm, iwm, 
	res, jac, adda)
integer *neq;
doublereal *y, *yh;
integer *nyh;
doublereal *ewt, *rtem, *savr, *s, *wm;
integer *iwm;
  int (*res) (), (*jac) (), (*adda) ();
{
     
    integer yh_dim1, yh_offset, i__1, i__2, i__3, i__4;
    doublereal d__1, d__2;

     
    static integer lenp, ires;
    static doublereal srur;
    extern   int dgbfa_(), dgefa_();
    static integer i__, j, mband;
    static doublereal r__;
    static integer i1, i2, j1, ii, jj, meband, ml, mu;
    static doublereal yi, yj, hl0;
    static integer ml3;
    static doublereal fac;
    static integer mba, ier;
    static doublereal con, yjj;
    static integer meb1;
     
    --neq;
    --y;
    yh_dim1 = *nyh;
    yh_offset = yh_dim1 + 1;
    yh -= yh_offset;
    --ewt;
    --rtem;
    --savr;
    --s;
    --wm;
    --iwm;

     
    ++ (ls0001_._4) .nje;
    hl0 = (ls0001_._4) .h__ * (ls0001_._4) .el0;
    (ls0001_._4) .ierpj = 0;
    (ls0001_._4) .jcur = 1;
    switch ((int)(ls0001_._4) .miter) {
	case 1:  goto L100;
	case 2:  goto L200;
	case 3:  goto L300;
	case 4:  goto L400;
	case 5:  goto L500;
    }
 

L100:
    ires = 1;
    (*res)(&neq[1], & (ls0001_._4) .tn, &y[1], &s[1], &savr[1], &ires);
    if (ierode_ .iero > 0) {
	return 0;
    }
    ++ (ls0001_._4) .nre;
    if (ires > 1) {
	goto L600;
    }
    lenp = (ls0001_._4) .n * (ls0001_._4) .n;
    i__1 = lenp;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	wm[i__ + 2] = 0.;
    }
    (*jac)(&neq[1], & (ls0001_._4) .tn, &y[1], &s[1], &c__0, &c__0, &wm[3], &
	    (ls0001_._4) .n);
    if (ierode_ .iero > 0) {
	return 0;
    }
    con = -hl0;
    i__1 = lenp;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	wm[i__ + 2] *= con;
    }
    goto L240;
 

L200:
    ires = -1;
    (*res)(&neq[1], & (ls0001_._4) .tn, &y[1], &s[1], &savr[1], &ires);
    if (ierode_ .iero > 0) {
	return 0;
    }
    ++ (ls0001_._4) .nre;
    if (ires > 1) {
	goto L600;
    }
    srur = wm[1];
    j1 = 2;
    i__1 = (ls0001_._4) .n;
    for (j = 1; j <= i__1; ++j) {
	yj = y[j];
 
	d__1 = srur * (( yj ) >= 0 ? ( yj ) : -( yj )) , d__2 = .01 / ewt[j];
	r__ = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	y[j] += r__;
	fac = -hl0 / r__;
	(*res)(&neq[1], & (ls0001_._4) .tn, &y[1], &s[1], &rtem[1], &ires);
	if (ierode_ .iero > 0) {
	    return 0;
	}
	++ (ls0001_._4) .nre;
	if (ires > 1) {
	    goto L600;
	}
	i__2 = (ls0001_._4) .n;
	for (i__ = 1; i__ <= i__2; ++i__) {
 
	    wm[i__ + j1] = (rtem[i__] - savr[i__]) * fac;
	}
	y[j] = yj;
	j1 += (ls0001_._4) .n;
 
    }
    ires = 1;
    (*res)(&neq[1], & (ls0001_._4) .tn, &y[1], &s[1], &savr[1], &ires);
    if (ierode_ .iero > 0) {
	return 0;
    }
    ++ (ls0001_._4) .nre;
    if (ires > 1) {
	goto L600;
    }
 

L240:
    (*adda)(&neq[1], & (ls0001_._4) .tn, &y[1], &c__0, &c__0, &wm[3], & (ls0001_._4) .n);
    if (ierode_ .iero > 0) {
	return 0;
    }
 

    dgefa_(&wm[3], & (ls0001_._4) .n, & (ls0001_._4) .n, &iwm[21], &ier);
    if (ier != 0) {
	(ls0001_._4) .ierpj = 1;
    }
    return 0;
 
L300:
    return 0;
 

L400:
    ires = 1;
    (*res)(&neq[1], & (ls0001_._4) .tn, &y[1], &s[1], &savr[1], &ires);
    if (ierode_ .iero > 0) {
	return 0;
    }
    ++ (ls0001_._4) .nre;
    if (ires > 1) {
	goto L600;
    }
    ml = iwm[1];
    mu = iwm[2];
 
 
    ml3 = 3;
 
    mband = ml + mu + 1;
    meband = mband + ml;
    lenp = meband * (ls0001_._4) .n;
    i__1 = lenp;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	wm[i__ + 2] = 0.;
    }
    (*jac)(&neq[1], & (ls0001_._4) .tn, &y[1], &s[1], &ml, &mu, &wm[ml3], &meband);
    if (ierode_ .iero > 0) {
	return 0;
    }
    con = -hl0;
    i__1 = lenp;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	wm[i__ + 2] *= con;
    }
    goto L570;
 

L500:
    ires = -1;
    (*res)(&neq[1], & (ls0001_._4) .tn, &y[1], &s[1], &savr[1], &ires);
    if (ierode_ .iero > 0) {
	return 0;
    }
    ++ (ls0001_._4) .nre;
    if (ires > 1) {
	goto L600;
    }
    ml = iwm[1];
    mu = iwm[2];
    ml3 = ml + 3;
    mband = ml + mu + 1;
    mba = (( mband ) <= ( (ls0001_._4) .n ) ? ( mband ) : ( (ls0001_._4) .n )) ;
    meband = mband + ml;
    meb1 = meband - 1;
    srur = wm[1];
    i__1 = mba;
    for (j = 1; j <= i__1; ++j) {
	i__2 = (ls0001_._4) .n;
	i__3 = mband;
	for (i__ = j; i__3 < 0 ? i__ >= i__2 : i__ <= i__2; i__ += i__3) {
	    yi = y[i__];
 
	    d__1 = srur * (( yi ) >= 0 ? ( yi ) : -( yi )) , d__2 = .01 / ewt[i__];
	    r__ = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
 
	    y[i__] += r__;
	}
	(*res)(&neq[1], & (ls0001_._4) .tn, &y[1], &s[1], &rtem[1], &ires);
	if (ierode_ .iero > 0) {
	    return 0;
	}
	++ (ls0001_._4) .nre;
	if (ires > 1) {
	    goto L600;
	}
	i__3 = (ls0001_._4) .n;
	i__2 = mband;
	for (jj = j; i__2 < 0 ? jj >= i__3 : jj <= i__3; jj += i__2) {
	    y[jj] = yh[jj + yh_dim1];
	    yjj = y[jj];
 
	    d__1 = srur * (( yjj ) >= 0 ? ( yjj ) : -( yjj )) , d__2 = .01 / ewt[jj];
	    r__ = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	    fac = -hl0 / r__;
 
	    i__4 = jj - mu;
	    i1 = (( i__4 ) >= ( 1 ) ? ( i__4 ) : ( 1 )) ;
 
	    i__4 = jj + ml;
	    i2 = (( i__4 ) <= ( (ls0001_._4) .n ) ? ( i__4 ) : ( (ls0001_._4) .n )) ;
	    ii = jj * meb1 - ml + 2;
	    i__4 = i2;
	    for (i__ = i1; i__ <= i__4; ++i__) {
 
		wm[ii + i__] = (rtem[i__] - savr[i__]) * fac;
	    }
 
	}
 
    }
    ires = 1;
    (*res)(&neq[1], & (ls0001_._4) .tn, &y[1], &s[1], &savr[1], &ires);
    if (ierode_ .iero > 0) {
	return 0;
    }
    ++ (ls0001_._4) .nre;
    if (ires > 1) {
	goto L600;
    }
 

L570:
    (*adda)(&neq[1], & (ls0001_._4) .tn, &y[1], &ml, &mu, &wm[ml3], &meband);
    if (ierode_ .iero > 0) {
	return 0;
    }
 

    dgbfa_(&wm[3], &meband, & (ls0001_._4) .n, &ml, &mu, &iwm[21], &ier);
    if (ier != 0) {
	(ls0001_._4) .ierpj = 1;
    }
    return 0;
 

L600:
    (ls0001_._4) .ierpj = ires;
    return 0;
 

}  

 
  int prja_(neq, y, yh, nyh, ewt, ftem, savf, wm, iwm, f, jac)
integer *neq;
doublereal *y, *yh;
integer *nyh;
doublereal *ewt, *ftem, *savf, *wm;
integer *iwm;
  int (*f) (), (*jac) ();
{
     
    integer yh_dim1, yh_offset, i__1, i__2, i__3, i__4;
    doublereal d__1, d__2;

     
    static integer lenp;
    static doublereal srur;
    extern   int dgbfa_(), dgefa_();
    static integer i__, j, mband;
    static doublereal r__;
    extern doublereal bnorm_(), fnorm_();
    static integer i1, i2, j1;
    static doublereal r0;
    static integer ii, jj, meband, ml, mu;
    static doublereal yi, yj, hl0;
    static integer ml3;
    extern doublereal vmnorm_();
    static doublereal fac;
    static integer mba, ier;
    static doublereal con, yjj;
    static integer meb1;
    --neq;
    --y;
    yh_dim1 = *nyh;
    yh_offset = yh_dim1 + 1;
    yh -= yh_offset;
    --ewt;
    --ftem;
    --savf;
    --wm;
    --iwm;

     
    ++ (ls0001_._1) .nje;
    (ls0001_._1) .ierpj = 0;
    (ls0001_._1) .jcur = 1;
    hl0 = (ls0001_._1) .h__ * (ls0001_._1) .el0;
    switch ((int)(ls0001_._1) .miter) {
	case 1:  goto L100;
	case 2:  goto L200;
	case 3:  goto L300;
	case 4:  goto L400;
	case 5:  goto L500;
    }
 

L100:
    lenp = (ls0001_._1) .n * (ls0001_._1) .n;
    i__1 = lenp;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	wm[i__ + 2] = 0.;
    }
    (*jac)(&neq[1], & (ls0001_._1) .tn, &y[1], &c__0, &c__0, &wm[3], & (ls0001_._1) .n);
    if (ierode_ .iero > 0) {
	return 0;
    }
    con = -hl0;
    i__1 = lenp;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	wm[i__ + 2] *= con;
    }
    goto L240;
 

L200:
    fac = vmnorm_(& (ls0001_._1) .n, &savf[1], &ewt[1]);
    r0 = (( (ls0001_._1) .h__ ) >= 0 ? ( (ls0001_._1) .h__ ) : -( (ls0001_._1) .h__ ))  * 1e3 * (ls0001_._1) .uround * (doublereal) (ls0001_._1) .n *
	     fac;
    if (r0 == 0.) {
	r0 = 1.;
    }
    srur = wm[1];
    j1 = 2;
    i__1 = (ls0001_._1) .n;
    for (j = 1; j <= i__1; ++j) {
	yj = y[j];
 
	d__1 = srur * (( yj ) >= 0 ? ( yj ) : -( yj )) , d__2 = r0 / ewt[j];
	r__ = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	y[j] += r__;
	fac = -hl0 / r__;
	(*f)(&neq[1], & (ls0001_._1) .tn, &y[1], &ftem[1]);
	if (ierode_ .iero > 0) {
	    return 0;
	}
	i__2 = (ls0001_._1) .n;
	for (i__ = 1; i__ <= i__2; ++i__) {
 
	    wm[i__ + j1] = (ftem[i__] - savf[i__]) * fac;
	}
	y[j] = yj;
	j1 += (ls0001_._1) .n;
 
    }
    (ls0001_._1) .nfe += (ls0001_._1) .n;
L240:
 

    (lsa001_._2) .pdnorm = fnorm_(& (ls0001_._1) .n, &wm[3], &ewt[1]) / (( hl0 ) >= 0 ? ( hl0 ) : -( hl0 )) ;
 

    j = 3;
    i__1 = (ls0001_._1) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	wm[j] += 1.;
 
	j += (ls0001_._1) .n + 1;
    }
 

    dgefa_(&wm[3], & (ls0001_._1) .n, & (ls0001_._1) .n, &iwm[21], &ier);
    if (ier != 0) {
	(ls0001_._1) .ierpj = 1;
    }
    return 0;
 

L300:
    return 0;
 

L400:
    ml = iwm[1];
    mu = iwm[2];
    ml3 = ml + 3;
    mband = ml + mu + 1;
    meband = mband + ml;
    lenp = meband * (ls0001_._1) .n;
    i__1 = lenp;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	wm[i__ + 2] = 0.;
    }
    (*jac)(&neq[1], & (ls0001_._1) .tn, &y[1], &ml, &mu, &wm[ml3], &meband);
    if (ierode_ .iero > 0) {
	return 0;
    }
    con = -hl0;
    i__1 = lenp;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	wm[i__ + 2] *= con;
    }
    goto L570;
 

L500:
    ml = iwm[1];
    mu = iwm[2];
    mband = ml + mu + 1;
    mba = (( mband ) <= ( (ls0001_._1) .n ) ? ( mband ) : ( (ls0001_._1) .n )) ;
    meband = mband + ml;
    meb1 = meband - 1;
    srur = wm[1];
    fac = vmnorm_(& (ls0001_._1) .n, &savf[1], &ewt[1]);
    r0 = (( (ls0001_._1) .h__ ) >= 0 ? ( (ls0001_._1) .h__ ) : -( (ls0001_._1) .h__ ))  * 1e3 * (ls0001_._1) .uround * (doublereal) (ls0001_._1) .n *
	     fac;
    if (r0 == 0.) {
	r0 = 1.;
    }
    i__1 = mba;
    for (j = 1; j <= i__1; ++j) {
	i__2 = (ls0001_._1) .n;
	i__3 = mband;
	for (i__ = j; i__3 < 0 ? i__ >= i__2 : i__ <= i__2; i__ += i__3) {
	    yi = y[i__];
 
	    d__1 = srur * (( yi ) >= 0 ? ( yi ) : -( yi )) , d__2 = r0 / ewt[i__];
	    r__ = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
 
	    y[i__] += r__;
	}
	(*f)(&neq[1], & (ls0001_._1) .tn, &y[1], &ftem[1]);
	if (ierode_ .iero > 0) {
	    return 0;
	}
	i__3 = (ls0001_._1) .n;
	i__2 = mband;
	for (jj = j; i__2 < 0 ? jj >= i__3 : jj <= i__3; jj += i__2) {
	    y[jj] = yh[jj + yh_dim1];
	    yjj = y[jj];
 
	    d__1 = srur * (( yjj ) >= 0 ? ( yjj ) : -( yjj )) , d__2 = r0 / ewt[jj];
	    r__ = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	    fac = -hl0 / r__;
 
	    i__4 = jj - mu;
	    i1 = (( i__4 ) >= ( 1 ) ? ( i__4 ) : ( 1 )) ;
 
	    i__4 = jj + ml;
	    i2 = (( i__4 ) <= ( (ls0001_._1) .n ) ? ( i__4 ) : ( (ls0001_._1) .n )) ;
	    ii = jj * meb1 - ml + 2;
	    i__4 = i2;
	    for (i__ = i1; i__ <= i__4; ++i__) {
 
		wm[ii + i__] = (ftem[i__] - savf[i__]) * fac;
	    }
 
	}
 
    }
    (ls0001_._1) .nfe += mba;
L570:
 

    (lsa001_._2) .pdnorm = bnorm_(& (ls0001_._1) .n, &wm[3], &meband, &ml, &mu, &ewt[1]) 
	    / (( hl0 ) >= 0 ? ( hl0 ) : -( hl0 )) ;
 

    ii = mband + 2;
    i__1 = (ls0001_._1) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	wm[ii] += 1.;
 
	ii += meband;
    }
 

    dgbfa_(&wm[3], &meband, & (ls0001_._1) .n, &ml, &mu, &iwm[21], &ier);
    if (ier != 0) {
	(ls0001_._1) .ierpj = 1;
    }
    return 0;
 

}  

 
  int quarul_(f, a, b, result, abserr, resabs, resasc)
doublereal (*f) ();
doublereal *a, *b, *result, *abserr, *resabs, *resasc;
{
     

    static doublereal xgk[11] = { .9956571630258080807355272807,
	    .9739065285171717200779640121,.9301574913557082260012071801,
	    .8650633666889845107320966884,.7808177265864168970637175783,
	    .6794095682990244062343273651,.5627571346686046833390000993,
	    .4333953941292471907992659432,.2943928627014601981311266031,
	    .1488743389816312108848260011,0. };
    static doublereal wgk[11] = { .01169463886737187427806439606,
	    .03255816230796472747881897246,.05475589657435199603138130024,
	    .07503967481091995276704314092,.09312545458369760553506546508,
	    .1093871588022976418992105903,.1234919762620658510779581098,
	    .1347092173114733259280540018,.1427759385770600807970942731,
	    .147739104901338491374841516,.1494455540029169056649364684 };
    static doublereal wg[10] = { 0.,.06667134430868813759356880989,0.,
	    .1494513491505805931457763397,0.,.2190863625159820439955349342,0.,
	    .2692667193099963550912269216,0.,.2955242247147528701738929947 };

     
    doublereal d__1, d__2, d__3;

     
    double pow_dd();

     
    static doublereal absc, resg, resk, fsum, fval1, fval2;
    static integer j;
    static doublereal hlgth, reskh, uflow, fc;
    extern doublereal dlamch_();
    static doublereal epmach, dhlgth, centre, fv1[10], fv2[10];
    epmach = dlamch_("p", 1L);
    uflow = dlamch_("u", 1L);
    centre = (*a + *b) * .5;
    hlgth = (*b - *a) * .5;
    dhlgth = (( hlgth ) >= 0 ? ( hlgth ) : -( hlgth )) ;

 
 

    resg = 0.;
    fc = (*f)(&centre);
    if (ierajf_ .iero != 0) {
	return 0;
    }
    resk = wgk[10] * fc;
    *resabs = (( resk ) >= 0 ? ( resk ) : -( resk )) ;
    for (j = 1; j <= 10; ++j) {
	absc = hlgth * xgk[j - 1];
	d__1 = centre - absc;
	fval1 = (*f)(&d__1);
	if (ierajf_ .iero != 0) {
	    return 0;
	}
	d__1 = centre + absc;
	fval2 = (*f)(&d__1);
	if (ierajf_ .iero != 0) {
	    return 0;
	}
	fv1[j - 1] = fval1;
	fv2[j - 1] = fval2;
	fsum = fval1 + fval2;
	resg += wg[j - 1] * fsum;
	resk += wgk[j - 1] * fsum;
	*resabs += wgk[j - 1] * ((( fval1 ) >= 0 ? ( fval1 ) : -( fval1 ))  + (( fval2 ) >= 0 ? ( fval2 ) : -( fval2 )) );
 
    }
    reskh = resk * .5;
    *resasc = wgk[10] * (d__1 = fc - reskh, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
    for (j = 1; j <= 10; ++j) {
	*resasc += wgk[j - 1] * ((d__1 = fv1[j - 1] - reskh, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) + (
		d__2 = fv2[j - 1] - reskh, (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) ));
 
    }
    *result = resk * hlgth;
    *resabs *= dhlgth;
    *resasc *= dhlgth;
    *abserr = (d__1 = (resk - resg) * hlgth, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
    if (*resasc != 0. && *abserr != 0.) {
 
	d__3 = *abserr * 200. / *resasc;
	d__1 = 1., d__2 = pow_dd(&d__3, &c_b5310);
	*abserr = *resasc * (( d__1 ) <= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    }
    if (*resabs > uflow / (epmach * 50.)) {
 
	d__1 = epmach * *resabs * 50.;
	*abserr = (( d__1 ) >= ( *abserr ) ? ( d__1 ) : ( *abserr )) ;
    }
    return 0;
}  

  int rchek_(job, g, neq, y, yh, nyh, g0, g1, gx, jroot, irt)
integer *job;
  int (*g) ();
integer *neq;
doublereal *y, *yh;
integer *nyh;
doublereal *g0, *g1, *gx;
integer *jroot, *irt;
{
     
    integer yh_dim1, yh_offset, i__1;
    doublereal d__1;

     
    double d_sign();

     
    static doublereal temp1, temp2;
    static integer i__, iflag, jflag;
    static doublereal x, hming;
    extern   int dcopy_(), intdy_();
    static doublereal t1;
    extern   int roots_();
    static logical zroot;
    --neq;
    --y;
    yh_dim1 = *nyh;
    yh_offset = yh_dim1 + 1;
    yh -= yh_offset;
    --g0;
    --g1;
    --gx;
    --jroot;

     
    *irt = 0;
    i__1 = (lsr001_._2) .ngc;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	jroot[i__] = 0;
    }
    hming = ((( (ls0001_._1) .tn ) >= 0 ? ( (ls0001_._1) .tn ) : -( (ls0001_._1) .tn ))  + (( (ls0001_._1) .h__ ) >= 0 ? ( (ls0001_._1) .h__ ) : -( (ls0001_._1) .h__ )) ) * (ls0001_._1) .uround * 100.;

    switch ((int)*job) {
	case 1:  goto L100;
	case 2:  goto L200;
	case 3:  goto L300;
    }

 

L100:
    (lsr001_._2) .t0 = (ls0001_._1) .tn;
    (*g)(&neq[1], & (lsr001_._2) .t0, &y[1], & (lsr001_._2) .ngc, &g0[1]);
    if (ierode_ .iero > 0) {
	return 0;
    }
    (lsr001_._2) .nge = 1;
    zroot = (0) ;
    i__1 = (lsr001_._2) .ngc;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	if ((d__1 = g0[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= 0.) {
	    zroot = (1) ;
	}
    }
    if (! zroot) {
	goto L190;
    }
 

    temp1 = d_sign(&hming, & (ls0001_._1) .h__);
    (lsr001_._2) .t0 += temp1;
    temp2 = temp1 / (ls0001_._1) .h__;
    i__1 = (ls0001_._1) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	y[i__] += temp2 * yh[i__ + (yh_dim1 << 1)];
    }
    (*g)(&neq[1], & (lsr001_._2) .t0, &y[1], & (lsr001_._2) .ngc, &g0[1]);
    if (ierode_ .iero > 0) {
	return 0;
    }
    ++ (lsr001_._2) .nge;
    zroot = (0) ;
    i__1 = (lsr001_._2) .ngc;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	if ((d__1 = g0[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= 0.) {
	    zroot = (1) ;
	}
    }
    if (! zroot) {
	goto L190;
    }
 

    *irt = -1;
    return 0;

L190:
    return 0;


L200:
    if ((lsr001_._2) .irfnd == 0) {
	goto L260;
    }
 

    intdy_(& (lsr001_._2) .t0, &c__0, &yh[yh_offset], nyh, &y[1], &iflag);
    (*g)(&neq[1], & (lsr001_._2) .t0, &y[1], & (lsr001_._2) .ngc, &g0[1]);
    if (ierode_ .iero > 0) {
	return 0;
    }
    ++ (lsr001_._2) .nge;
    zroot = (0) ;
    i__1 = (lsr001_._2) .ngc;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	if ((d__1 = g0[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= 0.) {
	    zroot = (1) ;
	}
    }
    if (! zroot) {
	goto L260;
    }
 

    temp1 = d_sign(&hming, & (ls0001_._1) .h__);
    (lsr001_._2) .t0 += temp1;
    if (((lsr001_._2) .t0 - (ls0001_._1) .tn) * (ls0001_._1) .h__ < 0.) {
	goto L230;
    }
    temp2 = temp1 / (ls0001_._1) .h__;
    i__1 = (ls0001_._1) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	y[i__] += temp2 * yh[i__ + (yh_dim1 << 1)];
    }
    goto L240;
L230:
    intdy_(& (lsr001_._2) .t0, &c__0, &yh[yh_offset], nyh, &y[1], &iflag);
L240:
    (*g)(&neq[1], & (lsr001_._2) .t0, &y[1], & (lsr001_._2) .ngc, &g0[1]);
    if (ierode_ .iero > 0) {
	return 0;
    }
    ++ (lsr001_._2) .nge;
    zroot = (0) ;
    i__1 = (lsr001_._2) .ngc;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if ((d__1 = g0[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > 0.) {
	    goto L250;
	}
	jroot[i__] = 1;
	zroot = (1) ;
L250:
	;
    }
    if (! zroot) {
	goto L260;
    }
 

    *irt = 1;
    return 0;
 
 

L260:
    if ((ls0001_._1) .tn == (lsr001_._2) .tlast) {
	goto L390;
    }

L300:
 

    if ((lsr001_._2) .itaskc == 2 || (lsr001_._2) .itaskc == 3 || (lsr001_._2) .itaskc == 5) 
	    {
	goto L310;
    }
    if (((lsr001_._2) .toutc - (ls0001_._1) .tn) * (ls0001_._1) .h__ >= 0.) {
	goto L310;
    }
    t1 = (lsr001_._2) .toutc;
    if ((t1 - (lsr001_._2) .t0) * (ls0001_._1) .h__ <= 0.) {
	goto L390;
    }
    intdy_(&t1, &c__0, &yh[yh_offset], nyh, &y[1], &iflag);
    goto L330;
L310:
    t1 = (ls0001_._1) .tn;
    i__1 = (ls0001_._1) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	y[i__] = yh[i__ + yh_dim1];
    }
L330:
    (*g)(&neq[1], &t1, &y[1], & (lsr001_._2) .ngc, &g1[1]);
    if (ierode_ .iero > 0) {
	return 0;
    }
    ++ (lsr001_._2) .nge;
 

    jflag = 0;
L350:
    roots_(& (lsr001_._2) .ngc, &hming, &jflag, & (lsr001_._2) .t0, &t1, &g0[1], &g1[1], &
	    gx[1], &x, &jroot[1]);
    if (jflag > 1) {
	goto L360;
    }
    intdy_(&x, &c__0, &yh[yh_offset], nyh, &y[1], &iflag);
    (*g)(&neq[1], &x, &y[1], & (lsr001_._2) .ngc, &gx[1]);
    if (ierode_ .iero > 0) {
	return 0;
    }
    ++ (lsr001_._2) .nge;
    goto L350;
L360:
    (lsr001_._2) .t0 = x;
    dcopy_(& (lsr001_._2) .ngc, &gx[1], &c__1, &g0[1], &c__1);
    if (jflag == 4) {
	goto L390;
    }
 

    intdy_(&x, &c__0, &yh[yh_offset], nyh, &y[1], &iflag);
    *irt = 1;
    return 0;

L390:
    return 0;
 

}  

 
 
 
 
 
  int lsrgk_(f, neq, y, t, tout, itol, rtol, atol, itask, 
	istate, iopt, rwork, lrw, iwork, liw, jac, mf)
  int (*f) ();
integer *neq;
doublereal *y, *t, *tout;
integer *itol;
doublereal *rtol, *atol;
integer *itask, *istate, *iopt;
doublereal *rwork;
integer *lrw, *iwork, *liw;
  int (*jac) ();
integer *mf;
{
    static integer nbad;
    extern   int rkqc_();
    extern   int odeint_();
    static integer nok;

     
    --neq;
    --y;
    --rtol;
    --atol;
    --rwork;
    --iwork;

     
    ierode_ .iero = 0;
    odeint_(&y[1], &neq[1], t, tout, &atol[1], &c_b5340, &c_b61, &nok, &nbad, 
	    f, rkqc_);
    *t = *tout;
    if (ierode_ .iero > 0) {
	*istate = -1;
    }
    return 0;
}  

 
 
 
  int odeint_(ystart, nvar, x1, x2, eps, h1, hmin, nok, nbad, 
	derivs, rkqc)
doublereal *ystart;
integer *nvar;
doublereal *x1, *x2, *eps, *h1, *hmin;
integer *nok, *nbad;
  int (*derivs) (), (*rkqc) ();
{
     
    integer i__1;
    doublereal d__1, d__2;

     
    double d_sign();
    integer s_wsle(), do_lio(), e_wsle();

     
    static doublereal hdid, dydx[10], xsav;
    static integer nstp;
    static doublereal h__;
    static integer i__;
    static doublereal x, y[10], yscal[10], hnext;

     
    static cilist io___1589 = { 0, 6, 0, 0, 0 };
    static cilist io___1590 = { 0, 6, 0, 0, 0 };


 
     
    --ystart;

     
    ierode_ .iero = 0;
    if ((d__1 = *x2 - *x1, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= 1e-30) {
	return 0;
    }
    x = *x1;
    d__1 = *x2 - *x1;
    h__ = d_sign(h1, &d__1);
    *nok = 0;
    *nbad = 0;
    path_ .kount = 0;
    i__1 = *nvar;
    for (i__ = 1; i__ <= i__1; ++i__) {
	y[i__ - 1] = ystart[i__];
 
    }
    xsav = x - path_ .dxsav * 2.;
    for (nstp = 1; nstp <= 10000; ++nstp) {
	(*derivs)(nvar, &x, y, dydx);
	if (ierode_ .iero > 0) {
	    return 0;
	}
	i__1 = *nvar;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    yscal[i__ - 1] = (d__1 = y[i__ - 1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) + (d__2 = h__ * 
		    dydx[i__ - 1], (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) ) + 1e-30;
 
	}
	if (path_ .kmax > 0) {
	    if ((d__1 = x - xsav, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > (( path_ .dxsav ) >= 0 ? ( path_ .dxsav ) : -( path_ .dxsav )) ) {
		if (path_ .kount < path_ .kmax - 1) {
		    ++ path_ .kount;
		    path_ .xp[path_ .kount - 1] = x;
		    i__1 = *nvar;
		    for (i__ = 1; i__ <= i__1; ++i__) {
			path_ .yp[i__ + path_ .kount * 10 - 11] = y[i__ - 1];
 
		    }
		    xsav = x;
		}
	    }
	}
	if ((x + h__ - *x2) * (x + h__ - *x1) > 0.) {
	    h__ = *x2 - x;
	}
	(*rkqc)(y, dydx, nvar, &x, &h__, eps, yscal, &hdid, &hnext, derivs);
	if (hdid == h__) {
	    ++(*nok);
	} else {
	    ++(*nbad);
	}
	if ((x - *x2) * (*x2 - *x1) >= 0.) {
	    i__1 = *nvar;
	    for (i__ = 1; i__ <= i__1; ++i__) {
		ystart[i__] = y[i__ - 1];
 
	    }
	    if (path_ .kmax != 0) {
		++ path_ .kount;
		path_ .xp[path_ .kount - 1] = x;
		i__1 = *nvar;
		for (i__ = 1; i__ <= i__1; ++i__) {
		    path_ .yp[i__ + path_ .kount * 10 - 11] = y[i__ - 1];
 
		}
	    }
	    return 0;
	}
	if ((( hnext ) >= 0 ? ( hnext ) : -( hnext ))  < *hmin) {
	    s_wsle(&io___1589);
	    do_lio(&c__9, &c__1, "stepsize", 8L);
	    do_lio(&c__5, &c__1, (char *)&hnext, (ftnlen)sizeof(doublereal));
	    do_lio(&c__9, &c__1, " smaller than minimum.", 22L);
	    e_wsle();
	}
	h__ = hnext;
 
    }
    s_wsle(&io___1590);
    do_lio(&c__9, &c__1, "Trop d'iterations a faire pour la precision demandee.", 53L);
    e_wsle();
    return 0;
}  

  int rk4_(y, dydx, n, x, h__, yout, derivs)
doublereal *y, *dydx;
integer *n;
doublereal *x, *h__, *yout;
  int (*derivs) ();
{
     
    integer i__1;
    doublereal d__1;

     
    static integer i__;
    static doublereal h6, hh, xh, yt[10], dym[10], dyt[10];

 
     
    --yout;
    --dydx;
    --y;

     
    ierode_ .iero = 0;
    hh = *h__ * (float).5;
    h6 = *h__ / (float)6.;
    xh = *x + hh;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	yt[i__ - 1] = y[i__] + hh * dydx[i__];
 
    }
    (*derivs)(n, &xh, yt, dyt);
    if (ierode_ .iero > 0) {
	return 0;
    }
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	yt[i__ - 1] = y[i__] + hh * dyt[i__ - 1];
 
    }
    (*derivs)(n, &xh, yt, dym);
    if (ierode_ .iero > 0) {
	return 0;
    }
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	yt[i__ - 1] = y[i__] + *h__ * dym[i__ - 1];
	dym[i__ - 1] = dyt[i__ - 1] + dym[i__ - 1];
 
    }
    d__1 = *x + *h__;
    (*derivs)(n, &d__1, yt, dyt);
    if (ierode_ .iero > 0) {
	return 0;
    }
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	yout[i__] = y[i__] + h6 * (dydx[i__] + dyt[i__ - 1] + dym[i__ - 1] * (
		float)2.);
 
    }
    return 0;
}  

  int rkqc_(y, dydx, n, x, htry, eps, yscal, hdid, hnext, 
	derivs)
doublereal *y, *dydx;
integer *n;
doublereal *x, *htry, *eps, *yscal, *hdid, *hnext;
  int (*derivs) ();
{
     
    integer i__1;
    doublereal d__1, d__2, d__3;

     
    integer s_wsle(), do_lio(), e_wsle();
    double pow_dd();

     
    static doublereal xsav, ysav[10], h__;
    static integer i__;
    static doublereal dysav[10], pgrow, ytemp[10], hh, errmax, pshrnk;
    extern   int rk4_();

     
    static cilist io___1607 = { 0, 6, 0, 0, 0 };


 
     
    --yscal;
    --dydx;
    --y;

     
    ierode_ .iero = 0;
    pgrow = (float)-.2;
    pshrnk = (float)-.25;
    xsav = *x;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	ysav[i__ - 1] = y[i__];
	dysav[i__ - 1] = dydx[i__];
 
    }
    h__ = *htry;
L1:
    hh = h__ * (float).5;
    rk4_(ysav, dysav, n, &xsav, &hh, ytemp, derivs);
    *x = xsav + hh;
    (*derivs)(n, x, ytemp, &dydx[1]);
    if (ierode_ .iero > 0) {
	return 0;
    }
    rk4_(ytemp, &dydx[1], n, x, &hh, &y[1], derivs);
    *x = xsav + h__;
    if (*x == xsav) {
	s_wsle(&io___1607);
	do_lio(&c__9, &c__1, "stepsize not significant in rkqc.", 33L);
	e_wsle();
	ierode_ .iero = 1;
	return 0;
    }
    rk4_(ysav, dysav, n, &xsav, &h__, ytemp, derivs);
    errmax = (float)0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	ytemp[i__ - 1] = y[i__] - ytemp[i__ - 1];
 
	d__2 = errmax, d__3 = (d__1 = ytemp[i__ - 1] / (yscal[i__] * *eps), 
		(( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	errmax = (( d__2 ) >= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
 
    }
    if (errmax > 1.) {
	h__ = h__ * .9 * pow_dd(&errmax, &pshrnk);
	goto L1;
    } else {
	*hdid = h__;
	if (errmax > 6e-4) {
	    *hnext = h__ * .9 * pow_dd(&errmax, &pgrow);
	} else {
	    *hnext = h__ * (float)4.;
	}
    }
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	y[i__] += ytemp[i__ - 1] * .0666666667;
 
    }
    return 0;
}  

  int roots_(ng, hmin, jflag, x0, x1, g0, g1, gx, x, jroot)
integer *ng;
doublereal *hmin;
integer *jflag;
doublereal *x0, *x1, *g0, *g1, *gx, *x;
integer *jroot;
{
     

    static doublereal zero = 0.;

     
    integer i__1;
    doublereal d__1, d__2;

     
    double d_sign();

     
    static doublereal tmax;
    static integer i__;
    extern   int dcopy_();
    static doublereal t2;
    static logical xroot, zroot, sgnchg;
    static integer imxold, nxlast;
     
    --jroot;
    --gx;
    --g1;
    --g0;

     

    if (*jflag == 1) {
	goto L200;
    }
 

    (lsr001_._3) .imax = 0;
    tmax = zero;
    zroot = (0) ;
    i__1 = *ng;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if ((d__1 = g1[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > zero) {
	    goto L110;
	}
	zroot = (1) ;
	goto L120;
 

L110:
	if (d_sign(&c_b89, &g0[i__]) == d_sign(&c_b89, &g1[i__])) {
	    goto L120;
	}
	t2 = (d__1 = g1[i__] / (g1[i__] - g0[i__]), (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	if (t2 <= tmax) {
	    goto L120;
	}
	tmax = t2;
	(lsr001_._3) .imax = i__;
L120:
	;
    }
    if ((lsr001_._3) .imax > 0) {
	goto L130;
    }
    sgnchg = (0) ;
    goto L140;
L130:
    sgnchg = (1) ;
L140:
    if (! sgnchg) {
	goto L400;
    }
 

    xroot = (0) ;
    nxlast = 0;
    (lsr001_._3) .last = 1;

 

L150:
    if (xroot) {
	goto L300;
    }
    if (nxlast == (lsr001_._3) .last) {
	goto L160;
    }
    (lsr001_._3) .alpha = 1.;
    goto L180;
L160:
    if ((lsr001_._3) .last == 0) {
	goto L170;
    }
    (lsr001_._3) .alpha *= .5;
    goto L180;
L170:
    (lsr001_._3) .alpha *= 2.;
L180:
    (lsr001_._3) .x2 = *x1 - (*x1 - *x0) * g1[(lsr001_._3) .imax] / (g1[(lsr001_._3) .imax] 
	    - (lsr001_._3) .alpha * g0[(lsr001_._3) .imax]);
    if ((d__1 = (lsr001_._3) .x2 - *x0, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) < *hmin && (d__2 = *x1 - *x0, 
	    (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) ) > *hmin * 10.) {
	(lsr001_._3) .x2 = *x0 + (*x1 - *x0) * .1;
    }
    *jflag = 1;
    *x = (lsr001_._3) .x2;
 

    return 0;
 

L200:
    imxold = (lsr001_._3) .imax;
    (lsr001_._3) .imax = 0;
    tmax = zero;
    zroot = (0) ;
    i__1 = *ng;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if ((d__1 = gx[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > zero) {
	    goto L210;
	}
	zroot = (1) ;
	goto L220;
 

L210:
	if (d_sign(&c_b89, &g0[i__]) == d_sign(&c_b89, &gx[i__])) {
	    goto L220;
	}
	t2 = (d__1 = gx[i__] / (gx[i__] - g0[i__]), (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	if (t2 <= tmax) {
	    goto L220;
	}
	tmax = t2;
	(lsr001_._3) .imax = i__;
L220:
	;
    }
    if ((lsr001_._3) .imax > 0) {
	goto L230;
    }
    sgnchg = (0) ;
    (lsr001_._3) .imax = imxold;
    goto L240;
L230:
    sgnchg = (1) ;
L240:
    nxlast = (lsr001_._3) .last;
    if (! sgnchg) {
	goto L250;
    }
 

    *x1 = (lsr001_._3) .x2;
    dcopy_(ng, &gx[1], &c__1, &g1[1], &c__1);
    (lsr001_._3) .last = 1;
    xroot = (0) ;
    goto L270;
L250:
    if (! zroot) {
	goto L260;
    }
 

    *x1 = (lsr001_._3) .x2;
    dcopy_(ng, &gx[1], &c__1, &g1[1], &c__1);
    xroot = (1) ;
    goto L270;
 

L260:
    dcopy_(ng, &gx[1], &c__1, &g0[1], &c__1);
    *x0 = (lsr001_._3) .x2;
    (lsr001_._3) .last = 0;
    xroot = (0) ;
L270:
    if ((d__1 = *x1 - *x0, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= *hmin) {
	xroot = (1) ;
    }
    goto L150;

 

L300:
    *jflag = 2;
    *x = *x1;
    dcopy_(ng, &g1[1], &c__1, &gx[1], &c__1);
    i__1 = *ng;
    for (i__ = 1; i__ <= i__1; ++i__) {
	jroot[i__] = 0;
	if ((d__1 = g1[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > zero) {
	    goto L310;
	}
	jroot[i__] = 1;
	goto L320;
L310:
	if (d_sign(&c_b89, &g0[i__]) != d_sign(&c_b89, &g1[i__])) {
	    jroot[i__] = 1;
	}
L320:
	;
    }
    return 0;

 

L400:
    if (! zroot) {
	goto L420;
    }

 

    *x = *x1;
    dcopy_(ng, &g1[1], &c__1, &gx[1], &c__1);
    i__1 = *ng;
    for (i__ = 1; i__ <= i__1; ++i__) {
	jroot[i__] = 0;
	if ((d__1 = g1[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= zero) {
	    jroot[i__] = 1;
	}
 
    }
    *jflag = 3;
    return 0;

 

L420:
    dcopy_(ng, &g1[1], &c__1, &gx[1], &c__1);
    *x = *x1;
    *jflag = 4;
    return 0;
 

}  

 
  int rscar1_(rsav, isav)
doublereal *rsav, *isav;
{
     

    static integer lenrls = 219;
    static integer lenils = 39;
    static integer lenrla = 22;
    static integer lenila = 9;
    static integer lenrlr = 5;
    static integer lenilr = 9;

     
    integer i__1;

     
    static integer i__, l;
    extern   int dcopy_();

 
 
 
 

 
 
     
    --isav;
    --rsav;

     

    l = 1;
    dcopy_(&lenrls, &rsav[l], &c__1, (ls0001_._5) .rls, &c__1);
    l += lenrls;
    dcopy_(&lenrla, &rsav[l], &c__1, (lsa001_._3) .rlsa, &c__1);
    l += lenrla;
    dcopy_(&lenrlr, &rsav[l], &c__1, (lsr001_._4) .rlsr, &c__1);

    l = 0;
    i__1 = lenils;
    for (i__ = 1; i__ <= i__1; ++i__) {
	(ls0001_._5) .ils[i__ - 1] = (integer) isav[l + i__];
 
    }
    l += lenils;
    i__1 = lenila;
    for (i__ = 1; i__ <= i__1; ++i__) {
	(lsa001_._3) .ilsa[i__ - 1] = (integer) isav[l + i__];
 
    }
    l += lenila;
    i__1 = lenilr;
    for (i__ = 1; i__ <= i__1; ++i__) {
	(lsr001_._4) .ilsr[i__ - 1] = (integer) isav[l + i__];
 
    }
    l += lenilr;

    (eh0001_._1) .ieh[0] = (integer) isav[l + 1];
    (eh0001_._1) .ieh[1] = (integer) isav[l + 2];
    return 0;
}  

 
  int rscma1_(rsav, isav)
doublereal *rsav, *isav;
{
     

    static integer lenrls = 219;
    static integer lenils = 39;
    static integer lenrla = 22;
    static integer lenila = 9;

     
    integer i__1;

     
    static integer i__;

 
 
 
 

 
 
     
    --isav;
    --rsav;

     

    i__1 = lenrls;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	(ls0001_._5) .rls[i__ - 1] = rsav[i__];
    }
    i__1 = lenrla;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	(lsa001_._3) .rlsa[i__ - 1] = rsav[lenrls + i__];
    }

    i__1 = lenils;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	(ls0001_._5) .ils[i__ - 1] = (integer) isav[i__];
    }
    i__1 = lenila;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	(lsa001_._3) .ilsa[i__ - 1] = (integer) isav[lenils + i__];
    }

    (eh0001_._1) .ieh[0] = (integer) isav[lenils + lenila + 1];
    (eh0001_._1) .ieh[1] = (integer) isav[lenils + lenila + 2];
    return 0;
}  

 
  int rscom1_(rsav, isav)
doublereal *rsav, *isav;
{
     

    static integer lenrls = 219;
    static integer lenils = 39;

     
    integer i__1;

     
    static integer i__;

 
 
 
 
 
 
     
    --isav;
    --rsav;

     

    i__1 = lenrls;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	(ls0001_._5) .rls[i__ - 1] = rsav[i__];
    }
    i__1 = lenils;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	(ls0001_._5) .ils[i__ - 1] = (integer) isav[i__];
    }
    (eh0001_._1) .ieh[0] = (integer) isav[lenils + 1];
    (eh0001_._1) .ieh[1] = (integer) isav[lenils + 2];
    return 0;
}  

 
  int solsy_(wm, iwm, x, tem)
doublereal *wm;
integer *iwm;
doublereal *x, *tem;
{
     
    integer i__1;

     
    static integer i__;
    static doublereal r__;
    extern   int dgbsl_(), dgesl_();
    static doublereal di;
    static integer meband, ml, mu;
    static doublereal hl0, phl0;
    --tem;
    --x;
    --iwm;
    --wm;

     
    (ls0001_._1) .iersl = 0;
    switch ((int)(ls0001_._1) .miter) {
	case 1:  goto L100;
	case 2:  goto L100;
	case 3:  goto L300;
	case 4:  goto L400;
	case 5:  goto L400;
    }
L100:
    dgesl_(&wm[3], & (ls0001_._1) .n, & (ls0001_._1) .n, &iwm[21], &x[1], &c__0);
    return 0;

L300:
    phl0 = wm[2];
    hl0 = (ls0001_._1) .h__ * (ls0001_._1) .el0;
    wm[2] = hl0;
    if (hl0 == phl0) {
	goto L330;
    }
    r__ = hl0 / phl0;
    i__1 = (ls0001_._1) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	di = 1. - r__ * (1. - 1. / wm[i__ + 2]);
	if ((( di ) >= 0 ? ( di ) : -( di ))  == 0.) {
	    goto L390;
	}
 
	wm[i__ + 2] = 1. / di;
    }
L330:
    i__1 = (ls0001_._1) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	x[i__] = wm[i__ + 2] * x[i__];
    }
    return 0;
L390:
    (ls0001_._1) .iersl = 1;
    return 0;

L400:
    ml = iwm[1];
    mu = iwm[2];
    meband = (ml << 1) + mu + 1;
    dgbsl_(&wm[3], &meband, & (ls0001_._1) .n, &ml, &mu, &iwm[21], &x[1], &c__0);
    return 0;
 

}  

 
  int stoda_(neq, y, yh, nyh, yh1, ewt, savf, acor, wm, iwm, f,
	 jac, pjac, slvs)
integer *neq;
doublereal *y, *yh;
integer *nyh;
doublereal *yh1, *ewt, *savf, *acor, *wm;
integer *iwm;
  int (*f) (), (*jac) (), (*pjac) (), (*slvs) ();
{
     

    static doublereal sm1[12] = { .5,.575,.55,.45,.35,.25,.2,.15,.1,.075,.05,
	    .025 };

     
    integer yh_dim1, yh_offset, i__1, i__2;
    doublereal d__1, d__2, d__3;

     
    double pow_dd();

     
    static doublereal dcon, delp;
    static integer lm1p1, lm2p1;
    static doublereal exdn, rhdn;
    static integer iret;
    static doublereal told, rate, rhsm;
    static integer newq;
    static doublereal exsm, rhup, exup, rh1it;
    static integer i__, j, m;
    extern   int cfode_();
    static doublereal r__, alpha;
    static integer iredo, i1;
    static doublereal pnorm;
    static integer jb;
    static doublereal rh, rm, dm1, dm2;
    static integer lm1, lm2;
    extern doublereal vmnorm_();
    static doublereal rh1, rh2, del, ddn;
    static integer ncf;
    static doublereal pdh, dsm, dup, exm1, exm2;
    static integer nqm1, nqm2;

 
     
    --neq;
    --y;
    yh_dim1 = *nyh;
    yh_offset = yh_dim1 + 1;
    yh -= yh_offset;
    --yh1;
    --ewt;
    --savf;
    --acor;
    --wm;
    --iwm;

     
 

 
 
 
 
 
 
 
 
 
 
 
 
 

    (ls0001_._6) .kflag = 0;
    told = (ls0001_._6) .tn;
    ncf = 0;
    (ls0001_._6) .ierpj = 0;
    (ls0001_._6) .iersl = 0;
    (ls0001_._6) .jcur = 0;
    (ls0001_._6) .icf = 0;
    if ((ls0001_._6) .jstart > 0) {
	goto L200;
    }
    if ((ls0001_._6) .jstart == -1) {
	goto L100;
    }
    if ((ls0001_._6) .jstart == -2) {
	goto L160;
    }
 

 
 
 
 
 
 
 
 

    (ls0001_._6) .lmax = (ls0001_._6) .maxord + 1;
    (ls0001_._6) .nq = 1;
    (ls0001_._6) .l = 2;
    (ls0001_._6) .ialth = 2;
    (ls0001_._6) .rmax = 1e4;
    (ls0001_._6) .rc = 0.;
    (ls0001_._6) .el0 = 1.;
    (ls0001_._6) .crate = .7;
    delp = 0.;
    (ls0001_._6) .hold = (ls0001_._6) .h__;
    (ls0001_._6) .nslp = 0;
    (ls0001_._6) .ipup = (ls0001_._6) .miter;
    iret = 3;
 

    (lsa001_._4) .icount = 20;
    (lsa001_._4) .irflag = 0;
    (lsa001_._4) .pdest = 0.;
    (lsa001_._4) .pdlast = 0.;
    (lsa001_._4) .ratio = 5.;
    cfode_(&c__2, (ls0001_._6) .elco, (ls0001_._6) .tesco);
    for (i__ = 1; i__ <= 5; ++i__) {
 
	(lsa001_._4) .cm2[i__ - 1] = (ls0001_._6) .tesco[i__ * 3 - 2] * (ls0001_._6) .elco[
		i__ + 1 + i__ * 13 - 14];
    }
    cfode_(&c__1, (ls0001_._6) .elco, (ls0001_._6) .tesco);
    for (i__ = 1; i__ <= 12; ++i__) {
 
	(lsa001_._4) .cm1[i__ - 1] = (ls0001_._6) .tesco[i__ * 3 - 2] * (ls0001_._6) .elco[
		i__ + 1 + i__ * 13 - 14];
    }
    goto L150;
 

 
 
 
 
 
 
 
 
 
 

L100:
    (ls0001_._6) .ipup = (ls0001_._6) .miter;
    (ls0001_._6) .lmax = (ls0001_._6) .maxord + 1;
    if ((ls0001_._6) .ialth == 1) {
	(ls0001_._6) .ialth = 2;
    }
    if ((ls0001_._6) .meth == (lsa001_._4) .mused) {
	goto L160;
    }
    cfode_(& (ls0001_._6) .meth, (ls0001_._6) .elco, (ls0001_._6) .tesco);
    (ls0001_._6) .ialth = (ls0001_._6) .l;
    iret = 1;
 

 
 
 

L150:
    i__1 = (ls0001_._6) .l;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	(ls0001_._6) .el[i__ - 1] = (ls0001_._6) .elco[i__ + (ls0001_._6) .nq * 13 - 14];
    }
    (ls0001_._6) .nqnyh = (ls0001_._6) .nq * *nyh;
    (ls0001_._6) .rc = (ls0001_._6) .rc * (ls0001_._6) .el[0] / (ls0001_._6) .el0;
    (ls0001_._6) .el0 = (ls0001_._6) .el[0];
    (ls0001_._6) .conit = .5 / (doublereal) ((ls0001_._6) .nq + 2);
    switch ((int)iret) {
	case 1:  goto L160;
	case 2:  goto L170;
	case 3:  goto L200;
    }
 

 
 
 
 
 

L160:
    if ((ls0001_._6) .h__ == (ls0001_._6) .hold) {
	goto L200;
    }
    rh = (ls0001_._6) .h__ / (ls0001_._6) .hold;
    (ls0001_._6) .h__ = (ls0001_._6) .hold;
    iredo = 3;
    goto L175;
L170:
 
    d__1 = rh, d__2 = (ls0001_._6) .hmin / (( (ls0001_._6) .h__ ) >= 0 ? ( (ls0001_._6) .h__ ) : -( (ls0001_._6) .h__ )) ;
    rh = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
L175:
    rh = (( rh ) <= ( (ls0001_._6) .rmax ) ? ( rh ) : ( (ls0001_._6) .rmax )) ;
 
    d__1 = 1., d__2 = (( (ls0001_._6) .h__ ) >= 0 ? ( (ls0001_._6) .h__ ) : -( (ls0001_._6) .h__ ))  * (ls0001_._6) .hmxi * rh;
    rh /= (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
 

 

 
 
 

    if ((ls0001_._6) .meth == 2) {
	goto L178;
    }
    (lsa001_._4) .irflag = 0;
 
    d__1 = (( (ls0001_._6) .h__ ) >= 0 ? ( (ls0001_._6) .h__ ) : -( (ls0001_._6) .h__ ))  * (lsa001_._4) .pdlast;
    pdh = (( d__1 ) >= ( 1e-6 ) ? ( d__1 ) : ( 1e-6 )) ;
    if (rh * pdh * 1.00001 < sm1[(ls0001_._6) .nq - 1]) {
	goto L178;
    }
    rh = sm1[(ls0001_._6) .nq - 1] / pdh;
    (lsa001_._4) .irflag = 1;
L178:
    r__ = 1.;
    i__1 = (ls0001_._6) .l;
    for (j = 2; j <= i__1; ++j) {
	r__ *= rh;
	i__2 = (ls0001_._6) .n;
	for (i__ = 1; i__ <= i__2; ++i__) {
 
	    yh[i__ + j * yh_dim1] *= r__;
	}
    }
    (ls0001_._6) .h__ *= rh;
    (ls0001_._6) .rc *= rh;
    (ls0001_._6) .ialth = (ls0001_._6) .l;
    if (iredo == 0) {
	goto L690;
    }
 

 
 
 
 
 
 
 

L200:
    if ((d__1 = (ls0001_._6) .rc - 1., (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > (ls0001_._6) .ccmax) {
	(ls0001_._6) .ipup = (ls0001_._6) .miter;
    }
    if ((ls0001_._6) .nst >= (ls0001_._6) .nslp + (ls0001_._6) .msbp) {
	(ls0001_._6) .ipup = (ls0001_._6) .miter;
    }
    (ls0001_._6) .tn += (ls0001_._6) .h__;
    i1 = (ls0001_._6) .nqnyh + 1;
    i__2 = (ls0001_._6) .nq;
    for (jb = 1; jb <= i__2; ++jb) {
	i1 -= *nyh;
	i__1 = (ls0001_._6) .nqnyh;
	for (i__ = i1; i__ <= i__1; ++i__) {
 
	    yh1[i__] += yh1[i__ + *nyh];
	}
 
    }
    pnorm = vmnorm_(& (ls0001_._6) .n, &yh1[1], &ewt[1]);
 

 
 
 
 
 

L220:
    m = 0;
    rate = 0.;
    del = 0.;
    i__2 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__2; ++i__) {
 
	y[i__] = yh[i__ + yh_dim1];
    }
    (*f)(&neq[1], & (ls0001_._6) .tn, &y[1], &savf[1]);
    if (ierode_ .iero > 0) {
	return 0;
    }
    ++ (ls0001_._6) .nfe;
    if ((ls0001_._6) .ipup <= 0) {
	goto L250;
    }
 

 
 
 
 

    (ls0001_._6) .ipup = 0;
    (ls0001_._6) .rc = 1.;
    (ls0001_._6) .nslp = (ls0001_._6) .nst;
    (ls0001_._6) .crate = .7;
    (*pjac)(&neq[1], &y[1], &yh[yh_offset], nyh, &ewt[1], &acor[1], &savf[1], 
	    &wm[1], &iwm[1], f, jac);
    if (ierode_ .iero > 0) {
	return 0;
    }
    if ((ls0001_._6) .ierpj != 0) {
	goto L430;
    }
L250:
    i__2 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__2; ++i__) {
 
	acor[i__] = 0.;
    }
L270:
    if ((ls0001_._6) .miter != 0) {
	goto L350;
    }
 

 
 
 

    i__2 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__2; ++i__) {
	savf[i__] = (ls0001_._6) .h__ * savf[i__] - yh[i__ + (yh_dim1 << 1)];
 
	y[i__] = savf[i__] - acor[i__];
    }
    del = vmnorm_(& (ls0001_._6) .n, &y[1], &ewt[1]);
    i__2 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__2; ++i__) {
	y[i__] = yh[i__ + yh_dim1] + (ls0001_._6) .el[0] * savf[i__];
 
	acor[i__] = savf[i__];
    }
    goto L400;
 

 
 
 
 

L350:
    i__2 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__2; ++i__) {
 
	y[i__] = (ls0001_._6) .h__ * savf[i__] - (yh[i__ + (yh_dim1 << 1)] + acor[
		i__]);
    }
    (*slvs)(&wm[1], &iwm[1], &y[1], &savf[1]);
    if ((ls0001_._6) .iersl < 0) {
	goto L430;
    }
    if ((ls0001_._6) .iersl > 0) {
	goto L410;
    }
    del = vmnorm_(& (ls0001_._6) .n, &y[1], &ewt[1]);
    i__2 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__2; ++i__) {
	acor[i__] += y[i__];
 
	y[i__] = yh[i__ + yh_dim1] + (ls0001_._6) .el[0] * acor[i__];
    }
 

 
 

 
 
 
 
 
 
 
 

L400:
    if (del <= pnorm * 100. * (ls0001_._6) .uround) {
	goto L450;
    }
    if (m == 0 && (ls0001_._6) .meth == 1) {
	goto L405;
    }
    if (m == 0) {
	goto L402;
    }
    rm = 1024.;
    if (del <= delp * 1024.) {
	rm = del / delp;
    }
    rate = (( rate ) >= ( rm ) ? ( rate ) : ( rm )) ;
 
    d__1 = (ls0001_._6) .crate * .2;
    (ls0001_._6) .crate = (( d__1 ) >= ( rm ) ? ( d__1 ) : ( rm )) ;
L402:
 
    d__1 = 1., d__2 = (ls0001_._6) .crate * 1.5;
    dcon = del * (( d__1 ) <= ( d__2 ) ? ( d__1 ) : ( d__2 ))  / ((ls0001_._6) .tesco[(ls0001_._6) .nq * 3 - 2] * 
	    (ls0001_._6) .conit);
    if (dcon > 1.) {
	goto L405;
    }
 
    d__2 = (lsa001_._4) .pdest, d__3 = rate / (d__1 = (ls0001_._6) .h__ * (ls0001_._6) .el[0]
	    , (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
    (lsa001_._4) .pdest = (( d__2 ) >= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
    if ((lsa001_._4) .pdest != 0.) {
	(lsa001_._4) .pdlast = (lsa001_._4) .pdest;
    }
    goto L450;
L405:
    ++m;
    if (m == (ls0001_._6) .maxcor) {
	goto L410;
    }
    if (m >= 2 && del > delp * 2.) {
	goto L410;
    }
    delp = del;
    (*f)(&neq[1], & (ls0001_._6) .tn, &y[1], &savf[1]);
    if (ierode_ .iero > 0) {
	return 0;
    }
    ++ (ls0001_._6) .nfe;
    goto L270;
 

 
 
 
 
 
 

L410:
    if ((ls0001_._6) .miter == 0 || (ls0001_._6) .jcur == 1) {
	goto L430;
    }
    (ls0001_._6) .icf = 1;
    (ls0001_._6) .ipup = (ls0001_._6) .miter;
    goto L220;
L430:
    (ls0001_._6) .icf = 2;
    ++ncf;
    (ls0001_._6) .rmax = 2.;
    (ls0001_._6) .tn = told;
    i1 = (ls0001_._6) .nqnyh + 1;
    i__2 = (ls0001_._6) .nq;
    for (jb = 1; jb <= i__2; ++jb) {
	i1 -= *nyh;
	i__1 = (ls0001_._6) .nqnyh;
	for (i__ = i1; i__ <= i__1; ++i__) {
 
	    yh1[i__] -= yh1[i__ + *nyh];
	}
 
    }
    if ((ls0001_._6) .ierpj < 0 || (ls0001_._6) .iersl < 0) {
	goto L680;
    }
    if ((( (ls0001_._6) .h__ ) >= 0 ? ( (ls0001_._6) .h__ ) : -( (ls0001_._6) .h__ ))  <= (ls0001_._6) .hmin * 1.00001) {
	goto L670;
    }
    if (ncf == (ls0001_._6) .mxncf) {
	goto L670;
    }
    rh = .25;
    (ls0001_._6) .ipup = (ls0001_._6) .miter;
    iredo = 1;
    goto L170;
 

 
 
 
 
 

L450:
    (ls0001_._6) .jcur = 0;
    if (m == 0) {
	dsm = del / (ls0001_._6) .tesco[(ls0001_._6) .nq * 3 - 2];
    }
    if (m > 0) {
	dsm = vmnorm_(& (ls0001_._6) .n, &acor[1], &ewt[1]) / (ls0001_._6) .tesco[
		(ls0001_._6) .nq * 3 - 2];
    }
    if (dsm > 1.) {
	goto L500;
    }
 

 
 
 
 
 
 
 
 
 
 
 
 

    (ls0001_._6) .kflag = 0;
    iredo = 0;
    ++ (ls0001_._6) .nst;
    (ls0001_._6) .hu = (ls0001_._6) .h__;
    (ls0001_._6) .nqu = (ls0001_._6) .nq;
    (lsa001_._4) .mused = (ls0001_._6) .meth;
    i__2 = (ls0001_._6) .l;
    for (j = 1; j <= i__2; ++j) {
	i__1 = (ls0001_._6) .n;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    yh[i__ + j * yh_dim1] += (ls0001_._6) .el[j - 1] * acor[i__];
	}
    }
    -- (lsa001_._4) .icount;
    if ((lsa001_._4) .icount >= 0) {
	goto L488;
    }
    if ((ls0001_._6) .meth == 2) {
	goto L480;
    }
 

 
 
 
 
 
 
 
 
 

 
 
 
 

 
 
 

    if ((ls0001_._6) .nq > 5) {
	goto L488;
    }
    if (dsm > pnorm * 100. * (ls0001_._6) .uround && (lsa001_._4) .pdest != 0.) {
	goto L470;
    }
    if ((lsa001_._4) .irflag == 0) {
	goto L488;
    }
    rh2 = 2.;
    nqm2 = (( (ls0001_._6) .nq ) <= ( (lsa001_._4) .mxords ) ? ( (ls0001_._6) .nq ) : ( (lsa001_._4) .mxords )) ;
    goto L478;
L470:
    exsm = 1. / (doublereal) (ls0001_._6) .l;
    rh1 = 1. / (pow_dd(&dsm, &exsm) * 1.2 + 1.2e-6);
    rh1it = rh1 * 2.;
    pdh = (lsa001_._4) .pdlast * (( (ls0001_._6) .h__ ) >= 0 ? ( (ls0001_._6) .h__ ) : -( (ls0001_._6) .h__ )) ;
    if (pdh * rh1 > 1e-5) {
	rh1it = sm1[(ls0001_._6) .nq - 1] / pdh;
    }
    rh1 = (( rh1 ) <= ( rh1it ) ? ( rh1 ) : ( rh1it )) ;
    if ((ls0001_._6) .nq <= (lsa001_._4) .mxords) {
	goto L474;
    }
    nqm2 = (lsa001_._4) .mxords;
    lm2 = (lsa001_._4) .mxords + 1;
    exm2 = 1. / (doublereal) lm2;
    lm2p1 = lm2 + 1;
    dm2 = vmnorm_(& (ls0001_._6) .n, &yh[lm2p1 * yh_dim1 + 1], &ewt[1]) / 
	    (lsa001_._4) .cm2[(lsa001_._4) .mxords - 1];
    rh2 = 1. / (pow_dd(&dm2, &exm2) * 1.2 + 1.2e-6);
    goto L476;
L474:
    dm2 = dsm * ((lsa001_._4) .cm1[(ls0001_._6) .nq - 1] / (lsa001_._4) .cm2[(ls0001_._6) .nq - 1]
	    );
    rh2 = 1. / (pow_dd(&dm2, &exsm) * 1.2 + 1.2e-6);
    nqm2 = (ls0001_._6) .nq;
L476:
    if (rh2 < (lsa001_._4) .ratio * rh1) {
	goto L488;
    }
 

L478:
    rh = rh2;
    (lsa001_._4) .icount = 20;
    (ls0001_._6) .meth = 2;
    (ls0001_._6) .miter = (lsa001_._4) .jtyp;
    (lsa001_._4) .pdlast = 0.;
    (ls0001_._6) .nq = nqm2;
    (ls0001_._6) .l = (ls0001_._6) .nq + 1;
    goto L170;
 

 
 
 
 

 
 
 
 
 

L480:
    exsm = 1. / (doublereal) (ls0001_._6) .l;
    if ((lsa001_._4) .mxordn >= (ls0001_._6) .nq) {
	goto L484;
    }
    nqm1 = (lsa001_._4) .mxordn;
    lm1 = (lsa001_._4) .mxordn + 1;
    exm1 = 1. / (doublereal) lm1;
    lm1p1 = lm1 + 1;
    dm1 = vmnorm_(& (ls0001_._6) .n, &yh[lm1p1 * yh_dim1 + 1], &ewt[1]) / 
	    (lsa001_._4) .cm1[(lsa001_._4) .mxordn - 1];
    rh1 = 1. / (pow_dd(&dm1, &exm1) * 1.2 + 1.2e-6);
    goto L486;
L484:
    dm1 = dsm * ((lsa001_._4) .cm2[(ls0001_._6) .nq - 1] / (lsa001_._4) .cm1[(ls0001_._6) .nq - 1]
	    );
    rh1 = 1. / (pow_dd(&dm1, &exsm) * 1.2 + 1.2e-6);
    nqm1 = (ls0001_._6) .nq;
    exm1 = exsm;
L486:
    rh1it = rh1 * 2.;
    pdh = (lsa001_._4) .pdnorm * (( (ls0001_._6) .h__ ) >= 0 ? ( (ls0001_._6) .h__ ) : -( (ls0001_._6) .h__ )) ;
    if (pdh * rh1 > 1e-5) {
	rh1it = sm1[nqm1 - 1] / pdh;
    }
    rh1 = (( rh1 ) <= ( rh1it ) ? ( rh1 ) : ( rh1it )) ;
    rh2 = 1. / (pow_dd(&dsm, &exsm) * 1.2 + 1.2e-6);
    if (rh1 * (lsa001_._4) .ratio < rh2 * 5.) {
	goto L488;
    }
    alpha = (( .001 ) >= ( rh1 ) ? ( .001 ) : ( rh1 )) ;
    dm1 = pow_dd(&alpha, &exm1) * dm1;
    if (dm1 <= (ls0001_._6) .uround * 1e3 * pnorm) {
	goto L488;
    }
 

    rh = rh1;
    (lsa001_._4) .icount = 20;
    (ls0001_._6) .meth = 1;
    (ls0001_._6) .miter = 0;
    (lsa001_._4) .pdlast = 0.;
    (ls0001_._6) .nq = nqm1;
    (ls0001_._6) .l = (ls0001_._6) .nq + 1;
    goto L170;

 

L488:
    -- (ls0001_._6) .ialth;
    if ((ls0001_._6) .ialth == 0) {
	goto L520;
    }
    if ((ls0001_._6) .ialth > 1) {
	goto L700;
    }
    if ((ls0001_._6) .l == (ls0001_._6) .lmax) {
	goto L700;
    }
    i__1 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	yh[i__ + (ls0001_._6) .lmax * yh_dim1] = acor[i__];
    }
    goto L700;
 

 
 
 
 
 
 

L500:
    -- (ls0001_._6) .kflag;
    (ls0001_._6) .tn = told;
    i1 = (ls0001_._6) .nqnyh + 1;
    i__1 = (ls0001_._6) .nq;
    for (jb = 1; jb <= i__1; ++jb) {
	i1 -= *nyh;
	i__2 = (ls0001_._6) .nqnyh;
	for (i__ = i1; i__ <= i__2; ++i__) {
 
	    yh1[i__] -= yh1[i__ + *nyh];
	}
 
    }
    (ls0001_._6) .rmax = 2.;
    if ((( (ls0001_._6) .h__ ) >= 0 ? ( (ls0001_._6) .h__ ) : -( (ls0001_._6) .h__ ))  <= (ls0001_._6) .hmin * 1.00001) {
	goto L660;
    }
    if ((ls0001_._6) .kflag <= -3) {
	goto L640;
    }
    iredo = 2;
    rhup = 0.;
    goto L540;
 

 
 
 
 
 
 
 
 

L520:
    rhup = 0.;
    if ((ls0001_._6) .l == (ls0001_._6) .lmax) {
	goto L540;
    }
    i__1 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	savf[i__] = acor[i__] - yh[i__ + (ls0001_._6) .lmax * yh_dim1];
    }
    dup = vmnorm_(& (ls0001_._6) .n, &savf[1], &ewt[1]) / (ls0001_._6) .tesco[
	    (ls0001_._6) .nq * 3 - 1];
    exup = 1. / (doublereal) ((ls0001_._6) .l + 1);
    rhup = 1. / (pow_dd(&dup, &exup) * 1.4 + 1.4e-6);
L540:
    exsm = 1. / (doublereal) (ls0001_._6) .l;
    rhsm = 1. / (pow_dd(&dsm, &exsm) * 1.2 + 1.2e-6);
    rhdn = 0.;
    if ((ls0001_._6) .nq == 1) {
	goto L550;
    }
    ddn = vmnorm_(& (ls0001_._6) .n, &yh[(ls0001_._6) .l * yh_dim1 + 1], &ewt[1]) / 
	    (ls0001_._6) .tesco[(ls0001_._6) .nq * 3 - 3];
    exdn = 1. / (doublereal) (ls0001_._6) .nq;
    rhdn = 1. / (pow_dd(&ddn, &exdn) * 1.3 + 1.3e-6);
 

L550:
    if ((ls0001_._6) .meth == 2) {
	goto L560;
    }
 
    d__1 = (( (ls0001_._6) .h__ ) >= 0 ? ( (ls0001_._6) .h__ ) : -( (ls0001_._6) .h__ ))  * (lsa001_._4) .pdlast;
    pdh = (( d__1 ) >= ( 1e-6 ) ? ( d__1 ) : ( 1e-6 )) ;
    if ((ls0001_._6) .l < (ls0001_._6) .lmax) {
 
	d__1 = rhup, d__2 = sm1[(ls0001_._6) .l - 1] / pdh;
	rhup = (( d__1 ) <= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    }
 
    d__1 = rhsm, d__2 = sm1[(ls0001_._6) .nq - 1] / pdh;
    rhsm = (( d__1 ) <= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    if ((ls0001_._6) .nq > 1) {
 
	d__1 = rhdn, d__2 = sm1[(ls0001_._6) .nq - 2] / pdh;
	rhdn = (( d__1 ) <= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    }
    (lsa001_._4) .pdest = 0.;
L560:
    if (rhsm >= rhup) {
	goto L570;
    }
    if (rhup > rhdn) {
	goto L590;
    }
    goto L580;
L570:
    if (rhsm < rhdn) {
	goto L580;
    }
    newq = (ls0001_._6) .nq;
    rh = rhsm;
    goto L620;
L580:
    newq = (ls0001_._6) .nq - 1;
    rh = rhdn;
    if ((ls0001_._6) .kflag < 0 && rh > 1.) {
	rh = 1.;
    }
    goto L620;
L590:
    newq = (ls0001_._6) .l;
    rh = rhup;
    if (rh < 1.1) {
	goto L610;
    }
    r__ = (ls0001_._6) .el[(ls0001_._6) .l - 1] / (doublereal) (ls0001_._6) .l;
    i__1 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	yh[i__ + (newq + 1) * yh_dim1] = acor[i__] * r__;
    }
    goto L630;
L610:
    (ls0001_._6) .ialth = 3;
    goto L700;
 

L620:
    if ((ls0001_._6) .meth == 2) {
	goto L622;
    }
    if (rh * pdh * 1.00001 >= sm1[newq - 1]) {
	goto L625;
    }
L622:
    if ((ls0001_._6) .kflag == 0 && rh < 1.1) {
	goto L610;
    }
L625:
    if ((ls0001_._6) .kflag <= -2) {
	rh = (( rh ) <= ( .2 ) ? ( rh ) : ( .2 )) ;
    }
 

 
 
 
 

    if (newq == (ls0001_._6) .nq) {
	goto L170;
    }
L630:
    (ls0001_._6) .nq = newq;
    (ls0001_._6) .l = (ls0001_._6) .nq + 1;
    iret = 2;
    goto L150;
 

 
 
 
 
 
 
 
 

L640:
    if ((ls0001_._6) .kflag == -10) {
	goto L660;
    }
    rh = .1;
 
    d__1 = (ls0001_._6) .hmin / (( (ls0001_._6) .h__ ) >= 0 ? ( (ls0001_._6) .h__ ) : -( (ls0001_._6) .h__ )) ;
    rh = (( d__1 ) >= ( rh ) ? ( d__1 ) : ( rh )) ;
    (ls0001_._6) .h__ *= rh;
    i__1 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	y[i__] = yh[i__ + yh_dim1];
    }
    (*f)(&neq[1], & (ls0001_._6) .tn, &y[1], &savf[1]);
    if (ierode_ .iero > 0) {
	return 0;
    }
    ++ (ls0001_._6) .nfe;
    i__1 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	yh[i__ + (yh_dim1 << 1)] = (ls0001_._6) .h__ * savf[i__];
    }
    (ls0001_._6) .ipup = (ls0001_._6) .miter;
    (ls0001_._6) .ialth = 5;
    if ((ls0001_._6) .nq == 1) {
	goto L200;
    }
    (ls0001_._6) .nq = 1;
    (ls0001_._6) .l = 2;
    iret = 3;
    goto L150;
 

 
 
 

L660:
    (ls0001_._6) .kflag = -1;
    goto L720;
L670:
    (ls0001_._6) .kflag = -2;
    goto L720;
L680:
    (ls0001_._6) .kflag = -3;
    goto L720;
L690:
    (ls0001_._6) .rmax = 10.;
L700:
    r__ = 1. / (ls0001_._6) .tesco[(ls0001_._6) .nqu * 3 - 2];
    i__1 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	acor[i__] *= r__;
    }
L720:
    (ls0001_._6) .hold = (ls0001_._6) .h__;
    (ls0001_._6) .jstart = 1;
    return 0;
 

}  

 
  int stode_(neq, y, yh, nyh, yh1, ewt, savf, acor, wm, iwm, f,
	 jac, pjac, slvs)
integer *neq;
doublereal *y, *yh;
integer *nyh;
doublereal *yh1, *ewt, *savf, *acor, *wm;
integer *iwm;
  int (*f) (), (*jac) (), (*pjac) (), (*slvs) ();
{
     
    integer yh_dim1, yh_offset, i__1, i__2;
    doublereal d__1, d__2, d__3;

     
    double pow_dd();

     
    static doublereal dcon, delp, rhdn, exdn;
    static integer iret;
    static doublereal told, rhsm;
    static integer newq;
    static doublereal exsm, rhup, exup;
    static integer i__, j, m;
    extern   int cfode_();
    static doublereal r__;
    static integer iredo, i1;
    extern doublereal vnorm_();
    static integer jb;
    static doublereal rh, del, ddn;
    static integer ncf;
    static doublereal dsm, dup;

 
 

 
 
 
 
 

     
    --neq;
    --y;
    yh_dim1 = *nyh;
    yh_offset = yh_dim1 + 1;
    yh -= yh_offset;
    --yh1;
    --ewt;
    --savf;
    --acor;
    --wm;
    --iwm;

     
    (ls0001_._6) .kflag = 0;
    told = (ls0001_._6) .tn;
    ncf = 0;
    (ls0001_._6) .ierpj = 0;
    (ls0001_._6) .iersl = 0;
    (ls0001_._6) .jcur = 0;
    (ls0001_._6) .icf = 0;
    if ((ls0001_._6) .jstart > 0) {
	goto L200;
    }
    if ((ls0001_._6) .jstart == -1) {
	goto L100;
    }
    if ((ls0001_._6) .jstart == -2) {
	goto L160;
    }
 

 
 
 
 
 
 
 

    (ls0001_._6) .lmax = (ls0001_._6) .maxord + 1;
    (ls0001_._6) .nq = 1;
    (ls0001_._6) .l = 2;
    (ls0001_._6) .ialth = 2;
    (ls0001_._6) .rmax = 1e4;
    (ls0001_._6) .rc = 0.;
    (ls0001_._6) .el0 = 1.;
    (ls0001_._6) .crate = .7;
    delp = 0.;
    (ls0001_._6) .hold = (ls0001_._6) .h__;
    (ls0001_._6) .meo = (ls0001_._6) .meth;
    (ls0001_._6) .nslp = 0;
    (ls0001_._6) .ipup = (ls0001_._6) .miter;
    iret = 3;
    goto L140;
 

 
 
 
 
 
 
 
 
 
 
 
 

L100:
    (ls0001_._6) .ipup = (ls0001_._6) .miter;
    (ls0001_._6) .lmax = (ls0001_._6) .maxord + 1;
    if ((ls0001_._6) .ialth == 1) {
	(ls0001_._6) .ialth = 2;
    }
    if ((ls0001_._6) .meth == (ls0001_._6) .meo) {
	goto L110;
    }
    cfode_(& (ls0001_._6) .meth, (ls0001_._6) .elco, (ls0001_._6) .tesco);
    (ls0001_._6) .meo = (ls0001_._6) .meth;
    if ((ls0001_._6) .nq > (ls0001_._6) .maxord) {
	goto L120;
    }
    (ls0001_._6) .ialth = (ls0001_._6) .l;
    iret = 1;
    goto L150;
L110:
    if ((ls0001_._6) .nq <= (ls0001_._6) .maxord) {
	goto L160;
    }
L120:
    (ls0001_._6) .nq = (ls0001_._6) .maxord;
    (ls0001_._6) .l = (ls0001_._6) .lmax;
    i__1 = (ls0001_._6) .l;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	(ls0001_._6) .el[i__ - 1] = (ls0001_._6) .elco[i__ + (ls0001_._6) .nq * 13 - 14];
    }
    (ls0001_._6) .nqnyh = (ls0001_._6) .nq * *nyh;
    (ls0001_._6) .rc = (ls0001_._6) .rc * (ls0001_._6) .el[0] / (ls0001_._6) .el0;
    (ls0001_._6) .el0 = (ls0001_._6) .el[0];
    (ls0001_._6) .conit = .5 / (doublereal) ((ls0001_._6) .nq + 2);
    ddn = vnorm_(& (ls0001_._6) .n, &savf[1], &ewt[1]) / (ls0001_._6) .tesco[(ls0001_._6) .l *
	     3 - 3];
    exdn = 1. / (doublereal) (ls0001_._6) .l;
    rhdn = 1. / (pow_dd(&ddn, &exdn) * 1.3 + 1.3e-6);
    rh = (( rhdn ) <= ( 1. ) ? ( rhdn ) : ( 1. )) ;
    iredo = 3;
    if ((ls0001_._6) .h__ == (ls0001_._6) .hold) {
	goto L170;
    }
 
    d__2 = rh, d__3 = (d__1 = (ls0001_._6) .h__ / (ls0001_._6) .hold, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
    rh = (( d__2 ) <= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
    (ls0001_._6) .h__ = (ls0001_._6) .hold;
    goto L175;
 

 
 
 
 

L140:
    cfode_(& (ls0001_._6) .meth, (ls0001_._6) .elco, (ls0001_._6) .tesco);
L150:
    i__1 = (ls0001_._6) .l;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	(ls0001_._6) .el[i__ - 1] = (ls0001_._6) .elco[i__ + (ls0001_._6) .nq * 13 - 14];
    }
    (ls0001_._6) .nqnyh = (ls0001_._6) .nq * *nyh;
    (ls0001_._6) .rc = (ls0001_._6) .rc * (ls0001_._6) .el[0] / (ls0001_._6) .el0;
    (ls0001_._6) .el0 = (ls0001_._6) .el[0];
    (ls0001_._6) .conit = .5 / (doublereal) ((ls0001_._6) .nq + 2);
    switch ((int)iret) {
	case 1:  goto L160;
	case 2:  goto L170;
	case 3:  goto L200;
    }
 

 
 
 
 
 

L160:
    if ((ls0001_._6) .h__ == (ls0001_._6) .hold) {
	goto L200;
    }
    rh = (ls0001_._6) .h__ / (ls0001_._6) .hold;
    (ls0001_._6) .h__ = (ls0001_._6) .hold;
    iredo = 3;
    goto L175;
L170:
 
    d__1 = rh, d__2 = (ls0001_._6) .hmin / (( (ls0001_._6) .h__ ) >= 0 ? ( (ls0001_._6) .h__ ) : -( (ls0001_._6) .h__ )) ;
    rh = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
L175:
    rh = (( rh ) <= ( (ls0001_._6) .rmax ) ? ( rh ) : ( (ls0001_._6) .rmax )) ;
 
    d__1 = 1., d__2 = (( (ls0001_._6) .h__ ) >= 0 ? ( (ls0001_._6) .h__ ) : -( (ls0001_._6) .h__ ))  * (ls0001_._6) .hmxi * rh;
    rh /= (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    r__ = 1.;
    i__1 = (ls0001_._6) .l;
    for (j = 2; j <= i__1; ++j) {
	r__ *= rh;
	i__2 = (ls0001_._6) .n;
	for (i__ = 1; i__ <= i__2; ++i__) {
 
	    yh[i__ + j * yh_dim1] *= r__;
	}
    }
    (ls0001_._6) .h__ *= rh;
    (ls0001_._6) .rc *= rh;
    (ls0001_._6) .ialth = (ls0001_._6) .l;
    if (iredo == 0) {
	goto L690;
    }
 

 
 
 
 
 
 
 

L200:
    if ((d__1 = (ls0001_._6) .rc - 1., (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > (ls0001_._6) .ccmax) {
	(ls0001_._6) .ipup = (ls0001_._6) .miter;
    }
    if ((ls0001_._6) .nst >= (ls0001_._6) .nslp + (ls0001_._6) .msbp) {
	(ls0001_._6) .ipup = (ls0001_._6) .miter;
    }
    (ls0001_._6) .tn += (ls0001_._6) .h__;
    i1 = (ls0001_._6) .nqnyh + 1;
    i__2 = (ls0001_._6) .nq;
    for (jb = 1; jb <= i__2; ++jb) {
	i1 -= *nyh;
	i__1 = (ls0001_._6) .nqnyh;
	for (i__ = i1; i__ <= i__1; ++i__) {
 
	    yh1[i__] += yh1[i__ + *nyh];
	}
 
    }
 

 
 
 
 
 

L220:
    m = 0;
    i__2 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__2; ++i__) {
 
	y[i__] = yh[i__ + yh_dim1];
    }
    (*f)(&neq[1], & (ls0001_._6) .tn, &y[1], &savf[1]);
    if (ierode_ .iero > 0) {
	return 0;
    }
    ++ (ls0001_._6) .nfe;
    if ((ls0001_._6) .ipup <= 0) {
	goto L250;
    }
 

 
 
 
 

    (ls0001_._6) .ipup = 0;
    (ls0001_._6) .rc = 1.;
    (ls0001_._6) .nslp = (ls0001_._6) .nst;
    (ls0001_._6) .crate = .7;
    (*pjac)(&neq[1], &y[1], &yh[yh_offset], nyh, &ewt[1], &acor[1], &savf[1], 
	    &wm[1], &iwm[1], f, jac);
    if (ierode_ .iero > 0) {
	return 0;
    }
    if ((ls0001_._6) .ierpj != 0) {
	goto L430;
    }
L250:
    i__2 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__2; ++i__) {
 
	acor[i__] = 0.;
    }
L270:
    if ((ls0001_._6) .miter != 0) {
	goto L350;
    }
 

 
 
 

    i__2 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__2; ++i__) {
	savf[i__] = (ls0001_._6) .h__ * savf[i__] - yh[i__ + (yh_dim1 << 1)];
 
	y[i__] = savf[i__] - acor[i__];
    }
    del = vnorm_(& (ls0001_._6) .n, &y[1], &ewt[1]);
    i__2 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__2; ++i__) {
	y[i__] = yh[i__ + yh_dim1] + (ls0001_._6) .el[0] * savf[i__];
 
	acor[i__] = savf[i__];
    }
    goto L400;
 

 
 
 
 

L350:
    i__2 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__2; ++i__) {
 
	y[i__] = (ls0001_._6) .h__ * savf[i__] - (yh[i__ + (yh_dim1 << 1)] + acor[
		i__]);
    }
    (*slvs)(&wm[1], &iwm[1], &y[1], &savf[1]);
    if ((ls0001_._6) .iersl < 0) {
	goto L430;
    }
    if ((ls0001_._6) .iersl > 0) {
	goto L410;
    }
    del = vnorm_(& (ls0001_._6) .n, &y[1], &ewt[1]);
    i__2 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__2; ++i__) {
	acor[i__] += y[i__];
 
	y[i__] = yh[i__ + yh_dim1] + (ls0001_._6) .el[0] * acor[i__];
    }
 

 
 
 

L400:
    if (m != 0) {
 
	d__1 = (ls0001_._6) .crate * .2, d__2 = del / delp;
	(ls0001_._6) .crate = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    }
 
    d__1 = 1., d__2 = (ls0001_._6) .crate * 1.5;
    dcon = del * (( d__1 ) <= ( d__2 ) ? ( d__1 ) : ( d__2 ))  / ((ls0001_._6) .tesco[(ls0001_._6) .nq * 3 - 2] * 
	    (ls0001_._6) .conit);
    if (dcon <= 1.) {
	goto L450;
    }
    ++m;
    if (m == (ls0001_._6) .maxcor) {
	goto L410;
    }
    if (m >= 2 && del > delp * 2.) {
	goto L410;
    }
    delp = del;
    (*f)(&neq[1], & (ls0001_._6) .tn, &y[1], &savf[1]);
    if (ierode_ .iero > 0) {
	return 0;
    }
    ++ (ls0001_._6) .nfe;
    goto L270;
 

 
 
 
 
 
 

L410:
    if ((ls0001_._6) .miter == 0 || (ls0001_._6) .jcur == 1) {
	goto L430;
    }
    (ls0001_._6) .icf = 1;
    (ls0001_._6) .ipup = (ls0001_._6) .miter;
    goto L220;
L430:
    (ls0001_._6) .icf = 2;
    ++ncf;
    (ls0001_._6) .rmax = 2.;
    (ls0001_._6) .tn = told;
    i1 = (ls0001_._6) .nqnyh + 1;
    i__2 = (ls0001_._6) .nq;
    for (jb = 1; jb <= i__2; ++jb) {
	i1 -= *nyh;
	i__1 = (ls0001_._6) .nqnyh;
	for (i__ = i1; i__ <= i__1; ++i__) {
 
	    yh1[i__] -= yh1[i__ + *nyh];
	}
 
    }
    if ((ls0001_._6) .ierpj < 0 || (ls0001_._6) .iersl < 0) {
	goto L680;
    }
    if ((( (ls0001_._6) .h__ ) >= 0 ? ( (ls0001_._6) .h__ ) : -( (ls0001_._6) .h__ ))  <= (ls0001_._6) .hmin * 1.00001) {
	goto L670;
    }
    if (ncf == (ls0001_._6) .mxncf) {
	goto L670;
    }
    rh = .25;
    (ls0001_._6) .ipup = (ls0001_._6) .miter;
    iredo = 1;
    goto L170;
 

 
 
 
 
 

L450:
    (ls0001_._6) .jcur = 0;
    if (m == 0) {
	dsm = del / (ls0001_._6) .tesco[(ls0001_._6) .nq * 3 - 2];
    }
    if (m > 0) {
	dsm = vnorm_(& (ls0001_._6) .n, &acor[1], &ewt[1]) / (ls0001_._6) .tesco[
		(ls0001_._6) .nq * 3 - 2];
    }
    if (dsm > 1.) {
	goto L500;
    }
 

 
 
 
 
 
 
 
 
 

    (ls0001_._6) .kflag = 0;
    iredo = 0;
    ++ (ls0001_._6) .nst;
    (ls0001_._6) .hu = (ls0001_._6) .h__;
    (ls0001_._6) .nqu = (ls0001_._6) .nq;
    i__2 = (ls0001_._6) .l;
    for (j = 1; j <= i__2; ++j) {
	i__1 = (ls0001_._6) .n;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    yh[i__ + j * yh_dim1] += (ls0001_._6) .el[j - 1] * acor[i__];
	}
    }
    -- (ls0001_._6) .ialth;
    if ((ls0001_._6) .ialth == 0) {
	goto L520;
    }
    if ((ls0001_._6) .ialth > 1) {
	goto L700;
    }
    if ((ls0001_._6) .l == (ls0001_._6) .lmax) {
	goto L700;
    }
    i__1 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	yh[i__ + (ls0001_._6) .lmax * yh_dim1] = acor[i__];
    }
    goto L700;
 

 
 
 
 
 
 

L500:
    -- (ls0001_._6) .kflag;
    (ls0001_._6) .tn = told;
    i1 = (ls0001_._6) .nqnyh + 1;
    i__1 = (ls0001_._6) .nq;
    for (jb = 1; jb <= i__1; ++jb) {
	i1 -= *nyh;
	i__2 = (ls0001_._6) .nqnyh;
	for (i__ = i1; i__ <= i__2; ++i__) {
 
	    yh1[i__] -= yh1[i__ + *nyh];
	}
 
    }
    (ls0001_._6) .rmax = 2.;
    if ((( (ls0001_._6) .h__ ) >= 0 ? ( (ls0001_._6) .h__ ) : -( (ls0001_._6) .h__ ))  <= (ls0001_._6) .hmin * 1.00001) {
	goto L660;
    }
    if ((ls0001_._6) .kflag <= -3) {
	goto L640;
    }
    iredo = 2;
    rhup = 0.;
    goto L540;
 

 
 
 
 
 
 
 
 

L520:
    rhup = 0.;
    if ((ls0001_._6) .l == (ls0001_._6) .lmax) {
	goto L540;
    }
    i__1 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	savf[i__] = acor[i__] - yh[i__ + (ls0001_._6) .lmax * yh_dim1];
    }
    dup = vnorm_(& (ls0001_._6) .n, &savf[1], &ewt[1]) / (ls0001_._6) .tesco[(ls0001_._6) .nq 
	    * 3 - 1];
    exup = 1. / (doublereal) ((ls0001_._6) .l + 1);
    rhup = 1. / (pow_dd(&dup, &exup) * 1.4 + 1.4e-6);
L540:
    exsm = 1. / (doublereal) (ls0001_._6) .l;
    rhsm = 1. / (pow_dd(&dsm, &exsm) * 1.2 + 1.2e-6);
    rhdn = 0.;
    if ((ls0001_._6) .nq == 1) {
	goto L560;
    }
    ddn = vnorm_(& (ls0001_._6) .n, &yh[(ls0001_._6) .l * yh_dim1 + 1], &ewt[1]) / 
	    (ls0001_._6) .tesco[(ls0001_._6) .nq * 3 - 3];
    exdn = 1. / (doublereal) (ls0001_._6) .nq;
    rhdn = 1. / (pow_dd(&ddn, &exdn) * 1.3 + 1.3e-6);
L560:
    if (rhsm >= rhup) {
	goto L570;
    }
    if (rhup > rhdn) {
	goto L590;
    }
    goto L580;
L570:
    if (rhsm < rhdn) {
	goto L580;
    }
    newq = (ls0001_._6) .nq;
    rh = rhsm;
    goto L620;
L580:
    newq = (ls0001_._6) .nq - 1;
    rh = rhdn;
    if ((ls0001_._6) .kflag < 0 && rh > 1.) {
	rh = 1.;
    }
    goto L620;
L590:
    newq = (ls0001_._6) .l;
    rh = rhup;
    if (rh < 1.1) {
	goto L610;
    }
    r__ = (ls0001_._6) .el[(ls0001_._6) .l - 1] / (doublereal) (ls0001_._6) .l;
    i__1 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	yh[i__ + (newq + 1) * yh_dim1] = acor[i__] * r__;
    }
    goto L630;
L610:
    (ls0001_._6) .ialth = 3;
    goto L700;
L620:
    if ((ls0001_._6) .kflag == 0 && rh < 1.1) {
	goto L610;
    }
    if ((ls0001_._6) .kflag <= -2) {
	rh = (( rh ) <= ( .2 ) ? ( rh ) : ( .2 )) ;
    }
 

 
 
 
 

    if (newq == (ls0001_._6) .nq) {
	goto L170;
    }
L630:
    (ls0001_._6) .nq = newq;
    (ls0001_._6) .l = (ls0001_._6) .nq + 1;
    iret = 2;
    goto L150;
 

 
 
 
 
 
 
 
 

L640:
    if ((ls0001_._6) .kflag == -10) {
	goto L660;
    }
    rh = .1;
 
    d__1 = (ls0001_._6) .hmin / (( (ls0001_._6) .h__ ) >= 0 ? ( (ls0001_._6) .h__ ) : -( (ls0001_._6) .h__ )) ;
    rh = (( d__1 ) >= ( rh ) ? ( d__1 ) : ( rh )) ;
    (ls0001_._6) .h__ *= rh;
    i__1 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	y[i__] = yh[i__ + yh_dim1];
    }
    (*f)(&neq[1], & (ls0001_._6) .tn, &y[1], &savf[1]);
    if (ierode_ .iero > 0) {
	return 0;
    }
    ++ (ls0001_._6) .nfe;
    i__1 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	yh[i__ + (yh_dim1 << 1)] = (ls0001_._6) .h__ * savf[i__];
    }
    (ls0001_._6) .ipup = (ls0001_._6) .miter;
    (ls0001_._6) .ialth = 5;
    if ((ls0001_._6) .nq == 1) {
	goto L200;
    }
    (ls0001_._6) .nq = 1;
    (ls0001_._6) .l = 2;
    iret = 3;
    goto L150;
 

 
 
 

L660:
    (ls0001_._6) .kflag = -1;
    goto L720;
L670:
    (ls0001_._6) .kflag = -2;
    goto L720;
L680:
    (ls0001_._6) .kflag = -3;
    goto L720;
L690:
    (ls0001_._6) .rmax = 10.;
L700:
    r__ = 1. / (ls0001_._6) .tesco[(ls0001_._6) .nqu * 3 - 2];
    i__1 = (ls0001_._6) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	acor[i__] *= r__;
    }
L720:
    (ls0001_._6) .hold = (ls0001_._6) .h__;
    (ls0001_._6) .jstart = 1;
    return 0;
 

}  

 
  int stodi_(neq, y, yh, nyh, yh1, ewt, savf, savr, acor, wm, 
	iwm, res, adda, jac, pjac, slvs)
integer *neq;
doublereal *y, *yh;
integer *nyh;
doublereal *yh1, *ewt, *savf, *savr, *acor, *wm;
integer *iwm;
  int (*res) (), (*adda) (), (*jac) (), (*pjac) (), (*slvs) ();
{
     
    integer yh_dim1, yh_offset, i__1, i__2;
    doublereal d__1, d__2, d__3;

     
    double pow_dd();

     
    static doublereal dcon, delp, eljh, rhdn, exdn;
    static integer ires, iret;
    static doublereal told, rhsm;
    static integer newq;
    static doublereal exsm, rhup, exup;
    static integer i__, j, m;
    extern   int cfode_();
    static doublereal r__;
    static integer iredo, i1;
    extern doublereal vnorm_();
    static integer jb;
    static doublereal rh, del, ddn;
    static integer ncf, kgo;
    static doublereal dsm, dup, el1h;

 
 

 
 
 
 
 
 
 
 
 

     
    --neq;
    --y;
    yh_dim1 = *nyh;
    yh_offset = yh_dim1 + 1;
    yh -= yh_offset;
    --yh1;
    --ewt;
    --savf;
    --savr;
    --acor;
    --wm;
    --iwm;

     
    (ls0001_._7) .kflag = 0;
    told = (ls0001_._7) .tn;
    ncf = 0;
    (ls0001_._7) .ierpj = 0;
    (ls0001_._7) .iersl = 0;
    (ls0001_._7) .jcur = 0;
    (ls0001_._7) .icf = 0;
    delp = 0.;
    if ((ls0001_._7) .jstart > 0) {
	goto L200;
    }
    if ((ls0001_._7) .jstart == -1) {
	goto L100;
    }
    if ((ls0001_._7) .jstart == -2) {
	goto L160;
    }
 

 
 
 
 
 
 
 

    (ls0001_._7) .lmax = (ls0001_._7) .maxord + 1;
    (ls0001_._7) .nq = 1;
    (ls0001_._7) .l = 2;
    (ls0001_._7) .ialth = 2;
    (ls0001_._7) .rmax = 1e4;
    (ls0001_._7) .rc = 0.;
    (ls0001_._7) .el0 = 1.;
    (ls0001_._7) .crate = .7;
    (ls0001_._7) .hold = (ls0001_._7) .h__;
    (ls0001_._7) .meo = (ls0001_._7) .meth;
    (ls0001_._7) .nslp = 0;
    (ls0001_._7) .ipup = (ls0001_._7) .miter;
    iret = 3;
    goto L140;
 

 
 
 
 
 
 
 
 
 
 
 
 

L100:
    (ls0001_._7) .ipup = (ls0001_._7) .miter;
    (ls0001_._7) .lmax = (ls0001_._7) .maxord + 1;
    if ((ls0001_._7) .ialth == 1) {
	(ls0001_._7) .ialth = 2;
    }
    if ((ls0001_._7) .meth == (ls0001_._7) .meo) {
	goto L110;
    }
    cfode_(& (ls0001_._7) .meth, (ls0001_._7) .elco, (ls0001_._7) .tesco);
    (ls0001_._7) .meo = (ls0001_._7) .meth;
    if ((ls0001_._7) .nq > (ls0001_._7) .maxord) {
	goto L120;
    }
    (ls0001_._7) .ialth = (ls0001_._7) .l;
    iret = 1;
    goto L150;
L110:
    if ((ls0001_._7) .nq <= (ls0001_._7) .maxord) {
	goto L160;
    }
L120:
    (ls0001_._7) .nq = (ls0001_._7) .maxord;
    (ls0001_._7) .l = (ls0001_._7) .lmax;
    i__1 = (ls0001_._7) .l;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	(ls0001_._7) .el[i__ - 1] = (ls0001_._7) .elco[i__ + (ls0001_._7) .nq * 13 - 14];
    }
    (ls0001_._7) .nqnyh = (ls0001_._7) .nq * *nyh;
    (ls0001_._7) .rc = (ls0001_._7) .rc * (ls0001_._7) .el[0] / (ls0001_._7) .el0;
    (ls0001_._7) .el0 = (ls0001_._7) .el[0];
    (ls0001_._7) .conit = .5 / (doublereal) ((ls0001_._7) .nq + 2);
    ddn = vnorm_(& (ls0001_._7) .n, &savf[1], &ewt[1]) / (ls0001_._7) .tesco[(ls0001_._7) .l *
	     3 - 3];
    exdn = 1. / (doublereal) (ls0001_._7) .l;
    rhdn = 1. / (pow_dd(&ddn, &exdn) * 1.3 + 1.3e-6);
    rh = (( rhdn ) <= ( 1. ) ? ( rhdn ) : ( 1. )) ;
    iredo = 3;
    if ((ls0001_._7) .h__ == (ls0001_._7) .hold) {
	goto L170;
    }
 
    d__2 = rh, d__3 = (d__1 = (ls0001_._7) .h__ / (ls0001_._7) .hold, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
    rh = (( d__2 ) <= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
    (ls0001_._7) .h__ = (ls0001_._7) .hold;
    goto L175;
 

 
 
 
 

L140:
    cfode_(& (ls0001_._7) .meth, (ls0001_._7) .elco, (ls0001_._7) .tesco);
L150:
    i__1 = (ls0001_._7) .l;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	(ls0001_._7) .el[i__ - 1] = (ls0001_._7) .elco[i__ + (ls0001_._7) .nq * 13 - 14];
    }
    (ls0001_._7) .nqnyh = (ls0001_._7) .nq * *nyh;
    (ls0001_._7) .rc = (ls0001_._7) .rc * (ls0001_._7) .el[0] / (ls0001_._7) .el0;
    (ls0001_._7) .el0 = (ls0001_._7) .el[0];
    (ls0001_._7) .conit = .5 / (doublereal) ((ls0001_._7) .nq + 2);
    switch ((int)iret) {
	case 1:  goto L160;
	case 2:  goto L170;
	case 3:  goto L200;
    }
 

 
 
 
 
 

L160:
    if ((ls0001_._7) .h__ == (ls0001_._7) .hold) {
	goto L200;
    }
    rh = (ls0001_._7) .h__ / (ls0001_._7) .hold;
    (ls0001_._7) .h__ = (ls0001_._7) .hold;
    iredo = 3;
    goto L175;
L170:
 
    d__1 = rh, d__2 = (ls0001_._7) .hmin / (( (ls0001_._7) .h__ ) >= 0 ? ( (ls0001_._7) .h__ ) : -( (ls0001_._7) .h__ )) ;
    rh = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
L175:
    rh = (( rh ) <= ( (ls0001_._7) .rmax ) ? ( rh ) : ( (ls0001_._7) .rmax )) ;
 
    d__1 = 1., d__2 = (( (ls0001_._7) .h__ ) >= 0 ? ( (ls0001_._7) .h__ ) : -( (ls0001_._7) .h__ ))  * (ls0001_._7) .hmxi * rh;
    rh /= (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    r__ = 1.;
    i__1 = (ls0001_._7) .l;
    for (j = 2; j <= i__1; ++j) {
	r__ *= rh;
	i__2 = (ls0001_._7) .n;
	for (i__ = 1; i__ <= i__2; ++i__) {
 
	    yh[i__ + j * yh_dim1] *= r__;
	}
    }
    (ls0001_._7) .h__ *= rh;
    (ls0001_._7) .rc *= rh;
    (ls0001_._7) .ialth = (ls0001_._7) .l;
    if (iredo == 0) {
	goto L690;
    }
 

 
 
 
 
 
 
 

L200:
    if ((d__1 = (ls0001_._7) .rc - 1., (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > (ls0001_._7) .ccmax) {
	(ls0001_._7) .ipup = (ls0001_._7) .miter;
    }
    if ((ls0001_._7) .nst >= (ls0001_._7) .nslp + (ls0001_._7) .msbp) {
	(ls0001_._7) .ipup = (ls0001_._7) .miter;
    }
    (ls0001_._7) .tn += (ls0001_._7) .h__;
    i1 = (ls0001_._7) .nqnyh + 1;
    i__2 = (ls0001_._7) .nq;
    for (jb = 1; jb <= i__2; ++jb) {
	i1 -= *nyh;
	i__1 = (ls0001_._7) .nqnyh;
	for (i__ = i1; i__ <= i__1; ++i__) {
 
	    yh1[i__] += yh1[i__ + *nyh];
	}
 
    }
 

 
 
 
 
 

L220:
    m = 0;
    i__2 = (ls0001_._7) .n;
    for (i__ = 1; i__ <= i__2; ++i__) {
	savf[i__] = yh[i__ + (yh_dim1 << 1)] / (ls0001_._7) .h__;
 
	y[i__] = yh[i__ + yh_dim1];
    }
    if ((ls0001_._7) .ipup <= 0) {
	goto L240;
    }
 

 
 
 
 

    (ls0001_._7) .ipup = 0;
    (ls0001_._7) .rc = 1.;
    (ls0001_._7) .nslp = (ls0001_._7) .nst;
    (ls0001_._7) .crate = .7;
    (*pjac)(&neq[1], &y[1], &yh[yh_offset], nyh, &ewt[1], &acor[1], &savr[1], 
	    &savf[1], &wm[1], &iwm[1], res, jac, adda);
    if (ierode_ .iero > 0) {
	return 0;
    }
    if ((ls0001_._7) .ierpj == 0) {
	goto L250;
    }
    ires = (ls0001_._7) .ierpj;
    switch ((int)ires) {
	case 1:  goto L430;
	case 2:  goto L435;
	case 3:  goto L430;
    }
 

L240:
    ires = 1;
    (*res)(&neq[1], & (ls0001_._7) .tn, &y[1], &savf[1], &savr[1], &ires);
    if (ierode_ .iero > 0) {
	return 0;
    }
    ++ (ls0001_._7) .nre;
    kgo = (( ires ) >= 0 ? ( ires ) : -( ires )) ;
    switch ((int)kgo) {
	case 1:  goto L250;
	case 2:  goto L435;
	case 3:  goto L430;
    }
L250:
    i__2 = (ls0001_._7) .n;
    for (i__ = 1; i__ <= i__2; ++i__) {
 
	acor[i__] = 0.;
    }
 

 
 
 

L270:
    (*slvs)(&wm[1], &iwm[1], &savr[1], &savf[1]);
    if ((ls0001_._7) .iersl < 0) {
	goto L430;
    }
    if ((ls0001_._7) .iersl > 0) {
	goto L410;
    }
    el1h = (ls0001_._7) .el[0] * (ls0001_._7) .h__;
    del = vnorm_(& (ls0001_._7) .n, &savr[1], &ewt[1]) * (( (ls0001_._7) .h__ ) >= 0 ? ( (ls0001_._7) .h__ ) : -( (ls0001_._7) .h__ )) ;
    i__2 = (ls0001_._7) .n;
    for (i__ = 1; i__ <= i__2; ++i__) {
	acor[i__] += savr[i__];
	savf[i__] = acor[i__] + yh[i__ + (yh_dim1 << 1)] / (ls0001_._7) .h__;
 
	y[i__] = yh[i__ + yh_dim1] + el1h * acor[i__];
    }
 

 
 
 

    if (m != 0) {
 
	d__1 = (ls0001_._7) .crate * .2, d__2 = del / delp;
	(ls0001_._7) .crate = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    }
 
    d__1 = 1., d__2 = (ls0001_._7) .crate * 1.5;
    dcon = del * (( d__1 ) <= ( d__2 ) ? ( d__1 ) : ( d__2 ))  / ((ls0001_._7) .tesco[(ls0001_._7) .nq * 3 - 2] * 
	    (ls0001_._7) .conit);
    if (dcon <= 1.) {
	goto L460;
    }
    ++m;
    if (m == (ls0001_._7) .maxcor) {
	goto L410;
    }
    if (m >= 2 && del > delp * 2.) {
	goto L410;
    }
    delp = del;
    ires = 1;
    (*res)(&neq[1], & (ls0001_._7) .tn, &y[1], &savf[1], &savr[1], &ires);
    if (ierode_ .iero > 0) {
	return 0;
    }
    ++ (ls0001_._7) .nre;
    kgo = (( ires ) >= 0 ? ( ires ) : -( ires )) ;
    switch ((int)kgo) {
	case 1:  goto L270;
	case 2:  goto L435;
	case 3:  goto L410;
    }
 

 
 
 
 
 
 
 

L410:
    (ls0001_._7) .icf = 1;
    if ((ls0001_._7) .jcur == 1) {
	goto L430;
    }
    (ls0001_._7) .ipup = (ls0001_._7) .miter;
    goto L220;
L430:
    (ls0001_._7) .icf = 2;
    ++ncf;
    (ls0001_._7) .rmax = 2.;
L435:
    (ls0001_._7) .tn = told;
    i1 = (ls0001_._7) .nqnyh + 1;
    i__2 = (ls0001_._7) .nq;
    for (jb = 1; jb <= i__2; ++jb) {
	i1 -= *nyh;
	i__1 = (ls0001_._7) .nqnyh;
	for (i__ = i1; i__ <= i__1; ++i__) {
 
	    yh1[i__] -= yh1[i__ + *nyh];
	}
 
    }
    if (ires == 2) {
	goto L680;
    }
    if ((ls0001_._7) .ierpj < 0 || (ls0001_._7) .iersl < 0) {
	goto L685;
    }
    if ((( (ls0001_._7) .h__ ) >= 0 ? ( (ls0001_._7) .h__ ) : -( (ls0001_._7) .h__ ))  <= (ls0001_._7) .hmin * 1.00001) {
	goto L450;
    }
    if (ncf == (ls0001_._7) .mxncf) {
	goto L450;
    }
    rh = .25;
    (ls0001_._7) .ipup = (ls0001_._7) .miter;
    iredo = 1;
    goto L170;
L450:
    if (ires == 3) {
	goto L680;
    }
    goto L670;
 

 
 
 
 
 

L460:
    (ls0001_._7) .jcur = 0;
    if (m == 0) {
	dsm = del / (ls0001_._7) .tesco[(ls0001_._7) .nq * 3 - 2];
    }
    if (m > 0) {
	dsm = (( (ls0001_._7) .h__ ) >= 0 ? ( (ls0001_._7) .h__ ) : -( (ls0001_._7) .h__ ))  * vnorm_(& (ls0001_._7) .n, &acor[1], &ewt[1]) / 
		(ls0001_._7) .tesco[(ls0001_._7) .nq * 3 - 2];
    }
    if (dsm > 1.) {
	goto L500;
    }
 

 
 
 
 
 
 
 
 
 

    (ls0001_._7) .kflag = 0;
    iredo = 0;
    ++ (ls0001_._7) .nst;
    (ls0001_._7) .hu = (ls0001_._7) .h__;
    (ls0001_._7) .nqu = (ls0001_._7) .nq;
    i__2 = (ls0001_._7) .l;
    for (j = 1; j <= i__2; ++j) {
	eljh = (ls0001_._7) .el[j - 1] * (ls0001_._7) .h__;
	i__1 = (ls0001_._7) .n;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    yh[i__ + j * yh_dim1] += eljh * acor[i__];
	}
    }
    -- (ls0001_._7) .ialth;
    if ((ls0001_._7) .ialth == 0) {
	goto L520;
    }
    if ((ls0001_._7) .ialth > 1) {
	goto L700;
    }
    if ((ls0001_._7) .l == (ls0001_._7) .lmax) {
	goto L700;
    }
    i__1 = (ls0001_._7) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	yh[i__ + (ls0001_._7) .lmax * yh_dim1] = acor[i__];
    }
    goto L700;
 

 
 
 
 
 
 

L500:
    -- (ls0001_._7) .kflag;
    (ls0001_._7) .tn = told;
    i1 = (ls0001_._7) .nqnyh + 1;
    i__1 = (ls0001_._7) .nq;
    for (jb = 1; jb <= i__1; ++jb) {
	i1 -= *nyh;
	i__2 = (ls0001_._7) .nqnyh;
	for (i__ = i1; i__ <= i__2; ++i__) {
 
	    yh1[i__] -= yh1[i__ + *nyh];
	}
 
    }
    (ls0001_._7) .rmax = 2.;
    if ((( (ls0001_._7) .h__ ) >= 0 ? ( (ls0001_._7) .h__ ) : -( (ls0001_._7) .h__ ))  <= (ls0001_._7) .hmin * 1.00001) {
	goto L660;
    }
    if ((ls0001_._7) .kflag <= -7) {
	goto L660;
    }
    iredo = 2;
    rhup = 0.;
    goto L540;
 

 
 
 
 
 
 
 
 

L520:
    rhup = 0.;
    if ((ls0001_._7) .l == (ls0001_._7) .lmax) {
	goto L540;
    }
    i__1 = (ls0001_._7) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	savf[i__] = acor[i__] - yh[i__ + (ls0001_._7) .lmax * yh_dim1];
    }
    dup = (( (ls0001_._7) .h__ ) >= 0 ? ( (ls0001_._7) .h__ ) : -( (ls0001_._7) .h__ ))  * vnorm_(& (ls0001_._7) .n, &savf[1], &ewt[1]) / 
	    (ls0001_._7) .tesco[(ls0001_._7) .nq * 3 - 1];
    exup = 1. / (doublereal) ((ls0001_._7) .l + 1);
    rhup = 1. / (pow_dd(&dup, &exup) * 1.4 + 1.4e-6);
L540:
    exsm = 1. / (doublereal) (ls0001_._7) .l;
    rhsm = 1. / (pow_dd(&dsm, &exsm) * 1.2 + 1.2e-6);
    rhdn = 0.;
    if ((ls0001_._7) .nq == 1) {
	goto L560;
    }
    ddn = vnorm_(& (ls0001_._7) .n, &yh[(ls0001_._7) .l * yh_dim1 + 1], &ewt[1]) / 
	    (ls0001_._7) .tesco[(ls0001_._7) .nq * 3 - 3];
    exdn = 1. / (doublereal) (ls0001_._7) .nq;
    rhdn = 1. / (pow_dd(&ddn, &exdn) * 1.3 + 1.3e-6);
L560:
    if (rhsm >= rhup) {
	goto L570;
    }
    if (rhup > rhdn) {
	goto L590;
    }
    goto L580;
L570:
    if (rhsm < rhdn) {
	goto L580;
    }
    newq = (ls0001_._7) .nq;
    rh = rhsm;
    goto L620;
L580:
    newq = (ls0001_._7) .nq - 1;
    rh = rhdn;
    if ((ls0001_._7) .kflag < 0 && rh > 1.) {
	rh = 1.;
    }
    goto L620;
L590:
    newq = (ls0001_._7) .l;
    rh = rhup;
    if (rh < 1.1) {
	goto L610;
    }
    r__ = (ls0001_._7) .h__ * (ls0001_._7) .el[(ls0001_._7) .l - 1] / (doublereal) 
	    (ls0001_._7) .l;
    i__1 = (ls0001_._7) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	yh[i__ + (newq + 1) * yh_dim1] = acor[i__] * r__;
    }
    goto L630;
L610:
    (ls0001_._7) .ialth = 3;
    goto L700;
L620:
    if ((ls0001_._7) .kflag == 0 && rh < 1.1) {
	goto L610;
    }
    if ((ls0001_._7) .kflag <= -2) {
	rh = (( rh ) <= ( .1 ) ? ( rh ) : ( .1 )) ;
    }
 

 
 
 
 

    if (newq == (ls0001_._7) .nq) {
	goto L170;
    }
L630:
    (ls0001_._7) .nq = newq;
    (ls0001_._7) .l = (ls0001_._7) .nq + 1;
    iret = 2;
    goto L150;
 

 
 
 

L660:
    (ls0001_._7) .kflag = -1;
    goto L720;
L670:
    (ls0001_._7) .kflag = -2;
    goto L720;
L680:
    (ls0001_._7) .kflag = -1 - ires;
    goto L720;
L685:
    (ls0001_._7) .kflag = -5;
    goto L720;
L690:
    (ls0001_._7) .rmax = 10.;
L700:
    r__ = (ls0001_._7) .h__ / (ls0001_._7) .tesco[(ls0001_._7) .nqu * 3 - 2];
    i__1 = (ls0001_._7) .n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	acor[i__] *= r__;
    }
L720:
    (ls0001_._7) .hold = (ls0001_._7) .h__;
    (ls0001_._7) .jstart = 1;
    return 0;
 

}  

 
  int svcar1_(rsav, isav)
doublereal *rsav, *isav;
{
     

    static integer lenrls = 219;
    static integer lenils = 39;
    static integer lenrla = 22;
    static integer lenila = 9;
    static integer lenrlr = 5;
    static integer lenilr = 9;

     
    integer i__1;

     
    static integer i__, l;
    extern   int dcopy_();

 
 
 
 

 
 
     
    --isav;
    --rsav;

     

    l = 1;
    dcopy_(&lenrls, (ls0001_._5) .rls, &c__1, &rsav[l], &c__1);
    l += lenrls;
    dcopy_(&lenrla, (lsa001_._3) .rlsa, &c__1, &rsav[l], &c__1);
    l += lenrla;
    dcopy_(&lenrlr, (lsr001_._4) .rlsr, &c__1, &rsav[l], &c__1);

    l = 0;
    i__1 = lenils;
    for (i__ = 1; i__ <= i__1; ++i__) {
	isav[l + i__] = (doublereal) (ls0001_._5) .ils[i__ - 1];
 
    }
    l += lenils;
    i__1 = lenila;
    for (i__ = 1; i__ <= i__1; ++i__) {
	isav[l + i__] = (doublereal) (lsa001_._3) .ilsa[i__ - 1];
 
    }
    l += lenila;
    i__1 = lenilr;
    for (i__ = 1; i__ <= i__1; ++i__) {
	isav[l + i__] = (doublereal) (lsr001_._4) .ilsr[i__ - 1];
 
    }
    l += lenilr;

    isav[l + 1] = (doublereal) (eh0001_._1) .ieh[0];
    isav[l + 2] = (doublereal) (eh0001_._1) .ieh[1];
    return 0;
}  

 
  int svcma1_(rsav, isav)
doublereal *rsav, *isav;
{
     

    static integer lenrls = 219;
    static integer lenils = 39;
    static integer lenrla = 22;
    static integer lenila = 9;

     
    integer i__1;

     
    static integer i__;

 
 
 
 

 
 
 
 
     
    --isav;
    --rsav;

     

    i__1 = lenrls;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	rsav[i__] = (ls0001_._5) .rls[i__ - 1];
    }
    i__1 = lenrla;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	rsav[lenrls + i__] = (lsa001_._3) .rlsa[i__ - 1];
    }

    i__1 = lenils;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	isav[i__] = (doublereal) (ls0001_._5) .ils[i__ - 1];
    }
    i__1 = lenila;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	isav[lenils + i__] = (doublereal) (lsa001_._3) .ilsa[i__ - 1];
    }

    isav[lenils + lenila + 1] = (doublereal) (eh0001_._1) .ieh[0];
    isav[lenils + lenila + 2] = (doublereal) (eh0001_._1) .ieh[1];
    return 0;
}  

 
  int svcom1_(rsav, isav)
doublereal *rsav, *isav;
{
     

    static integer lenrls = 219;
    static integer lenils = 39;

     
    integer i__1;

     
    static integer i__;

 
 
 

 
 
 
 
     
    --isav;
    --rsav;

     

    i__1 = lenrls;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	rsav[i__] = (ls0001_._5) .rls[i__ - 1];
    }
    i__1 = lenils;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	isav[i__] = (doublereal) (ls0001_._5) .ils[i__ - 1];
    }
    isav[lenils + 1] = (doublereal) (eh0001_._1) .ieh[0];
    isav[lenils + 2] = (doublereal) (eh0001_._1) .ieh[1];
    return 0;
}  

 
doublereal vmnorm_(n, v, w)
integer *n;
doublereal *v, *w;
{
     
    integer i__1;
    doublereal ret_val, d__1, d__2, d__3;

     
    static integer i__;
    static doublereal vm;

 
 
 

 
 
 
 
 
 

     
    --w;
    --v;

     
    vm = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
 
	d__2 = vm, d__3 = (d__1 = v[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) * w[i__];
	vm = (( d__2 ) >= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
    }
    ret_val = vm;
    return ret_val;
 

}  

 
doublereal vnorm_(n, v, w)
integer *n;
doublereal *v, *w;
{
     
    integer i__1;
    doublereal ret_val, d__1;

     
    double sqrt();

     
    static integer i__;
    static doublereal sum;

 
 
 

 
 
 
 
 

 
     
    --w;
    --v;

     
    sum = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
 
	d__1 = v[i__] * w[i__];
	sum += d__1 * d__1;
    }
    ret_val = sqrt(sum / (doublereal) (*n));
    return ret_val;
 

}  

 
  int xerrwv_(msg, nmes, nerr, iert, ni, i1, i2, nr, r1, r2, 
	msg_len)
char *msg;
integer *nmes, *nerr, *iert, *ni, *i1, *i2, *nr;
doublereal *r1, *r2;
ftnlen msg_len;
{
     
    static char fmt_10[] = "(1x,80a1)";
    static char fmt_20[] = "(6x,\002where i1 is : \002,i10)";
    static char fmt_30[] = "(6x,\002where i1 is : \002,i10,3x,\002 and i2 : \002,i10)";
    static char fmt_40[] = "(6x,\002where i1 is : \002,d21.13)";
    static char fmt_50[] = "(6x,\002where i1 is : \002,d21.13,3x,\002and r2 : \002,d21.13)";

     
    integer i__1;

     
    integer i_len(), s_wsfe(), do_fio(), e_wsfe();
      int s_stop();

     
    static integer i__, nch, lun;

     
    static cilist io___1759 = { 0, 0, 0, fmt_10, 0 };
    static cilist io___1761 = { 0, 0, 0, fmt_20, 0 };
    static cilist io___1762 = { 0, 0, 0, fmt_30, 0 };
    static cilist io___1763 = { 0, 0, 0, fmt_40, 0 };
    static cilist io___1764 = { 0, 0, 0, fmt_50, 0 };


 

 
 
 
 
 

 
 

 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 
 
 

 
 

 
 
 
 

 

    if ((eh0001_._2) .mesflg == 0) {
	goto L100;
    }
 

    lun = (eh0001_._2) .lunit;
 

 
    i__1 = i_len(msg, msg_len);
    nch = (( i__1 ) <= ( 80 ) ? ( i__1 ) : ( 80 )) ;
 

    io___1759.ciunit = lun;
    s_wsfe(&io___1759);
    i__1 = nch;
    for (i__ = 1; i__ <= i__1; ++i__) {
	do_fio(&c__1, msg + (i__ - 1), 1L);
    }
    e_wsfe();
    if (*ni == 1) {
	io___1761.ciunit = lun;
	s_wsfe(&io___1761);
	do_fio(&c__1, (char *)&(*i1), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    if (*ni == 2) {
	io___1762.ciunit = lun;
	s_wsfe(&io___1762);
	do_fio(&c__1, (char *)&(*i1), (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*i2), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    if (*nr == 1) {
	io___1763.ciunit = lun;
	s_wsfe(&io___1763);
	do_fio(&c__1, (char *)&(*r1), (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    if (*nr == 2) {
	io___1764.ciunit = lun;
	s_wsfe(&io___1764);
	do_fio(&c__1, (char *)&(*r1), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&(*r2), (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
 

L100:
    if (*iert != 2) {
	return 0;
    }
    s_stop("", 0L);
}  

 
  int xsetf_(mflag)
integer *mflag;
{

 
 
 

    if (*mflag == 0 || *mflag == 1) {
	(eh0001_._2) .mesflg = *mflag;
    }
    return 0;
 

}  

 
  int xsetun_(lun)
integer *lun;
{

 
 
 

    if (*lun > 0) {
	(eh0001_._2) .lunit = *lun;
    }
    return 0;
 

}  

 
  int ajour_(mode, n, nc, nr, h__, w, indi)
integer *mode, *n, *nc, *nr;
doublereal *h__, *w;
integer *indi;
{
     
    integer i__1, i__2;
    doublereal d__1;

     
    static doublereal a, b, c__;
    static integer i__, j, k;
    static doublereal u, v, h1;
    static integer nsaut, i1;
    static doublereal h2, ai, di;
    static integer ii, ij, ik, nh, nj, nk, nl, ko;
    static doublereal wi;
    static integer nw;
    static doublereal di1;
    static integer nh1, nr1, nr2, inc;
    static doublereal hij;
    static integer nii, nkk, nrr, inc1;


 
 
 
 
 
 

     
    --indi;
    --w;
    --h__;

     
    inc = indi[*nc];
    nr1 = *nr + 1;
    nr2 = *nr - 1;
    nrr = *n - *nr;
    nii = *n - inc;
    nkk = *nr - inc;
    if (*mode == -1) {
	goto L240;
    }

 

 
    nsaut = nii + 1;
    nh = inc * (*n + 1) - inc * (inc + 1) / 2;
    nw = *n;
    if (inc == *n) {
	goto L20;
    }
    i__1 = nii;
    for (i__ = 1; i__ <= i__1; ++i__) {
	w[nw] = h__[nh];
	--nw;
 
	--nh;
    }
L20:
    w[nr1] = h__[nh];
    --nh;
    if (inc == nr1) {
	goto L60;
    }
    i__1 = inc - nr1;
    for (i__ = 1; i__ <= i__1; ++i__) {
	nl = nii + i__ - 1;
	if (nl == 0) {
	    goto L35;
	}
	i__2 = nl;
	for (j = 1; j <= i__2; ++j) {
	    h__[nh + nsaut] = h__[nh];
 
	    --nh;
	}
L35:
	w[nw] = h__[nh];
	--nw;
	--nh;
 
	++nsaut;
    }
    i__1 = inc - nr1;
    for (j = 1; j <= i__1; ++j) {
	h__[nh + nsaut] = h__[nh];
 
	--nh;
    }

L60:
    --nw;
    nsaut = 1;
    if (*nr == 0) {
	goto L125;
    }
    if (inc == *n) {
	goto L80;
    }
    i__1 = nii;
    for (i__ = 1; i__ <= i__1; ++i__) {
	h__[nh + nsaut] = h__[nh];
 
	--nh;
    }
L80:
    if (*nr == 1) {
	goto L110;
    }
    i__1 = nr2;
    for (i__ = 1; i__ <= i__1; ++i__) {
	w[nw] = h__[nh];
	--nw;
	--nh;
	++nsaut;
	if (*n == nr1) {
	    goto L100;
	}
	i__2 = *n - nr1;
	for (j = 1; j <= i__2; ++j) {
	    h__[nh + nsaut] = h__[nh];
 
	    --nh;
	}
L100:
	;
    }
L110:
    w[nw] = h__[nh];
    --nh;
    ++nsaut;
    if (inc == nr1) {
	goto L125;
    }
    i__1 = inc - nr1;
    for (i__ = 1; i__ <= i__1; ++i__) {
	h__[nh + nsaut] = h__[nh];
 
	--nh;
    }
 
L125:
    if (*nr != 0) {
	goto L130;
    }
    if (w[1] > 0.) {
	goto L220;
    }
    *mode = -1;
    return 0;
L130:
    if (*nr == 1) {
	goto L160;
    }
    i__1 = *nr;
    for (i__ = 2; i__ <= i__1; ++i__) {
	ij = i__;
	i1 = i__ - 1;
	v = w[i__];
	i__2 = i1;
	for (j = 1; j <= i__2; ++j) {
	    v -= h__[ij] * w[j];
 
	    ij = ij + *nr - j;
	}
 
	w[i__] = v;
    }
L160:
    ij = 1;
    v = w[nr1];
    i__1 = *nr;
    for (i__ = 1; i__ <= i__1; ++i__) {
	wi = w[i__];
	hij = h__[ij];
 
	d__1 = wi;
	v -= d__1 * d__1 / hij;
	w[i__] = wi / hij;
 
	ij = ij + nr1 - i__;
    }
    if (v > 0.) {
	goto L180;
    }
    *mode = -1;
    return 0;
L180:
    w[nr1] = v;
 
    nh = *nr * (*nr + 1) / 2;
    nw = nr1;
    nsaut = nw;
    h__[nh + nsaut] = w[nw];
    --nw;
    --nsaut;
    if (*nr == 1) {
	goto L220;
    }
    i__1 = nr2;
    for (i__ = 1; i__ <= i__1; ++i__) {
	h__[nh + nsaut] = w[nw];
	--nw;
	--nsaut;
	i__2 = i__;
	for (j = 1; j <= i__2; ++j) {
	    h__[nh + nsaut] = h__[nh];
 
	    --nh;
	}
 
    }
L220:
    h__[nr1] = w[1];
    if (*n == nr1) {
	goto L233;
    }
    nh1 = *nr * (*n + 1) - *nr * (*nr + 1) / 2 + 1;
    nw = nr1;
    i__1 = *n - nr1;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	h__[nh1 + i__] = w[nw + i__];
    }
 
L233:
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	ii = indi[i__];
	if (ii <= *nr || ii >= inc) {
	    goto L235;
	}
	indi[i__] = ii + 1;
L235:
	;
    }
    ++(*nr);
    indi[*nc] = *nr;
    *mode = 0;
    return 0;

 

 
L240:
    i__1 = *nr;
    for (i__ = 1; i__ <= i__1; ++i__) {
	ik = i__;
	ij = inc;
	ii = 1;
	ko = (( ik ) <= ( inc ) ? ( ik ) : ( inc )) ;
	v = 0.;
	if (ko == 1) {
	    goto L252;
	}
	i__2 = ko - 1;
	for (k = 1; k <= i__2; ++k) {
	    nk = nr1 - k;
	    v += h__[ij] * h__[ik] * h__[ii];
	    ij = ij + nk - 1;
	    ii += nk;
 
	    ik = ik + nk - 1;
	}
L252:
	a = 1.;
	b = 1.;
	if (ko == i__) {
	    goto L253;
	}
	a = h__[ik];
L253:
	if (ko == inc) {
	    goto L260;
	}
	b = h__[ij];
L260:
	w[i__] = v + a * b * h__[ii];
    }
 
    if (inc == *nr) {
	goto L315;
    }
    inc1 = inc - 1;
    nh = inc1 * nr1 - inc1 * inc / 2 + 2;
    nh1 = nh + nkk;
    di = h__[nh - 1];
    i__1 = nkk;
    for (j = 1; j <= i__1; ++j) {
	di1 = h__[nh1];
	++nh1;
	a = h__[nh];
	ai = a * di;
 
	d__1 = a;
	c__ = d__1 * d__1 * di + di1;
	h__[nh] = c__;
	++nh;
	if (j == nkk) {
	    goto L315;
	}
	i__2 = nkk - j;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    h1 = h__[nh];
	    h2 = h__[nh1];
	    u = ai * h1 + h2 * di1;
	    h__[nh] = u / c__;
	    h__[nh1] = -h1 + a * h2;
	    ++nh;
	    ++nh1;
 
	}
	++nh;
	di = di * di1 / c__;
 
    }
 
L315:
    nh = inc + 1;
    nsaut = 1;
    nj = *nr - 2;
    if (inc == 1) {
	++nj;
    }
    if (*nr == 1) {
	goto L440;
    }
    i__1 = nr2;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i__2 = nj;
	for (j = 1; j <= i__2; ++j) {
	    h__[nh - nsaut] = h__[nh];
 
	    ++nh;
	}
	++nsaut;
	++nh;
	if (i__ == inc - 1) {
	    goto L430;
	}
	--nj;
	if (nj == 0) {
	    goto L440;
	}
L430:
	;
    }
 
L440:
    nh = *nr * nr2 / 2 + 1;
    nw = 1;
    nsaut = *nr;
    if (inc == 1) {
	goto L470;
    }
    i__1 = inc - 1;
    for (i__ = 1; i__ <= i__1; ++i__) {
	h__[nh] = w[nw];
	++nw;
	--nsaut;
	if (*n == *nr) {
	    goto L455;
	}
	i__2 = nrr;
	for (j = 1; j <= i__2; ++j) {
 
	    h__[nh + j] = h__[nh + nsaut + j];
	}
L455:
	nh = nh + nrr + 1;
 
    }
L470:
    ++nw;
    if (*nr == *n) {
	goto L485;
    }
    i__1 = nrr;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	w[*nr + i__] = h__[nh + nsaut + i__ - 1];
    }
    nsaut += nrr;
L485:
    if (inc == *nr) {
	goto L510;
    }
    i__1 = nkk;
    for (i__ = 1; i__ <= i__1; ++i__) {
	--nsaut;
	h__[nh] = w[nw];
	++nw;
	if (*nr == *n) {
	    goto L495;
	}
	i__2 = nrr;
	for (j = 1; j <= i__2; ++j) {
 
	    h__[nh + j] = h__[nh + nsaut + j];
	}
L495:
	nh = nh + nrr + 1;
 
    }
L510:
    h__[nh] = w[inc];
    if (*nr == *n) {
	goto L540;
    }
    i__1 = nrr;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	h__[nh + i__] = w[*nr + i__];
    }
 
L540:
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	ii = indi[i__];
	if (ii <= inc || ii > *nr) {
	    goto L550;
	}
	indi[i__] = ii - 1;
L550:
	;
    }
    indi[*nc] = *nr;
    --(*nr);
    *mode = 0;
    return 0;
}  

  int anfm01_(q, iq, r__, ir, x, w, n, m, ind, io)
doublereal *q;
integer *iq;
doublereal *r__;
integer *ir;
doublereal *x, *w;
integer *n, *m, *ind, *io;
{
     
    integer q_dim1, q_offset, r_dim1, r_offset, i__1;
    doublereal d__1;

     
    double pow_dd(), d_sign(), sqrt();

     
    extern doublereal ddot_(), dnrm2_();
    static integer i__, j, k;
    static doublereal s, t;
    extern   int dscal_(), dcopy_(), daxpy_();
    static integer m1;
    extern doublereal dlamch_();
    static integer nm;
    static doublereal rnorma, eps;

     
    q_dim1 = *iq;
    q_offset = q_dim1 + 1;
    q -= q_offset;
    r_dim1 = *ir;
    r_offset = r_dim1 + 1;
    r__ -= r_offset;
    --x;
    --w;

     
    m1 = *m - 1;
    nm = *n - m1;
    k = 0;
    if (*ind < 0) {
	k = 1;
	*ind = -(*ind);
    }
    if (*ind == 0) {
	i__1 = m1;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    r__[i__ + *m * r_dim1] = ddot_(n, &q[i__ * q_dim1 + 1], &c__1, &x[
		    1], &c__1);
	}
	i__1 = *n;
	for (i__ = *m; i__ <= i__1; ++i__) {
 
	    w[i__ - m1] = ddot_(n, &q[i__ * q_dim1 + 1], &c__1, &x[1], &c__1);
	}
    } else {
	dcopy_(&m1, &q[*ind + q_dim1], iq, &r__[*m * r_dim1 + 1], &c__1);
	dcopy_(&nm, &q[*ind + *m * q_dim1], iq, &w[1], &c__1);
    }
    if (k == 1) {
	i__1 = m1;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    r__[i__ + *m * r_dim1] = -r__[i__ + *m * r_dim1];
	}
	i__1 = nm;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    w[i__] = -w[i__];
	}
    }

 

 

    rnorma = dnrm2_(&nm, &w[1], &c__1);
    d__1 = dlamch_("p", 1L);
    eps = pow_dd(&d__1, &c_b5732);
    if (rnorma < eps) {
	*ind = -1;
	return 0;
    }

 

 

    *ind = 0;
    if (*m == *n) {
	r__[*m + *m * r_dim1] = w[1];
	return 0;
    }
    if (w[1] != 0.) {
	rnorma = d_sign(&rnorma, &w[1]);
    }
    w[1] = rnorma + w[1];
    s = sqrt(w[1] * rnorma);
    s = 1 / s;
    dscal_(&nm, &s, &w[1], &c__1);
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	t = -ddot_(&nm, &w[1], &c__1, &q[j + *m * q_dim1], iq);
	daxpy_(&nm, &t, &w[1], &c__1, &q[j + *m * q_dim1], iq);
 
    }
    r__[*m + *m * r_dim1] = -rnorma;
}  

  int anfm02_(q, iq, r__, ir, n, m, icol, io)
doublereal *q;
integer *iq;
doublereal *r__;
integer *ir, *n, *m, *icol, *io;
{
     
    integer q_dim1, q_offset, r_dim1, r_offset, i__1, i__2;
    doublereal d__1;

     
    double d_sign();

     
    extern doublereal dnrm2_();
    static doublereal a;
    static integer i__, j;
    static doublereal s, t;
    extern   int dscal_(), dcopy_();
    static integer i1;
    static doublereal s1, s2;
    extern doublereal dlamch_();
    static doublereal epsmch;

     
    q_dim1 = *iq;
    q_offset = q_dim1 + 1;
    q -= q_offset;
    r_dim1 = *ir;
    r_offset = r_dim1 + 1;
    r__ -= r_offset;

     
    if (*m == *icol) {
	return 0;
    }

 


    epsmch = dlamch_("p", 1L);
    i__1 = *m;
    for (i__ = *icol + 1; i__ <= i__1; ++i__) {
	if (r__[i__ + i__ * r_dim1] != 0.) {
	    i1 = i__ - 1;
	    a = dnrm2_(&c__2, &r__[i1 + i__ * r_dim1], &c__1);
	    if (a > epsmch) {
		if (r__[i1 + i__ * r_dim1] != 0.) {
		    a = d_sign(&a, &r__[i1 + i__ * r_dim1]);
		}
		d__1 = 1. / a;
		dscal_(&c__2, &d__1, &r__[i1 + i__ * r_dim1], &c__1);
		r__[i1 + i__ * r_dim1] += 1.;
		s1 = r__[i1 + i__ * r_dim1];
		s2 = r__[i__ + i__ * r_dim1];
		s = s2 / s1;
		i__2 = *n;
		for (j = 1; j <= i__2; ++j) {
		    t = -q[j + i1 * q_dim1] - q[j + i__ * q_dim1] * s;
		    q[j + i1 * q_dim1] += t * s1;
		    q[j + i__ * q_dim1] += t * s2;
 
		}
		i__2 = *m;
		for (j = i__ + 1; j <= i__2; ++j) {
		    t = -r__[i1 + j * r_dim1] - r__[i__ + j * r_dim1] * s;
		    r__[i1 + j * r_dim1] += t * s1;
		    r__[i__ + j * r_dim1] += t * s2;
 
		}
		r__[i1 + i__ * r_dim1] = -a;
	    }
	}
 
    }

 

    i__1 = *m;
    for (j = *icol + 1; j <= i__1; ++j) {
	i1 = j - 1;
	dcopy_(&i1, &r__[j * r_dim1 + 1], &c__1, &r__[i1 * r_dim1 + 1], &c__1)
		;
 
    }
}  

  int anfm03_(h__, ih, r__, ir, z__, iz, w, ipvt, n, m, ind, 
	modo, io)
doublereal *h__;
integer *ih;
doublereal *r__;
integer *ir;
doublereal *z__;
integer *iz;
doublereal *w;
integer *ipvt, *n, *m, *ind, *modo, *io;
{
     
    integer h_dim1, h_offset, r_dim1, r_offset, z_dim1, z_offset, i__1, i__2, 
	    i__3, i__4;
    doublereal d__1, d__2;

     
    double sqrt();

     
    static doublereal beta;
    static integer ndim;
    extern doublereal ddot_();
    static doublereal smax;
    extern doublereal zthz_();
    static integer i__, j, k, l;
    static doublereal s;
    static integer i1;
    static doublereal s1;
    static integer ii, ij, ik, kk, in;
    extern doublereal dlamch_();
    static integer nj, iibeta;
    static doublereal sk, epsmch;
    extern   int dipvtf_();
    static integer ik0, nm1;
    static doublereal rii, rik, eps, eps0;


 

 

 

 

 

 

 
 

 

 

 

 
 

 


 
 
 

 
 



 

 

 
 
 
 

 

     
    h_dim1 = *ih;
    h_offset = h_dim1 + 1;
    h__ -= h_offset;
    r_dim1 = *ir;
    r_offset = r_dim1 + 1;
    r__ -= r_offset;
    z_dim1 = *iz;
    z_offset = z_dim1 + 1;
    z__ -= z_offset;
    --w;
    --ipvt;

     
    epsmch = dlamch_("p", 1L);
    eps = epsmch * 10.;
    if (*ind == 0) {
	ndim = *m;
	i__1 = ndim;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    ipvt[i__] = i__;
	}
    } else {
	ndim = *m - *ind;
    }
    smax = 1.;
    nm1 = *m + 1;

 

    i__1 = ndim;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (*ind == 0) {
	    nj = nm1 - i__;
	    ii = i__;
	} else {
	    nj = nm1 - ipvt[i__];
	    ii = *ind + i__;
	}
	s = zthz_(&h__[h_offset], ih, &z__[z_offset], iz, n, &nj, &nj);
	if (*ind > 0) {
	    s -= ddot_(ind, &r__[i__ * r_dim1 + 1], &c__1, &r__[i__ * r_dim1 
		    + 1], &c__1);
	}
	if (*modo == 0 && s < -eps) {
	    *ind = *n;
	    return 0;
	}
	r__[ii + i__ * r_dim1] = s;
	s = (( s ) >= 0 ? ( s ) : -( s )) ;
	smax = (( s ) >= ( smax ) ? ( s ) : ( smax )) ;
 
    }

 

    if (ndim == 1) {
	ik = *ind + 1;
	s = r__[ik + r_dim1];
	if (s > eps) {
	    r__[ik + r_dim1] = sqrt(s);
	    *ind = 0;
	} else if (s < -eps) {
	    *ind = -1;
	} else {
	    *ind = 1;
	}
	return 0;
    }

 

    eps0 = epsmch * smax;
    eps = eps0 * *ind;
 
    d__1 = eps0 * ndim * 10, d__2 = sqrt(smax) * 1.2;
    beta = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    iibeta = 0;
    s1 = 0.;
    i__1 = ndim - 1;
    for (k = 1; k <= i__1; ++k) {
	eps += eps0;
	kk = k + 1;
	ik = k;
	if (*ind > 0) {
	    ik = k + *ind;
	}
	ik0 = ik - 1;
	sk = r__[ik + k * r_dim1];
	if (s1 <= beta) {
	    j = k;
	    s = sk;
	    i__2 = ndim;
	    for (i__ = kk; i__ <= i__2; ++i__) {
		ii = i__ + *ind;
		rii = r__[ii + i__ * r_dim1];
		if (rii > s) {
		    j = i__;
		    s = rii;
		}
 
	    }
	} else {
	    s = -1.;
	    iibeta = 1;
	}

 

 

	if (s > eps) {
	    dipvtf_(&r__[r_offset], ir, &ipvt[1], &ik0, &k, &j);
	    r__[*ind + j + j * r_dim1] = sk;
	    l = nm1 - ipvt[k];
	    sk = sqrt(s);
	    r__[ik + k * r_dim1] = sk;
	    i__2 = *n;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		s = ddot_(&i__, &h__[i__ + h_dim1], ih, &z__[l * z_dim1 + 1], 
			&c__1);
		if (i__ < *n) {
		    i1 = i__ + 1;
		    i__3 = *n - i__;
		    w[i__] = s + ddot_(&i__3, &h__[i1 + i__ * h_dim1], &c__1, 
			    &z__[i1 + l * z_dim1], &c__1);
		}
 
	    }
	    w[*n] = s;
	    s1 = 0.;
	    i__2 = ndim;
	    for (i__ = kk; i__ <= i__2; ++i__) {
		j = nm1 - ipvt[i__];
		s = ddot_(n, &z__[j * z_dim1 + 1], &c__1, &w[1], &c__1);
		if (ik0 > 0) {
		    s -= ddot_(&ik0, &r__[i__ * r_dim1 + 1], &c__1, &r__[k * 
			    r_dim1 + 1], &c__1);
		}
		rik = s / sk;
 
		d__1 = s1, d__2 = (( rik ) >= 0 ? ( rik ) : -( rik )) ;
		s1 = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
		r__[ik + i__ * r_dim1] = rik;
		ii = i__;
		if (*ind > 0) {
		    ii += *ind;
		}
		r__[ii + i__ * r_dim1] -= rik * rik;
 
	    }
	} else {

 


	    s = sk;
	    j = k;
	    i__2 = ndim;
	    for (i__ = kk; i__ <= i__2; ++i__) {
		ii = *ind + i__;
		rii = r__[ii + i__ * r_dim1];
		if (rii < s) {
		    j = i__;
		    s = rii;
		}
 
	    }

 

 

	    if (s < -eps) {
		if (*modo == 0) {
		    *ind = *n;
		    return 0;
		}
		dipvtf_(&r__[r_offset], ir, &ipvt[1], &ik0, &k, &j);
		r__[ik + k * r_dim1] = s;
		r__[*ind + j + j * r_dim1] = sk;
		*ind = -k;
		if (iibeta == 1) {
		    *ind -= *iz * 10;
		}
		return 0;
	    } else {

 

 

		i__2 = ndim - 1;
		for (j = k; j <= i__2; ++j) {
		    nj = nm1 - ipvt[j];
		    ij = j + *ind;
		    i__3 = *n;
		    for (i__ = 1; i__ <= i__3; ++i__) {
			s1 = ddot_(&i__, &h__[i__ + h_dim1], ih, &z__[nj * 
				z_dim1 + 1], &c__1);
			if (i__ < *n) {
			    i1 = i__ + 1;
			    i__4 = *n - i__;
			    w[i__] = s1 + ddot_(&i__4, &h__[i1 + i__ * h_dim1]
				    , &c__1, &z__[i1 + nj * z_dim1], &c__1);
			}
 
		    }
		    w[*n] = s1;
		    i__3 = ndim;
		    for (i__ = j + 1; i__ <= i__3; ++i__) {
			s1 = ddot_(n, &w[1], &c__1, &z__[(nm1 - ipvt[i__]) * 
				z_dim1 + 1], &c__1);
			if (ik0 > 0) {
			    s1 -= ddot_(&ik0, &r__[i__ * r_dim1 + 1], &c__1, &
				    r__[j * r_dim1 + 1], &c__1);
			}
			r__[ij + i__ * r_dim1] = s1;
			s1 = (( s1 ) >= 0 ? ( s1 ) : -( s1 )) ;
			if (s1 > s) {
			    s = s1;
			    l = i__;
			}
 
		    }

 

 


		    if (s > eps) {
			if (*modo == 0) {
			    *ind = *n;
			    return 0;
			}
			dipvtf_(&r__[r_offset], ir, &ipvt[1], &ik0, &j, &k);
			dipvtf_(&r__[r_offset], ir, &ipvt[1], &ik0, &l, &kk);
			r__[ik + kk * r_dim1] = r__[ij + l * r_dim1];
			*ind = -ndim - k;
			return 0;
		    }
 
		}

 

 

		*ind = ndim - k + 1;
		return 0;
	    }
	}
 
    }

 

    eps = eps0 + eps;
    in = ndim + *ind;
    s = r__[in + ndim * r_dim1];
    if (s > eps) {
	r__[in + ndim * r_dim1] = sqrt(s);
	*ind = 0;
    } else if (s < -eps) {
	*ind = -ndim;
    } else {
	*ind = 1;
    }
}  

  int anfm04_(q, iq, r__, ir, x, w, ipvt, n, m, ind, io)
doublereal *q;
integer *iq;
doublereal *r__;
integer *ir;
doublereal *x, *w;
integer *ipvt, *n, *m, *ind, *io;
{
     
    integer q_dim1, q_offset, r_dim1, r_offset, i__1, i__2;

     
    double pow_dd(), sqrt();

     
    extern doublereal ddot_(), dnrm2_();
    static doublereal a, b, c__;
    static integer i__, j, k;
    static doublereal s, t;
    extern   int dcopy_();
    static integer i1, j1, k1, k2, m1, m2, m3, n1, j2;
    extern doublereal dlamch_();
    static integer nm;
    static doublereal epsmch, rnorma;
    static integer nm1;
    static doublereal eps, eps0;

     
    q_dim1 = *iq;
    q_offset = q_dim1 + 1;
    q -= q_offset;
    r_dim1 = *ir;
    r_offset = r_dim1 + 1;
    r__ -= r_offset;
    --x;
    --w;
    --ipvt;

     
    epsmch = dlamch_("p", 1L);
    eps = pow_dd(&epsmch, &c_b5779);
    eps0 = pow_dd(&epsmch, &c_b5732);
    nm = *n - *m;
    nm1 = nm + 1;
    m1 = *m - 1;
    m2 = (nm << 1) + 1;
    m3 = m2 - *m;
    n1 = *n + 1;

 

    k = 0;
    if (*ind < 0) {
	k = 1;
	*ind = -(*ind);
    }
    if (*ind == 0) {
	i__1 = m1;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    r__[i__ + *m * r_dim1] = ddot_(n, &q[i__ * q_dim1 + 1], &c__1, &x[
		    1], &c__1);
	}
	i__1 = *n;
	for (i__ = *m; i__ <= i__1; ++i__) {
 
	    w[m3 + i__] = ddot_(n, &q[i__ * q_dim1 + 1], &c__1, &x[1], &c__1);
	}
    } else {
	dcopy_(&m1, &q[*ind + q_dim1], iq, &r__[*m * r_dim1 + 1], &c__1);
	dcopy_(&nm1, &q[*ind + *m * q_dim1], iq, &w[m2], &c__1);
    }
    if (k == 1) {
	i__1 = m1;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    r__[i__ + *m * r_dim1] = -r__[i__ + *m * r_dim1];
	}
	i__1 = m2 + nm;
	for (i__ = m2; i__ <= i__1; ++i__) {
 
	    w[i__] = -w[i__];
	}
    }

 

 

    rnorma = dnrm2_(&nm1, &w[m2], &c__1);
    if (rnorma < eps0) {
	*ind = -1;
	return 0;
    }

 

 

    *ind = 0;
    if (*m == *n) {
	r__[*m + *m * r_dim1] = w[m2];
	return 0;
    }
    k1 = n1 - ipvt[1];
    i__1 = nm1;
    for (i__ = 2; i__ <= i__1; ++i__) {
	i1 = i__ - 1;
	k2 = n1 - ipvt[i__];
	if (k2 < k1) {
	    j = k1;
	    k1 = k2;
	    k2 = j;
	}
	j1 = m3 + k1;
	j2 = m3 + k2;
	t = sqrt(w[j1] * w[j1] + w[j2] * w[j2]);
	if (t < eps) {
	    w[i1] = 1.;
	    w[nm + i1] = 0.;
	    i__2 = *n;
	    for (j = 1; j <= i__2; ++j) {
 
		q[j + k2 * q_dim1] = -q[j + k2 * q_dim1];
	    }
	} else {
	    c__ = w[j1] / t;
	    s = w[j2] / t;
	    w[j1] = t;
	    w[j2] = 0.;
	    i__2 = *n;
	    for (j = 1; j <= i__2; ++j) {
		a = q[j + k1 * q_dim1];
		b = q[j + k2 * q_dim1];
		q[j + k1 * q_dim1] = a * c__ + b * s;
		q[j + k2 * q_dim1] = a * s - b * c__;
 
	    }
	    w[i1] = c__;
	    w[nm + i1] = s;
	}
 
    }
    r__[*m + *m * r_dim1] = t;
}  

  int anfm05_(h__, ih, r__, ir, z__, iz, p, w, ipvt, x, n, m, 
	np, ind, modo, io)
doublereal *h__;
integer *ih;
doublereal *r__;
integer *ir;
doublereal *z__;
integer *iz;
doublereal *p, *w;
integer *ipvt;
doublereal *x;
integer *n, *m, *np, *ind, *modo, *io;
{
     
    integer h_dim1, h_offset, r_dim1, r_offset, z_dim1, z_offset, i__1, i__2;
    doublereal d__1;

     
    double sqrt();

     
    static doublereal c__;
    static integer i__, j, k, l;
    static doublereal s;
    extern   int anfm03_(), dcopy_(), dswap_();
    static integer i1, j1, k1, k2, m1, n1, m2, n2, m3;
    static doublereal s1;
    static integer ni;
    extern doublereal dlamch_();
    static doublereal pi, ri;
    static integer iibeta;
    static doublereal epsmch;
    extern   int dipvtf_();
    static integer ni1;
    static doublereal ri1;
    static integer nm2;
    static doublereal rj1, rij, pni;
     
    h_dim1 = *ih;
    h_offset = h_dim1 + 1;
    h__ -= h_offset;
    r_dim1 = *ir;
    r_offset = r_dim1 + 1;
    r__ -= r_offset;
    z_dim1 = *iz;
    z_offset = z_dim1 + 1;
    z__ -= z_offset;
    --p;
    --w;
    --ipvt;

     
    n1 = *n + 1;
    epsmch = dlamch_("p", 1L);
    if (*ind == n1) {
	--(*ind);
	return 0;
    }

 

    if (*ind > 0 && *ind <= n1) {
	m2 = n1 - *ind;
    } else {
	m2 = *m;
    }
    m1 = m2 + 1;

 

    n2 = n1 + 1;
    nm2 = n1 + m2;
    k1 = ipvt[1];
    if (m2 > 0) {
	w[1] = *x;
    } else {
	w[1] = 1.;
    }
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i1 = i__ + 1;
	ni1 = n1 + i1;
	k2 = ipvt[i1];
	ni = *n + i__;
	pni = p[ni];
	pi = p[i__];
	if (i__ < m2) {
	    l = i1;
	} else {
	    l = m2;
	}
	dcopy_(&l, &r__[i__ * r_dim1 + 1], &c__1, &w[n2], &c__1);
	if (k1 < k2) {
	    j = k1;
	    k1 = k2;
	    k2 = j;
	    i__2 = i1;
	    for (k = m1; k <= i__2; ++k) {
 
		w[n1 + k] = 0.;
	    }
	    if (i__ > *m) {
		w[ni1] = 1.;
	    }
	    dswap_(&i1, &w[1], &c__1, &w[n2], &c__1);
	    j = -1;
	} else {
	    j = 0;
	}
	if (i__ < m2) {
	    --l;
	}
	ipvt[i__] = k2;
	i__2 = l;
	for (k = 2; k <= i__2; ++k) {
 
	    r__[k - 1 + i__ * r_dim1] = w[k] * pni - w[n1 + k] * pi;
	}
	if (i__ < *m) {
	    if (i__ < m2) {
		r__[i1 + i__ * r_dim1] = w[1] * pni - w[n2] * pi;
	    } else {
		r__[m2 + i__ * r_dim1] = w[1] * pni - w[n2] * pi;
	    }
	    i__2 = l;
	    for (k = 1; k <= i__2; ++k) {
 
		w[k] = w[k] * pi + w[n1 + k] * pni;
	    }
	}
	if (i__ < m2) {
	    if (j == 0) {
		r__[i__ + i__ * r_dim1] = -pi * w[ni1];
		w[i1] = pni * w[ni1];
	    } else {
		r__[i__ + i__ * r_dim1] = pni * w[i1];
		w[i1] = pi * w[i1];
	    }
	} else if (i__ >= *m) {

 

	    r__[m2 + i__ * r_dim1] = w[1] * pni - w[n2] * pi;
	    i__2 = l;
	    for (k = 1; k <= i__2; ++k) {
 
		w[k] = w[k] * pi + w[n1 + k] * pni;
	    }
	}
 
    }

 

    m3 = m2 - 1;
    i__1 = m3;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i1 = i__ + 1;
	ri = r__[i__ + i__ * r_dim1];
	ri1 = r__[i1 + i__ * r_dim1];
	if ((( ri1 ) >= 0 ? ( ri1 ) : -( ri1 ))  > epsmch) {
	    s1 = sqrt(ri1 * ri1 + ri * ri);
	    s = ri1 / s1;
	    c__ = ri / s1;
	    r__[i__ + i__ * r_dim1] = s1;
	    i__2 = *n;
	    for (j = i1; j <= i__2; ++j) {
		if (j <= m3) {
		    j1 = j + 1;
		} else {
		    j1 = m2;
		}
		rj1 = r__[j1 + j * r_dim1];
		rij = r__[i__ + j * r_dim1];
		r__[i__ + j * r_dim1] = c__ * rij + s * rj1;
		r__[j1 + j * r_dim1] = s * rij - c__ * rj1;
 
	    }
	}
 
    }

 

    if (*ind > 0 && *ind <= n1) {
	j = m2;
	s = (d__1 = r__[m2 + m2 * r_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	i__1 = *n;
	for (i__ = m2 + 1; i__ <= i__1; ++i__) {
	    s1 = (d__1 = r__[m2 + i__ * r_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	    if (s1 > s) {
		s = s1;
		j = i__;
	    }
 
	}
	if (r__[m2 + j * r_dim1] < -epsmch) {
	    i__1 = *n;
	    for (i__ = m2; i__ <= i__1; ++i__) {
 
		r__[m2 + i__ * r_dim1] = -r__[m2 + i__ * r_dim1];
	    }
	}
	if (j != m2) {
	    dipvtf_(&r__[r_offset], ir, &ipvt[1], &m2, &m2, &j);
	}
    }
    if (*ind >= 0 && *ind <= n1) {
	if (*ind > 0 && r__[m2 + m2 * r_dim1] > epsmch) {
	    --(*ind);
	}
	return 0;
    }

 

    *ind = m3;
    anfm03_(&h__[h_offset], ih, &r__[m2 * r_dim1 + 1], ir, &z__[z_offset], iz,
	     &w[1], &ipvt[m2], np, n, ind, modo, io);

 

    if (*ind <= *iz * -10) {
	iibeta = 1;
	*ind += *iz * 10;
    } else {
	iibeta = 0;
    }
    k2 = *n - m3;
    if (*ind < 0 && *ind >= -k2) {
	*ind -= m3;
    } else if (*ind < -k2) {
	*ind -= m3 << 1;
    }
    if (iibeta == 1) {
	*ind -= *iz * 10;
    }
}  

 
  int anfm06_(z__, iz, r__, ir, w, ipvt, n, m, ind, io)
doublereal *z__;
integer *iz;
doublereal *r__;
integer *ir;
doublereal *w;
integer *ipvt, *n, *m, *ind, *io;
{
     
    integer z_dim1, z_offset, r_dim1, r_offset, i__1, i__2;
    doublereal d__1;

     
    double pow_dd(), sqrt();

     
    extern doublereal ddot_(), dnrm2_();
    static integer i__, j, k;
    static doublereal s;
    extern   int anrs01_(), dcopy_();
    static integer i1, k1, m1, n1, m2, m3;
    extern doublereal dlamch_();
    static integer nm;
    static doublereal epsmch;
    extern   int dipvtf_();
    static doublereal rnorma;
    static integer nm1;


 

 
 

 
 
 

 

 


 
 
 

 
 



 

 
 
 
 

 

     
    z_dim1 = *iz;
    z_offset = z_dim1 + 1;
    z__ -= z_offset;
    r_dim1 = *ir;
    r_offset = r_dim1 + 1;
    r__ -= r_offset;
    --w;
    --ipvt;

     
    d__1 = dlamch_("p", 1L);
    epsmch = pow_dd(&d__1, &c_b5779);
    n1 = *n + 1;
    m1 = *m + 1;
    m2 = m1 + 1;
    nm = n1 - *m;

 

 

    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i1 = i__ + 1;
	s = ddot_(&i__, &r__[i__ + r_dim1], ir, &z__[z_dim1 + 1], &c__1);
	if (i__ < *n) {
	    i__2 = *n - i__;
	    w[i__] = s + ddot_(&i__2, &r__[i1 + i__ * r_dim1], &c__1, &z__[i1 
		    + z_dim1], &c__1);
	}
 
    }
    w[*n] = s;

 

    s = ddot_(n, &w[1], &c__1, &z__[z_dim1 + 1], &c__1);

 

 


    k = 0;
    i__1 = nm + *m - 1;
    for (i__ = nm; i__ <= i__1; ++i__) {
	++k;
	dcopy_(&k, &r__[(i__ + 1) * r_dim1 + 1], &c__1, &r__[i__ * r_dim1 + 1]
		, &c__1);
 
    }

 

 

    i__1 = *m;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	r__[i__ + n1 * r_dim1] = ddot_(n, &w[1], &c__1, &z__[(m2 - i__) * 
		z_dim1 + 1], &c__1);
    }
    i__1 = *m;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	w[i__] = r__[ipvt[i__] + n1 * r_dim1];
    }
    ipvt[m1] = m1;

 

 

    m3 = *m - *ind;
    if (m3 > 0) {
	anrs01_(&r__[nm * r_dim1 + 1], ir, &m3, &w[1], &r__[n1 * r_dim1 + 1], 
		&c__1, io);
	s -= ddot_(&m3, &r__[n1 * r_dim1 + 1], &c__1, &r__[n1 * r_dim1 + 1], &
		c__1);
    }

 

 

    k1 = 0;
    if (*ind > 0) {
	k = *n - *ind;
	if (m3 > 0) {
	    i__1 = *ind;
	    for (i__ = 1; i__ <= i__1; ++i__) {
		j = m3 + i__;
		r__[j + n1 * r_dim1] = w[j] - ddot_(ind, &r__[(k + i__) * 
			r_dim1 + 1], &c__1, &r__[n1 * r_dim1 + 1], &c__1);
 
	    }
	} else {
	    dcopy_(ind, &w[1], &c__1, &r__[n1 * r_dim1 + 1], &c__1);
	}
	rnorma = dnrm2_(ind, &r__[m3 + 1 + n1 * r_dim1], &c__1);
	if (rnorma < epsmch) {
	    k1 = 1;
	}
    }

 
 

    if (s > epsmch) {
	s = sqrt(s);
	r__[m1 + n1 * r_dim1] = s;
	if (*ind > 0) {
	    if (k1 == 0) {
		i__1 = *m;
		for (i__ = m3 + 1; i__ <= i__1; ++i__) {
 
		    r__[i__ + n1 * r_dim1] /= s;
		}
		*ind += m1 << 1;
	    }
	    m2 = m3 + 1;
	    dipvtf_(&r__[nm * r_dim1 + 1], ir, &ipvt[1], &m3, &m1, &m2);
	    nm1 = n1 - *m;
	    r__[m2 + (m2 + *n - *m) * r_dim1] = s;
	    i__1 = *m;
	    for (i__ = m2; i__ <= i__1; ++i__) {
 
		r__[m2 + (i__ + nm1) * r_dim1] = r__[i__ + n1 * r_dim1];
	    }
	}
    } else {
	r__[m1 + n1 * r_dim1] = s;
	if (s < -epsmch) {
	    if (*ind == 0) {
		*ind = -m1;
	    } else {
		*ind = *ind + 1 + m1;
	    }
	} else {
	    if (*ind == 0) {
		*ind = 1;
	    } else if (k1 == 1) {
		++(*ind);
	    } else {
		*ind = *ind + 1 + m1;
	    }
	}
    }
    *m = m1;
}  

  int anrs01_(r__, ir, m, b, x, ind, io)
doublereal *r__;
integer *ir, *m;
doublereal *b, *x;
integer *ind, *io;
{
     
    integer r_dim1, r_offset, i__1;

     
    extern doublereal ddot_();
    static integer i__, j, k, i1, j1, j2, j3;


 

 

 

 

 

 

 

 

 

 

 

 

 


 
 

 

 
 

 

 

 

 

 


 

 

 
 
 

 

 

 
 

 
 
 

 
 


 
 
 
 

 
 
 
 
 
 

 
 
 

 

     
    r_dim1 = *ir;
    r_offset = r_dim1 + 1;
    r__ -= r_offset;
    --b;
    --x;

     
    if (*ind == 1) {
	j = 1;
    } else {
	j = *m;
    }
 
 
 
 
    x[j] = b[j] / r__[j + j * r_dim1];
    if (*m == 1) {
	return 0;
    }
    i__1 = *m;
    for (i__ = 2; i__ <= i__1; ++i__) {
	i1 = i__ - 1;
	if (*ind == 1) {
	    j = i__;
	    j1 = 1;
	    j2 = i__;
	    j3 = 1;
	    k = 1;
	} else {
	    j = *m - i1;
	    j1 = j;
	    j2 = j + 1;
	    j3 = j2;
	    k = *ir;
	}
 
 
 
 
	x[j] = (b[j] - ddot_(&i1, &r__[j1 + j2 * r_dim1], &k, &x[j3], &c__1)) 
		/ r__[j + j * r_dim1];
 
    }
 
}  

  int anrs02_(a, ia, b, w, ipvt, n, io)
doublereal *a;
integer *ia;
doublereal *b, *w;
integer *ipvt, *n, *io;
{
     
    integer a_dim1, a_offset, i__1;

     
    static integer i__;
    extern   int anrs01_();
    static integer ind;


 

 

 

 

 

 

 

 

 

 

 

 

 


 
 
 
 
 

 
 

 
 
 

 

 

 

 

 

 

 
 

 
 


 

 

 


 
 
 

 
 



 

     
    a_dim1 = *ia;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --b;
    --w;
    --ipvt;

     
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	w[i__] = b[ipvt[i__]];
    }
    ind = 1;
    anrs01_(&a[a_offset], ia, n, &w[1], &w[1], &ind, io);

 

    ind = 2;
    anrs01_(&a[a_offset], ia, n, &w[1], &w[1], &ind, io);

 

    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	b[ipvt[i__]] = w[i__];
    }
}  

  int aux003_(a, ia, x, b, q, iq, r__, ir, w, ire, ipvt, nmd, 
	mif, mdf, midf, n, m, ind, io)
doublereal *a;
integer *ia;
doublereal *x, *b, *q;
integer *iq;
doublereal *r__;
integer *ir;
doublereal *w;
integer *ire, *ipvt, *nmd, *mif, *mdf, *midf, *n, *m, *ind, *io;
{
     
    integer a_dim1, a_offset, q_dim1, q_offset, r_dim1, r_offset, i__1;
    doublereal d__1;

     
    double pow_dd();

     
    extern doublereal ddot_();
    static integer info, i__;
    static doublereal s;
    extern   int anfm01_();
    static integer m1, mf, ni;
    extern doublereal dlamch_();
    static doublereal eps;
     
    a_dim1 = *ia;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --x;
    --b;
    q_dim1 = *iq;
    q_offset = q_dim1 + 1;
    q -= q_offset;
    r_dim1 = *ir;
    r_offset = r_dim1 + 1;
    r__ -= r_offset;
    --w;
    --ire;
    --ipvt;

     
    d__1 = dlamch_("p", 1L);
    eps = pow_dd(&d__1, &c_b5779);
    mf = *midf + 1;
    info = 1;
    i__1 = *mif;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (ire[i__] != 1) {
	    s = ddot_(n, &a[i__ * a_dim1 + 1], &c__1, &x[1], &c__1) - b[i__];
	    if ((( s ) >= 0 ? ( s ) : -( s ))  < eps) {
		if (*m < *n && *ind == 0) {
		    m1 = *m + 1;
		    anfm01_(&q[q_offset], iq, &r__[r_offset], ir, &a[i__ * 
			    a_dim1 + 1], &w[mf], n, &m1, ind, io);
		    if (*ind < 0) {
			ire[i__] = 0;
			*ind = 0;
		    } else {
			*m = m1;
			ipvt[*m] = *nmd + i__;
			ire[i__] = 1;
		    }
		} else {
		    if (ire[i__] != 0) {
			info = 0;
		    }
		    ire[i__] = 0;
		}
	    } else if (s >= eps) {
		ire[i__] = 2;
		w[i__] = s;
	    } else {
		ire[i__] = -2;
		w[i__] = s;
	    }
	}
 
    }
    i__1 = *mdf;
    for (i__ = 1; i__ <= i__1; ++i__) {
	ni = *mif + i__;
	if (ire[ni] != 1) {
	    s = ddot_(n, &a[ni * a_dim1 + 1], &c__1, &x[1], &c__1) - b[ni];
	    if (s > eps) {
		ire[ni] = 2;
	    } else if (s < -eps || *ind == 1) {
		if (ire[ni] != 0) {
		    info = 0;
		}
		ire[ni] = 0;
	    } else {
		if (*m < *n) {
		    m1 = *m + 1;
		    anfm01_(&q[q_offset], iq, &r__[r_offset], ir, &a[ni * 
			    a_dim1 + 1], &w[mf], n, &m1, ind, io);
		    if (*ind < 0) {
			ire[ni] = 0;
			*ind = 0;
		    } else {
			*m = m1;
			ipvt[*m] = *nmd + ni;
			ire[ni] = 1;
		    }
		} else {
		    ire[ni] = 0;
		}
	    }
	    w[ni] = s;
	}
 
    }
    if (*ind == 1) {
	*ind = info;
    }
}  

  int auxo01_(c__, ic, ci, cs, b, x, w, ire, ira, n, md, ind, 
	fun, iv)
doublereal *c__;
integer *ic;
doublereal *ci, *cs, *b, *x, *w;
integer *ire, *ira, *n, *md, *ind;
doublereal *fun;
integer *iv;
{
     
    integer c_dim1, c_offset, i__1, i__2;
    doublereal d__1;

     
    double pow_dd(), sqrt();

     
    extern   int ddif_();
    extern doublereal ddot_();
    static integer i__, ia, ij, ni;
    extern doublereal dlamch_();
    static doublereal xi;
    static integer nw;
    static doublereal gigant, cii, csi, eps;
    static integer nwi;
    static doublereal gig1;
     
    c_dim1 = *ic;
    c_offset = c_dim1 + 1;
    c__ -= c_offset;
    --ci;
    --cs;
    --b;
    --x;
    --w;
    --ire;

     
    if (*ind == 1) {
	*fun = 0.;
    }
    *iv = 0;
    d__1 = dlamch_("p", 1L);
    eps = pow_dd(&d__1, &c_b5779);
    gigant = dlamch_("o", 1L);
    gig1 = sqrt(gigant);
    if (*ind == 1) {
	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    w[i__] = 0.;
	}
	nw = *n * 3;
    } else {
	nw = 0;
    }
    if (*ira > 0) {
	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    xi = x[i__];
	    ij = 0;
	    ia = (i__2 = ire[i__], (( i__2 ) >= 0 ? ( i__2 ) : -( i__2 )) );
	    if (*ira != 2) {
		cii = ci[i__];
		if (cii >= -gig1 && ia != 1) {
		    if (xi < cii - eps) {
			*iv = 1;
			if (*ind == 1) {
			    *fun = *fun + cii - xi;
			    ire[i__] = -2;
			    w[i__] = 1.;
			    ij = 1;
			} else {
			    return 0;
			}
		    } else if (*ind == 1) {
			ire[i__] = 0;
		    }
		}
	    }
	    if (*ira >= 2) {
		csi = cs[i__];
		if (csi <= gig1 && ij == 0 && ia != 1) {
		    if (xi > csi + eps) {
			*iv = 1;
			if (*ind == 1) {
			    *fun = *fun + xi - csi;
			    ire[i__] = 2;
			    w[i__] = -1.;
			} else {
			    return 0;
			}
		    } else if (*ind == 1) {
			ire[i__] = 0;
		    }
		}
	    }
 
	}
    }
    if (*md > 0) {
	i__1 = *md;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    nwi = nw + i__;
	    ni = *n + i__;
	    if (ire[ni] != 1) {
		w[nwi] = ddot_(n, &c__[i__ * c_dim1 + 1], &c__1, &x[1], &c__1)
			 - b[i__];
		if (w[nwi] > eps) {
		    *iv = 1;
		    if (*ind == 1) {
			ire[ni] = 2;
			ddif_(n, &c__[i__ * c_dim1 + 1], &c__1, &w[1], &c__1);
			*fun += w[nwi];
		    } else {
			return 0;
		    }
		} else if (*ind == 1) {
		    ire[ni] = 0;
		}
	    }
 
	}
    }
}  

  int bfgsd_(diag, n, nt, np, y, s, ys, condm, param, zero, 
	index)
doublereal *diag;
integer *n, *nt, *np;
doublereal *y, *s, *ys, *condm, *param, *zero;
integer *index;
{
     
    integer y_dim1, y_offset, s_dim1, s_offset, i__1;
    doublereal d__1, d__2;

     
    double log(), pow_dd();

     
    static doublereal dmin__, omeg, dmax__;
    static integer i__;
    static doublereal dd, dd1, ys1;
    static integer inp;
    static doublereal sds, sds1;

 
 
 
 


     
    --diag;
    --index;
    --ys;
    s_dim1 = *nt;
    s_offset = s_dim1 + 1;
    s -= s_offset;
    y_dim1 = *nt;
    y_offset = y_dim1 + 1;
    y -= y_offset;

     
    inp = index[*np];
    ys1 = (float)1. / ys[inp];
    sds = (float)0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
 
	d__1 = s[inp + i__ * s_dim1];
	sds += diag[i__] * (d__1 * d__1);
    }
    sds1 = (float)1. / sds;
    dmin__ = (float)1e25;
    dmax__ = (float)0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	dd1 = *param * diag[i__];
	dd1 += *zero * (float)1e3;
 
	d__1 = y[inp + i__ * y_dim1];
 
	d__2 = diag[i__] * s[inp + i__ * s_dim1];
	dd = diag[i__] + ys1 * (d__1 * d__1) - sds1 * (d__2 * d__2);
	diag[i__] = dd;
 
	if (dd <= dd1) {
	    diag[i__] = dd1;
	}
 
	if (diag[i__] < dmin__) {
	    dmin__ = diag[i__];
	}
	if (diag[i__] > dmax__) {
	    dmax__ = diag[i__];
	}
 
    }
 
    if (*condm * dmin__ / dmax__ > 1.) {
	return 0;
    }
    omeg = log(*condm) / log(dmax__ / dmin__);
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	diag[i__] = pow_dd(&diag[i__], &omeg);
    }
    return 0;
}  

  int calbx_(n, index, indic, nt, np, y, s, ys, z__, zs, x, 
	diag, bx)
integer *n, *index, *indic, *nt, *np;
doublereal *y, *s, *ys, *z__, *zs, *x, *diag, *bx;
{
     
    integer y_dim1, y_offset, s_dim1, s_offset, z_dim1, z_offset, i__1, i__2;

     
    static integer i__, j, ii;
    static doublereal yx, zx;


 
 
 


     
    --bx;
    --diag;
    --x;
    --indic;
    --zs;
    z_dim1 = *nt;
    z_offset = z_dim1 + 1;
    z__ -= z_offset;
    --ys;
    s_dim1 = *nt;
    s_offset = s_dim1 + 1;
    s -= s_offset;
    y_dim1 = *nt;
    y_offset = y_dim1 + 1;
    y -= y_offset;
    --index;

     
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (indic[i__] > 0) {
	    goto L100;
	}
	bx[i__] = diag[i__] * x[i__];
L100:
	;
    }

    i__1 = *np;
    for (i__ = 1; i__ <= i__1; ++i__) {
	ii = index[i__];

	yx = 0.;
	zx = 0.;
	i__2 = *n;
	for (j = 1; j <= i__2; ++j) {
	    if (indic[j] > 0) {
		goto L120;
	    }
	    yx += y[ii + j * y_dim1] * x[j];
	    zx += z__[ii + j * z_dim1] * x[j];
L120:
	    ;
	}

	i__2 = *n;
	for (j = 1; j <= i__2; ++j) {
	    if (indic[j] > 0) {
		goto L130;
	    }
	    bx[j] = bx[j] + yx * y[ii + j * y_dim1] / ys[ii] - zx * z__[ii + 
		    j * z_dim1] / zs[ii];
L130:
	    ;
	}
 
    }

    return 0;
}  

  int calmaj_(dh, n, g1, sig, w, ir, mk, epsmc, nfac)
doublereal *dh;
integer *n;
doublereal *g1, *sig, *w;
integer *ir, *mk;
doublereal *epsmc;
integer *nfac;
{
     
    integer i__1, i__2;

     
    static integer nfac1, n2fac, i__, j, k, nnfac;
    extern   int majour_();

 
     
    --w;
    --g1;
    --dh;

     
    if (*nfac == *n) {
	goto L50;
    }
    nfac1 = *nfac + 1;
    nnfac = *n - *nfac;
    n2fac = *nfac * nfac1 / 2;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	w[i__] = g1[i__] * *sig;
    }
    k = n2fac;
    if (*nfac == 0) {
	goto L25;
    }
    i__1 = *nfac;
    for (j = 1; j <= i__1; ++j) {
	i__2 = *n;
	for (i__ = nfac1; i__ <= i__2; ++i__) {
	    ++k;
	    dh[k] += g1[i__] * w[j];
 
	}
    }
L25:
    k = n2fac + *nfac * nnfac;
    i__2 = *n;
    for (j = nfac1; j <= i__2; ++j) {
	i__1 = *n;
	for (i__ = j; i__ <= i__1; ++i__) {
	    ++k;
	    dh[k] += g1[i__] * w[j];
 
	}
    }
L50:
    *ir = *nfac;
    if (*nfac == 0) {
	return 0;
    }
    majour_(&dh[1], &g1[1], &w[1], nfac, sig, ir, mk, epsmc);
    return 0;
}  

  int desr03_(z__, iz, r__, ir, g, w, d__, alfa, ipvt, n, ng, 
	ind, info, id, ro, io)
doublereal *z__;
integer *iz;
doublereal *r__;
integer *ir;
doublereal *g, *w, *d__, *alfa;
integer *ipvt, *n, *ng, *ind, *info, *id;
doublereal *ro;
integer *io;
{
     
    integer z_dim1, z_offset, r_dim1, r_offset, i__1, i__2;
    doublereal d__1;

     
    double pow_dd();

     
    extern doublereal ddot_(), dnrm2_();
    static integer i__, j, k, m;
    static doublereal s;
    extern   int dscal_();
    static doublereal x;
    extern   int anrs01_(), anrs02_(), dcopy_(), daxpy_();
    static integer m1, n1, m2, m3, mj;
    extern doublereal dlamch_();
    static doublereal eps;

     
    z_dim1 = *iz;
    z_offset = z_dim1 + 1;
    z__ -= z_offset;
    r_dim1 = *ir;
    r_offset = r_dim1 + 1;
    r__ -= r_offset;
    --g;
    --w;
    --d__;
    --ipvt;

     
    *id = 0;
    d__1 = dlamch_("p", 1L);
    eps = pow_dd(&d__1, &c_b5779);
    n1 = *n + 1;

 


    if (*ind >= 0) {
	*ro = 1.;
	if (*info == 0) {
	    i__1 = *n;
	    for (i__ = 1; i__ <= i__1; ++i__) {
 
		w[i__] = -ddot_(ng, &z__[(n1 - i__) * z_dim1 + 1], &c__1, &g[
			1], &c__1);
	    }
	} else if (*info == 1) {
	    x = -ddot_(ng, &z__[z_offset], &c__1, &g[1], &c__1);
	} else if (*info == 10) {
	    *info = 0;
	    i__1 = *n;
	    for (i__ = 1; i__ <= i__1; ++i__) {
 
		w[i__] = -w[i__];
	    }
	}
    }

 
 

    if (*ind == 0) {
	*id = 1;
	if (*info == 0) {
	    if (*alfa != 1.) {
		d__1 = 1. / *alfa;
		dscal_(n, &d__1, &w[1], &c__1);
	    }
	    anrs02_(&r__[r_offset], ir, &w[1], &d__[1], &ipvt[1], n, io);
	} else {
	    i__1 = *n - 1;
	    for (i__ = 1; i__ <= i__1; ++i__) {
 
		w[i__] = 0.;
	    }
	    w[*n] = -1.;
	    anrs01_(&r__[r_offset], ir, n, &w[1], &d__[1], &c__2, io);
	    s = x * d__[*n];
	    if (s > 0.) {
		i__1 = *n;
		for (i__ = 1; i__ <= i__1; ++i__) {
 
		    w[ipvt[i__]] = d__[i__];
		}
	    } else {
		i__1 = *n;
		for (i__ = 1; i__ <= i__1; ++i__) {
 
		    w[ipvt[i__]] = -d__[i__];
		}
		s = -s;
	    }
	    if (*alfa != 1.) {
		*ro = s / *alfa;
	    } else {
		*ro = s;
	    }
	}

 

 

    } else if (*ind < -1 && *ind >= -(*n)) {
	m = -(*ind);
	m2 = m - 1;
	i__1 = m2;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    d__[i__] = -r__[i__ + m * r_dim1];
	}
	anrs01_(&r__[r_offset], ir, &m2, &d__[1], &d__[1], &c__2, io);
    } else if (*ind < -(*n)) {
	m = -(*ind) - *n;
	m1 = m + 1;
	s = r__[m + m1 * r_dim1];
	i__1 = m - 1;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    w[i__] = s * r__[i__ + m * r_dim1] - r__[i__ + m1 * r_dim1];
	}
	if (m > 1) {
	    i__1 = m - 1;
	    anrs01_(&r__[r_offset], ir, &i__1, &w[1], &d__[1], &c__2, io);
	}
	d__[m] = -s;
	m2 = m;

 


    } else if (*ind > 0 && *ind < *n) {
	k = 0;
	m = *n - *ind;
	if (*info == 0) {
	    i__1 = *n;
	    for (i__ = 1; i__ <= i__1; ++i__) {
 
		w[*n + i__] = w[ipvt[i__]];
	    }
	}

 

	i__1 = m;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    d__[i__] = 0.;
	}
	i__1 = *ind;
	for (j = 1; j <= i__1; ++j) {
	    mj = m + j;
	    anrs01_(&r__[r_offset], ir, &m, &r__[mj * r_dim1 + 1], &w[1], &
		    c__2, io);
	    if (*info == 0) {
		s = ddot_(&m, &w[1], &c__1, &w[n1], &c__1) - w[mj + *n];
	    } else {
		i__ = 1;
		if (*n != ipvt[i__]) {
L5010:
		    ++i__;
		    if (*n != ipvt[i__]) {
			goto L5010;
		    }
		}
		if (i__ == mj) {
		    s = -x;
		} else if (i__ <= m) {
		    s = w[i__] * x;
		} else {
		    s = 0.;
		}
	    }
	    if ((( s ) >= 0 ? ( s ) : -( s ))  > eps) {
		k = 1;
		daxpy_(&m, &s, &w[1], &c__1, &d__[1], &c__1);
		d__[mj] = -s;
	    }
 
	}

 
 

	if (k == 0) {
	    *id = 1;
	    if (*info == 0) {
		i__1 = *n;
		for (i__ = 1; i__ <= i__1; ++i__) {
 
		    w[ipvt[i__]] = w[*n + i__];
		}
		if (*alfa != 1.) {
		    d__1 = 1 / *alfa;
		    dscal_(n, &d__1, &w[1], &c__1);
		}
		anrs02_(&r__[r_offset], ir, &w[1], &d__[1], &ipvt[1], &m, io);
		i__1 = *n;
		for (i__ = m + 1; i__ <= i__1; ++i__) {
 
		    w[ipvt[i__]] = 0.;
		}
	    } else {
		d__[m] = -1.;
		i__1 = m - 1;
		for (i__ = 1; i__ <= i__1; ++i__) {
 
		    d__[i__] = 0.;
		}
		anrs01_(&r__[r_offset], ir, &m, &d__[1], &d__[1], &c__2, io);
		i__1 = *n;
		for (i__ = m + 1; i__ <= i__1; ++i__) {
 
		    d__[i__] = 0.;
		}
	    }
	}
	if (k == 1 || *info == 1) {
	    i__1 = *n;
	    for (i__ = 1; i__ <= i__1; ++i__) {
 
		w[ipvt[i__]] = d__[i__];
	    }
	}

 

    } else if (*ind > *n && *ind <= *n << 1) {
	m = (*n << 1) - *ind;
	m3 = m + 1;
	if (m > 0) {
	    m1 = *n - m3;
	    i__1 = m;
	    for (i__ = 1; i__ <= i__1; ++i__) {
 
		d__[i__] = ddot_(&m1, &r__[i__ + m3 * r_dim1], ir, &r__[m3 + *
			n * r_dim1], &c__1) - r__[i__ + *n * r_dim1];
	    }
	    anrs01_(&r__[r_offset], ir, &m, &d__[1], &d__[1], &c__2, io);
	}
	i__1 = *n - 1;
	for (i__ = m3; i__ <= i__1; ++i__) {
 
	    d__[i__] = -r__[i__ + *n * r_dim1];
	}
	d__[*n] = 1.;
	if (x < 0.) {
	    i__1 = *n;
	    for (i__ = 1; i__ <= i__1; ++i__) {
 
		d__[i__] = -d__[i__];
	    }
	}
	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    w[ipvt[i__]] = d__[i__];
	}
    } else if (*ind > *n << 1) {
	m2 = *ind - (*n << 1);
	m = *n - m2;
	m3 = m + 1;
	i__1 = m - 1;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    d__[i__] = -ddot_(&m2, &r__[i__ + m3 * r_dim1], ir, &r__[m + m3 * 
		    r_dim1], ir);
	}
	s = dnrm2_(&m2, &r__[m + m3 * r_dim1], ir);
	d__[m] = -s * s;
	anrs01_(&r__[r_offset], ir, &m, &d__[1], &d__[1], &c__2, io);
	i__1 = *n;
	for (i__ = m3; i__ <= i__1; ++i__) {
 
	    d__[i__] = -r__[m + i__ * r_dim1];
	}
	s = d__[m] * x;
	if (s < 0.) {
	    i__1 = *n;
	    for (i__ = 1; i__ <= i__1; ++i__) {
 
		d__[i__] = -d__[i__];
	    }
	}
	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    w[ipvt[i__]] = d__[i__];
	}
    }
    if (*ind < 0) {

 

	if (*n > 1) {
	    i__1 = *n;
	    for (i__ = 1; i__ <= i__1; ++i__) {
 
		w[i__] = 0.;
	    }
	    if (*ind < -1) {
		i__1 = m2;
		for (i__ = 1; i__ <= i__1; ++i__) {
 
		    w[ipvt[i__]] = d__[i__];
		}
		w[ipvt[m2 + 1]] = 1.;
	    }
	}
    }

 

    if (*ind == *n && *info == 1) {
	if ((( x ) >= 0 ? ( x ) : -( x ))  > eps) {
	    i__1 = *ng;
	    for (i__ = 1; i__ <= i__1; ++i__) {
 
		d__[i__] = x * z__[i__ + z_dim1];
	    }
	} else {
	    *id = 1;
	    i__1 = *ng;
	    for (i__ = 1; i__ <= i__1; ++i__) {
 
		d__[i__] = 0.;
	    }
	}
    } else if (*ind == -1) {
	dcopy_(ng, &z__[(n1 - ipvt[1]) * z_dim1 + 1], &c__1, &d__[1], &c__1);
    } else {
	if (*ind == *n) {
	    s = dnrm2_(n, &w[1], &c__1);
	    if (s <= eps) {
		*id = 1;
		i__1 = *ng;
		for (i__ = 1; i__ <= i__1; ++i__) {
 
		    d__[i__] = 0.;
		}
	    }
	}
	if (*ind != *n || *ind == *n && *id == 0) {
	    i__1 = *ng;
	    for (i__ = 1; i__ <= i__1; ++i__) {
 
		i__2 = -(*iz);
		d__[i__] = ddot_(n, &z__[i__ + z_dim1], &i__2, &w[1], &c__1);
	    }
	}
    }

 

 

    if (*ind < 0 || *id == 1 && *info == 1 && *ind > 0) {
	s = ddot_(ng, &d__[1], &c__1, &g[1], &c__1);
	if (*id == 1) {
	    if (s > 0.) {
		i__2 = *ng;
		for (i__ = 1; i__ <= i__2; ++i__) {
 
		    d__[i__] = -d__[i__];
		}
	    } else {
		s = -s;
	    }
	    if (*alfa != 1.) {
		*ro = s / *alfa;
	    } else {
		*ro = s;
	    }
	} else if (s > 0.) {
	    i__2 = *ng;
	    for (i__ = 1; i__ <= i__2; ++i__) {
 
		d__[i__] = -d__[i__];
	    }
	}
    }
}  

  int dimp03_(x, w, ire, ipvt, s, i1, i2, i3, i4, i5, i6, i7, 
	i8, i9, ind, imp, io, iter)
doublereal *x, *w;
integer *ire, *ipvt;
doublereal *s;
integer *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *ind, *imp, *io, *iter;
{
     
    static char fmt_5000[] = "(//,10x,a,(t31,sp,e22.16))";
    static char fmt_4000[] = "(////,80(\002-\002),///,10x,\002ITERATION: \002,i4)";
    static char fmt_3000[] = "(///,10x,a,i4)";
    static char fmt_8000[] = "(//,10x,a,//,(10x,11(2x,i4),/))";
    static char fmt_1000[] = "(////,80(\002*\002),///,10x,a,2(/,10x,a),i5)";
    static char fmt_7000[] = "(/,10x,a,e22.16)";
    static char fmt_9000[] = "(/,10x,a,/,(10x,4(2x,e14.8)))";
    static char fmt_2000[] = "(////,80(\002*\002),///,10x,a,/,10x,a,i5)";
    static char fmt_6000[] = "(/,10x,a,t41,e22.16)";

     
    integer i__1;

     
      int s_copy();
    integer s_wsfe(), do_fio(), e_wsfe();

     
    extern doublereal dnrm0_();
    static integer i__, j;
    static doublereal s1;
    static integer ii2, ii7;
    static char car[30];

     
    static cilist io___1968 = { 0, 0, 0, fmt_5000, 0 };
    static cilist io___1970 = { 0, 0, 0, fmt_4000, 0 };
    static cilist io___1972 = { 0, 0, 0, fmt_3000, 0 };
    static cilist io___1973 = { 0, 0, 0, fmt_3000, 0 };
    static cilist io___1975 = { 0, 0, 0, fmt_8000, 0 };
    static cilist io___1976 = { 0, 0, 0, fmt_8000, 0 };
    static cilist io___1977 = { 0, 0, 0, fmt_3000, 0 };
    static cilist io___1978 = { 0, 0, 0, fmt_3000, 0 };
    static cilist io___1979 = { 0, 0, 0, fmt_3000, 0 };
    static cilist io___1980 = { 0, 0, 0, fmt_3000, 0 };
    static cilist io___1982 = { 0, 0, 0, fmt_3000, 0 };
    static cilist io___1983 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___1984 = { 0, 0, 0, fmt_3000, 0 };
    static cilist io___1985 = { 0, 0, 0, fmt_5000, 0 };
    static cilist io___1986 = { 0, 0, 0, fmt_7000, 0 };
    static cilist io___1987 = { 0, 0, 0, fmt_3000, 0 };
    static cilist io___1988 = { 0, 0, 0, fmt_8000, 0 };
    static cilist io___1989 = { 0, 0, 0, fmt_9000, 0 };
    static cilist io___1990 = { 0, 0, 0, fmt_7000, 0 };
    static cilist io___1991 = { 0, 6, 0, fmt_1000, 0 };
    static cilist io___1992 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___1993 = { 0, 0, 0, fmt_2000, 0 };
    static cilist io___1994 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___1995 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___1996 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___1997 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___1998 = { 0, 0, 0, fmt_3000, 0 };
    static cilist io___1999 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___2000 = { 0, 0, 0, fmt_3000, 0 };
    static cilist io___2002 = { 0, 0, 0, fmt_6000, 0 };
    static cilist io___2003 = { 0, 0, 0, fmt_6000, 0 };
    static cilist io___2004 = { 0, 0, 0, fmt_3000, 0 };
    static cilist io___2005 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___2006 = { 0, 0, 0, fmt_3000, 0 };

     
    --ipvt;
    --ire;
    --w;
    --x;

     
    s_copy(car, "END OF OPTR03.", 30L, 14L);
    if (*ind == 2) {
	if (*imp >= 10) {
	    io___1968.ciunit = *io;
	    s_wsfe(&io___1968);
	    do_fio(&c__1, "POINT COMPUTED: ", 16L);
	    i__1 = *i1;
	    for (i__ = 1; i__ <= i__1; ++i__) {
		do_fio(&c__1, (char *)&x[i__], (ftnlen)sizeof(doublereal));
	    }
	    e_wsfe();
	}
	io___1970.ciunit = *io;
	s_wsfe(&io___1970);
	do_fio(&c__1, (char *)&(*iter), (ftnlen)sizeof(integer));
	e_wsfe();
	if (*i2 != 0) {
	    ii2 = *i2;
	    if (*i2 > *i1) {
		ii2 = *i2 + *i9;
	    }
	    io___1972.ciunit = *io;
	    s_wsfe(&io___1972);
	    do_fio(&c__1, "DELETED CONSTRAINT: ", 20L);
	    do_fio(&c__1, (char *)&ii2, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	io___1973.ciunit = *io;
	s_wsfe(&io___1973);
	do_fio(&c__1, "NUMBER OF ACTIVE CONSTRAINTS:", 29L);
	do_fio(&c__1, (char *)&(*i3), (ftnlen)sizeof(integer));
	e_wsfe();
	i__1 = *i9;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    ipvt[i__] += *i1;
	}
	i__1 = *i3;
	for (i__ = *i9 + 1; i__ <= i__1; ++i__) {
	    j = ipvt[i__];
	    if (j > *i1) {
		ipvt[i__] = j + *i8;
	    }
 
	}
	io___1975.ciunit = *io;
	s_wsfe(&io___1975);
	do_fio(&c__1, "ACTIVE CONSTRAINTS:", 19L);
	i__1 = *i3;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    do_fio(&c__1, (char *)&ipvt[i__], (ftnlen)sizeof(integer));
	}
	e_wsfe();
	i__1 = *i9;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    ipvt[i__] -= *i1;
	}
	i__1 = *i3;
	for (i__ = *i9 + 1; i__ <= i__1; ++i__) {
	    j = ipvt[i__];
	    if (j > *i1) {
		ipvt[i__] = j - *i8;
	    }
 
	}
	if (*i4 > 0) {
	    io___1976.ciunit = *io;
	    s_wsfe(&io___1976);
	    do_fio(&c__1, "-CONSTRAINTS ASSOCIATED TO THE OBJECTIVE FUNCTION:"
		    , 50L);
	    i__1 = *i4;
	    for (i__ = 1; i__ <= i__1; ++i__) {
		do_fio(&c__1, (char *)&ire[i__], (ftnlen)sizeof(integer));
	    }
	    e_wsfe();
	}
	if (*i5 == 1) {
	    io___1977.ciunit = *io;
	    s_wsfe(&io___1977);
	    do_fio(&c__1, "A DESCENT DIRECTION OF POSITIVE CURVATURE HAS BEEN COMPUTED.", 60L);
	    e_wsfe();
	} else if (*i5 == 0) {
	    io___1978.ciunit = *io;
	    s_wsfe(&io___1978);
	    do_fio(&c__1, "A DESCENT DIRECTION OF NULL CURVATURE HAS BEEN COMPUTED.", 56L);
	    e_wsfe();
	} else {
	    io___1979.ciunit = *io;
	    s_wsfe(&io___1979);
	    do_fio(&c__1, "A DESCENT DIRECTION OF NEGATIVE CURVATURE HAS BEEN COMPUTED.", 60L);
	    e_wsfe();
	}
	if (*i6 != 0) {
	    io___1980.ciunit = *io;
	    s_wsfe(&io___1980);
	    do_fio(&c__1, "A DEGENERATED POINT HAS BEEN COMPUTED.", 38L);
	    e_wsfe();
	}
	if (*i7 != 0) {
	    ii7 = *i7;
	    if (ii7 > *i1) {
		ii7 += *i9;
	    }
	    io___1982.ciunit = *io;
	    s_wsfe(&io___1982);
	    do_fio(&c__1, "ADDED CONSTRAINT: ", 18L);
	    do_fio(&c__1, (char *)&ii7, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
    } else if (*ind == 0) {
	io___1983.ciunit = *io;
	s_wsfe(&io___1983);
	do_fio(&c__1, car, 30L);
	do_fio(&c__1, "A LOCAL MINIMUM HAS BEEN FOUND.", 31L);
	e_wsfe();
	if (*imp >= 8) {
	    io___1984.ciunit = *io;
	    s_wsfe(&io___1984);
	    do_fio(&c__1, "NUMBER OF ITERATIONS: ", 22L);
	    do_fio(&c__1, (char *)&(*iter), (ftnlen)sizeof(integer));
	    e_wsfe();
	    io___1985.ciunit = *io;
	    s_wsfe(&io___1985);
	    do_fio(&c__1, "POINT COMPUTED: ", 16L);
	    i__1 = *i1;
	    for (i__ = 1; i__ <= i__1; ++i__) {
		do_fio(&c__1, (char *)&x[i__], (ftnlen)sizeof(doublereal));
	    }
	    e_wsfe();
	    io___1986.ciunit = *io;
	    s_wsfe(&io___1986);
	    do_fio(&c__1, "NORM OF THE KUHN-TUCKER VECTOR: ", 32L);
	    do_fio(&c__1, (char *)&(*s), (ftnlen)sizeof(doublereal));
	    e_wsfe();
	    io___1987.ciunit = *io;
	    s_wsfe(&io___1987);
	    do_fio(&c__1, "NUMBER OF ACTIVE CONSTRAINTS:", 29L);
	    do_fio(&c__1, (char *)&(*i2), (ftnlen)sizeof(integer));
	    e_wsfe();
	    i__1 = *i9;
	    for (i__ = 1; i__ <= i__1; ++i__) {
 
		ipvt[i__] += *i1;
	    }
	    i__1 = *i2;
	    for (i__ = *i9 + 1; i__ <= i__1; ++i__) {
		j = ipvt[i__];
		if (j > *i1) {
		    ipvt[i__] = j + *i8;
		}
 
	    }
	    io___1988.ciunit = *io;
	    s_wsfe(&io___1988);
	    do_fio(&c__1, "ACTIVE CONSTRAINTS:", 19L);
	    i__1 = *i2;
	    for (i__ = 1; i__ <= i__1; ++i__) {
		do_fio(&c__1, (char *)&ipvt[i__], (ftnlen)sizeof(integer));
	    }
	    e_wsfe();
	    i__1 = *i9;
	    for (i__ = 1; i__ <= i__1; ++i__) {
 
		ipvt[i__] -= *i1;
	    }
	    i__1 = *i2;
	    for (i__ = *i9 + 1; i__ <= i__1; ++i__) {
		j = ipvt[i__];
		if (j > *i1) {
		    ipvt[i__] = j - *i8;
		}
 
	    }
	    io___1989.ciunit = *io;
	    s_wsfe(&io___1989);
	    do_fio(&c__1, "LAGRANGE MULTIPLIERS:", 21L);
	    i__1 = *i3 + *i2 - 1;
	    for (i__ = *i3; i__ <= i__1; ++i__) {
		do_fio(&c__1, (char *)&w[i__], (ftnlen)sizeof(doublereal));
	    }
	    e_wsfe();
	    if (*i4 != 0) {
		io___1990.ciunit = *io;
		s_wsfe(&io___1990);
		do_fio(&c__1, "OBJECTIVE FUNCTION: ", 20L);
		do_fio(&c__1, (char *)&w[*i4], (ftnlen)sizeof(doublereal));
		e_wsfe();
	    }
	}
    } else if (*ind == -4) {
	if (*io <= 0) {
	    s_wsfe(&io___1991);
	    do_fio(&c__1, car, 30L);
	    do_fio(&c__1, "INVALID NUMBER FOR THE OUTPUT CHANEL NUMBER.", 44L)
		    ;
	    e_wsfe();
	} else if (*imp >= 7) {
	    io___1992.ciunit = *io;
	    s_wsfe(&io___1992);
	    do_fio(&c__1, car, 30L);
	    do_fio(&c__1, "INVALID INTEGER VARIABLES.", 26L);
	    e_wsfe();
	}
    } else if (*ind == -24) {
	io___1993.ciunit = *io;
	s_wsfe(&io___1993);
	do_fio(&c__1, car, 30L);
	do_fio(&c__1, "CI(I).GT.CS(I) FOR I= ", 22L);
	do_fio(&c__1, (char *)&(*i1), (ftnlen)sizeof(integer));
	e_wsfe();
    } else if (*ind == -34) {
	io___1994.ciunit = *io;
	s_wsfe(&io___1994);
	do_fio(&c__1, car, 30L);
	do_fio(&c__1, "INCORRECT VECTOR IRE.", 21L);
	e_wsfe();
    } else if (*ind < -10) {
	io___1995.ciunit = *io;
	s_wsfe(&io___1995);
	do_fio(&c__1, car, 30L);
	do_fio(&c__1, "OPTR01 HAS NOT FOUND A FEASIBLE POINT.IND OF", 44L);
	do_fio(&c__1, "OPTR01=", 7L);
	i__1 = *ind + 10;
	do_fio(&c__1, (char *)&i__1, (ftnlen)sizeof(integer));
	e_wsfe();
    } else if (*ind == -1) {
	io___1996.ciunit = *io;
	s_wsfe(&io___1996);
	do_fio(&c__1, car, 30L);
	do_fio(&c__1, "PROBLEM UNBOUNDED FROM BELOW", 28L);
	e_wsfe();
    } else if (*ind == -2) {
	io___1997.ciunit = *io;
	s_wsfe(&io___1997);
	do_fio(&c__1, car, 30L);
	do_fio(&c__1, "A DEGENERATED POINT CYCLING HAS BEEN FOUND.", 43L);
	e_wsfe();
	if (*imp >= 8) {
	    io___1998.ciunit = *io;
	    s_wsfe(&io___1998);
	    do_fio(&c__1, "NUMBER OF ITERATIONS:", 21L);
	    do_fio(&c__1, (char *)&(*iter), (ftnlen)sizeof(integer));
	    e_wsfe();
	}
    } else if (*ind == -3) {
	io___1999.ciunit = *io;
	s_wsfe(&io___1999);
	do_fio(&c__1, car, 30L);
	do_fio(&c__1, "THE DISTANCE BETWEEN THE POINTS OF TWO CONSECUTIVE ITERATIONS ", 62L);
	do_fio(&c__1, "IS \"TOO BIG\".", 13L);
	e_wsfe();
	io___2000.ciunit = *io;
	s_wsfe(&io___2000);
	do_fio(&c__1, "PROBABLY PROBLEM UNBOUNDED FROM BELOW.", 38L);
	e_wsfe();
	if (*imp >= 8) {
	    s1 = dnrm0_(i1, &x[1], &c__1);
	    io___2002.ciunit = *io;
	    s_wsfe(&io___2002);
	    do_fio(&c__1, "-NORM OF THE POINT COMPUTED:", 28L);
	    do_fio(&c__1, (char *)&s1, (ftnlen)sizeof(doublereal));
	    e_wsfe();
	    io___2003.ciunit = *io;
	    s_wsfe(&io___2003);
	    do_fio(&c__1, "-OBJECTIVE FUNCTION:", 20L);
	    do_fio(&c__1, (char *)&w[*i2], (ftnlen)sizeof(doublereal));
	    e_wsfe();
	    io___2004.ciunit = *io;
	    s_wsfe(&io___2004);
	    do_fio(&c__1, "NUMBER OF ITERATIONS:", 21L);
	    do_fio(&c__1, (char *)&(*iter), (ftnlen)sizeof(integer));
	    e_wsfe();
	}
    } else if (*ind == 1) {
	io___2005.ciunit = *io;
	s_wsfe(&io___2005);
	do_fio(&c__1, car, 30L);
	do_fio(&c__1, "THE LIMIT FOR THE ITERATION NUMBER HAS BEEN PASSED.", 
		51L);
	e_wsfe();
	if (*imp >= 8) {
	    io___2006.ciunit = *io;
	    s_wsfe(&io___2006);
	    do_fio(&c__1, "NUMBER OF ITERATIONS:", 21L);
	    do_fio(&c__1, (char *)&(*iter), (ftnlen)sizeof(integer));
	    e_wsfe();
	}
    }
}  

  int dipvtf_(r__, ir, ipvt, n, i1, i2)
doublereal *r__;
integer *ir, *ipvt, *n, *i1, *i2;
{
     
    integer r_dim1, r_offset;

     
    static integer i__;
    extern   int dswap_();

     
    r_dim1 = *ir;
    r_offset = r_dim1 + 1;
    r__ -= r_offset;
    --ipvt;

     
    if (*i1 == *i2) {
	return 0;
    }
    dswap_(n, &r__[*i1 * r_dim1 + 1], &c__1, &r__[*i2 * r_dim1 + 1], &c__1);
    i__ = ipvt[*i1];
    ipvt[*i1] = ipvt[*i2];
    ipvt[*i2] = i__;
}  

doublereal dnrm0_(n, x, incx)
integer *n;
doublereal *x;
integer *incx;
{
     
    doublereal ret_val, d__1;

     
    static integer i__;
    extern integer idamax_();


 

 

     
    --x;

     
    ret_val = 0.;
    if (*n < 1) {
	return ret_val;
    }
    i__ = idamax_(n, &x[1], incx);
    ret_val = (d__1 = x[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
    return ret_val;
}  

  int dogleg_(n, r__, lr, diag, qtb, delta, x, wa1, wa2)
integer *n;
doublereal *r__;
integer *lr;
doublereal *diag, *qtb, *delta, *x, *wa1, *wa2;
{
     

    static doublereal one = 1.;
    static doublereal zero = 0.;

     
    integer i__1, i__2;
    doublereal d__1, d__2, d__3, d__4;

     
    double sqrt();

     
    static doublereal temp;
    static integer i__, j, k, l;
    static doublereal alpha, bnorm;
    extern doublereal enorm_();
    static doublereal gnorm, qnorm;
    static integer jj;
    extern doublereal dlamch_();
    static doublereal epsmch, sgnorm;
    static integer jp1;
    static doublereal sum;
     
    --wa2;
    --wa1;
    --x;
    --qtb;
    --diag;
    --r__;

     

 

    epsmch = dlamch_("p", 1L);

 

    jj = *n * (*n + 1) / 2 + 1;
    i__1 = *n;
    for (k = 1; k <= i__1; ++k) {
	j = *n - k + 1;
	jp1 = j + 1;
	jj -= k;
	l = jj + 1;
	sum = zero;
	if (*n < jp1) {
	    goto L20;
	}
	i__2 = *n;
	for (i__ = jp1; i__ <= i__2; ++i__) {
	    sum += r__[l] * x[i__];
	    ++l;
 
	}
L20:
	temp = r__[jj];
	if (temp != zero) {
	    goto L40;
	}
	l = j;
	i__2 = j;
	for (i__ = 1; i__ <= i__2; ++i__) {
 
	    d__2 = temp, d__3 = (d__1 = r__[l], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	    temp = (( d__2 ) >= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
	    l = l + *n - i__;
 
	}
	temp = epsmch * temp;
	if (temp == zero) {
	    temp = epsmch;
	}
L40:
	x[j] = (qtb[j] - sum) / temp;
 
    }

 

    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	wa1[j] = zero;
	wa2[j] = diag[j] * x[j];
 
    }
    qnorm = enorm_(n, &wa2[1]);
    if (qnorm <= *delta) {
	goto L140;
    }

 
 

    l = 1;
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	temp = qtb[j];
	i__2 = *n;
	for (i__ = j; i__ <= i__2; ++i__) {
	    wa1[i__] += r__[l] * temp;
	    ++l;
 
	}
	wa1[j] /= diag[j];
 
    }

 
 

    gnorm = enorm_(n, &wa1[1]);
    sgnorm = zero;
    alpha = *delta / qnorm;
    if (gnorm == zero) {
	goto L120;
    }

 
 

    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	wa1[j] = wa1[j] / gnorm / diag[j];
 
    }
    l = 1;
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	sum = zero;
	i__2 = *n;
	for (i__ = j; i__ <= i__2; ++i__) {
	    sum += r__[l] * wa1[i__];
	    ++l;
 
	}
	wa2[j] = sum;
 
    }
    temp = enorm_(n, &wa2[1]);
    sgnorm = gnorm / temp / temp;

 

    alpha = zero;
    if (sgnorm >= *delta) {
	goto L120;
    }

 
 
 

    bnorm = enorm_(n, &qtb[1]);
    temp = bnorm / gnorm * (bnorm / qnorm) * (sgnorm / *delta);
 
    d__1 = sgnorm / *delta;
 
    d__2 = temp - *delta / qnorm;
 
    d__3 = *delta / qnorm;
 
    d__4 = sgnorm / *delta;
    temp = temp - *delta / qnorm * (d__1 * d__1) + sqrt(d__2 * d__2 + (one - 
	    d__3 * d__3) * (one - d__4 * d__4));
 
    d__1 = sgnorm / *delta;
    alpha = *delta / qnorm * (one - d__1 * d__1) / temp;
L120:

 
 

    temp = (one - alpha) * (( sgnorm ) <= ( *delta ) ? ( sgnorm ) : ( *delta )) ;
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	x[j] = temp * wa1[j] + alpha * x[j];
 
    }
L140:
    return 0;

 

}  

doublereal enorm_(n, x)
integer *n;
doublereal *x;
{
     

    static doublereal one = 1.;
    static doublereal zero = 0.;
    static doublereal rdwarf = 3.834e-20;
    static doublereal rgiant = 1.304e19;

     
    integer i__1;
    doublereal ret_val, d__1;

     
    double sqrt();

     
    static doublereal xabs, x1max, x3max;
    static integer i__;
    static doublereal s1, s2, s3, agiant, floatn;
     
    --x;

     
    s1 = zero;
    s2 = zero;
    s3 = zero;
    x1max = zero;
    x3max = zero;
    floatn = (doublereal) (*n);
    agiant = rgiant / floatn;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	xabs = (d__1 = x[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	if (xabs > rdwarf && xabs < agiant) {
	    goto L70;
	}
	if (xabs <= rdwarf) {
	    goto L30;
	}

 

	if (xabs <= x1max) {
	    goto L10;
	}
 
	d__1 = x1max / xabs;
	s1 = one + s1 * (d__1 * d__1);
	x1max = xabs;
	goto L20;
L10:
 
	d__1 = xabs / x1max;
	s1 += d__1 * d__1;
L20:
	goto L60;
L30:

 

	if (xabs <= x3max) {
	    goto L40;
	}
 
	d__1 = x3max / xabs;
	s3 = one + s3 * (d__1 * d__1);
	x3max = xabs;
	goto L50;
L40:
	if (xabs != zero) {
 
	    d__1 = xabs / x3max;
	    s3 += d__1 * d__1;
	}
L50:
L60:
	goto L80;
L70:

 

 
	d__1 = xabs;
	s2 += d__1 * d__1;
L80:
 
	;
    }

 

    if (s1 == zero) {
	goto L100;
    }
    ret_val = x1max * sqrt(s1 + s2 / x1max / x1max);
    goto L130;
L100:
    if (s2 == zero) {
	goto L110;
    }
    if (s2 >= x3max) {
	ret_val = sqrt(s2 * (one + x3max / s2 * (x3max * s3)));
    }
    if (s2 < x3max) {
	ret_val = sqrt(x3max * (s2 / x3max + x3max * s3));
    }
    goto L120;
L110:
    ret_val = x3max * sqrt(s3);
L120:
L130:
    return ret_val;

 

}  

  int fdjac1_(fcn, n, x, fvec, fjac, ldfjac, iflag, ml, mu, 
	epsfcn, wa1, wa2)
  int (*fcn) ();
integer *n;
doublereal *x, *fvec, *fjac;
integer *ldfjac, *iflag, *ml, *mu;
doublereal *epsfcn, *wa1, *wa2;
{
     

    static doublereal zero = 0.;

     
    integer fjac_dim1, fjac_offset, i__1, i__2, i__3, i__4;
    doublereal d__1;

     
    double sqrt();

     
    static doublereal temp;
    static integer msum;
    static doublereal h__;
    static integer i__, j, k;
    extern doublereal dlamch_();
    static doublereal epsmch, eps;
     
    --wa2;
    --wa1;
    --fvec;
    --x;
    fjac_dim1 = *ldfjac;
    fjac_offset = fjac_dim1 + 1;
    fjac -= fjac_offset;

     

 

    epsmch = dlamch_("p", 1L);

    eps = sqrt(((( *epsfcn ) >= ( epsmch ) ? ( *epsfcn ) : ( epsmch )) ));
    msum = *ml + *mu + 1;
    if (msum < *n) {
	goto L40;
    }

 

    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	temp = x[j];
	h__ = eps * (( temp ) >= 0 ? ( temp ) : -( temp )) ;
	if (h__ == zero) {
	    h__ = eps;
	}
	x[j] = temp + h__;
	(*fcn)(n, &x[1], &wa1[1], iflag);
	if (*iflag < 0) {
	    goto L30;
	}
	x[j] = temp;
	i__2 = *n;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    fjac[i__ + j * fjac_dim1] = (wa1[i__] - fvec[i__]) / h__;
 
	}
 
    }
L30:
    goto L110;
L40:

 

    i__1 = msum;
    for (k = 1; k <= i__1; ++k) {
	i__2 = *n;
	i__3 = msum;
	for (j = k; i__3 < 0 ? j >= i__2 : j <= i__2; j += i__3) {
	    wa2[j] = x[j];
	    h__ = eps * (d__1 = wa2[j], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	    if (h__ == zero) {
		h__ = eps;
	    }
	    x[j] = wa2[j] + h__;
 
	}
	(*fcn)(n, &x[1], &wa1[1], iflag);
	if (*iflag < 0) {
	    goto L100;
	}
	i__3 = *n;
	i__2 = msum;
	for (j = k; i__2 < 0 ? j >= i__3 : j <= i__3; j += i__2) {
	    x[j] = wa2[j];
	    h__ = eps * (d__1 = wa2[j], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	    if (h__ == zero) {
		h__ = eps;
	    }
	    i__4 = *n;
	    for (i__ = 1; i__ <= i__4; ++i__) {
		fjac[i__ + j * fjac_dim1] = zero;
		if (i__ >= j - *mu && i__ <= j + *ml) {
		    fjac[i__ + j * fjac_dim1] = (wa1[i__] - fvec[i__]) / h__;
		}
 
	    }
 
	}
 
    }
L100:
L110:
    return 0;

 

}  

  int fdjac2_(fcn, m, n, x, fvec, fjac, ldfjac, iflag, epsfcn, 
	wa)
  int (*fcn) ();
integer *m, *n;
doublereal *x, *fvec, *fjac;
integer *ldfjac, *iflag;
doublereal *epsfcn, *wa;
{
     

    static doublereal zero = 0.;

     
    integer fjac_dim1, fjac_offset, i__1, i__2;

     
    double sqrt();

     
    static doublereal temp, h__;
    static integer i__, j;
    extern doublereal dlamch_();
    static doublereal epsmch, eps;
     
    --wa;
    --fvec;
    --x;
    fjac_dim1 = *ldfjac;
    fjac_offset = fjac_dim1 + 1;
    fjac -= fjac_offset;

     

 

    epsmch = dlamch_("p", 1L);

    eps = sqrt(((( *epsfcn ) >= ( epsmch ) ? ( *epsfcn ) : ( epsmch )) ));
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	temp = x[j];
	h__ = eps * (( temp ) >= 0 ? ( temp ) : -( temp )) ;
	if (h__ == zero) {
	    h__ = eps;
	}
	x[j] = temp + h__;
	(*fcn)(m, n, &x[1], &wa[1], iflag);
	if (*iflag < 0) {
	    goto L30;
	}
	x[j] = temp;
	i__2 = *m;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    fjac[i__ + j * fjac_dim1] = (wa[i__] - fvec[i__]) / h__;
 
	}
 
    }
L30:
    return 0;

 

}  

  int ffinf1_(n, nv, jc, xpr, p, s)
integer *n, *nv, *jc;
doublereal *xpr, *p, *s;
{
     
    integer i__1, i__2;

     
    static integer i__, j, k;
    static doublereal ps;
    static integer nij;


 
 

     
    --s;
    --xpr;
    --jc;
    --p;

     
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	ps = 0.;
	i__2 = *nv;
	for (k = 1; k <= i__2; ++k) {
	    j = jc[k] - 1;
	    if (j == 0) {
		goto L910;
	    }
	    nij = (j - 1) * *n + i__;
	    ps += xpr[k] * p[nij];
L910:
	    ;
	}
 
	s[i__] = ps;
    }
    return 0;
}  

  int fmulb1_(n, h__, x, hx, tabaux, nmisaj, prosca, izs, rzs, 
	dzs)
integer *n;
doublereal *h__, *x, *hx, *tabaux;
integer *nmisaj;
  int (*prosca) ();
integer *izs;
real *rzs;
doublereal *dzs;
{
     
    integer i__1;

     
    static integer ptnu, k;
    static doublereal gamma, sigma;
    static integer compt, is, iu;
    static doublereal mu, nu, sscalx, uscalx;
    static integer memsup;
    static doublereal eta;


 
 

 
     
    --tabaux;
    --hx;
    --x;
    --h__;
    --izs;
    --rzs;
    --dzs;

     
    memsup = (*n << 1) + 2;
 
    i__1 = *n;
    for (k = 1; k <= i__1; ++k) {
	hx[k] = x[k];
 
    }

    if (*nmisaj == 0) {
	return 0;
    } else {
	ptnu = 1;
	compt = 1;
    }

L2000:
    iu = ptnu + 1;
    is = iu + *n;
    i__1 = *n;
    for (k = 1; k <= i__1; ++k) {
	tabaux[k] = h__[iu + k];
 
    }
    (*prosca)(n, &tabaux[1], &x[1], &uscalx, &izs[1], &rzs[1], &dzs[1]);
    i__1 = *n;
    for (k = 1; k <= i__1; ++k) {
	tabaux[k] = h__[is + k];
 
    }
    (*prosca)(n, &tabaux[1], &x[1], &sscalx, &izs[1], &rzs[1], &dzs[1]);
    nu = h__[ptnu];
    eta = h__[ptnu + 1];
 
    if (compt == 1) {
	gamma = eta / nu;
	i__1 = *n;
	for (k = 1; k <= i__1; ++k) {
	    hx[k] = gamma * hx[k];
 
	}
	mu = sscalx / nu;
	sigma = -(sscalx * 2. / eta) + uscalx / nu;
    } else {
	mu = sscalx / eta;
	sigma = -(nu / eta + 1.) * mu + uscalx / eta;
    }

    i__1 = *n;
    for (k = 1; k <= i__1; ++k) {
	hx[k] = hx[k] - mu * h__[iu + k] - sigma * h__[is + k];
 
    }

    ++compt;
    if (compt <= *nmisaj) {
	ptnu += memsup;
	goto L2000;
    } else {
	return 0;
    }
}  

  int fmuls1_(n, h__, x, hx)
integer *n;
doublereal *h__, *x, *hx;
{
     
    integer i__1, i__2;

     
    static integer j, k, kj, km1;
    static doublereal aux1;


 
 
 
 
 


 
 

     
    --hx;
    --x;
    --h__;

     
    i__1 = *n;
    for (k = 1; k <= i__1; ++k) {
 
	aux1 = 0.;
 
	kj = k;
	km1 = k - 1;
 
	if (km1 >= 1) {
	    i__2 = km1;
	    for (j = 1; j <= i__2; ++j) {
		aux1 += h__[kj] * x[j];
		kj += *n - j;
 
	    }
	}
 
	i__2 = *n;
	for (j = k; j <= i__2; ++j) {
	    aux1 += h__[kj] * x[j];
	    ++kj;
 
	}

	hx[k] = aux1;
 
    }

    return 0;
}  

  int fpq2_(inout, x, cx, fx, gx, d__, sthalf, penlty, iyflag, 
	y, cy, fy, gy, z__, cz, fz, gz, gg, hh, s)
integer *inout;
doublereal *x, *cx, *fx, *gx, *d__, *sthalf, *penlty;
integer *iyflag;
doublereal *y, *cy, *fy, *gy, *z__, *cz, *fz, *gz, *gg, *hh, *s;
{
     

    static doublereal zero = 0.;
    static doublereal half = .5;

     
    doublereal d__1, d__2;

     
    double d_sign();

     
    static doublereal absd, p, denom, absgx, smallh, dlower, dupper, gyplus, 
	    xminsy;

    absd = (( *d__ ) >= 0 ? ( *d__ ) : -( *d__ )) ;
    if (*inout == 0) {
	*iyflag = 0;
	*gg = zero;
	*hh = zero;
	*s = absd;
	if (*sthalf <= zero || *sthalf >= half) {
	    *sthalf = half * half;
	}
	if (*penlty <= zero) {
	    *penlty = half + half;
	}
	if (*gx != zero) {
	    *d__ = -d_sign(&absd, gx);
	}
	*inout = 1;
    } else {
	if (*cz > zero || *fz >= *fx) {
	    *inout = 3;
	    if (*iyflag == 0) {
 
		*gg = (*gz - *gx) / *d__;
		*hh = *gg;
 
		*s = *sthalf / absd;
		*iyflag = 1;
	    } else {
		*hh = (*gz - *gy) / (*d__ - (*y - *x));
	    }
	    *y = *z__;
	    *cy = *cz;
	    *fy = *fz;
	    *gy = *gz;
	} else {
	    if (*gx * *gz < zero) {
		*inout = 2;
		*hh = *gg;
		if (*iyflag == 0) {
		    *gg = (*gz - *gx) / *d__;
		    *s = *sthalf / absd;
		    *iyflag = 1;
		} else {
		    *gg = (*gz - *gy) / (*d__ - (*y - *x));
		}
		*y = *x;
		*cy = *cx;
		*fy = *fx;
		*gy = *gx;
	    } else {
		*inout = 1;
		*gg = (*gz - *gx) / *d__;
	    }
	    *x = *z__;
	    *cx = *cz;
	    *fx = *fz;
	    *gx = *gz;
	}
	if (*iyflag == 0) {
	    dlower = *s;
	    dupper = absd / *sthalf;
	    xminsy = -(*d__);
	} else {
	    xminsy = *x - *y;
	    smallh = (( zero ) <= ( *hh ) ? ( zero ) : ( *hh ))  * xminsy * half;
	    gyplus = *gy + smallh;
 
	    p = *fx - *fy - gyplus * xminsy;
	    denom = (d__1 = gyplus + smallh - *gx, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
 
 
 
 
	    if (p >= zero) {
		goto L500;
	    }
	    p = zero;
	    *s = *sthalf / (( xminsy ) >= 0 ? ( xminsy ) : -( xminsy )) ;
L500:
	    dlower = *s * xminsy * xminsy;
	    dupper = (( xminsy ) >= 0 ? ( xminsy ) : -( xminsy ))  - dlower;
	    if ((( p ) >= 0 ? ( p ) : -( p ))  < denom * dupper) {
 
		d__1 = dlower, d__2 = p / denom;
		dupper = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	    }
	}
	absgx = (( *gx ) >= 0 ? ( *gx ) : -( *gx )) ;
	absd = dupper;
	if (absgx < *gg * dupper) {
 
	    d__1 = dlower, d__2 = absgx / *gg;
	    absd = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	}
	*d__ = -d_sign(&absd, &xminsy);
    }
    *z__ = *x + *d__;
    return 0;
}  

  int fprf2_(iflag, ntot, nv, io, zero, s2, eps, al, imp, u, 
	eta, mm1, jc, ic, r__, a, e, rr, xpr, y, w1, w2)
integer *iflag, *ntot, *nv, *io;
doublereal *zero, *s2, *eps, *al;
integer *imp;
doublereal *u, *eta;
integer *mm1, *jc, *ic;
doublereal *r__, *a, *e, *rr, *xpr, *y, *w1, *w2;
{
     
    static char fmt_1001[] = "(\002     epsilon smaller than a\002)";
    static char fmt_1003[] = "(\002 a=\002,10d10.3,/(6x,10d10.3))";
    static char fmt_1004[] = "(\002 (g,g)=\002,10d10.3,/(7x,10d10.3))";
    static char fmt_1005[] = "(\002 start with variables 1 and\002,i4)";
    static char fmt_1006[] = "(\002 (s,s)=\002,d12.4,\002  variable\002,i4,\002 (\002,d12.4,\002) coming in.\002)";
    static char fmt_1007[] = "(\002 variable\002,i4,\002 (\002,i4,\002) =\002,d11.3,\002 going out.\002,\002  feasible (s,s)=\002,d11.4,\002 unfeasible=\002,d11.4)";
    static char fmt_1008[] = "(\002 initial corral\002/(20i6))";
    static char fmt_1010[] = "(\002   epsilon =\002,d10.3)";
    static char fmt_1011[] = "(\002 x=\002,10d11.3,/(3x,10d11.3))";
    static char fmt_1012[] = "(\002 choleski,\002,10d11.3,/(10x,10d11.3))";
    static char fmt_1013[] = "(\002   duplicate variable \002,i3)";
    static char fmt_1014[] = "(\002 finished with\002,i3,\002 gradients\002,i3,\002 variables.\002/\002 (s,s)=\002,d11.4,\002 test=\002,d11.4/\002 cost of the extra constraint u=\002,d12.5)";
    static char fmt_1015[] = "(20i6)";
    static char fmt_1016[] = "(\002 fprf2 is apparently looping\002)";
    static char fmt_1018[] = "(//)";
    static char fmt_1019[] = "(\002 error from fprf2. old solution already optimal\002)";
    static char fmt_1020[] = "(\002 (s,s)=\002,d12.4,\002  u1=\002,d12.3,\002  variable 1 coming in.\002)";

     
    integer i__1, i__2, i__3, i__4;
    doublereal d__1;

     
    integer s_wsfe(), do_fio(), e_wsfe();
    double sqrt();

     
    static doublereal gama;
    static integer mek01, mekk, incr;
    static doublereal teta;
    static integer ment, i__, j, k, l, niter, itmax, j0, j1, j2, k1, k0;
    static doublereal u2, v1, v2;
    static integer k00, jj, jk, kk;
    static doublereal ps, sp;
    static integer nt1;
    static doublereal ps1;
    static integer nv1;
    static doublereal ps0, ps2, w1s, w2s;
    static integer mej, mek;
    static doublereal det, dmu, ps12, w12s;

     
    static cilist io___2097 = { 0, 0, 0, fmt_1003, 0 };
    static cilist io___2099 = { 0, 0, 0, fmt_1010, 0 };
    static cilist io___2101 = { 0, 0, 0, fmt_1004, 0 };
    static cilist io___2103 = { 0, 0, 0, fmt_1008, 0 };
    static cilist io___2109 = { 0, 0, 0, fmt_1019, 0 };
    static cilist io___2111 = { 0, 0, 0, fmt_1001, 0 };
    static cilist io___2113 = { 0, 0, 0, fmt_1005, 0 };
    static cilist io___2114 = { 0, 0, 0, fmt_1011, 0 };
    static cilist io___2115 = { 0, 0, 0, fmt_1016, 0 };
    static cilist io___2120 = { 0, 0, 0, fmt_1006, 0 };
    static cilist io___2121 = { 0, 0, 0, fmt_1020, 0 };
    static cilist io___2123 = { 0, 0, 0, fmt_1013, 0 };
    static cilist io___2128 = { 0, 0, 0, fmt_1012, 0 };
    static cilist io___2130 = { 0, 0, 0, fmt_1012, 0 };
    static cilist io___2138 = { 0, 0, 0, fmt_1007, 0 };
    static cilist io___2142 = { 0, 0, 0, fmt_1014, 0 };
    static cilist io___2143 = { 0, 0, 0, fmt_1015, 0 };
    static cilist io___2144 = { 0, 0, 0, fmt_1018, 0 };
     
    --al;
    --w2;
    --w1;
    --y;
    --xpr;
    --rr;
    --e;
    --a;
    --ic;
    --jc;
    --r__;
 
    niter = 0;
    nt1 = *ntot + 1;
    itmax = *ntot * 10;
    incr = 0;
    k00 = 1;
    w1s = 0.;
    w2s = 0.;
    w12s = 0.;
    gama = .99;
 
    if (*imp <= 7) {
	goto L100;
    }
    io___2097.ciunit = *io;
    s_wsfe(&io___2097);
    i__1 = nt1;
    for (j = 1; j <= i__1; ++j) {
	do_fio(&c__1, (char *)&a[j], (ftnlen)sizeof(doublereal));
    }
    e_wsfe();
    io___2099.ciunit = *io;
    s_wsfe(&io___2099);
    do_fio(&c__1, (char *)&(*eps), (ftnlen)sizeof(doublereal));
    e_wsfe();
    i__1 = nt1;
    for (j = 1; j <= i__1; ++j) {
	mej = (j - 1) * *mm1;
	io___2101.ciunit = *io;
	s_wsfe(&io___2101);
	i__2 = j;
	for (jj = 1; jj <= i__2; ++jj) {
	    do_fio(&c__1, (char *)&r__[mej + jj], (ftnlen)sizeof(doublereal));
	}
	e_wsfe();
 
    }

 

L100:
    if (*iflag != 3) {
	goto L110;
    }
    if (*imp > 6) {
	io___2103.ciunit = *io;
	s_wsfe(&io___2103);
	i__1 = *nv;
	for (k = 1; k <= i__1; ++k) {
	    do_fio(&c__1, (char *)&jc[k], (ftnlen)sizeof(integer));
	}
	e_wsfe();
    }
    j0 = nt1;
    ps = fprf2c_ .u1 * (a[nt1] - *eps);
    ment = (nt1 - 1) * *mm1;
    i__1 = *nv;
    for (k = 1; k <= i__1; ++k) {
	jk = ment + jc[k];
 
	ps += xpr[k] * r__[jk];
    }
    if (ps < *s2) {
	goto L107;
    }
    if (*imp > 0) {
	io___2109.ciunit = *io;
	s_wsfe(&io___2109);
	e_wsfe();
    }
    *iflag = 1;
    return 0;
L107:
    ++(*nv);
    ++ fprf2c_ .nc;
    jc[*nv] = j0;
    niter = 1;
    goto L300;
L110:
    if (*iflag <= 1) {
	goto L140;
    }
 
    i__1 = nt1;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	ic[i__] = 0;
    }
    i__1 = *nv;
    for (k = 1; k <= i__1; ++k) {
	jk = jc[k];
 
	ic[jk] = 1;
    }
    ic[nt1] = 1;
 
L140:
    jc[1] = 1;
    *nv = 2;
    fprf2c_ .nc = 1;
    jc[2] = 0;
    i__1 = nt1;
    for (j = 2; j <= i__1; ++j) {
	if (a[j] > *eps) {
	    goto L150;
	}
	jc[2] = j;
L150:
	;
    }
    if (jc[2] > 0) {
	goto L160;
    }
    if (*imp > 0) {
	io___2111.ciunit = *io;
	s_wsfe(&io___2111);
	e_wsfe();
    }
    *iflag = 2;
    return 0;
L160:
    j = jc[2];
    rr[1] = 1.;
    jj = (j - 1) * *mm1 + j;
    ps = r__[jj] + 1.;
    if (ps > 0.) {
	goto L170;
    }
    *iflag = 3;
    return 0;
L170:
    rr[2] = sqrt(ps);
    r__[2] = a[j];
    i__1 = nt1;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	xpr[i__] = 0.;
    }
    xpr[1] = *eps - a[j];
    xpr[2] = 1.;
    fprf2c_ .u1 = 0.;
    u2 = -r__[jj];
    if (*imp > 6) {
	io___2113.ciunit = *io;
	s_wsfe(&io___2113);
	do_fio(&c__1, (char *)&j, (ftnlen)sizeof(integer));
	e_wsfe();
    }

 

L200:
    ++niter;
    if (*imp > 6) {
	io___2114.ciunit = *io;
	s_wsfe(&io___2114);
	i__1 = *nv;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    do_fio(&c__1, (char *)&xpr[i__], (ftnlen)sizeof(doublereal));
	}
	e_wsfe();
    }
    if (niter <= itmax) {
	goto L205;
    }
    if (*imp > 0) {
	io___2115.ciunit = *io;
	s_wsfe(&io___2115);
	e_wsfe();
    }
    *iflag = 4;
    return 0;
L205:
    *s2 = -(*eps) * fprf2c_ .u1 - u2;
    if (*s2 <= *eta) {
	goto L900;
    }
    sp = gama * *s2;
 
 
    j0 = 0;
    i__1 = nt1;
    for (j = 2; j <= i__1; ++j) {
	ps = fprf2c_ .u1 * (a[j] - *eps);
	i__2 = *nv;
	for (k = 1; k <= i__2; ++k) {
	    jj = jc[k];
	    if (jj == 1) {
		goto L210;
	    }
	    j1 = (( j ) >= ( jj ) ? ( j ) : ( jj )) ;
	    j2 = (( j ) <= ( jj ) ? ( j ) : ( jj )) ;
	    jj = (j1 - 1) * *mm1 + j2;
	    ps += xpr[k] * r__[jj];
L210:
	    ;
	}
	y[j] = ps;
	if (*iflag != 2) {
	    goto L220;
	}
	if (ic[j] != 1) {
	    goto L220;
	}
	if (ps >= sp) {
	    goto L220;
	}
	j0 = j;
	sp = ps;
L220:
	;
    }
    if (j0 == 0) {
	goto L240;
    }
    if (sp >= gama * *s2) {
	goto L240;
    }
    ps1 = (d__1 = fprf2c_ .u1 * (*eps - a[j0]), (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
    i__1 = *nv;
    for (k = 1; k <= i__1; ++k) {
	j = jc[k];
	if (j == j0) {
	    goto L240;
	}
	if (j == 1) {
	    goto L230;
	}
	j1 = (( j0 ) >= ( j ) ? ( j0 ) : ( j )) ;
	j2 = (( j0 ) <= ( j ) ? ( j0 ) : ( j )) ;
	jj = (j1 - 1) * *mm1 + j2;
	ps1 += xpr[k] * (d__1 = fprf2c_ .u1 * (*eps * 2. - a[j]) + y[j] * 2. 
		- r__[jj], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
L230:
	;
    }
    ps1 = ps1 * 1e3 * *zero;
    if (sp > *s2 - ps1) {
	goto L240;
    }
    ic[j0] = 0;
    goto L280;
 
L240:
    j0 = 0;
    sp = gama * *s2;
    i__1 = nt1;
    for (j = 2; j <= i__1; ++j) {
	if (*iflag == 2 && ic[j] == 1) {
	    goto L260;
	}
	if (y[j] >= sp) {
	    goto L260;
	}
	sp = y[j];
	j0 = j;
L260:
	;
    }
    if (j0 == 0) {
	goto L290;
    }
    ps1 = (d__1 = fprf2c_ .u1 * (*eps - a[j0]), (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
    i__1 = *nv;
    for (k = 1; k <= i__1; ++k) {
	j = jc[k];
	if (j == 1) {
	    goto L270;
	}
	j1 = (( j0 ) >= ( j ) ? ( j0 ) : ( j )) ;
	j2 = (( j0 ) <= ( j ) ? ( j0 ) : ( j )) ;
	jj = (j1 - 1) * *mm1 + j2;
	ps1 += xpr[k] * (d__1 = fprf2c_ .u1 * (*eps * 2. - a[j]) + y[j] * 2. 
		- r__[jj], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
L270:
	;
    }
    ps1 = ps1 * 1e3 * *zero;
    if (sp > *s2 - ps1) {
	goto L290;
    }
L280:
    ++ fprf2c_ .nc;
    ++(*nv);
    jc[*nv] = j0;
    if (*imp > 6) {
	io___2120.ciunit = *io;
	s_wsfe(&io___2120);
	do_fio(&c__1, (char *)&(*s2), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&j0, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&sp, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    goto L300;
 
L290:
    if (fprf2c_ .u1 >= -((doublereal) (*nv)) * *zero) {
	goto L900;
    }
    j0 = 1;
    ++(*nv);
    jc[*nv] = 1;
    if (*imp > 6) {
	io___2121.ciunit = *io;
	s_wsfe(&io___2121);
	do_fio(&c__1, (char *)&(*s2), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)& fprf2c_ .u1, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }

 

L300:
    nv1 = *nv - 1;
    i__1 = nv1;
    for (k = 1; k <= i__1; ++k) {
	if (jc[k] != j0) {
	    goto L305;
	}
	if (*imp > 0) {
	    io___2123.ciunit = *io;
	    s_wsfe(&io___2123);
	    do_fio(&c__1, (char *)&j0, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	*iflag = 3;
	return 0;
L305:
	;
    }
    j = jc[1];
    j1 = (( j ) >= ( j0 ) ? ( j ) : ( j0 )) ;
    j2 = (( j ) <= ( j0 ) ? ( j ) : ( j0 )) ;
    jj = (j1 - 1) * *mm1 + j2;
    r__[*nv] = (a[j] * a[j0] + e[j] * e[j0] + r__[jj]) / rr[1];
    ps0 = r__[*nv] * r__[*nv];
    if (nv1 == 1) {
	goto L330;
    }
    i__1 = nv1;
    for (k = 2; k <= i__1; ++k) {
	j = jc[k];
	j1 = (( j ) >= ( j0 ) ? ( j ) : ( j0 )) ;
	j2 = (( j ) <= ( j0 ) ? ( j ) : ( j0 )) ;
	jj = (j1 - 1) * *mm1 + j2;
	ps = a[j] * a[j0] + e[j] * e[j0] + r__[jj];
	k1 = k - 1;
	i__2 = k1;
	for (kk = 1; kk <= i__2; ++kk) {
	    j1 = (kk - 1) * *mm1 + k;
	    j2 = (kk - 1) * *mm1 + *nv;
 
	    ps -= r__[j1] * r__[j2];
	}
	mek = k1 * *mm1 + *nv;
	r__[mek] = ps / rr[k];
 
	ps0 += r__[mek] * r__[mek];
    }
    jj = (j0 - 1) * *mm1 + j0;
    ps0 = a[j0] * a[j0] + e[j0] * e[j0] + r__[jj] - ps0;
    if (ps0 > 0.) {
	goto L330;
    }
    *iflag = 3;
    return 0;
L330:
    rr[*nv] = sqrt(ps0);
    if (niter <= 1) {
	goto L400;
    }
    incr = 1;
    k00 = *nv;

 

L400:
    k = k00;
    if (k > *nv) {
	goto L430;
    }
    if (*imp <= 7) {
	goto L410;
    }
    io___2128.ciunit = *io;
    s_wsfe(&io___2128);
    do_fio(&c__1, (char *)&rr[1], (ftnlen)sizeof(doublereal));
    e_wsfe();
    if (*nv == 1) {
	goto L410;
    }
    i__1 = *nv;
    for (l = 2; l <= i__1; ++l) {
	k1 = l - 1;
	io___2130.ciunit = *io;
	s_wsfe(&io___2130);
	i__2 = k1;
	for (kk = 1; kk <= i__2; ++kk) {
	    do_fio(&c__1, (char *)&r__[(kk - 1) * *mm1 + l], (ftnlen)sizeof(
		    doublereal));
	}
	do_fio(&c__1, (char *)&rr[l], (ftnlen)sizeof(doublereal));
	e_wsfe();
 
    }
L410:
    j = jc[k];
    ps1 = a[j];
    ps2 = e[j];
    if (k == 1) {
	goto L420;
    }
    k1 = k - 1;
    i__1 = k1;
    for (kk = 1; kk <= i__1; ++kk) {
	jj = (kk - 1) * *mm1 + k;
	ps0 = r__[jj];
	ps1 -= ps0 * w1[kk];
 
	ps2 -= ps0 * w2[kk];
    }
L420:
    ps0 = rr[k];
    w1[k] = ps1 / ps0;
    w2[k] = ps2 / ps0;
    ++k;
    if (k <= *nv) {
	goto L410;
    }
 
L430:
    k = 1;
    if (incr == 1) {
	k = *nv;
    }
L440:
    w1s += w1[k] * w1[k];
    w2s += w2[k] * w2[k];
    w12s += w1[k] * w2[k];
    ++k;
    if (k <= *nv) {
	goto L440;
    }
    det = w1s * w2s - w12s * w12s;
    ps2 = w2s * *eps - w12s;
    ps1 = w1s - w12s * *eps;
 
    v1 = ps2 / det;
    v2 = ps1 / det;
 
    fprf2c_ .u1 = *eps - v1;
    u2 = 1. - v2;
    if (*nv == fprf2c_ .nc + 1) {
	fprf2c_ .u1 = 0.;
    }
 
    y[*nv] = (v1 * w1[*nv] + v2 * w2[*nv]) / rr[*nv];
    if (*nv == 1) {
	goto L500;
    }
    i__1 = *nv;
    for (l = 2; l <= i__1; ++l) {
	k = *nv - l + 1;
	k1 = k + 1;
	ps = v1 * w1[k] + v2 * w2[k];
	mek = (k - 1) * *mm1;
	i__2 = *nv;
	for (kk = k1; kk <= i__2; ++kk) {
	    mej = mek + kk;
 
	    ps -= r__[mej] * y[kk];
	}
 
	y[k] = ps / rr[k];
    }

 

L500:
    dmu = -(*zero) * *eps;
    i__1 = *nv;
    for (k = 1; k <= i__1; ++k) {
	if (jc[k] == 1) {
	    goto L520;
	}
	if (y[k] <= *zero) {
	    goto L550;
	}
	goto L530;
L520:
	if (y[k] <= dmu) {
	    goto L550;
	}
L530:
	;
    }
    i__1 = *nv;
    for (k = 1; k <= i__1; ++k) {
 
	xpr[k] = y[k];
    }
    goto L200;
 
L550:
    teta = 0.;
    k0 = k;
    i__1 = *nv;
    for (k = 1; k <= i__1; ++k) {
	if (y[k] >= 0.) {
	    goto L560;
	}
	ps = y[k] / (y[k] - xpr[k]);
	if (teta >= ps) {
	    goto L560;
	}
	teta = ps;
	k0 = k;
L560:
	;
    }
    i__1 = *nv;
    for (k = 1; k <= i__1; ++k) {
	ps = teta * xpr[k] + (1. - teta) * y[k];
	if (ps <= *zero) {
	    ps = 0.;
	}
 
	xpr[k] = ps;
    }
    if (*imp <= 6) {
	goto L600;
    }
    ps1 = 0.;
    ps2 = 0.;
    i__1 = *nv;
    for (k = 1; k <= i__1; ++k) {
	i__2 = *nv;
	for (kk = 1; kk <= i__2; ++kk) {
 
	    i__3 = jc[k], i__4 = jc[kk];
	    j1 = (( i__3 ) >= ( i__4 ) ? ( i__3 ) : ( i__4 )) ;
 
	    i__3 = jc[k], i__4 = jc[kk];
	    j2 = (( i__3 ) <= ( i__4 ) ? ( i__3 ) : ( i__4 )) ;
	    jj = (j1 - 1) * *mm1 + j2;
	    ps1 += xpr[k] * xpr[kk] * r__[jj];
	    ps2 += y[k] * y[kk] * r__[jj];
 
	}
    }

 

L600:
    --(*nv);
    incr = 0;
    k00 = k0;
    w1s = 0.;
    w2s = 0.;
    w12s = 0.;
    l = jc[k0];
    if (l != 1) {
	-- fprf2c_ .nc;
    }
    if (*imp > 6) {
	io___2138.ciunit = *io;
	s_wsfe(&io___2138);
	do_fio(&c__1, (char *)&k0, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&l, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&y[k0], (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&ps1, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&ps2, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    if (k0 > *nv) {
	goto L400;
    }
    k1 = k0 - 1;
    i__2 = *nv;
    for (k = k0; k <= i__2; ++k) {
	xpr[k] = xpr[k + 1];
	if (k0 == 1) {
	    goto L620;
	}
	i__1 = k1;
	for (kk = 1; kk <= i__1; ++kk) {
	    mek = (kk - 1) * *mm1 + k;
 
	    r__[mek] = r__[mek + 1];
	}
L620:
	jc[k] = jc[k + 1];
    }
    xpr[*nv + 1] = 0.;
L630:
    mek = (k0 - 1) * *mm1 + k0 + 1;
    ps = r__[mek];
    ps12 = rr[k0 + 1];
    ps0 = sqrt(ps * ps + ps12 * ps12);
    ps /= ps0;
    ps12 /= ps0;
    rr[k0] = ps0;
    if (k0 == *nv) {
	goto L400;
    }
    k1 = k0 + 1;
    mek01 = (k0 - 1) * *mm1;
    mek = k0 * *mm1;
    mekk = mek - *mm1;
    i__2 = *nv;
    for (k = k1; k <= i__2; ++k) {
	j1 = mekk + k;
	j2 = mek + k;
	r__[j1] = ps * r__[j1 + 1] + ps12 * r__[j2 + 1];
	if (k > k1) {
	    r__[j2] = ps2;
	}
 
	ps2 = -ps12 * r__[j1 + 1] + ps * r__[j2 + 1];
    }
    r__[j2 + 1] = ps2;
    ++k0;
    goto L630;

 

L900:
    *iflag = 0;
    i__2 = *ntot;
    for (j = 1; j <= i__2; ++j) {
 
	al[j] = 0.;
    }
    i__2 = *nv;
    for (k = 1; k <= i__2; ++k) {
	j = jc[k] - 1;
	if (j != 0) {
	    al[j] = xpr[k];
	}
 
    }
    *u = fprf2c_ .u1;
    if (*imp <= 5) {
	return 0;
    }
    io___2142.ciunit = *io;
    s_wsfe(&io___2142);
    do_fio(&c__1, (char *)& fprf2c_ .nc, (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&(*nv), (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&(*s2), (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&sp, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)& fprf2c_ .u1, (ftnlen)sizeof(doublereal));
    e_wsfe();
    io___2143.ciunit = *io;
    s_wsfe(&io___2143);
    i__2 = *nv;
    for (k = 1; k <= i__2; ++k) {
	do_fio(&c__1, (char *)&jc[k], (ftnlen)sizeof(integer));
    }
    e_wsfe();
    io___2144.ciunit = *io;
    s_wsfe(&io___2144);
    e_wsfe();
    return 0;
}  

  int frdf1_(prosca, n, ntot, ninf, kgrad, al, q, s, epsn, aps,
	 anc, mm1, r__, e, ic, izs, rzs, dzs)
  int (*prosca) ();
integer *n, *ntot, *ninf, *kgrad;
doublereal *al, *q, *s, *epsn, *aps, *anc;
integer *mm1;
doublereal *r__, *e;
integer *ic, *izs;
real *rzs;
doublereal *dzs;
{
     
    integer i__1, i__2;

     
    static integer i__, j, k;
    static doublereal z__, z1, z2;
    static integer nj, nn, nt1, njk;



 
 
 

     
    --s;
    --q;
    --ic;
    --e;
    --anc;
    --aps;
    --epsn;
    --al;
    --r__;
    --izs;
    --rzs;
    --dzs;

     
    if (*ntot <= *ninf) {
	goto L900;
    }
    if (*ninf > 0) {
	goto L100;
    }

 

    *ntot = 0;
    *kgrad = 0;
    goto L900;

 
L100:
    nt1 = 0;
    i__1 = *ntot;
    for (j = 1; j <= i__1; ++j) {
	if (al[j] == 0. && epsn[j] != 0.) {
	    goto L150;
	}
	++nt1;
	ic[nt1] = j;
	if (j == nt1) {
	    goto L130;
	}
	nj = *n * (j - 1);
	nn = *n * (nt1 - 1);
	i__2 = *n;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    ++nn;
	    ++nj;
 
	    q[nn] = q[nj];
	}
	al[nt1] = al[j];
	epsn[nt1] = epsn[j];
	aps[nt1] = aps[j];
	anc[nt1] = anc[j];
	e[nt1 + 1] = e[j + 1];
L130:
	if (epsn[j] == 0.) {
	    *kgrad = nt1;
	}
	nn = nt1 * *mm1 + 1;
	nj = j * *mm1 + 1;
	i__2 = nt1;
	for (k = 1; k <= i__2; ++k) {
	    njk = nj + ic[k];
	    ++nn;
 
	    r__[nn] = r__[njk];
	}
L150:
	;
    }
    *ntot = nt1;
    if (*ntot <= *ninf) {
	goto L900;
    }

 
 

    (*prosca)(n, &s[1], &s[1], &r__[*mm1 + 2], &izs[1], &rzs[1], &dzs[1]);
    e[2] = 1.;
    z__ = 0.;
    z1 = 0.;
    z2 = 0.;
    i__1 = *ntot;
    for (k = 1; k <= i__1; ++k) {
	z1 += al[k] * aps[k];
	z2 += al[k] * anc[k];
 
	z__ += al[k] * epsn[k];
    }
    aps[1] = z1;
    anc[1] = z2;
    epsn[1] = z__;
    if (*ninf > 1) {
	goto L400;
    }
    *ntot = 1;
    *kgrad = 0;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	q[i__] = s[i__];
    }
    goto L900;
 
L400:
    nn = (*kgrad - 1) * *n;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	nj = *n + i__;
	++nn;
	q[nj] = q[nn];
 
	q[i__] = s[i__];
    }
    e[3] = 1.;
    nn = (*mm1 + 1) * *kgrad + 1;
    r__[(*mm1 << 1) + 3] = r__[nn];
    (*prosca)(n, &q[*n + 1], &s[1], &r__[(*mm1 << 1) + 2], &izs[1], &rzs[1], &
	    dzs[1]);
    aps[2] = 0.;
    anc[2] = 0.;
    epsn[2] = 0.;
    *kgrad = 2;
    *ntot = 2;
L900:
    return 0;
}  

  int fremf1_(prosca, iflag, n, ntot, nta, mm1, p, alfa, e, a, 
	r__, izs, rzs, dzs)
  int (*prosca) ();
integer *iflag, *n, *ntot, *nta, *mm1;
doublereal *p, *alfa, *e, *a, *r__;
integer *izs;
real *rzs;
doublereal *dzs;
{
     
    integer i__1, i__2;

     
    static integer mekk, i__, j, jj, kk, ni, nj, nt1, mej, nij, nta1, nta2;


 
 

 
 

 

 
 

     
    --alfa;
    --a;
    --e;
    --p;
    --r__;
    --izs;
    --rzs;
    --dzs;

     
    nt1 = *ntot + 1;
    nta1 = *nta + 1;
    if (*iflag > 0) {
	goto L50;
    }

 
 

    i__1 = *ntot;
    for (j = 1; j <= i__1; ++j) {
	jj = (j - 1) * *mm1 + 1;
 
	r__[jj] = 0.;
    }
    a[1] = 1.;
    e[1] = 0.;
    if (nta1 == 1) {
	goto L50;
    }
    i__1 = nta1;
    for (j = 2; j <= i__1; ++j) {
	e[j] = 1.;
	nj = (j - 2) * *n;
	mej = (j - 1) * *mm1;
	i__2 = j;
	for (i__ = 2; i__ <= i__2; ++i__) {
	    ni = (i__ - 2) * *n;

 
 
 

	    nij = mej + i__;
	    (*prosca)(n, &p[ni + 1], &p[nj + 1], &r__[nij], &izs[1], &rzs[1], 
		    &dzs[1]);
 
	}
    }


L50:
    nta2 = *nta + 2;

 

    if (nta2 > nt1) {
	goto L100;
    }
    i__2 = nt1;
    for (kk = nta2; kk <= i__2; ++kk) {
	mekk = (kk - 1) * *mm1;
	e[kk] = 1.;
	r__[mekk + 1] = 0.;
	nj = (kk - 2) * *n;
	i__1 = kk;
	for (i__ = 2; i__ <= i__1; ++i__) {
	    ni = (i__ - 2) * *n;

 
 
 

	    nij = mekk + i__;
	    (*prosca)(n, &p[ni + 1], &p[nj + 1], &r__[nij], &izs[1], &rzs[1], 
		    &dzs[1]);
 
	}
    }

 
 

    i__1 = nt1;
    for (i__ = 2; i__ <= i__1; ++i__) {
 
	a[i__] = alfa[i__ - 1];
    }
L100:
    return 0;
}  

  int fuclid_(n, a, b, ps, izs, rzs, dzs)
integer *n;
doublereal *a, *b, *ps;
integer *izs;
real *rzs;
doublereal *dzs;
{
    extern doublereal ddot_();

    *ps = ddot_(n, a, &c__1, b, &c__1);
}  

  int gcbd_(indgc, simul, nomf, n, x, f, g, imp, io, zero, 
	napmax, itmax, epsf, epsg, epsx, df0, binf, bsup, nfac, vect, nvect, 
	ivect, nivect, izs, rzs, dzs, nomf_len)
integer *indgc;
  int (*simul) ();
char *nomf;
integer *n;
doublereal *x, *f, *g;
integer *imp, *io;
doublereal *zero;
integer *napmax, *itmax;
doublereal *epsf, *epsg, *epsx, *df0, *binf, *bsup;
integer *nfac;
doublereal *vect;
integer *nvect, *ivect, *nivect, *izs;
real *rzs;
doublereal *dzs;
ftnlen nomf_len;
{
     
    static char fmt_123[] = "(\002 gcbd : retour avec indgc=\002,i8)";
    static char fmt_1000[] = "(\002 gcbd:insuffisance memoire; nvect=\002,i5,\002devrait etre:\002,i5)";
    static char fmt_2000[] = "(\002 gcbd:insuffisance memoire; nivect=\002,i5,\002devrait etre:\002,i5)";

     
    integer i__1;
    doublereal d__1, d__2;

     
    integer s_wsfe(), do_fio(), e_wsfe();

     
    static integer ialg[15], nfin, ndir, i__, ndiag;
    extern   int zgcbd_();
    static doublereal aa;
    static integer ii, nd, ng, ns, nt, nindic, ny, nz, nindex, nx2;
    static doublereal alg[15];
    static integer nys, nzs;

     
    static cilist io___2171 = { 0, 0, 0, fmt_123, 0 };
    static cilist io___2174 = { 0, 0, 0, fmt_123, 0 };
    static cilist io___2186 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___2189 = { 0, 0, 0, fmt_2000, 0 };


 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 

 
 
 
 
 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 


 
     
    --bsup;
    --binf;
    --epsx;
    --g;
    --x;
    --vect;
    --ivect;
    --izs;
    --rzs;
    --dzs;

     
    nt = 2;
    alg[0] = 1e-5;
    alg[1] = 1e6;
    alg[5] = .5;
    alg[8] = .5;

    ialg[0] = 1;
    ialg[1] = 0;
    ialg[2] = 2;
    ialg[3] = 0;
    ialg[4] = 0;
    ialg[5] = 2;
    ialg[6] = 1;
    ialg[7] = 4;
    ialg[8] = 12;

 
 
    i__1 = (( *n ) <= ( *napmax ) ? ( *n ) : ( *napmax )) ;
    ii = (( i__1 ) <= ( *itmax ) ? ( i__1 ) : ( *itmax )) ;
    if (ii > 0) {
	goto L10;
    }
    *indgc = -11;
    if (*imp > 0) {
	io___2171.ciunit = *io;
	s_wsfe(&io___2171);
	do_fio(&c__1, (char *)&(*indgc), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    return 0;
L10:
 
    d__1 = (( *zero ) <= ( *epsg ) ? ( *zero ) : ( *epsg )) ;
    aa = (( d__1 ) <= ( *df0 ) ? ( d__1 ) : ( *df0 )) ;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
 
	d__1 = aa, d__2 = epsx[i__];
	aa = (( d__1 ) <= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    }
    if (aa > 0.) {
	goto L12;
    }
    *indgc = -12;
    if (*imp > 0) {
	io___2174.ciunit = *io;
	s_wsfe(&io___2174);
	do_fio(&c__1, (char *)&(*indgc), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    return 0;
L12:

 
    ny = 1;
    ns = nt * *n + ny;
    nz = nt * *n + ns;
    nys = nt * *n + nz;
    nzs = nt + nys;
    nd = nt + nzs;
    ng = *n + nd;
    nx2 = *n + ng;
    ndir = *n + nx2;
    ndiag = *n + ndir;
    nfin = *n + ndiag;

    if (nfin > *nvect) {
	io___2186.ciunit = *io;
	s_wsfe(&io___2186);
	do_fio(&c__1, (char *)&nfin, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*nvect), (ftnlen)sizeof(integer));
	e_wsfe();
	*indgc = -14;
	return 0;
    }

    nindic = 1;
    nindex = *n + nindic;
    nfin = nt + nindex;
    if (nfin > *nivect) {
	io___2189.ciunit = *io;
	s_wsfe(&io___2189);
	do_fio(&c__1, (char *)&nfin, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*nivect), (ftnlen)sizeof(integer));
	e_wsfe();
	*indgc = -14;
	return 0;
    }

    zgcbd_(simul, n, &binf[1], &bsup[1], &x[1], f, &g[1], zero, napmax, itmax,
	     indgc, &ivect[nindic], nfac, imp, io, &epsx[1], epsf, epsg, &
	    vect[ndir], df0, &vect[ndiag], &vect[nx2], &izs[1], &rzs[1], &dzs[
	    1], &vect[ny], &vect[ns], &vect[nz], &vect[nys], &vect[nzs], &nt, 
	    &ivect[nindex], &vect[nd], &vect[ng], alg, ialg, nomf, 6L);
    return 0;
}  

  int gcp_(n, index, indic, np, nt, y, s, z__, ys, zs, diag, b,
	 x, d__, g, eps)
integer *n, *index, *indic, *np, *nt;
doublereal *y, *s, *z__, *ys, *zs, *diag, *b, *x, *d__, *g, *eps;
{
     
    integer y_dim1, y_offset, s_dim1, s_offset, z_dim1, z_offset, i__1;

     
    static doublereal beta;
    static integer iter, i__;
    extern   int calbx_();
    static integer itmax;
    static doublereal s0, s1, s2, dg, ro, d2a, eps0, eps1;


 
 
 


 
     
    --g;
    --d__;
    --x;
    --b;
    --diag;
    --indic;
    --zs;
    --ys;
    z_dim1 = *nt;
    z_offset = z_dim1 + 1;
    z__ -= z_offset;
    s_dim1 = *nt;
    s_offset = s_dim1 + 1;
    s -= s_offset;
    y_dim1 = *nt;
    y_offset = y_dim1 + 1;
    y -= y_offset;
    --index;

     
    eps0 = (float)1e-5;
    eps1 = (float)1e-5;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (indic[i__] > 0) {
	    goto L100;
	}
	x[i__] = -b[i__] / diag[i__];
L100:
	;
    }

    calbx_(n, &index[1], &indic[1], nt, np, &y[y_offset], &s[s_offset], &ys[1]
	    , &z__[z_offset], &zs[1], &x[1], &diag[1], &g[1]);
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (indic[i__] > 0) {
	    goto L110;
	}
	g[i__] += b[i__];
L110:
	;
    }

 
 
 
    s0 = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (indic[i__] > 0) {
	    goto L120;
	}
	s0 += g[i__] * g[i__] / diag[i__];
L120:
	;
    }
    if (s0 < 1e-18) {
	return 0;
    }
    s1 = s0;
 
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (indic[i__] > 0) {
	    goto L130;
	}
	d__[i__] = -g[i__] / diag[i__];
L130:
	;
    }

 
    dg = (float)0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (indic[i__] > 0) {
	    goto L135;
	}
	dg += d__[i__] * g[i__];
L135:
	;
    }
    calbx_(n, &index[1], &indic[1], nt, np, &y[y_offset], &s[s_offset], &ys[1]
	    , &z__[z_offset], &zs[1], &d__[1], &diag[1], &g[1]);
    d2a = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (indic[i__] > 0) {
	    goto L140;
	}
	d2a += d__[i__] * g[i__];
L140:
	;
    }

    ro = -dg / d2a;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (indic[i__] > 0) {
	    goto L150;
	}
	x[i__] += ro * d__[i__];
L150:
	;
    }
    calbx_(n, &index[1], &indic[1], nt, np, &y[y_offset], &s[s_offset], &ys[1]
	    , &z__[z_offset], &zs[1], &x[1], &diag[1], &g[1]);
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (indic[i__] > 0) {
	    goto L170;
	}
	g[i__] += b[i__];
L170:
	;
    }

 
    iter = 0;
    itmax = *np << 1;
L10:
    ++iter;
    if (iter > itmax) {
	return 0;
    }
 
    s2 = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (indic[i__] > 0) {
	    goto L200;
	}
	s2 += g[i__] * g[i__] / diag[i__];
L200:
	;
    }
    if (s2 / s0 < *eps) {
	return 0;
    }
 
    beta = s2 / s1;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (indic[i__] > 0) {
	    goto L210;
	}
	d__[i__] = -g[i__] / diag[i__] + beta * d__[i__];
L210:
	;
    }
    s1 = s2;

 
    dg = (float)0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (indic[i__] > 0) {
	    goto L215;
	}
	dg += d__[i__] * g[i__];
L215:
	;
    }
    calbx_(n, &index[1], &indic[1], nt, np, &y[y_offset], &s[s_offset], &ys[1]
	    , &z__[z_offset], &zs[1], &d__[1], &diag[1], &g[1]);
    d2a = (float)0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (indic[i__] > 0) {
	    goto L220;
	}
	d2a += d__[i__] * g[i__];
L220:
	;
    }

    ro = -dg / d2a;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (indic[i__] > 0) {
	    goto L230;
	}
	x[i__] += ro * d__[i__];
L230:
	;
    }
    calbx_(n, &index[1], &indic[1], nt, np, &y[y_offset], &s[s_offset], &ys[1]
	    , &z__[z_offset], &zs[1], &x[1], &diag[1], &g[1]);
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (indic[i__] > 0) {
	    goto L240;
	}
	g[i__] += b[i__];
L240:
	;
    }
    goto L10;
}  

  int hybrd_(fcn, n, x, fvec, xtol, maxfev, ml, mu, epsfcn, 
	diag, mode, factor, nprint, info, nfev, fjac, ldfjac, r__, lr, qtf, 
	wa1, wa2, wa3, wa4)
  int (*fcn) ();
integer *n;
doublereal *x, *fvec, *xtol;
integer *maxfev, *ml, *mu;
doublereal *epsfcn, *diag;
integer *mode;
doublereal *factor;
integer *nprint, *info, *nfev;
doublereal *fjac;
integer *ldfjac;
doublereal *r__;
integer *lr;
doublereal *qtf, *wa1, *wa2, *wa3, *wa4;
{
     

    static doublereal one = 1.;
    static doublereal p1 = .1;
    static doublereal p5 = .5;
    static doublereal p001 = .001;
    static doublereal p0001 = 1e-4;
    static doublereal zero = 0.;

     
    integer fjac_dim1, fjac_offset, i__1, i__2;
    doublereal d__1, d__2;

     
    static logical sing;
    static integer iter;
    static doublereal temp;
    static integer msum, i__, j, l, iflag;
    static doublereal delta;
    extern   int qrfac_();
    static logical jeval;
    static integer ncsuc;
    static doublereal ratio;
    extern doublereal enorm_();
    static doublereal fnorm;
    extern   int qform_(), fdjac1_();
    static doublereal pnorm, xnorm, fnorm1;
    extern   int r1updt_();
    static integer nslow1, nslow2;
    extern doublereal dlamch_();
    extern   int r1mpyq_();
    static integer ncfail;
    extern   int dogleg_();
    static doublereal actred, epsmch, prered;
    static integer jm1, iwa[1];
    static doublereal sum;
     
    --wa4;
    --wa3;
    --wa2;
    --wa1;
    --qtf;
    --diag;
    --fvec;
    --x;
    fjac_dim1 = *ldfjac;
    fjac_offset = fjac_dim1 + 1;
    fjac -= fjac_offset;
    --r__;

     

 

    epsmch = dlamch_("p", 1L);

    *info = 0;
    iflag = 0;
    *nfev = 0;

 

    if (*n <= 0 || *xtol < zero || *maxfev <= 0 || *ml < 0 || *mu < 0 || *
	    factor <= zero || *ldfjac < *n || *lr < *n * (*n + 1) / 2) {
	goto L300;
    }
    if (*mode != 2) {
	goto L20;
    }
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	if (diag[j] <= zero) {
	    goto L300;
	}
 
    }
L20:

 
 

    iflag = 1;
    (*fcn)(n, &x[1], &fvec[1], &iflag);
    *nfev = 1;
    if (iflag < 0) {
	goto L300;
    }
    fnorm = enorm_(n, &fvec[1]);

 
 

 
    i__1 = *ml + *mu + 1;
    msum = (( i__1 ) <= ( *n ) ? ( i__1 ) : ( *n )) ;

 

    iter = 1;
    ncsuc = 0;
    ncfail = 0;
    nslow1 = 0;
    nslow2 = 0;

 

L30:
    jeval = (1) ;

 

    iflag = 2;
    fdjac1_(fcn, n, &x[1], &fvec[1], &fjac[fjac_offset], ldfjac, &iflag, ml, 
	    mu, epsfcn, &wa1[1], &wa2[1]);
    *nfev += msum;
    if (iflag < 0) {
	goto L300;
    }

 

    qrfac_(n, n, &fjac[fjac_offset], ldfjac, &c_false, iwa, &c__1, &wa1[1], &
	    wa2[1], &wa3[1]);

 
 

    if (iter != 1) {
	goto L70;
    }
    if (*mode == 2) {
	goto L50;
    }
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	diag[j] = wa2[j];
	if (wa2[j] == zero) {
	    diag[j] = one;
	}
 
    }
L50:

 
 

    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	wa3[j] = diag[j] * x[j];
 
    }
    xnorm = enorm_(n, &wa3[1]);
    delta = *factor * xnorm;
    if (delta == zero) {
	delta = *factor;
    }
L70:

 

    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	qtf[i__] = fvec[i__];
 
    }
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	if (fjac[j + j * fjac_dim1] == zero) {
	    goto L110;
	}
	sum = zero;
	i__2 = *n;
	for (i__ = j; i__ <= i__2; ++i__) {
	    sum += fjac[i__ + j * fjac_dim1] * qtf[i__];
 
	}
	temp = -sum / fjac[j + j * fjac_dim1];
	i__2 = *n;
	for (i__ = j; i__ <= i__2; ++i__) {
	    qtf[i__] += fjac[i__ + j * fjac_dim1] * temp;
 
	}
L110:
 
	;
    }

 

    sing = (0) ;
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	l = j;
	jm1 = j - 1;
	if (jm1 < 1) {
	    goto L140;
	}
	i__2 = jm1;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    r__[l] = fjac[i__ + j * fjac_dim1];
	    l = l + *n - i__;
 
	}
L140:
	r__[l] = wa1[j];
	if (wa1[j] == zero) {
	    sing = (1) ;
	}
 
    }

 

    qform_(n, n, &fjac[fjac_offset], ldfjac, &wa1[1]);

 

    if (*mode == 2) {
	goto L170;
    }
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
 
	d__1 = diag[j], d__2 = wa2[j];
	diag[j] = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
 
    }
L170:

 

L180:

 

    if (*nprint <= 0) {
	goto L190;
    }
    iflag = 0;
    if ((iter - 1) % *nprint == 0) {
	(*fcn)(n, &x[1], &fvec[1], &iflag);
    }
    if (iflag < 0) {
	goto L300;
    }
L190:

 

    dogleg_(n, &r__[1], lr, &diag[1], &qtf[1], &delta, &wa1[1], &wa2[1], &wa3[
	    1]);

 

    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	wa1[j] = -wa1[j];
	wa2[j] = x[j] + wa1[j];
	wa3[j] = diag[j] * wa1[j];
 
    }
    pnorm = enorm_(n, &wa3[1]);

 

    if (iter == 1) {
	delta = (( delta ) <= ( pnorm ) ? ( delta ) : ( pnorm )) ;
    }

 

    iflag = 1;
    (*fcn)(n, &wa2[1], &wa4[1], &iflag);
    ++(*nfev);
    if (iflag < 0) {
	goto L300;
    }
    fnorm1 = enorm_(n, &wa4[1]);

 

    actred = -one;
    if (fnorm1 < fnorm) {
 
	d__1 = fnorm1 / fnorm;
	actred = one - d__1 * d__1;
    }

 

    l = 1;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	sum = zero;
	i__2 = *n;
	for (j = i__; j <= i__2; ++j) {
	    sum += r__[l] * wa1[j];
	    ++l;
 
	}
	wa3[i__] = qtf[i__] + sum;
 
    }
    temp = enorm_(n, &wa3[1]);
    prered = zero;
    if (temp < fnorm) {
 
	d__1 = temp / fnorm;
	prered = one - d__1 * d__1;
    }

 
 

    ratio = zero;
    if (prered > zero) {
	ratio = actred / prered;
    }

 

    if (ratio >= p1) {
	goto L230;
    }
    ncsuc = 0;
    ++ncfail;
    delta = p5 * delta;
    goto L240;
L230:
    ncfail = 0;
    ++ncsuc;
    if (ratio >= p5 || ncsuc > 1) {
 
	d__1 = delta, d__2 = pnorm / p5;
	delta = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    }
    if ((d__1 = ratio - one, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= p1) {
	delta = pnorm / p5;
    }
L240:

 

    if (ratio < p0001) {
	goto L260;
    }

 

    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	x[j] = wa2[j];
	wa2[j] = diag[j] * x[j];
	fvec[j] = wa4[j];
 
    }
    xnorm = enorm_(n, &wa2[1]);
    fnorm = fnorm1;
    ++iter;
L260:

 

    ++nslow1;
    if (actred >= p001) {
	nslow1 = 0;
    }
    if (jeval) {
	++nslow2;
    }
    if (actred >= p1) {
	nslow2 = 0;
    }

 

    if (delta <= *xtol * xnorm || fnorm == zero) {
	*info = 1;
    }
    if (*info != 0) {
	goto L300;
    }

 

    if (*nfev >= *maxfev) {
	*info = 2;
    }
 
    d__1 = p1 * delta;
    if (p1 * (( d__1 ) >= ( pnorm ) ? ( d__1 ) : ( pnorm ))  <= epsmch * xnorm) {
	*info = 3;
    }
    if (nslow2 == 5) {
	*info = 4;
    }
    if (nslow1 == 10) {
	*info = 5;
    }
    if (*info != 0) {
	goto L300;
    }

 
 

    if (ncfail == 2) {
	goto L290;
    }

 
 

    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	sum = zero;
	i__2 = *n;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    sum += fjac[i__ + j * fjac_dim1] * wa4[i__];
 
	}
	wa2[j] = (sum - wa3[j]) / pnorm;
	wa1[j] = diag[j] * (diag[j] * wa1[j] / pnorm);
	if (ratio >= p0001) {
	    qtf[j] = sum;
	}
 
    }

 

    r1updt_(n, n, &r__[1], lr, &wa1[1], &wa2[1], &wa3[1], &sing);
    r1mpyq_(n, n, &fjac[fjac_offset], ldfjac, &wa2[1], &wa3[1]);
    r1mpyq_(&c__1, n, &qtf[1], &c__1, &wa2[1], &wa3[1]);

 

    jeval = (0) ;
    goto L180;
L290:

 

    goto L30;
L300:

 

    if (iflag < 0) {
	*info = iflag;
    }
    iflag = 0;
    if (*nprint > 0) {
	(*fcn)(n, &x[1], &fvec[1], &iflag);
    }
    return 0;

 

}  

  int hybrd1_(fcn, n, x, fvec, tol, info, wa, lwa)
  int (*fcn) ();
integer *n;
doublereal *x, *fvec, *tol;
integer *info;
doublereal *wa;
integer *lwa;
{
     

    static doublereal factor = 100.;
    static doublereal one = 1.;
    static doublereal zero = 0.;

     
    integer i__1;

     
    static integer mode, nfev;
    static doublereal xtol;
    static integer j, index;
    extern   int hybrd_();
    static integer ml, lr, mu;
    static doublereal epsfcn;
    static integer maxfev, nprint;
    --fvec;
    --x;
    --wa;

     
    *info = 0;

 

    if (*n <= 0 || *tol < zero || *lwa < *n * (*n * 3 + 13) / 2) {
	goto L20;
    }

 

    maxfev = (*n + 1) * 200;
    xtol = *tol;
    ml = *n - 1;
    mu = *n - 1;
    epsfcn = zero;
    mode = 2;
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	wa[j] = one;
 
    }
    nprint = 0;
    lr = *n * (*n + 1) / 2;
    index = *n * 6 + lr;
    hybrd_(fcn, n, &x[1], &fvec[1], &xtol, &maxfev, &ml, &mu, &epsfcn, &wa[1],
	     &mode, &factor, &nprint, info, &nfev, &wa[index + 1], n, &wa[*n *
	     6 + 1], &lr, &wa[*n + 1], &wa[(*n << 1) + 1], &wa[*n * 3 + 1], &
	    wa[(*n << 2) + 1], &wa[*n * 5 + 1]);
    if (*info == 5) {
	*info = 4;
    }
L20:
    return 0;

 

}  

  int hybrj_(fcn, n, x, fvec, fjac, ldfjac, xtol, maxfev, diag,
	 mode, factor, nprint, info, nfev, njev, r__, lr, qtf, wa1, wa2, wa3, 
	wa4)
  int (*fcn) ();
integer *n;
doublereal *x, *fvec, *fjac;
integer *ldfjac;
doublereal *xtol;
integer *maxfev;
doublereal *diag;
integer *mode;
doublereal *factor;
integer *nprint, *info, *nfev, *njev;
doublereal *r__;
integer *lr;
doublereal *qtf, *wa1, *wa2, *wa3, *wa4;
{
     

    static doublereal one = 1.;
    static doublereal p1 = .1;
    static doublereal p5 = .5;
    static doublereal p001 = .001;
    static doublereal p0001 = 1e-4;
    static doublereal zero = 0.;

     
    integer fjac_dim1, fjac_offset, i__1, i__2;
    doublereal d__1, d__2;

     
    static logical sing;
    static integer iter;
    static doublereal temp;
    static integer i__, j, l, iflag;
    static doublereal delta;
    extern   int qrfac_();
    static logical jeval;
    static integer ncsuc;
    static doublereal ratio;
    extern doublereal enorm_();
    static doublereal fnorm;
    extern   int qform_();
    static doublereal pnorm, xnorm, fnorm1;
    extern   int r1updt_();
    static integer nslow1, nslow2;
    extern doublereal dlamch_();
    extern   int r1mpyq_();
    static integer ncfail;
    extern   int dogleg_();
    static doublereal actred, epsmch, prered;
    static integer jm1, iwa[1];
    static doublereal sum;

 

 
 

 
 

 
 
 

 
 
 

 
 

 
 

 
 
 

 
 

 
 

 

 

 

 
 

 

 
 

 
     
    --wa4;
    --wa3;
    --wa2;
    --wa1;
    --qtf;
    --diag;
    --fvec;
    --x;
    fjac_dim1 = *ldfjac;
    fjac_offset = fjac_dim1 + 1;
    fjac -= fjac_offset;
    --r__;

     

 

    epsmch = dlamch_("p", 1L);

    *info = 0;
    iflag = 0;
    *nfev = 0;
    *njev = 0;

 

    if (*n <= 0 || *ldfjac < *n || *xtol < zero || *maxfev <= 0 || *factor <= 
	    zero || *lr < *n * (*n + 1) / 2) {
	goto L300;
    }
    if (*mode != 2) {
	goto L20;
    }
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	if (diag[j] <= zero) {
	    goto L300;
	}
 
    }
L20:

 
 

    iflag = 1;
    (*fcn)(n, &x[1], &fvec[1], &fjac[fjac_offset], ldfjac, &iflag);
    *nfev = 1;
    if (iflag < 0) {
	goto L300;
    }
    fnorm = enorm_(n, &fvec[1]);

 

    iter = 1;
    ncsuc = 0;
    ncfail = 0;
    nslow1 = 0;
    nslow2 = 0;

 

L30:
    jeval = (1) ;

 

    iflag = 2;
    (*fcn)(n, &x[1], &fvec[1], &fjac[fjac_offset], ldfjac, &iflag);
    ++(*njev);
    if (iflag < 0) {
	goto L300;
    }

 

    qrfac_(n, n, &fjac[fjac_offset], ldfjac, &c_false, iwa, &c__1, &wa1[1], &
	    wa2[1], &wa3[1]);

 
 

    if (iter != 1) {
	goto L70;
    }
    if (*mode == 2) {
	goto L50;
    }
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	diag[j] = wa2[j];
	if (wa2[j] == zero) {
	    diag[j] = one;
	}
 
    }
L50:

 
 

    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	wa3[j] = diag[j] * x[j];
 
    }
    xnorm = enorm_(n, &wa3[1]);
    delta = *factor * xnorm;
    if (delta == zero) {
	delta = *factor;
    }
L70:

 

    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	qtf[i__] = fvec[i__];
 
    }
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	if (fjac[j + j * fjac_dim1] == zero) {
	    goto L110;
	}
	sum = zero;
	i__2 = *n;
	for (i__ = j; i__ <= i__2; ++i__) {
	    sum += fjac[i__ + j * fjac_dim1] * qtf[i__];
 
	}
	temp = -sum / fjac[j + j * fjac_dim1];
	i__2 = *n;
	for (i__ = j; i__ <= i__2; ++i__) {
	    qtf[i__] += fjac[i__ + j * fjac_dim1] * temp;
 
	}
L110:
 
	;
    }

 

    sing = (0) ;
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	l = j;
	jm1 = j - 1;
	if (jm1 < 1) {
	    goto L140;
	}
	i__2 = jm1;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    r__[l] = fjac[i__ + j * fjac_dim1];
	    l = l + *n - i__;
 
	}
L140:
	r__[l] = wa1[j];
	if (wa1[j] == zero) {
	    sing = (1) ;
	}
 
    }

 

    qform_(n, n, &fjac[fjac_offset], ldfjac, &wa1[1]);

 

    if (*mode == 2) {
	goto L170;
    }
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
 
	d__1 = diag[j], d__2 = wa2[j];
	diag[j] = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
 
    }
L170:

 

L180:

 

    if (*nprint <= 0) {
	goto L190;
    }
    iflag = 0;
    if ((iter - 1) % *nprint == 0) {
	(*fcn)(n, &x[1], &fvec[1], &fjac[fjac_offset], ldfjac, &iflag);
    }
    if (iflag < 0) {
	goto L300;
    }
L190:

 

    dogleg_(n, &r__[1], lr, &diag[1], &qtf[1], &delta, &wa1[1], &wa2[1], &wa3[
	    1]);

 

    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	wa1[j] = -wa1[j];
	wa2[j] = x[j] + wa1[j];
	wa3[j] = diag[j] * wa1[j];
 
    }
    pnorm = enorm_(n, &wa3[1]);

 

    if (iter == 1) {
	delta = (( delta ) <= ( pnorm ) ? ( delta ) : ( pnorm )) ;
    }

 

    iflag = 1;
    (*fcn)(n, &wa2[1], &wa4[1], &fjac[fjac_offset], ldfjac, &iflag);
    ++(*nfev);
    if (iflag < 0) {
	goto L300;
    }
    fnorm1 = enorm_(n, &wa4[1]);

 

    actred = -one;
    if (fnorm1 < fnorm) {
 
	d__1 = fnorm1 / fnorm;
	actred = one - d__1 * d__1;
    }

 

    l = 1;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	sum = zero;
	i__2 = *n;
	for (j = i__; j <= i__2; ++j) {
	    sum += r__[l] * wa1[j];
	    ++l;
 
	}
	wa3[i__] = qtf[i__] + sum;
 
    }
    temp = enorm_(n, &wa3[1]);
    prered = zero;
    if (temp < fnorm) {
 
	d__1 = temp / fnorm;
	prered = one - d__1 * d__1;
    }

 
 

    ratio = zero;
    if (prered > zero) {
	ratio = actred / prered;
    }

 

    if (ratio >= p1) {
	goto L230;
    }
    ncsuc = 0;
    ++ncfail;
    delta = p5 * delta;
    goto L240;
L230:
    ncfail = 0;
    ++ncsuc;
    if (ratio >= p5 || ncsuc > 1) {
 
	d__1 = delta, d__2 = pnorm / p5;
	delta = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    }
    if ((d__1 = ratio - one, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= p1) {
	delta = pnorm / p5;
    }
L240:

 

    if (ratio < p0001) {
	goto L260;
    }

 

    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	x[j] = wa2[j];
	wa2[j] = diag[j] * x[j];
	fvec[j] = wa4[j];
 
    }
    xnorm = enorm_(n, &wa2[1]);
    fnorm = fnorm1;
    ++iter;
L260:

 

    ++nslow1;
    if (actred >= p001) {
	nslow1 = 0;
    }
    if (jeval) {
	++nslow2;
    }
    if (actred >= p1) {
	nslow2 = 0;
    }

 

    if (delta <= *xtol * xnorm || fnorm == zero) {
	*info = 1;
    }
    if (*info != 0) {
	goto L300;
    }

 

    if (*nfev >= *maxfev) {
	*info = 2;
    }
 
    d__1 = p1 * delta;
    if (p1 * (( d__1 ) >= ( pnorm ) ? ( d__1 ) : ( pnorm ))  <= epsmch * xnorm) {
	*info = 3;
    }
    if (nslow2 == 5) {
	*info = 4;
    }
    if (nslow1 == 10) {
	*info = 5;
    }
    if (*info != 0) {
	goto L300;
    }

 

    if (ncfail == 2) {
	goto L290;
    }

 
 

    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	sum = zero;
	i__2 = *n;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    sum += fjac[i__ + j * fjac_dim1] * wa4[i__];
 
	}
	wa2[j] = (sum - wa3[j]) / pnorm;
	wa1[j] = diag[j] * (diag[j] * wa1[j] / pnorm);
	if (ratio >= p0001) {
	    qtf[j] = sum;
	}
 
    }

 

    r1updt_(n, n, &r__[1], lr, &wa1[1], &wa2[1], &wa3[1], &sing);
    r1mpyq_(n, n, &fjac[fjac_offset], ldfjac, &wa2[1], &wa3[1]);
    r1mpyq_(&c__1, n, &qtf[1], &c__1, &wa2[1], &wa3[1]);

 

    jeval = (0) ;
    goto L180;
L290:

 

    goto L30;
L300:

 

    if (iflag < 0) {
	*info = iflag;
    }
    iflag = 0;
    if (*nprint > 0) {
	(*fcn)(n, &x[1], &fvec[1], &fjac[fjac_offset], ldfjac, &iflag);
    }
    return 0;

 

}  

  int hybrj1_(fcn, n, x, fvec, fjac, ldfjac, tol, info, wa, 
	lwa)
  int (*fcn) ();
integer *n;
doublereal *x, *fvec, *fjac;
integer *ldfjac;
doublereal *tol;
integer *info;
doublereal *wa;
integer *lwa;
{
     

    static doublereal factor = 100.;
    static doublereal one = 1.;
    static doublereal zero = 0.;

     
    integer fjac_dim1, fjac_offset, i__1;

     
    static integer mode, nfev, njev;
    static doublereal xtol;
    static integer j;
    extern   int hybrj_();
    static integer lr, maxfev, nprint;
 
     
    --fvec;
    --x;
    fjac_dim1 = *ldfjac;
    fjac_offset = fjac_dim1 + 1;
    fjac -= fjac_offset;
    --wa;

     
    *info = 0;

 

    if (*n <= 0 || *ldfjac < *n || *tol < zero || *lwa < *n * (*n + 13) / 2) {
	goto L20;
    }

 

    maxfev = (*n + 1) * 100;
    xtol = *tol;
    mode = 2;
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	wa[j] = one;
 
    }
    nprint = 0;
    lr = *n * (*n + 1) / 2;
    hybrj_(fcn, n, &x[1], &fvec[1], &fjac[fjac_offset], ldfjac, &xtol, &
	    maxfev, &wa[1], &mode, &factor, &nprint, info, &nfev, &njev, &wa[*
	    n * 6 + 1], &lr, &wa[*n + 1], &wa[(*n << 1) + 1], &wa[*n * 3 + 1],
	     &wa[(*n << 2) + 1], &wa[*n * 5 + 1]);
    if (*info == 5) {
	*info = 4;
    }
L20:
    return 0;

 

}  

 
  int icscof_(ico, ntob, nex, nob, yob, ob, cof)
integer *ico, *ntob, *nex, *nob;
doublereal *yob, *ob, *cof;
{
     
    integer yob_dim1, yob_offset, ob_dim1, ob_dim2, ob_offset, cof_dim1, 
	    cof_offset, i__1, i__2, i__3;
    doublereal d__1;

     
    static integer i__, j, k;

 
 
 

 

 
 
 
 

 
 

 

 
 

     
    cof_dim1 = *nob;
    cof_offset = cof_dim1 + 1;
    cof -= cof_offset;
    ob_dim1 = *nex;
    ob_dim2 = *ntob;
    ob_offset = ob_dim1 * (ob_dim2 + 1) + 1;
    ob -= ob_offset;
    yob_dim1 = *nob;
    yob_offset = yob_dim1 + 1;
    yob -= yob_offset;

     
    i__1 = *nob;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i__2 = *ntob;
	for (j = 1; j <= i__2; ++j) {
 
	    cof[i__ + j * cof_dim1] = 0.;
	}
    }
 
 
 
    if (*ico == 1) {
	i__2 = *nob;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    i__1 = *ntob;
	    for (j = 1; j <= i__1; ++j) {
		i__3 = *nex;
		for (k = 1; k <= i__3; ++k) {
 
		    cof[i__ + j * cof_dim1] += (d__1 = ob[k + (j + i__ * 
			    ob_dim2) * ob_dim1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		}
	    }
	}
	i__3 = *nob;
	for (i__ = 1; i__ <= i__3; ++i__) {
	    i__1 = *ntob;
	    for (j = 1; j <= i__1; ++j) {
 
		cof[i__ + j * cof_dim1] = (doublereal) (*nex) / cof[i__ + j * 
			cof_dim1];
	    }
	}
 
 
 

    } else {
	i__1 = *nob;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    i__3 = *ntob;
	    for (j = 1; j <= i__3; ++j) {
		i__2 = *nex;
		for (k = 1; k <= i__2; ++k) {
 
 
		    d__1 = yob[i__ + j * yob_dim1] - ob[k + (j + i__ * 
			    ob_dim2) * ob_dim1];
		    cof[i__ + j * cof_dim1] += d__1 * d__1;
		}
	    }
	}
	i__2 = *nob;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    i__3 = *ntob;
	    for (j = 1; j <= i__3; ++j) {
 
		cof[i__ + j * cof_dim1] = .5 / cof[i__ + j * cof_dim1];
	    }
	}
    }
    return 0;
}  

  int icse_(ind, nu, u, co, g, itv, rtv, dtv, icsef, icsec2, 
	icsei)
integer *ind, *nu;
doublereal *u, *co, *g;
integer *itv;
real *rtv;
doublereal *dtv;
  int (*icsef) (), (*icsec2) (), (*icsei) ();
{
     
    static char fmt_8003[] = "(1x,\002icse : taille des tableaux itv,dtv insuffisante\002,/,8x,\002valeurs minimales \002,i6,2x,i6)";

     
    integer i__1, i__2;

     
    integer s_wsfe(), do_fio(), e_wsfe();

     
    static integer lech, lcof, indi, lobs, ltob, ldmy, lyob, ldtu, litu, mdtv,
	     mitv, lsmy, ldif1, ldif2, ldif3;
    extern   int icse1_(), icse2_();
    static integer lipv1, lipv2, mdtv1, mdtv2, mitv1, mitv2, i__, ludep, 
	    litob, loldp, lyold, lytob, ldtvt, lyerr, lyint, litvt, lytot, lb,
	     ld, lf, lp, ly, lsmold, loldmu, lp0, ly0, lob, ldm, lfu, lui, 
	    nui, lfy, lgt, lc2y, ly0u;

     
    static cilist io___2339 = { 0, 6, 0, fmt_8003, 0 };
 
     
    --g;
    --u;
    --itv;
    --rtv;
    --dtv;

     
    if ((icsez_._1) .iu[1] > 0) {
 
	i__1 = *nu, i__2 = (icsez_._1) .nuc + 1;
	lui = (( i__1 ) <= ( i__2 ) ? ( i__1 ) : ( i__2 )) ;
    }
    if ((icsez_._1) .iu[0] > 0) {
	lui = 1;
    }
    nui = (icsez_._1) .iu[0] * (icsez_._1) .nuc + (icsez_._1) .iu[1] * (icsez_._1) .nuv * (
	    (icsez_._1) .nti + (icsez_._1) .ntf + 1);

 
 
 
 
 

    litu = 1;
    litvt = litu + (icsez_._1) .nitu;

 
 
 
 
 

    ldtu = 1;
    ly0 = ldtu + (icsez_._1) .ndtu;
    ltob = ly0 + (icsez_._1) .ny;
    lobs = ltob + (icsez_._1) .ntob;
    lob = lobs + (icsez_._1) .nob * (icsez_._1) .ny;
    lech = lob + (icsez_._1) .nex * (icsez_._1) .ntob * (icsez_._1) .nob;
    lcof = lech + *nu;
 
    lb = lcof + (icsez_._1) .nob * (icsez_._1) .ntob;
    lfy = lb + (icsez_._1) .ny;
    lfu = lfy + (icsez_._1) .ny * (icsez_._1) .ny;
    ludep = lfu + (icsez_._1) .ny * ((icsez_._1) .nuc + (icsez_._1) .nuv);
    lytot = ludep + *nu;
    lf = lytot + (icsez_._1) .ny * ((icsez_._1) .nti + (icsez_._1) .ntf);
    ldtvt = lf + (icsez_._1) .ny;

 

    lipv1 = litvt;
    mitv1 = lipv1 + (icsez_._1) .ny - 1;

 

    litob = litvt;
    lipv2 = litob + (icsez_._1) .ntob;
    mitv2 = lipv2 + (icsez_._1) .ny - 1;

    mitv = (( mitv1 ) >= ( mitv2 ) ? ( mitv1 ) : ( mitv2 )) ;

 

    ldm = ldtvt;
    lyold = ldm + (icsez_._1) .ny * (icsez_._1) .ny;
    lsmold = lyold + (icsez_._1) .ny;
    lyint = lsmold + (icsez_._1) .ny;
    lyerr = lyint + (icsez_._1) .ny;
    ldif1 = lyerr + (icsez_._1) .ny;
    ldif2 = ldif1 + (icsez_._1) .ny;
    ldif3 = ldif2 + (icsez_._1) .ny;
    mdtv1 = ldif3 + (icsez_._1) .ny - 1;

 

    lytob = ldtvt;
    lc2y = lytob + (icsez_._1) .ny * (icsez_._1) .ntob;
    ly0u = lc2y + (icsez_._1) .ny * (icsez_._1) .ntob;
    ldmy = ly0u + (icsez_._1) .ny * *nu;
    lsmy = ldmy + (icsez_._1) .ny * (icsez_._1) .ny;
    loldmu = lsmy + (icsez_._1) .ny * (icsez_._1) .ny;
    ly = loldmu + (icsez_._1) .ny * ((icsez_._1) .nuc + (icsez_._1) .nuv);
    loldp = ly + (icsez_._1) .ny;
    lp = loldp + (icsez_._1) .ny;
    lp0 = lp + (icsez_._1) .ny;
    lgt = lp0 + (icsez_._1) .ny;
 
    i__1 = (icsez_._1) .nuc + (icsez_._1) .nuv;
    lyob = lgt + (( i__1 ) >= ( nui ) ? ( i__1 ) : ( nui )) ;
    ld = lyob + (icsez_._1) .nob * (icsez_._1) .ntob;
    mdtv2 = ld + (icsez_._1) .nob - 1;

    mdtv = (( mdtv1 ) >= ( mdtv2 ) ? ( mdtv1 ) : ( mdtv2 )) ;
    if (mitv > (nird_._1) .nitv || mdtv > (nird_._1) .ndtv) {
	if ((nird_._1) .nitv + (nird_._1) .ndtv > 0) {
	    s_wsfe(&io___2339);
	    do_fio(&c__1, (char *)&mitv, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&mdtv, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	(nird_._1) .nitv = mitv;
	(nird_._1) .ndtv = mdtv;
	return 0;
    }
    i__1 = *nu;
    for (i__ = 1; i__ <= i__1; ++i__) {
	dtv[ludep + i__ - 1] = u[i__];
	u[i__] = dtv[lech + i__ - 1] * u[i__];
 
    }

 

    if ((icsez_._1) .iu[0] > 0) {
	indi = 1;
	(*icsei)(&indi, &nui, &u[lui], &dtv[ly0], &dtv[ly0u], &itv[litu], &
		dtv[ldtu], & (icsez_._1) .t0, & (icsez_._1) .tf, & (icsez_._1) .dti, &
		(icsez_._1) .dtf, & (icsez_._1) .ermx, (icsez_._1) .iu, & (icsez_._1) .nuc, &
		(icsez_._1) .nuv, & (icsez_._1) .ilin, & (icsez_._1) .nti, & (icsez_._1) .ntf, &
		(icsez_._1) .ny, & (icsez_._1) .nea, & (icsez_._1) .itmx, & (icsez_._1) .nex, &
		(icsez_._1) .nob, & (icsez_._1) .ntob, & (icsez_._1) .ntobi, & (icsez_._1) .nitu, &
		(icsez_._1) .ndtu);
	if (indi <= 0) {
	    *ind = indi;
	    return 0;
	}
    }

 
 
 
 
 
 

 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

    icse1_(ind, nu, &u[1], icsef, &dtv[ly0], &dtv[lytot], &dtv[lf], &dtv[lb], 
	    &dtv[lfy], &dtv[lfu], &itv[lipv1], &dtv[ldm], &dtv[lyold], &dtv[
	    lsmold], &dtv[lyint], &dtv[lyerr], &dtv[ldif1], &dtv[ldif2], &dtv[
	    ldif3], &itv[litu], &dtv[ldtu], & (icsez_._1) .t0, & (icsez_._1) .tf, &
	    (icsez_._1) .dti, & (icsez_._1) .dtf, & (icsez_._1) .ermx, (icsez_._1) .iu, &
	    (icsez_._1) .nuc, & (icsez_._1) .nuv, & (icsez_._1) .ilin, & (icsez_._1) .nti, &
	    (icsez_._1) .ntf, & (icsez_._1) .ny, & (icsez_._1) .nea, & (icsez_._1) .itmx, &
	    (icsez_._1) .nex, & (icsez_._1) .nob, & (icsez_._1) .ntob, & (icsez_._1) .ntobi, &
	    (icsez_._1) .nitu, & (icsez_._1) .ndtu);

    if (*ind <= 0) {
	return 0;
    }


    icse2_(ind, nu, &u[1], co, &g[1], icsef, icsec2, icsei, &dtv[ly0], &dtv[
	    ltob], &dtv[lobs], &dtv[lob], &dtv[lytot], &dtv[lf], &dtv[lb], &
	    dtv[lfy], &dtv[lfu], &itv[lipv2], &itv[litob], &dtv[lcof], &dtv[
	    lytob], &dtv[lc2y], &dtv[ly0u], &dtv[ldmy], &dtv[lsmy], &dtv[
	    loldmu], &dtv[ly], &dtv[loldp], &dtv[lp], &dtv[lp0], &dtv[lgt], &
	    dtv[lyob], &dtv[ld], &itv[litu], &dtv[ldtu], & (icsez_._1) .t0, &
	    (icsez_._1) .tf, & (icsez_._1) .dti, & (icsez_._1) .dtf, & (icsez_._1) .ermx, (icsez_._1) .iu,
	     & (icsez_._1) .nuc, & (icsez_._1) .nuv, & (icsez_._1) .ilin, & (icsez_._1) .nti, &
	    (icsez_._1) .ntf, & (icsez_._1) .ny, & (icsez_._1) .nea, & (icsez_._1) .itmx, &
	    (icsez_._1) .nex, & (icsez_._1) .nob, & (icsez_._1) .ntob, & (icsez_._1) .ntobi, &
	    (icsez_._1) .nitu, & (icsez_._1) .ndtu);
    i__1 = *nu;
    for (i__ = 1; i__ <= i__1; ++i__) {
	g[i__] = dtv[lech + i__ - 1] * g[i__];
	u[i__] = dtv[ludep + i__ - 1];
 
    }
    return 0;

 


 

}  

  int icse0_(nu, t0, tf, dti, dtf, ermx, iu, nuc, nuv, ilin, 
	nti, ntf, ny, nea, itmx, nex, nob, ntob, ntobi, nitu, ndtu, nitv, 
	nrtv, ndtv)
integer *nu;
doublereal *t0, *tf, *dti, *dtf, *ermx;
integer *iu, *nuc, *nuv, *ilin, *nti, *ntf, *ny, *nea, *itmx, *nex, *nob, *
	ntob, *ntobi, *nitu, *ndtu, *nitv, *nrtv, *ndtv;
{
    extern   int icse_();
    static integer i__;
    static doublereal zz;
    static integer ind;


 
 


     
    --iu;

     
    (icsez_._2) .t00 = *t0;
    (icsez_._2) .tf0 = *tf;
    (icsez_._2) .dti0 = *dti;
    (icsez_._2) .dtf0 = *dtf;
    (icsez_._2) .ermx0 = *ermx;
    for (i__ = 1; i__ <= 5; ++i__) {
 
	(icsez_._2) .iu0[i__ - 1] = iu[i__];
    }
    (icsez_._2) .nuc0 = *nuc;
    (icsez_._2) .nuv0 = *nuv;
    (icsez_._2) .ilin0 = *ilin;
    (icsez_._2) .nti0 = *nti;
    (icsez_._2) .ntf0 = *ntf;
    (icsez_._2) .ny0 = *ny;
    (icsez_._2) .nea0 = *nea;
    (icsez_._2) .itmx0 = *itmx;
    (icsez_._2) .nex0 = *nex;
    (icsez_._2) .nob0 = *nob;
    (icsez_._2) .ntob0 = *ntob;
    (icsez_._2) .ntobi0 = *ntobi;
    (icsez_._2) .nitu0 = *nitu;
    (icsez_._2) .ndtu0 = *ndtu;
    (nird_._2) .nitv0 = 0;
    (nird_._2) .nrtv0 = 0;
    (nird_._2) .ndtv0 = 0;
    ind = 0;
    icse_(&ind, nu, &zz, &zz, &zz, &zz, &zz, &zz, &zz, &zz, &zz);
    *nitv = (( 1 ) >= ( (nird_._2) .nitv0 ) ? ( 1 ) : ( (nird_._2) .nitv0 )) ;
    *nrtv = (( 1 ) >= ( (nird_._2) .nrtv0 ) ? ( 1 ) : ( (nird_._2) .nrtv0 )) ;
    *ndtv = (( 1 ) >= ( (nird_._2) .ndtv0 ) ? ( 1 ) : ( (nird_._2) .ndtv0 )) ;
    return 0;
}  

 
  int icse1_(ind, nu, u, icsef, y0, ytot, f, b, fy, fu, ipv1, 
	dm, yold, smold, yint, yerr, dif1, dif2, dif3, itu, dtu, t0, tf, dti, 
	dtf, ermx, iu, nuc, nuv, ilin, nti, ntf, ny, nea, itmx, nex, nob, 
	ntob, ntobi, nitu, ndtu)
integer *ind, *nu;
doublereal *u;
  int (*icsef) ();
doublereal *y0, *ytot, *f, *b, *fy, *fu;
integer *ipv1;
doublereal *dm, *yold, *smold, *yint, *yerr, *dif1, *dif2, *dif3;
integer *itu;
doublereal *dtu, *t0, *tf, *dti, *dtf, *ermx;
integer *iu, *nuc, *nuv, *ilin, *nti, *ntf, *ny, *nea, *itmx, *nex, *nob, *
	ntob, *ntobi, *nitu, *ndtu;
{
     
    integer ytot_dim1, ytot_offset, fy_dim1, fy_offset, fu_dim1, fu_offset, 
	    dm_dim1, dm_offset, i__1, i__2, i__3;
    doublereal d__1;

     
    integer s_wsle(), do_lio(), e_wsle();

     
    static integer indf, info;
    static doublereal told;
    extern doublereal dnrm2_();
    extern   int dgefa_();
    static integer i__, j;
    static doublereal t;
    extern   int dscal_(), dgesl_(), dcopy_();
    static doublereal dtinv;
    extern   int daxpy_();
    static doublereal dt;
    static integer it, kt;
    static doublereal err;
    static integer luv;
    extern   int dadd_();

     
    static cilist io___2357 = { 0, 6, 0, 0, 0 };



 


 

     
    --u;
    --iu;
    --dif3;
    --dif2;
    --dif1;
    --yerr;
    --yint;
    --smold;
    --yold;
    dm_dim1 = *ny;
    dm_offset = dm_dim1 + 1;
    dm -= dm_offset;
    --ipv1;
    fu_dim1 = *ny;
    fu_offset = fu_dim1 + 1;
    fu -= fu_offset;
    fy_dim1 = *ny;
    fy_offset = fy_dim1 + 1;
    fy -= fy_offset;
    --b;
    --f;
    ytot_dim1 = *ny;
    ytot_offset = ytot_dim1 + 1;
    ytot -= ytot_offset;
    --y0;
    --itu;
    --dtu;

     
    t = *t0;
    dcopy_(ny, &y0[1], &c__1, &yold[1], &c__1);

 
 

    i__1 = *nti + *ntf;
    for (kt = 1; kt <= i__1; ++kt) {

 
 
 
 
 
 
 

 
 
 

 

 
	i__2 = *nu, i__3 = *nuc + 1 + (kt - 1) * *nuv;
	luv = (( i__2 ) <= ( i__3 ) ? ( i__2 ) : ( i__3 )) ;
	told = t;

 

	if (kt <= *nti) {
	    t = kt * *dti + *t0;
	    dt = *dti;
	} else {
	    t = *nti * *dti + (kt - *nti) * *dtf + *t0;
	    dt = *dtf;
	}
	dtinv = 1. / dt;

 
 
 

 
 
 
 

	if (kt == 1 || kt == *nti + 1 || *ilin <= 1) {
	    indf = 2;
	    if (kt == 1 || *ilin <= 1) {
		(*icsef)(&indf, &told, &yold[1], &u[1], &u[luv], &f[1], &fy[
			fy_offset], &fu[fu_offset], &b[1], &itu[1], &dtu[1], 
			t0, tf, dti, dtf, ermx, &iu[1], nuc, nuv, ilin, nti, 
			ntf, ny, nea, itmx, nex, nob, ntob, ntobi, nitu, ndtu)
			;
	    }
	    if (indf <= 0) {
		*ind = indf;
		return 0;
	    }
	    i__2 = *ny;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		i__3 = *ny;
		for (j = 1; j <= i__3; ++j) {
 
		    dm[i__ + j * dm_dim1] = -fy[i__ + j * fy_dim1] / 2.;
		}
	    }
	    i__3 = *ny;
	    for (i__ = *nea + 1; i__ <= i__3; ++i__) {
 
		dm[i__ + i__ * dm_dim1] += dtinv;
	    }
	    dgefa_(&dm[dm_offset], ny, ny, &ipv1[1], &info);
	}

 
 

	it = 1;

 
 
 
 
 

 
 
 

	if (kt == 1) {
	    indf = 1;
	    (*icsef)(&indf, &told, &yold[1], &u[1], &u[luv], &smold[1], &fy[
		    fy_offset], &fu[fu_offset], &b[1], &itu[1], &dtu[1], t0, 
		    tf, dti, dtf, ermx, &iu[1], nuc, nuv, ilin, nti, ntf, ny, 
		    nea, itmx, nex, nob, ntob, ntobi, nitu, ndtu);
	    if (indf <= 0) {
		*ind = indf;
		return 0;
	    }
	}

 

	if (*nea > 0) {
	    i__3 = *nea;
	    for (i__ = 1; i__ <= i__3; ++i__) {
 
		smold[i__] = 0.;
	    }
	}
	dcopy_(ny, &smold[1], &c__1, &dif1[1], &c__1);
	dscal_(ny, &dt, &dif1[1], &c__1);

 

 

 
	i__3 = *nu, i__2 = *nuc + 1 + kt * *nuv;
	luv = (( i__3 ) <= ( i__2 ) ? ( i__3 ) : ( i__2 )) ;
	dcopy_(ny, &yold[1], &c__1, &yint[1], &c__1);
	dadd_(ny, &dif1[1], &c__1, &yint[1], &c__1);
	indf = 1;
	(*icsef)(&indf, &t, &yint[1], &u[1], &u[luv], &dif2[1], &fy[fy_offset]
		, &fu[fu_offset], &b[1], &itu[1], &dtu[1], t0, tf, dti, dtf, 
		ermx, &iu[1], nuc, nuv, ilin, nti, ntf, ny, nea, itmx, nex, 
		nob, ntob, ntobi, nitu, ndtu);
	if (indf <= 0) {
	    *ind = indf;
	    return 0;
	}

 

	dadd_(ny, &smold[1], &c__1, &dif2[1], &c__1);
	dscal_(ny, &c_b806, &dif2[1], &c__1);

 

	d__1 = -dtinv;
	daxpy_(ny, &d__1, &dif1[1], &c__1, &dif2[1], &c__1);

 
 

	dcopy_(ny, &dif1[1], &c__1, &dif3[1], &c__1);

 

L50:
	dgesl_(&dm[dm_offset], ny, ny, &ipv1[1], &dif2[1], &c__0);

 

	dadd_(ny, &dif2[1], &c__1, &dif3[1], &c__1);

 
 
 
 

 

	dcopy_(ny, &yold[1], &c__1, &yerr[1], &c__1);
	dadd_(ny, &dif3[1], &c__1, &yerr[1], &c__1);

 
 
 
	if (*ermx < 0.) {
	    goto L55;
	}

	indf = 1;
	(*icsef)(&indf, &t, &yerr[1], &u[1], &u[luv], &dif1[1], &fy[fy_offset]
		, &fu[fu_offset], &b[1], &itu[1], &dtu[1], t0, tf, dti, dtf, 
		ermx, &iu[1], nuc, nuv, ilin, nti, ntf, ny, nea, itmx, nex, 
		nob, ntob, ntobi, nitu, ndtu);
	if (indf <= 0) {
	    *ind = indf;
	    return 0;
	}

 

	dcopy_(ny, &dif1[1], &c__1, &dif2[1], &c__1);

 

	dadd_(ny, &smold[1], &c__1, &dif2[1], &c__1);
	dscal_(ny, &c_b806, &dif2[1], &c__1);

 

	i__3 = *ny - *nea;
	d__1 = -dtinv;
	daxpy_(&i__3, &d__1, &dif3[*nea + 1], &c__1, &dif2[*nea + 1], &c__1);

 

	err = dnrm2_(ny, &dif2[1], &c__1);

 
 

	if (err > *ermx && *ilin == 0) {
	    ++it;
	    if (it > *itmx) {
		*ind = -1;
		s_wsle(&io___2357);
		do_lio(&c__9, &c__1, " icse : integration de l etat impossible", 40L);
		e_wsle();
		return 0;
	    }
	    goto L50;
	}

 
 
 

L55:
	dcopy_(ny, &yerr[1], &c__1, &yold[1], &c__1);
	dcopy_(ny, &yold[1], &c__1, &ytot[kt * ytot_dim1 + 1], &c__1);

 
 
 

	dcopy_(ny, &dif1[1], &c__1, &smold[1], &c__1);

 

 
    }
    return 0;
}  

 
  int icse2_(ind, nu, u, co, g, icsef, icsec2, icsei, y0, tob, 
	obs, ob, ytot, f, b, fy, fu, ipv2, itob, cof, ytob, c2y, y0u, dmy, 
	smy, oldmu, y, oldp, p, p0, gt, yob, d__, itu, dtu, t0, tf, dti, dtf, 
	ermx, iu, nuc, nuv, ilin, nti, ntf, ny, nea, itmx, nex, nob, ntob, 
	ntobi, nitu, ndtu, nomf, nomc, nomi, nomf_len, nomc_len, nomi_len)
integer *ind, *nu;
doublereal *u, *co, *g;
  int (*icsef) (), (*icsec2) (), (*icsei) ();
doublereal *y0, *tob, *obs, *ob, *ytot, *f, *b, *fy, *fu;
integer *ipv2, *itob;
doublereal *cof, *ytob, *c2y, *y0u, *dmy, *smy, *oldmu, *y, *oldp, *p, *p0, *
	gt, *yob, *d__;
integer *itu;
doublereal *dtu, *t0, *tf, *dti, *dtf, *ermx;
integer *iu, *nuc, *nuv, *ilin, *nti, *ntf, *ny, *nea, *itmx, *nex, *nob, *
	ntob, *ntobi, *nitu, *ndtu;
char *nomf, *nomc, *nomi;
ftnlen nomf_len;
ftnlen nomc_len;
ftnlen nomi_len;
{
     
    integer obs_dim1, obs_offset, ob_dim1, ob_dim2, ob_offset, ytot_dim1, 
	    ytot_offset, fy_dim1, fy_offset, fu_dim1, fu_offset, cof_dim1, 
	    cof_offset, ytob_dim1, ytob_offset, c2y_dim1, c2y_offset, 
	    y0u_dim1, y0u_offset, dmy_dim1, dmy_offset, smy_dim1, smy_offset, 
	    oldmu_dim1, oldmu_offset, yob_dim1, yob_offset, i__1, i__2;

     
    static integer indc, indf, indi;
    extern   int dset_();
    static integer ktob, info;
    extern   int dgefa_();
    static integer i__, j;
    static doublereal t;
    extern   int dscal_(), dgesl_(), dcopy_(), dmmul_();
    static doublereal dt2new, dt;
    static integer kt;
    static doublereal dt2;
    static integer lui, nui, luv;
    extern   int dadd_();


 
 



 

     
    --gt;
    --g;
    --u;
    --iu;
    --p0;
    --p;
    --oldp;
    --y;
    oldmu_dim1 = *ny;
    oldmu_offset = oldmu_dim1 + 1;
    oldmu -= oldmu_offset;
    smy_dim1 = *ny;
    smy_offset = smy_dim1 + 1;
    smy -= smy_offset;
    dmy_dim1 = *ny;
    dmy_offset = dmy_dim1 + 1;
    dmy -= dmy_offset;
    y0u_dim1 = *ny;
    y0u_offset = y0u_dim1 + 1;
    y0u -= y0u_offset;
    --ipv2;
    fu_dim1 = *ny;
    fu_offset = fu_dim1 + 1;
    fu -= fu_offset;
    fy_dim1 = *ny;
    fy_offset = fy_dim1 + 1;
    fy -= fy_offset;
    --b;
    --f;
    ytot_dim1 = *ny;
    ytot_offset = ytot_dim1 + 1;
    ytot -= ytot_offset;
    --y0;
    --d__;
    obs_dim1 = *nob;
    obs_offset = obs_dim1 + 1;
    obs -= obs_offset;
    yob_dim1 = *nob;
    yob_offset = yob_dim1 + 1;
    yob -= yob_offset;
    c2y_dim1 = *ny;
    c2y_offset = c2y_dim1 + 1;
    c2y -= c2y_offset;
    ytob_dim1 = *ny;
    ytob_offset = ytob_dim1 + 1;
    ytob -= ytob_offset;
    cof_dim1 = *nob;
    cof_offset = cof_dim1 + 1;
    cof -= cof_offset;
    --itob;
    ob_dim1 = *nex;
    ob_dim2 = *ntob;
    ob_offset = ob_dim1 * (ob_dim2 + 1) + 1;
    ob -= ob_offset;
    --tob;
    --itu;
    --dtu;

     
    dset_(nu, &c_b61, &g[1], &c__1);
    dset_(ny, &c_b61, &p[1], &c__1);
    kt = *nti + *ntf;
    ktob = *ntob;
 
    if (iu[2] > 0) {
 
	i__1 = *nu, i__2 = *nuc + 1;
	lui = (( i__1 ) <= ( i__2 ) ? ( i__1 ) : ( i__2 )) ;
    }
    if (iu[1] > 0) {
	lui = 1;
    }
    nui = iu[1] * *nuc + iu[2] * *nuv * (*nti + *ntf + 1);


 
 
 

    i__1 = *ntobi;
    for (j = 1; j <= i__1; ++j) {
 
	itob[j] = (integer) ((tob[j] - *t0) / *dti + .5);
    }
    if (*ntobi < *ntob) {
	itob[*ntobi + 1] = *nti + (integer) ((tob[*ntobi + 1] - *t0 - *nti * *
		dti) / *dtf + .5);
    }
    if (*ntobi + 1 < *ntob) {
	i__1 = *ntob;
	for (j = *ntobi + 2; j <= i__1; ++j) {
 
	    itob[j] = itob[*ntobi + 1] + (integer) ((tob[j] - tob[*ntobi + 1])
		     / *dtf + .5);
	}
    }

 
 

    i__1 = *ntob;
    for (j = 1; j <= i__1; ++j) {
	i__2 = *ny;
	for (i__ = 1; i__ <= i__2; ++i__) {
 
	    dcopy_(ny, &ytot[itob[j] * ytot_dim1 + 1], &c__1, &ytob[j * 
		    ytob_dim1 + 1], &c__1);
	}
    }

 
 
 

    if (*ind != 3) {
	indc = 1;
	(*icsec2)(&indc, nu, &tob[1], &obs[obs_offset], &cof[cof_offset], &
		ytob[ytob_offset], &ob[ob_offset], &u[1], co, &c2y[c2y_offset]
		, &g[1], &yob[yob_offset], &d__[1], &itu[1], &dtu[1], t0, tf, 
		dti, dtf, ermx, &iu[1], nuc, nuv, ilin, nti, ntf, ny, nea, 
		itmx, nex, nob, ntob, ntobi, nitu, ndtu, nomf, nomc, nomi, 6L,
		 6L, 6L);
	if (indc <= 0) {
	    *ind = indc;
	    return 0;
	}
    }
    if (*ind == 2) {
	return 0;
    }

 
 
 
 

    indc = 2;
    (*icsec2)(&indc, nu, &tob[1], &obs[obs_offset], &cof[cof_offset], &ytob[
	    ytob_offset], &ob[ob_offset], &u[1], co, &c2y[c2y_offset], &g[1], 
	    &yob[yob_offset], &d__[1], &itu[1], &dtu[1], t0, tf, dti, dtf, 
	    ermx, &iu[1], nuc, nuv, ilin, nti, ntf, ny, nea, itmx, nex, nob, 
	    ntob, ntobi, nitu, ndtu, nomf, nomc, nomi, 6L, 6L, 6L);
    if (indc <= 0) {
	*ind = indc;
	return 0;
    }

 
 

    for (kt = *nti + *ntf; kt >= 1; --kt) {

 
 
 
 
 
 
 

 
 
 
 
 
 

 

 

 

	dcopy_(ny, &p[1], &c__1, &oldp[1], &c__1);
 
	i__2 = *nu, i__1 = *nuc + 1 + kt * *nuv;
	luv = (( i__2 ) <= ( i__1 ) ? ( i__2 ) : ( i__1 )) ;

 
 

	dcopy_(ny, &ytot[kt * ytot_dim1 + 1], &c__1, &y[1], &c__1);

	if (kt < *nti) {
	    t = kt * *dti + *t0;
	    dt = *dti;
	} else {
	    t = *nti * *dti + (kt - *nti) * *dtf + *t0;
	    dt = *dtf;
	}
	dt2 = dt / 2.;
	if (kt != *nti) {
	    dt2new = dt2;
	} else {
	    dt2new = *dti / 2.;
	}

 
 
 
 


	if (*ilin <= 1) {
	    indf = 2;
	    (*icsef)(&indf, &t, &y[1], &u[1], &u[luv], &f[1], &fy[fy_offset], 
		    &fu[fu_offset], &b[1], &itu[1], &dtu[1], t0, tf, dti, dtf,
		     ermx, &iu[1], nuc, nuv, ilin, nti, ntf, ny, nea, itmx, 
		    nex, nob, ntob, ntobi, nitu, ndtu, nomf, nomc, nomi, 6L, 
		    6L, 6L);
	    if (indf <= 0) {
		*ind = indf;
		return 0;
	    }
	}

	if (kt != *nti + *ntf) {
	    if (*ilin <= 1 || kt == *nti + *ntf - 1 || kt == *nti - 1) {
		i__2 = *ny;
		for (i__ = 1; i__ <= i__2; ++i__) {
		    i__1 = *ny;
		    for (j = 1; j <= i__1; ++j) {
 
			smy[i__ + j * smy_dim1] = dt2 * fy[i__ + j * fy_dim1];
		    }
		}
		i__1 = *ny;
		for (i__ = 1; i__ <= i__1; ++i__) {
 
		    smy[i__ + i__ * smy_dim1] += 1.;
		}
	    }

 

	    if (*nea > 0) {
		i__1 = *nea;
		for (i__ = 1; i__ <= i__1; ++i__) {
 
		    p[i__] = 0.;
		}
	    }
	    dmmul_(&p[1], &c__1, &smy[smy_offset], ny, &p0[1], &c__1, &c__1, 
		    ny, ny);

	    dcopy_(ny, &p0[1], &c__1, &p[1], &c__1);
	}

 
 


	if (ktob > 0) {
	    if (kt == itob[ktob]) {
		i__1 = *ny;
		for (i__ = 1; i__ <= i__1; ++i__) {
 
		    p[i__] += c2y[i__ + ktob * c2y_dim1];
		}
		--ktob;
	    }
	}

 
 
 
 
 
 
 
 
 
 

	if (*ilin <= 1 || kt == *nti + *ntf || kt == *nti) {
	    i__1 = *ny;
	    for (i__ = 1; i__ <= i__1; ++i__) {
		i__2 = *ny;
		for (j = 1; j <= i__2; ++j) {
 
		    dmy[i__ + j * dmy_dim1] = -dt2new * fy[i__ + j * fy_dim1];
		}
	    }
	    i__2 = *ny;
	    for (i__ = *nea + 1; i__ <= i__2; ++i__) {
 
		dmy[i__ + i__ * dmy_dim1] += 1.;
	    }
	    dgefa_(&dmy[dmy_offset], ny, ny, &ipv2[1], &info);
	}

 
 

	dgesl_(&dmy[dmy_offset], ny, ny, &ipv2[1], &p[1], &c__1);

 
 
 

 
 
 

	if (*nuv > 0 || iu[3] == 1) {
	    indf = 3;
	    (*icsef)(&indf, &t, &y[1], &u[1], &u[luv], &f[1], &fy[fy_offset], 
		    &fu[fu_offset], &b[1], &itu[1], &dtu[1], t0, tf, dti, dtf,
		     ermx, &iu[1], nuc, nuv, ilin, nti, ntf, ny, nea, itmx, 
		    nex, nob, ntob, ntobi, nitu, ndtu, nomf, nomc, nomi, 6L, 
		    6L, 6L);
	    if (indf <= 0) {
		*ind = indf;
		return 0;
	    }
	    if (kt < *nti + *ntf) {
		i__2 = *nuc + *nuv;
		dmmul_(&oldp[1], &c__1, &oldmu[oldmu_offset], ny, &gt[1], &
			c__1, &c__1, ny, &i__2);
		i__2 = *nuc + *nuv;
		dscal_(&i__2, &dt2, &gt[1], &c__1);
 
		if (iu[3] > 0) {
		    dadd_(nuc, &gt[1], &c__1, &g[1], &c__1);
		}
		if (*nuv > 0) {
 
		    i__2 = *nu, i__1 = *nuc + 1 + (kt + 1) * *nuv;
		    luv = (( i__2 ) <= ( i__1 ) ? ( i__2 ) : ( i__1 )) ;
		    dadd_(nuv, &gt[*nuc + 1], &c__1, &g[luv], &c__1);
		}
		if (*nea > 0) {
		    i__2 = *nea;
		    for (i__ = 1; i__ <= i__2; ++i__) {
 
			oldp[i__] = 0.;
		    }
		}
		i__2 = *nuc + *nuv;
		dmmul_(&oldp[1], &c__1, &fu[fu_offset], ny, &gt[1], &c__1, &
			c__1, ny, &i__2);
		i__2 = *nuc + *nuv;
		dscal_(&i__2, &dt2, &gt[1], &c__1);
 
		if (iu[3] > 0) {
		    dadd_(nuc, &gt[1], &c__1, &g[1], &c__1);
		}
		if (*nuv > 0) {
 
		    i__2 = *nu, i__1 = *nuc + 1 + kt * *nuv;
		    luv = (( i__2 ) <= ( i__1 ) ? ( i__2 ) : ( i__1 )) ;
		    dadd_(nuv, &gt[*nuc + 1], &c__1, &g[luv], &c__1);
		}
	    }

 

	    i__2 = *ny * (*nuc + *nuv);
	    dcopy_(&i__2, &fu[fu_offset], &c__1, &oldmu[oldmu_offset], &c__1);

 

 

 
 
 

	    if (kt == 1) {
		t = *t0;
		dt2 = *dti / 2.;
		dcopy_(ny, &y0[1], &c__1, &y[1], &c__1);
		indf = 3;
		(*icsef)(&indf, &t, &y[1], &u[1], &u[luv], &f[1], &fy[
			fy_offset], &fu[fu_offset], &b[1], &itu[1], &dtu[1], 
			t0, tf, dti, dtf, ermx, &iu[1], nuc, nuv, ilin, nti, 
			ntf, ny, nea, itmx, nex, nob, ntob, ntobi, nitu, ndtu,
			 nomf, nomc, nomi, 6L, 6L, 6L);
		if (indf <= 0) {
		    *ind = indf;
		    return 0;
		}
		i__2 = *nuc + *nuv;
		dmmul_(&p[1], &c__1, &oldmu[oldmu_offset], ny, &gt[1], &c__1, 
			&c__1, ny, &i__2);
		i__2 = *nuc + *nuv;
		dscal_(&i__2, &dt2, &gt[1], &c__1);
 
		if (iu[3] > 0) {
		    dadd_(nuc, &gt[1], &c__1, &g[1], &c__1);
		}
		if (*nuv > 0) {
 
		    i__2 = *nu, i__1 = *nuc + 1 + *nuv;
		    luv = (( i__2 ) <= ( i__1 ) ? ( i__2 ) : ( i__1 )) ;
		    dadd_(nuv, &gt[*nuc + 1], &c__1, &g[luv], &c__1);
		}
		if (*nea > 0) {
		    i__2 = *nea;
		    for (i__ = 1; i__ <= i__2; ++i__) {
 
			p[i__] = 0.;
		    }
		}
		i__2 = *nuc + *nuv;
		dmmul_(&p[1], &c__1, &fu[fu_offset], ny, &gt[1], &c__1, &c__1,
			 ny, &i__2);
		i__2 = *nuc + *nuv;
		dscal_(&i__2, &dt2, &gt[1], &c__1);
 
		if (iu[3] > 0) {
		    dadd_(nuc, &gt[1], &c__1, &g[1], &c__1);
		}
		if (*nuv > 0) {
 
		    i__2 = *nu, i__1 = *nuc + 1;
		    luv = (( i__2 ) <= ( i__1 ) ? ( i__2 ) : ( i__1 )) ;
		    dadd_(nuv, &gt[*nuc + 1], &c__1, &g[luv], &c__1);
		}
	    }
	}
 
    }

 

    if ((( iu[1] ) >= ( iu[2] ) ? ( iu[1] ) : ( iu[2] ))  > 0) {

 

	indf = 2;
	(*icsef)(&indf, &t, &y[1], &u[1], &u[luv], &f[1], &fy[fy_offset], &fu[
		fu_offset], &b[1], &itu[1], &dtu[1], t0, tf, dti, dtf, ermx, &
		iu[1], nuc, nuv, ilin, nti, ntf, ny, nea, itmx, nex, nob, 
		ntob, ntobi, nitu, ndtu, nomf, nomc, nomi, 6L, 6L, 6L);
	if (indf == 0) {
	    *ind = indf;
	    return 0;
	}
	i__2 = *ny;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    i__1 = *ny;
	    for (j = 1; j <= i__1; ++j) {
 
		smy[i__ + j * smy_dim1] = dt2 * fy[i__ + j * fy_dim1];
	    }
	}
	i__1 = *ny;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    smy[i__ + i__ * smy_dim1] += 1.;
	}
	if (*nea > 0) {
	    i__1 = *nea;
	    for (i__ = 1; i__ <= i__1; ++i__) {
 
		p[i__] = 0.;
	    }
	}
	dmmul_(&p[1], &c__1, &smy[smy_offset], ny, &p0[1], &c__1, &c__1, ny, 
		ny);
 
	indi = 2;
	(*icsei)(&indi, &nui, &u[lui], &y0[1], &y0u[y0u_offset], &itu[1], &
		dtu[1], t0, tf, dti, dtf, ermx, &iu[1], nuc, nuv, ilin, nti, 
		ntf, ny, nea, itmx, nex, nob, ntob, ntobi, nitu, ndtu, nomf, 
		nomc, nomi, 6L, 6L, 6L);
	if (indi <= 0) {
	    *ind = indi;
	    return 0;
	}
	dmmul_(&p0[1], &c__1, &y0u[y0u_offset], ny, &gt[1], &c__1, &c__1, &
		nui, &nui);
	i__1 = nui;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    g[lui + i__ - 1] += gt[i__];
	}

    }
}  

  int icsec2_(indc, nu, tob, obs, cof, ytob, ob, u, c__, cy, g,
	 yob, d__, itu, dtu, t0, tf, dti, dtf, ermx, iu, nuc, nuv, ilin, nti, 
	ntf, ny, nea, itmx, nex, nob, ntob, ntobi, nitu, ndtu)
integer *indc, *nu;
doublereal *tob, *obs, *cof, *ytob, *ob, *u, *c__, *cy, *g, *yob, *d__;
integer *itu;
doublereal *dtu, *t0, *tf, *dti, *dtf, *ermx;
integer *iu, *nuc, *nuv, *ilin, *nti, *ntf, *ny, *nea, *itmx, *nex, *nob, *
	ntob, *ntobi, *nitu, *ndtu;
{
     
    integer obs_dim1, obs_offset, cof_dim1, cof_offset, ytob_dim1, 
	    ytob_offset, ob_dim1, ob_dim2, ob_offset, cy_dim1, cy_offset, 
	    yob_dim1, yob_offset, i__1, i__2, i__3;
    doublereal d__1;

     
    static integer i__, j, k;
    extern   int dmmul_();



 


 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 

     
    --g;
    --u;
    --iu;
    --d__;
    obs_dim1 = *nob;
    obs_offset = obs_dim1 + 1;
    obs -= obs_offset;
    yob_dim1 = *nob;
    yob_offset = yob_dim1 + 1;
    yob -= yob_offset;
    cy_dim1 = *ny;
    cy_offset = cy_dim1 + 1;
    cy -= cy_offset;
    ob_dim1 = *nex;
    ob_dim2 = *ntob;
    ob_offset = ob_dim1 * (ob_dim2 + 1) + 1;
    ob -= ob_offset;
    ytob_dim1 = *ny;
    ytob_offset = ytob_dim1 + 1;
    ytob -= ytob_offset;
    cof_dim1 = *nob;
    cof_offset = cof_dim1 + 1;
    cof -= cof_offset;
    --tob;
    --itu;
    --dtu;

     
    dmmul_(&obs[obs_offset], nob, &ytob[ytob_offset], ny, &yob[yob_offset], 
	    nob, nob, ny, ntob);
    if (*indc == 1) {
	*c__ = 0.;
	i__1 = *nob;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    i__2 = *ntob;
	    for (j = 1; j <= i__2; ++j) {
		i__3 = *nex;
		for (k = 1; k <= i__3; ++k) {
 
		    d__1 = yob[i__ + j * yob_dim1] - ob[k + (j + i__ * 
			    ob_dim2) * ob_dim1];
		    *c__ += cof[i__ + j * cof_dim1] * .5 * (d__1 * d__1);
 
		}
 
	    }
 
	}
    } else {
	i__1 = *ntob;
	for (j = 1; j <= i__1; ++j) {
	    i__2 = *nob;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		d__[i__] = 0.;
		i__3 = *nex;
		for (k = 1; k <= i__3; ++k) {
		    d__[i__] += cof[i__ + j * cof_dim1] * (yob[i__ + j * 
			    yob_dim1] - ob[k + (j + i__ * ob_dim2) * ob_dim1])
			    ;
 
		}
 
	    }
	    dmmul_(&d__[1], &c__1, &obs[obs_offset], nob, &cy[j * cy_dim1 + 1]
		    , &c__1, &c__1, nob, ny);
 
	}
    }
}  

  int icsei_(indi, nui, u, y0, y0u, itu, dtu, t0, tf, dti, dtf,
	 ermx, iu, nuc, nuv, ilin, nti, ntf, ny, nea, itmx, nex, nob, ntob, 
	ntobi, nitu, ndtu)
integer *indi, *nui;
doublereal *u, *y0, *y0u;
integer *itu;
doublereal *dtu, *t0, *tf, *dti, *dtf, *ermx;
integer *iu, *nuc, *nuv, *ilin, *nti, *ntf, *ny, *nea, *itmx, *nex, *nob, *
	ntob, *ntobi, *nitu, *ndtu;
{
     
    integer y0u_dim1, y0u_offset, i__1;

     
    extern   int dset_();
    static integer i__;


 
 
 

     
    --u;
    --iu;
    y0u_dim1 = *ny;
    y0u_offset = y0u_dim1 + 1;
    y0u -= y0u_offset;
    --y0;
    --itu;
    --dtu;

     
    if (*indi == 1) {
	i__1 = *ny;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    y0[i__] = u[i__];
 
	}
    }

    if (*indi == 2) {
 
	i__1 = *ny * *nui;
	dset_(&i__1, &c_b61, &y0u[y0u_offset], &c__1);
	i__1 = *ny;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    y0u[i__ + i__ * y0u_dim1] = 1.;
 
	}
    }
}  

  int majour_(hm, hd, dd, n, hno, ir, indic, eps)
doublereal *hm, *hd, *dd;
integer *n;
doublereal *hno;
integer *ir, *indic;
doublereal *eps;
{
     
    integer i__1, i__2;
    doublereal d__1;

     
    static doublereal honm, b;
    static integer i__, j;
    static doublereal r__, y;
    static integer iplus;
    static doublereal gm;
    static integer ll, mm, np;
    static doublereal del, hml, hon;

     
    --hm;
    --dd;
    --hd;

     
    if (*n == 1) {
	goto L100;
    }

    np = *n + 1;
    if (*hno > 0.) {
	goto L99;
    }

    if (*hno == 0.) {
	goto L999;
    }
    if (*ir == 0) {
	goto L999;
    }
    hon = 1. / *hno;
    ll = 1;
    if (*indic == 0) {
	goto L1;
    }

    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (hm[ll] == 0.) {
	    goto L2;
	}
 
	d__1 = dd[i__];
	hon += d__1 * d__1 / hm[ll];
L2:
	ll = ll + np - i__;
    }
    goto L3;

L1:
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	dd[i__] = hd[i__];
 
    }
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	iplus = i__ + 1;
	del = dd[i__];
	if (hm[ll] > 0.) {
	    goto L6;
	}
	dd[i__] = 0.;
	ll = ll + np - i__;
	goto L5;
L6:
 
	d__1 = del;
	hon += d__1 * d__1 / hm[ll];
	if (i__ == *n) {
	    goto L7;
	}
	i__2 = *n;
	for (j = iplus; j <= i__2; ++j) {
	    ++ll;
 
	    dd[j] -= del * hm[ll];
	}
L7:
	++ll;
L5:
	;
    }

L3:
    if (*ir <= 0) {
	goto L9;
    }
    if (hon > 0.) {
	goto L10;
    }
    if (*indic - 1 <= 0) {
	goto L99;
    } else {
	goto L11;
    }
L9:
    hon = 0.;
    *ir = -(*ir) - 1;
    goto L11;
L10:
    hon = *eps / *hno;
    if (*eps == 0.) {
	--(*ir);
    }
L11:
    mm = 1;
    honm = hon;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	j = np - i__;
	ll -= i__;
	if (hm[ll] != 0.) {
 
	    d__1 = dd[j];
	    honm = hon - d__1 * d__1 / hm[ll];
	}
	dd[j] = hon;
 
	hon = honm;
    }
    goto L13;

L99:
    mm = 0;
    honm = 1. / *hno;
L13:
    ll = 1;

    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	iplus = i__ + 1;
	del = hd[i__];
	if (hm[ll] > 0.) {
	    goto L14;
	}
	if (*ir > 0) {
	    goto L15;
	}
	if (*hno < 0.) {
	    goto L15;
	}
	if (del == 0.) {
	    goto L15;
	}
	*ir = 1 - *ir;
 
	d__1 = del;
	hm[ll] = d__1 * d__1 / honm;
	if (i__ == *n) {
	    goto L999;
	}
	i__2 = *n;
	for (j = iplus; j <= i__2; ++j) {
	    ++ll;
 
	    hm[ll] = hd[j] / del;
	}
	goto L999;
L15:
	hon = honm;
	ll = ll + np - i__;
	goto L98;
L14:
	hml = del / hm[ll];
	if (mm <= 0) {
	    goto L17;
	} else {
	    goto L18;
	}
L17:
	hon = honm + del * hml;
	goto L19;
L18:
	hon = dd[i__];
L19:
	r__ = hon / honm;
	hm[ll] *= r__;
	if (r__ == 0.) {
	    goto L20;
	}
	if (i__ == *n) {
	    goto L20;
	}
	b = hml / hon;
	if (r__ > 4.) {
	    goto L21;
	}
	i__2 = *n;
	for (j = iplus; j <= i__2; ++j) {
	    ++ll;
	    hd[j] -= del * hm[ll];
 
	    hm[ll] += b * hd[j];
	}
	goto L23;
L21:
	gm = honm / hon;
	i__2 = *n;
	for (j = iplus; j <= i__2; ++j) {
	    ++ll;
	    y = hm[ll];
	    hm[ll] = b * hd[j] + y * gm;
 
	    hd[j] -= del * y;
	}
L23:
	honm = hon;
	++ll;
L98:
	;
    }

L20:
    if (*ir < 0) {
	*ir = -(*ir);
    }
    goto L999;
L100:
 
    d__1 = hd[1];
    hm[1] += *hno * (d__1 * d__1);
    *ir = 1;
    if (hm[1] > 0.) {
	goto L999;
    }
    hm[1] = 0.;
    *ir = 0;
L999:
    return 0;
}  

  int majysa_(n, nt, np, y, s, ys, lb, g, x, g1, x1, index, 
	ialg, nb)
integer *n, *nt, *np;
doublereal *y, *s, *ys;
integer *lb;
doublereal *g, *x, *g1, *x1;
integer *index, *ialg, *nb;
{
     
    integer y_dim1, y_offset, s_dim1, s_offset, i__1;

     
    static integer i__, ij;


 

 
     
    --index;
    --x1;
    --g1;
    --x;
    --g;
    --ys;
    s_dim1 = *nt;
    s_offset = s_dim1 + 1;
    s -= s_offset;
    y_dim1 = *nt;
    y_offset = y_dim1 + 1;
    y -= y_offset;
    --ialg;

     
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	y[*lb + i__ * y_dim1] = g[i__] - g1[i__];
	s[*lb + i__ * s_dim1] = x[i__] - x1[i__];
 
    }
    ys[*lb] = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	ys[*lb] += y[*lb + i__ * y_dim1] * s[*lb + i__ * s_dim1];
 
    }

 
    if (ialg[8] == 5 && *np > 0) {
	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    y[i__ * y_dim1 + 1] += y[*lb + i__ * y_dim1];
	    s[i__ * s_dim1 + 1] += s[*lb + i__ * s_dim1];
 
	}
	ys[1] = 0.;
	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    ys[1] += y[i__ * y_dim1 + 1] * s[i__ * s_dim1 + 1];
	}
    }


 
    if (*np < *nt) {
	++(*np);
	index[*lb] = *np;
    } else {
	ij = *lb;
	i__1 = *nt;
	for (i__ = *nb; i__ <= i__1; ++i__) {
	    ++ij;
	    if (ij > *nt) {
		ij = *nb;
	    }
	    index[i__] = ij;
 
	}
    }

 
    if (*lb == *nt) {
	*lb = *nb;
    } else {
	++(*lb);
    }

 
    return 0;
}  

  int majz_(n, np, nt, y, s, z__, ys, zs, diag, index)
integer *n, *np, *nt;
doublereal *y, *s, *z__, *ys, *zs, *diag;
integer *index;
{
     
    integer y_dim1, y_offset, s_dim1, s_offset, z_dim1, z_offset, i__1, i__2, 
	    i__3;

     
    static integer i__, j, l, jj, jl;
    static doublereal psy, psz;


 
 

 
 


     
    --diag;
    --index;
    --zs;
    --ys;
    z_dim1 = *nt;
    z_offset = z_dim1 + 1;
    z__ -= z_offset;
    s_dim1 = *nt;
    s_offset = s_dim1 + 1;
    s -= s_offset;
    y_dim1 = *nt;
    y_offset = y_dim1 + 1;
    y -= y_offset;

     
    l = index[1];
    i__1 = *n;
    for (jj = 1; jj <= i__1; ++jj) {
	z__[l + jj * z_dim1] = diag[jj] * s[l + jj * s_dim1];
 
    }

    zs[l] = 0.;
    i__1 = *n;
    for (jj = 1; jj <= i__1; ++jj) {
	zs[l] += z__[l + jj * z_dim1] * s[l + jj * s_dim1];
 
    }


    if (*np == 1) {
	return 0;
    }

    i__1 = *np;
    for (i__ = 2; i__ <= i__1; ++i__) {
	l = index[i__];
	i__2 = *n;
	for (jj = 1; jj <= i__2; ++jj) {
	    z__[l + jj * z_dim1] = diag[jj] * s[l + jj * s_dim1];
 
	}
	i__2 = i__ - 1;
	for (j = 1; j <= i__2; ++j) {
	    psy = 0.;
	    psz = 0.;
	    jl = index[j];
	    i__3 = *n;
	    for (jj = 1; jj <= i__3; ++jj) {
		psy += y[jl + jj * y_dim1] * s[l + jj * s_dim1];
		psz += z__[jl + jj * z_dim1] * s[l + jj * s_dim1];
 
	    }
	    i__3 = *n;
	    for (jj = 1; jj <= i__3; ++jj) {
		z__[l + jj * z_dim1] = z__[l + jj * z_dim1] + psy * y[jl + jj 
			* y_dim1] / ys[jl] - psz * z__[jl + jj * z_dim1] / zs[
			jl];
 
	    }
 
	}

	zs[l] = 0.;
	i__2 = *n;
	for (jj = 1; jj <= i__2; ++jj) {
	    zs[l] += z__[l + jj * z_dim1] * s[l + jj * s_dim1];
 
	}
 
    }

    return 0;
}  

  int n1fc1_(simul, prosca, n, xn, fn, g, dxmin, df1, epsf, 
	zero, imp, io, mode, iter, nsim, memax, iz, rz, dz, izs, rzs, dzs)
  int (*simul) (), (*prosca) ();
integer *n;
doublereal *xn, *fn, *g, *dxmin, *df1, *epsf, *zero;
integer *imp, *io, *mode, *iter, *nsim, *memax, *iz;
doublereal *rz, *dz;
integer *izs;
real *rzs;
doublereal *dzs;
{
     
    static char fmt_1001[] = "(\002 n1fc1   appel incoherent\002)";
    static char fmt_1000[] = "(\002 entree dans n1fc1. n=\002,i4,\002  memax=\002,i3/\002  dimensions minimales\002,2x,\002iz(\002,i4,\002)    rz(\002,i6,\002)    dz(\002,i6,\002)\002/)";

     
    integer i__1;

     
    integer s_wsfe(), e_wsfe(), do_fio();

     
    static integer nanc, nxga, naps, ntot, i__;
    extern   int n1fc1a_();
    static integer na, ne, nq, nr, ns, nx, ny, npoids, nw1, nw2, ngd, nic, 
	    nal, ngg, njc, nsa, ndz, nrr, niz, nrz;

     
    static cilist io___2400 = { 0, 0, 0, fmt_1001, 0 };
    static cilist io___2424 = { 0, 0, 0, fmt_1000, 0 };
     
    --g;
    --xn;
    --iz;
    --rz;
    --dz;
    --izs;
    --rzs;
    --dzs;

     
    if (*n > 0 && *df1 > 0. && *epsf >= 0. && *zero >= 0. && *iter >= 0 && *
	    nsim >= 0 && *memax >= 1 && *dxmin > 0.) {
	goto L10;
    }
    *mode = 2;
    io___2400.ciunit = *io;
    s_wsfe(&io___2400);
    e_wsfe();
    goto L999;
L10:
    ns = 1;
    ngd = ns + *n;
    nx = ngd + *n;
    nsa = nx + *n;
    ngg = nsa + *n;
    nal = ngg + *n;
    naps = nal + *memax;
    nanc = naps + *memax;
    npoids = nanc + *memax;
    nq = npoids + *memax;
    njc = 1;
    nic = njc + *memax + 1;
    nr = 1;
    na = nr + (*memax + 1) * (*memax + 1);
    ne = na + *memax + 1;
    nrr = ne + *memax + 1;
    nxga = nrr + *memax + 1;
    ny = nxga + *memax + 1;
    nw1 = ny + *memax + 1;
    nw2 = nw1 + *memax + 1;

    niz = *memax + 1 << 1;
    nrz = nq + *n * *memax - 1;
    ndz = nw2 + *memax;
    if (*imp > 0) {
	io___2424.ciunit = *io;
	s_wsfe(&io___2424);
	do_fio(&c__1, (char *)&(*n), (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*memax), (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&niz, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&nrz, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&ndz, (ftnlen)sizeof(integer));
	e_wsfe();
    }
    i__1 = niz;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	iz[i__] = 0;
    }
    i__1 = nrz;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	rz[i__] = 0.;
    }
    i__1 = ndz;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	dz[i__] = 0.;
    }
    n1fc1a_(simul, prosca, n, mode, &xn[1], fn, &g[1], df1, epsf, dxmin, imp, 
	    zero, io, &ntot, iter, nsim, memax, &rz[ns], &rz[ngd], &rz[nx], &
	    rz[nsa], &rz[ngg], &rz[nal], &rz[naps], &rz[nanc], &rz[npoids], &
	    rz[nq], &iz[njc], &iz[nic], &dz[nr], &dz[na], &dz[ne], &dz[nrr], &
	    dz[nxga], &dz[ny], &dz[nw1], &dz[nw2], &izs[1], &rzs[1], &dzs[1]);
    iz[1] = ntot;
L999:
    return 0;
}  

  int n1fc1a_(simul, prosca, n, mode, xn, fn, g, df0, eps0, dx,
	 imp, zero, io, ntot, iter, nsim, memax, s, gd, x, sa, gg, al, aps, 
	anc, poids, q, jc, ic, r__, a, e, rr, xga, y, w1, w2, izs, rzs, dzs)
  int (*simul) (), (*prosca) ();
integer *n, *mode;
doublereal *xn, *fn, *g, *df0, *eps0, *dx;
integer *imp;
doublereal *zero;
integer *io, *ntot, *iter, *nsim, *memax;
doublereal *s, *gd, *x, *sa, *gg, *al, *aps, *anc, *poids, *q;
integer *jc, *ic;
doublereal *r__, *a, *e, *rr, *xga, *y, *w1, *w2;
integer *izs;
real *rzs;
doublereal *dzs;
{
     
    static char fmt_1000[] = "(\002 n1fc1   iter  nsim\002,6x,\002fn\002,11x,\002eps\002,7x,\002s2\002,9x,\002u\002,5x,\002nv\002)";
    static char fmt_1002[] = "(/\002 n1fc1\002,\002    tableau des poids\002/(\002 n1fc1\002,3x,7d10.3))";
    static char fmt_1004[] = "(\002 n1fc1\002,i7,i5,d16.7,\002   convergence a\002,d10.3,\002 pres\002,\002  (\002,d9.2,\002)\002)";
    static char fmt_1005[] = "(\002 n1fc1\002,i7,i5,d16.7,\002   faisceau reduit a\002,i3,\002 gradients\002)";
    static char fmt_1006[] = "(/\002 n1fc1    fin sur nsim\002)";
    static char fmt_1007[] = "(\002 n1fc1\002,3x,i4,i5,2x,d14.7,3d10.2,i3)";
    static char fmt_1009[] = "(\002 n1fc1\002,10x,\002logic=\002,i2,4x,\002ro=\002,d10.3,4x,\002tps=\002,d10.3,4x,\002tnc=\002,d10.3)";
    static char fmt_1010[] = "(\002 n1fc1\002,12x,\002diam2=\002,d10.3,4x,\002eta2=\002,d10.3,4x,\002ap=\002,d10.3)";
    static char fmt_1011[] = "(/\002 n1fc1    la direction ne pivote plus\002)";
    static char fmt_1012[] = "(/\002 n1fc1    fin sur iter =\002,i4)";
    static char fmt_1013[] = "(/\002 n1fc1    fin anormale de fprf2\002)";
    static char fmt_1014[] = "(/\002 n1fc1    fin sur dxmin\002)";
    static char fmt_1015[] = "(/\002 n1fc1  attention on bute sur tmax, reduire l'echelle\002)";
    static char fmt_1016[] = "(/\002 n1fc1    fin normale\002)";
    static char fmt_1017[] = "(1x)";
    static char fmt_1018[] = "(/\002 n1fc1    fin sur indic=0\002)";

     
    integer i__1, i__2;
    doublereal d__1, d__2, d__3;

     
    integer s_wsfe(), e_wsfe(), do_fio();
    double sqrt();

     
    static doublereal alfa, beta, epsm, tmin, tmax, diam2;
    extern   int frdf1_(), fprf2_(), nlis2_();
    static doublereal f;
    static integer i__, k, j, iflag;
    static doublereal u;
    static integer indic, kgrad;
    static doublereal z__;
    static integer logic, itmax, itimp;
    static doublereal ajust, s2, s3;
    extern   int ffinf1_();
    static doublereal z1, z2;
    static integer logic2;
    extern   int fremf1_();
    static integer memax1;
    static doublereal fa, df, ap;
    static integer nk, mm;
    static doublereal ro;
    static integer nv, napmax, nt1;
    static doublereal s3n, roa;
    static integer nta;
    static doublereal eps, fpn, tnc;
    static integer nki;
    static doublereal tol, tps, eta2;

     
    static cilist io___2444 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___2445 = { 0, 0, 0, fmt_1012, 0 };
    static cilist io___2452 = { 0, 0, 0, fmt_1013, 0 };
    static cilist io___2456 = { 0, 0, 0, fmt_1004, 0 };
    static cilist io___2457 = { 0, 0, 0, fmt_1016, 0 };
    static cilist io___2459 = { 0, 0, 0, fmt_1017, 0 };
    static cilist io___2460 = { 0, 0, 0, fmt_1007, 0 };
    static cilist io___2461 = { 0, 0, 0, fmt_1002, 0 };
    static cilist io___2463 = { 0, 0, 0, fmt_1011, 0 };
    static cilist io___2473 = { 0, 0, 0, fmt_1014, 0 };
    static cilist io___2474 = { 0, 0, 0, fmt_1006, 0 };
    static cilist io___2475 = { 0, 0, 0, fmt_1018, 0 };
    static cilist io___2476 = { 0, 0, 0, fmt_1015, 0 };
    static cilist io___2478 = { 0, 0, 0, fmt_1010, 0 };
    static cilist io___2480 = { 0, 0, 0, fmt_1005, 0 };
    static cilist io___2481 = { 0, 0, 0, fmt_1009, 0 };


 

 

     
    --gg;
    --sa;
    --x;
    --gd;
    --s;
    --g;
    --xn;
    --poids;
    --anc;
    --aps;
    --al;
    --q;
    --jc;
    --ic;
    --r__;
    --a;
    --e;
    --rr;
    --xga;
    --y;
    --w1;
    --w2;
    --izs;
    --rzs;
    --dzs;

     
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    itmax = *iter;
    *iter = 0;
    itimp = 0;
    napmax = *nsim;
    *nsim = 1;
    logic = 1;
    logic2 = 0;
    tmax = 1e20;
    eps = *df0;
    epsm = eps;
    df = *df0;
    *mode = 1;
    *ntot = 0;
    iflag = 0;

 
 

    aps[1] = 0.;
    anc[1] = 0.;
    poids[1] = 0.;
    nta = 0;
    kgrad = 1;
    memax1 = *memax + 1;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	q[i__] = -g[i__];
    }
    (*prosca)(n, &g[1], &g[1], &diam2, &izs[1], &rzs[1], &dzs[1]);
    diam2 = *df0 * 100. * *df0 / diam2;
    eta2 = *eps0 * .01 * *eps0 / diam2;
    ap = *zero * *df0 / diam2;
    if (*imp > 2) {
	io___2444.ciunit = *io;
	s_wsfe(&io___2444);
	e_wsfe();
    }

 

L100:
    ++(*iter);
    ++itimp;
    if (*iter < itmax) {
	goto L110;
    }
    if (*imp > 0) {
	io___2445.ciunit = *io;
	s_wsfe(&io___2445);
	do_fio(&c__1, (char *)&(*iter), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    *mode = 4;
    goto L900;
L110:
    ++(*ntot);
    if (logic == 3) {
	ro *= sqrt(s2);
    }
    if (itimp != -(*imp)) {
	goto L200;
    }
    itimp = 0;
    indic = 1;
    (*simul)(&indic, n, &xn[1], &f, &g[1], &izs[1], &rzs[1], &dzs[1]);

 

L200:
    eps = (( eps ) <= ( epsm ) ? ( eps ) : ( epsm )) ;
    eps = (( eps ) >= ( *eps0 ) ? ( eps ) : ( *eps0 )) ;
    fremf1_(prosca, &iflag, n, ntot, &nta, &memax1, &q[1], &poids[1], &e[1], &
	    a[1], &r__[1], &izs[1], &rzs[1], &dzs[1]);
    fprf2_(&iflag, ntot, &nv, io, zero, &s2, &eps, &al[1], imp, &u, &eta2, &
	    memax1, &jc[1], &ic[1], &r__[1], &a[1], &e[1], &rr[1], &xga[1], &
	    y[1], &w1[1], &w2[1]);

 

    if (iflag == 0) {
	goto L250;
    }
    if (*imp > 0) {
	io___2452.ciunit = *io;
	s_wsfe(&io___2452);
	e_wsfe();
    }
    *mode = 7;
    goto L900;
L250:
    nta = *ntot;
    ffinf1_(n, &nv, &jc[1], &xga[1], &q[1], &s[1]);
    u = (( u ) >= ( 0. ) ? ( u ) : ( 0. )) ;
    s2 = (( s2 ) >= ( 0. ) ? ( s2 ) : ( 0. )) ;

 

    if (s2 > eta2) {
	goto L300;
    }

 
    z__ = 0.;
    i__1 = nv;
    for (k = 1; k <= i__1; ++k) {
	j = jc[k] - 1;
	if (j > 0) {
	    z__ += xga[k] * poids[j];
	}
 
    }
    epsm = (( epsm ) <= ( z__ ) ? ( epsm ) : ( z__ )) ;
    if (*imp >= 2) {
	io___2456.ciunit = *io;
	s_wsfe(&io___2456);
	do_fio(&c__1, (char *)&(*iter), (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*nsim), (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*fn), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&epsm, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&s2, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    if (epsm > *eps0) {
	goto L270;
    }
    *mode = 1;
    if (*imp > 0) {
	io___2457.ciunit = *io;
	s_wsfe(&io___2457);
	e_wsfe();
    }
    goto L900;

 
L270:
 
    d__1 = epsm * .1;
    epsm = (( d__1 ) >= ( *eps0 ) ? ( d__1 ) : ( *eps0 )) ;
    eps = epsm;
    if (logic == 3) {
	tol = eps * .01;
    }
    iflag = 2;
    goto L200;

 
 

L300:
    if (*imp > 3) {
	io___2459.ciunit = *io;
	s_wsfe(&io___2459);
	e_wsfe();
    }
    if (*imp > 2) {
	io___2460.ciunit = *io;
	s_wsfe(&io___2460);
	do_fio(&c__1, (char *)&(*iter), (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*nsim), (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*fn), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&eps, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&s2, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&u, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&nv, (ftnlen)sizeof(integer));
	e_wsfe();
    }
    if (*imp >= 6) {
	io___2461.ciunit = *io;
	s_wsfe(&io___2461);
	i__1 = *ntot;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    do_fio(&c__1, (char *)&poids[i__], (ftnlen)sizeof(doublereal));
	}
	e_wsfe();
    }
 
    if (logic != 3) {
	goto L350;
    }
    z__ = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	z1 = s[i__] - sa[i__];
 
	z__ += z1 * z1;
    }
    if (z__ > *zero * 10. * *zero * s2) {
	goto L350;
    }
    if (*imp > 0) {
	io___2463.ciunit = *io;
	s_wsfe(&io___2463);
	e_wsfe();
    }
    *mode = 8;
    goto L900;

 

L350:
    iflag = 3;
    s3 = s2 + u * eps;
    if (logic == 3) {
	goto L365;
    }
    ro = df * 2. / s3;
    tol = eps * .01;
    goto L370;
L365:
    ro /= sqrt(s2);
 
    d__1 = tol * .6, d__2 = *eps0 * .01;
    tol = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
L370:
    fa = *fn;
    alfa = .2;
    beta = .1;
    fpn = -s3;
    if (*memax == 1) {
	tol = 0.;
    }
 
    tmin = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
 
	d__2 = tmin, d__3 = (d__1 = s[i__] / *dx, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	tmin = (( d__2 ) >= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
    }
    tmin = 1. / tmin;
    if (*iter == 1) {
	roa = ro;
    }
    nlis2_(simul, prosca, n, &xn[1], fn, &fpn, &ro, &tmin, &tmax, &s[1], &s2, 
	    &g[1], &gd[1], &alfa, &beta, imp, io, &logic, nsim, &napmax, &x[1]
	    , &tol, &ap, &tps, &tnc, &gg[1], &izs[1], &rzs[1], &dzs[1]);
    if (logic == 0 || logic == 2 || logic == 3) {
	goto L380;
    }
 
    if (*imp <= 0) {
	goto L375;
    }
    if (logic == 6 || logic < 0) {
	io___2473.ciunit = *io;
	s_wsfe(&io___2473);
	e_wsfe();
    }
    if (logic == 4) {
	io___2474.ciunit = *io;
	s_wsfe(&io___2474);
	e_wsfe();
    }
    if (logic == 5) {
	io___2475.ciunit = *io;
	s_wsfe(&io___2475);
	e_wsfe();
    }
    if (logic == 1) {
	io___2476.ciunit = *io;
	s_wsfe(&io___2476);
	e_wsfe();
    }
L375:
    if (logic == 1) {
	*mode = 3;
    }
    if (logic == 4) {
	*mode = 5;
    }
    if (logic == 5) {
	*mode = 0;
    }
    if (logic == 6) {
	*mode = 6;
    }
    if (logic < 0) {
	*mode = logic;
    }
    goto L900;
L380:
    if (logic != 3) {
	goto L385;
    }
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	sa[i__] = s[i__];
    }
L385:
    if (*iter > 1) {
	goto L390;
    }

 
    if (logic == 0) {
	tps = *fn - fa - ro * fpn;
    }
    ap = *zero * *zero * (( tps ) >= 0 ? ( tps ) : -( tps ))  / (s2 * ro * ro);
    ajust = ro / roa;
    if (logic != 3) {
	diam2 = diam2 * ajust * ajust;
    }
    if (logic != 3) {
	eta2 /= ajust * ajust;
    }
    if (*imp >= 2) {
	io___2478.ciunit = *io;
	s_wsfe(&io___2478);
	do_fio(&c__1, (char *)&diam2, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&eta2, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&ap, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
L390:
    mm = *memax - 1;
    if (logic == 2) {
	mm = *memax - 2;
    }
    if (*ntot <= mm) {
	goto L400;
    }

 

    frdf1_(prosca, n, ntot, &mm, &kgrad, &al[1], &q[1], &s[1], &poids[1], &
	    aps[1], &anc[1], &memax1, &r__[1], &e[1], &ic[1], &izs[1], &rzs[1]
	    , &dzs[1]);
    iflag = 1;
    nta = *ntot;
    if (*imp >= 2) {
	io___2480.ciunit = *io;
	s_wsfe(&io___2480);
	do_fio(&c__1, (char *)&(*iter), (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*nsim), (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*fn), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&(*ntot), (ftnlen)sizeof(integer));
	e_wsfe();
    }

L400:
    if (*imp >= 5) {
	io___2481.ciunit = *io;
	s_wsfe(&io___2481);
	do_fio(&c__1, (char *)&logic, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&ro, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&tps, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&tnc, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    if (logic == 3) {
	goto L500;
    }

 

    iflag = (( iflag ) <= ( 2 ) ? ( iflag ) : ( 2 )) ;
    df = fa - *fn;
    if (*ntot == 0) {
	goto L500;
    }

 

    s3n = ro * sqrt(s2);
    i__1 = *ntot;
    for (k = 1; k <= i__1; ++k) {
	nk = (k - 1) * *n;
	z__ = 0.;
	i__2 = *n;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    nki = nk + i__;
 

 
	    z__ += q[nki] * s[i__];
	}
	y[k] = z__;
	z1 = (d__1 = aps[k] + (-df + ro * z__), (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	z2 = anc[k] + s3n;
 
	d__1 = z1, d__2 = ap * z2 * z2;
	poids[k] = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	aps[k] = z1;
	anc[k] = z2;
 
    }

 

    eps = ro * s3;
    kgrad = *ntot + 1;

 

L500:
    nt1 = *ntot + 1;
    if (logic == 3) {
	goto L510;
    }
    aps[nt1] = 0.;
    anc[nt1] = 0.;
    poids[nt1] = 0.;
    goto L520;
L510:
    aps[nt1] = tps;
    anc[nt1] = sqrt(tnc);
 
    d__1 = tps, d__2 = ap * tnc;
    poids[nt1] = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
L520:
    nk = *ntot * *n;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	nki = nk + i__;
 
	q[nki] = -g[i__];
    }

 
    if (logic != 2) {
	goto L550;
    }
    ++(*ntot);
    logic = 3;
    logic2 = 1;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	g[i__] = gd[i__];
    }
    goto L390;
L550:
    logic -= logic2;
    logic2 = 0;
    goto L100;

 

L900:
    if (*iter <= 1) {
	goto L990;
    }
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	g[i__] = -s[i__];
    }
L990:
    return 0;
}  

  int n1gc2_(simul, prosca, n, x, f, g, dxmin, df1, epsrel, 
	imp, io, mode, niter, nsim, rz, nrz, izs, rzs, dzs)
  int (*simul) (), (*prosca) ();
integer *n;
doublereal *x, *f, *g, *dxmin, *df1, *epsrel;
integer *imp, *io, *mode, *niter, *nsim;
doublereal *rz;
integer *nrz, *izs;
real *rzs;
doublereal *dzs;
{
     
    static char fmt_1[] = "(\002 entree dans n1gc2:\002,6x,\002dimension du probleme \002,i3/2x,\002nrz=\002,i4,4x,\002niter=\002,i3,4x,\002nsim=\002,i4,4x,\002imp=\002,i3/2x,\002epsrel=\002,d8.2,4x,\002df1=\002,d8.2,4x,\002dxmin=\002,d8.2)";
    static char fmt_3[] = "(/,\002 n1gc2   appel incoherent\002)";
    static char fmt_2[] = "(/,\002 n1gc2   rz insuffisamment dimensionne\002)"
	    ;
    static char fmt_4[] = "(/,\002 n1gc2   fin sur dxmin\002)";
    static char fmt_5[] = "(/,\002 sortie de n1gc2\002,7x,\002norme de g =\002,d15.9/9x,\002niter=\002,i4,4x,\002nsim=\002,i5)";

     
    integer s_wsfe(), do_fio(), e_wsfe();

     
    static integer memh, iaux;
    extern   int n1gc2a_();
    static integer id, ig, ih, ix;

     
    static cilist io___2487 = { 0, 0, 0, fmt_1, 0 };
    static cilist io___2488 = { 0, 0, 0, fmt_3, 0 };
    static cilist io___2495 = { 0, 0, 0, fmt_2, 0 };
    static cilist io___2496 = { 0, 0, 0, fmt_4, 0 };
    static cilist io___2497 = { 0, 0, 0, fmt_5, 0 };


 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 


     
    --g;
    --x;
    --rz;
    --izs;
    --rzs;
    --dzs;

     
    if (*imp > 0) {
	io___2487.ciunit = *io;
	s_wsfe(&io___2487);
	do_fio(&c__1, (char *)&(*n), (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*nrz), (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*niter), (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*nsim), (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*imp), (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*epsrel), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&(*df1), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&(*dxmin), (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    if (*n <= 0 || *niter <= 0 || *nsim <= 0 || *dxmin <= 0. || *df1 <= 0. || 
	    *epsrel <= 0. || *epsrel > 1.) {
	*mode = 2;
	if (*imp > 0) {
	    io___2488.ciunit = *io;
	    s_wsfe(&io___2488);
	    e_wsfe();
	}
	return 0;
    }

 
    id = 1;
    ix = id + *n;
    ig = ix + *n;
    iaux = ig + *n;
    ih = iaux + *n;

 
    memh = *nrz - (*n << 2);

    if (memh <= 0) {
	*mode = 3;
	goto L100;
    } else {
    }

 
    n1gc2a_(simul, prosca, n, &x[1], f, &g[1], dxmin, df1, epsrel, imp, io, 
	    niter, nsim, mode, &memh, &rz[id], &rz[ix], &rz[ig], &rz[iaux], &
	    rz[ih], &izs[1], &rzs[1], &dzs[1]);

L100:
    if (*imp > 0) {
	if (*mode == 3) {
	    io___2495.ciunit = *io;
	    s_wsfe(&io___2495);
	    e_wsfe();
	} else if (*mode == 6) {
	    io___2496.ciunit = *io;
	    s_wsfe(&io___2496);
	    e_wsfe();
	} else {
	    io___2497.ciunit = *io;
	    s_wsfe(&io___2497);
	    do_fio(&c__1, (char *)&(*epsrel), (ftnlen)sizeof(doublereal));
	    do_fio(&c__1, (char *)&(*niter), (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&(*nsim), (ftnlen)sizeof(integer));
	    e_wsfe();
	}
    }
    return 0;
}  

  int n1gc2a_(simul, prosca, n, x, f, g, dx, df1, eps, imp, io,
	 niter, nsim, info, memh, d__, xx, gg, tabaux, h__, izs, rzs, dzs)
  int (*simul) (), (*prosca) ();
integer *n;
doublereal *x, *f, *g, *dx, *df1, *eps;
integer *imp, *io, *niter, *nsim, *info, *memh;
doublereal *d__, *xx, *gg, *tabaux, *h__;
integer *izs;
real *rzs;
doublereal *dzs;
{
     
    static char fmt_1[] = "(\002     methode de quasi-newton. nrz utile=\002,i7)";
    static char fmt_2[] = "(\002     methode du gradient conjugue avec\002,i3,\002 mises a jour.\002,\002 nrz utile=\002,i7)";
    static char fmt_6003[] = "()";
    static char fmt_6002[] = "(4x,\002 n1gc2\002,3x,i4,\002 iters\002,3x,i4,\002 simuls\002,\002 necessite d'un redemarrage total\002)";
    static char fmt_6001[] = "(4x,\002 n1gc2\002,3x,i4,\002 iters\002,3x,i4,\002 simuls\002,3x,\002f=\002,d15.9)";
    static char fmt_10101[] = "(\002 n1gc2a   erreur dans la hessienne   dg=\002,d9.2)";

     
    integer i__1, i__2;
    doublereal d__1;

     
    integer s_wsfe(), do_fio(), e_wsfe();
    double sqrt();

     
    static integer ieta, iter, i__, j, k, m;
    extern   int n1gc2b_();
    static integer l;
    static doublereal alpha, omega;
    static logical redem;
    static doublereal sigma;
    static logical termi;
    static doublereal normg;
    extern   int fmulb1_();
    static doublereal normg0;
    extern   int fmuls1_();
    static logical gc;
    static doublereal dg;
    static integer kj, lk, is, iu;
    static doublereal mu, gcarre, ggcarr, nu, sscaek, sscalg, uscalg;
    static integer nmisaj;
    static logical redfor;
    static doublereal dg1;
    static integer memuti;
    static logical intfor, iterqn;
    static integer ntotap, memsup, km1, kp1, retour, nrzuti;
    static doublereal eta;
    static integer inu;
    static doublereal aux1, aux2;

     
    static cilist io___2502 = { 0, 0, 0, fmt_1, 0 };
    static cilist io___2504 = { 0, 0, 0, fmt_2, 0 };
    static cilist io___2518 = { 0, 0, 0, fmt_6003, 0 };
    static cilist io___2519 = { 0, 0, 0, fmt_6002, 0 };
    static cilist io___2523 = { 0, 0, 0, fmt_6001, 0 };
    static cilist io___2546 = { 0, 0, 0, fmt_10101, 0 };



 
 
 


 
 
 

     
    --tabaux;
    --gg;
    --xx;
    --d__;
    --g;
    --x;
    --h__;
    --izs;
    --rzs;
    --dzs;

     
    memuti = *n * (*n + 1) / 2;

 
    memsup = (*n << 1) + 2;

    if (*memh >= memuti) {
	gc = (0) ;
	nrzuti = memuti + (*n << 2);
	if (*imp > 1) {
	    io___2502.ciunit = *io;
	    s_wsfe(&io___2502);
	    do_fio(&c__1, (char *)&nrzuti, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
    } else if (*memh < memsup) {
	*info = 3;
	return 0;
    } else {
	gc = (1) ;
 
	m = *memh / memsup;
 

	memuti = m * memsup;
	nrzuti = memuti + (*n << 2);
	if (*imp > 1) {
	    io___2504.ciunit = *io;
	    s_wsfe(&io___2504);
	    do_fio(&c__1, (char *)&m, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&nrzuti, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
    }

 
 
 

 
    iter = 0;
    ntotap = 1;

 
 
 

L3000:
    i__ = 0;
    nmisaj = 0;

 
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	d__[j] = -g[j];
 
    }

    (*prosca)(n, &g[1], &d__[1], &dg1, &izs[1], &rzs[1], &dzs[1]);
    normg0 = sqrt(((( dg1 ) >= 0 ? ( dg1 ) : -( dg1 )) ));
    if (iter == 1) {
	omega = *eps * normg0;
    }

 
 
 

L4000:
    if (iter == *niter) {
	*info = 4;
	goto L99999;
    }
    ++iter;
    ++i__;

 
    if (gc) {
	iterqn = i__ <= m && 2 <= i__;
    }

 
 
 

    if (iter == 2) {
	alpha = *df1 * 2. / (-dg1);
    } else if (gc) {
	if (i__ == 1) {
	    alpha = 1. / normg0;
	} else {
	    if (iterqn) {
		alpha = 1.;
	    } else {
		alpha = alpha * dg / dg1;
	    }
	}
    } else {
	alpha = 1.;
    }

 
 
 

    dg = dg1;
    intfor = gc && ! iterqn || ! gc && i__ == 1;
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	xx[j] = x[j];
	gg[j] = g[j];
 
    }
    n1gc2b_(n, simul, prosca, &xx[1], f, &dg, &alpha, &d__[1], &x[1], &g[1], 
	    imp, io, &retour, &ntotap, nsim, &intfor, dx, eps, &izs[1], &rzs[
	    1], &dzs[1]);

    if (*imp > 3) {
	io___2518.ciunit = *io;
	s_wsfe(&io___2518);
	e_wsfe();
    }
    if (retour == 4 || retour == 1 && i__ == 1) {
	*info = 6;
	return 0;
    } else if (retour == 1) {
	if (*imp > 1) {
	    io___2519.ciunit = *io;
	    s_wsfe(&io___2519);
	    do_fio(&c__1, (char *)&iter, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&ntotap, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	goto L3000;
    } else {
 
	if (i__ > 1 && gc) {
	    ggcarr = gcarre;
	}
	(*prosca)(n, &g[1], &g[1], &gcarre, &izs[1], &rzs[1], &dzs[1]);
	normg = sqrt(gcarre);
	if (*imp > 2) {
	    io___2523.ciunit = *io;
	    s_wsfe(&io___2523);
	    do_fio(&c__1, (char *)&iter, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&ntotap, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&(*f), (ftnlen)sizeof(doublereal));
	    e_wsfe();
	}
	if (retour == 2) {
	    *info = 0;
	    goto L99999;
	} else if (retour == 3) {
	    *info = 5;
	    goto L99999;
	}
    }

 
 
 

    termi = normg < omega;
    if (termi) {
	*info = 1;
	goto L99999;
    } else {
    }

 
 
 

 
    redfor = gc && (i__ == 1 || i__ == m + *n);
    if (redfor) {
	redem = (1) ;
    } else if (gc && ! iterqn) {
	(*prosca)(n, &g[1], &gg[1], &aux1, &izs[1], &rzs[1], &dzs[1]);
	redem = (( aux1 ) >= 0 ? ( aux1 ) : -( aux1 ))  > (d__1 = ggcarr * .2, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
    } else {
	redem = (0) ;
    }

 
 
 

 
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	d__[j] = alpha * d__[j];
	xx[j] = g[j] - gg[j];
 
    }
    if (redem) {
 
	i__ = 1;
	nmisaj = 1;
 
 
 
 
 
	inu = 1;
	ieta = inu + 1;
	iu = ieta;
	is = iu + *n;

	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    h__[iu + j] = xx[j];
	    h__[is + j] = d__[j];
 
	}
	(*prosca)(n, &xx[1], &xx[1], &nu, &izs[1], &rzs[1], &dzs[1]);
	h__[inu] = nu;
	(*prosca)(n, &d__[1], &xx[1], &eta, &izs[1], &rzs[1], &dzs[1]);
	h__[ieta] = eta;
 
 
	fmulb1_(n, &h__[1], &g[1], &xx[1], &tabaux[1], &nmisaj, prosca, &izs[
		1], &rzs[1], &dzs[1]);

    } else if (gc) {
 
 
	fmulb1_(n, &h__[1], &xx[1], &gg[1], &tabaux[1], &nmisaj, prosca, &izs[
		1], &rzs[1], &dzs[1]);
 
	(*prosca)(n, &xx[1], &gg[1], &nu, &izs[1], &rzs[1], &dzs[1]);
	(*prosca)(n, &d__[1], &xx[1], &eta, &izs[1], &rzs[1], &dzs[1]);
	(*prosca)(n, &d__[1], &g[1], &sscalg, &izs[1], &rzs[1], &dzs[1]);
	(*prosca)(n, &gg[1], &g[1], &uscalg, &izs[1], &rzs[1], &dzs[1]);
 
	sigma = (uscalg - (nu / eta + 1.) * sscalg) / eta;
	mu = sscalg / eta;
 
	fmulb1_(n, &h__[1], &g[1], &xx[1], &tabaux[1], &nmisaj, prosca, &izs[
		1], &rzs[1], &dzs[1]);
 
 
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    xx[j] = xx[j] - mu * gg[j] - sigma * d__[j];
 
	}

 
	if (iterqn) {
	    ++nmisaj;
 

	    inu += memsup;
	    ieta = inu + 1;
	    iu = ieta;
	    is = iu + *n;
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		h__[iu + j] = gg[j];
		h__[is + j] = d__[j];
 
	    }
	    h__[inu] = nu;
	    h__[ieta] = eta;
	}
 
    } else {
 
	(*prosca)(n, &d__[1], &xx[1], &eta, &izs[1], &rzs[1], &dzs[1]);
	if (i__ == 1) {
 

 
 
	    (*prosca)(n, &xx[1], &xx[1], &nu, &izs[1], &rzs[1], &dzs[1]);
 
	    kj = 1;
	    aux1 = eta / nu;
	    i__1 = *n;
	    for (k = 1; k <= i__1; ++k) {
		h__[kj] = aux1;
		++kj;
		kp1 = k + 1;
		if (*n >= kp1) {
		    i__2 = *n;
		    for (j = kp1; j <= i__2; ++j) {
			h__[kj] = 0.;
			++kj;
 
		    }
		}
		gg[k] = aux1 * xx[k];
 
	    }
	    nu = eta;
	} else {
	    fmuls1_(n, &h__[1], &xx[1], &gg[1]);
	    (*prosca)(n, &xx[1], &gg[1], &nu, &izs[1], &rzs[1], &dzs[1]);
	}
 

 
	aux1 = nu / eta + 1.;
	kj = 1;
	i__1 = *n;
	for (k = 1; k <= i__1; ++k) {
 
	    lk = k;
	    km1 = k - 1;
	    if (k >= 2) {
		i__2 = km1;
		for (l = 1; l <= i__2; ++l) {
		    tabaux[l] = h__[lk];
		    lk += *n - l;
 
		}
	    }
	    i__2 = *n;
	    for (l = k; l <= i__2; ++l) {
		tabaux[l] = h__[lk];
		++lk;
 
	    }

	    (*prosca)(n, &xx[1], &tabaux[1], &aux2, &izs[1], &rzs[1], &dzs[1])
		    ;
	    i__2 = *n;
	    for (l = 1; l <= i__2; ++l) {
		tabaux[l] = 0.;
 
	    }
	    tabaux[k] = 1.;
	    (*prosca)(n, &tabaux[1], &d__[1], &sscaek, &izs[1], &rzs[1], &dzs[
		    1]);
	    kj = k - *n;
	    i__2 = k;
	    for (j = 1; j <= i__2; ++j) {
		kj = kj + *n - j + 1;
		h__[kj] -= ((aux2 - aux1 * sscaek) * d__[j] + sscaek * gg[j]) 
			/ eta;
 
	    }
 
	}
    }

 
 
 

    if (gc) {
 
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    d__[j] = -xx[j];
 
	}

    } else {
 
 
	fmuls1_(n, &h__[1], &g[1], &d__[1]);
	i__1 = *n;
	for (j = 1; j <= i__1; ++j) {
	    d__[j] = -d__[j];
 
	}
    }

 
    (*prosca)(n, &d__[1], &g[1], &dg1, &izs[1], &rzs[1], &dzs[1]);
    if (dg1 >= 0.) {
	*info = 7;
	if (*imp > 1) {
	    io___2546.ciunit = *io;
	    s_wsfe(&io___2546);
	    do_fio(&c__1, (char *)&dg1, (ftnlen)sizeof(doublereal));
	    e_wsfe();
	}
	goto L99999;
    } else {
	goto L4000;
    }

 
L99999:
    *niter = iter;
    *nsim = ntotap;
    if (i__ == 0) {
	*eps = normg0;
    } else {
	*eps = normg;
    }
}  

  int n1gc2b_(n, simul, prosca, xinit, f, dg, alpha, d__, 
	xfinal, gfinal, imp, io, retour, ntotap, nsim, intfor, dx, eps, izs, 
	rzs, dzs)
integer *n;
  int (*simul) (), (*prosca) ();
doublereal *xinit, *f, *dg, *alpha, *d__, *xfinal, *gfinal;
integer *imp, *io, *retour, *ntotap, *nsim;
logical *intfor;
doublereal *dx, *eps;
integer *izs;
real *rzs;
doublereal *dzs;
{
     
    static char fmt_1[] = "(\002 n1gc2b\002,6x,\002  pas\002,d10.3,\002  dg=\002,d9.2)";
    static char fmt_1001[] = "(\002 n1gc2b    fin sur dx\002)";
    static char fmt_2001[] = "(\002 n1gc2b\002,20x,d10.3,\002  indic=\002,i3)"
	    ;
    static char fmt_2002[] = "(\002 n1gc2b\002,20x,d10.3,2d11.3)";

     
    integer i__1;
    doublereal d__1;

     
    integer s_wsfe(), do_fio(), e_wsfe();
    double sqrt();

     
    static doublereal bsup;
    static integer j, indic;
    static doublereal delta;
    static logical depas;
    static doublereal finit, ap, dp, at, fp;
    static logical encadr, accept, rfinie;
    static integer nappel;
    static logical maxpas;
    static doublereal dal, pas, aux1, aux2;

     
    static cilist io___2554 = { 0, 0, 0, fmt_1, 0 };
    static cilist io___2556 = { 0, 0, 0, fmt_1001, 0 };
    static cilist io___2559 = { 0, 0, 0, fmt_2001, 0 };
    static cilist io___2563 = { 0, 0, 0, fmt_2002, 0 };



 
 
 

 
     
    --gfinal;
    --xfinal;
    --d__;
    --xinit;
    --izs;
    --rzs;
    --dzs;

     
    depas = (0) ;
    bsup = 0.;
    finit = *f;
    nappel = 0;
    ap = 0.;
    fp = finit;
    dp = *dg;
    if (*imp > 3) {
	io___2554.ciunit = *io;
	s_wsfe(&io___2554);
	do_fio(&c__1, (char *)&(*alpha), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&(*dg), (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
 
    (*prosca)(n, &d__[1], &d__[1], &pas, &izs[1], &rzs[1], &dzs[1]);
    pas = sqrt(pas);
 
L1000:
    if (*alpha * pas <= *dx) {
	if (*imp > 3) {
	    io___2556.ciunit = *io;
	    s_wsfe(&io___2556);
	    e_wsfe();
	}
	*retour = 1;
	return 0;
    } else if (*ntotap == *nsim) {
	*retour = 3;
	return 0;
    } else {
    }
 
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	xfinal[j] = xinit[j] + *alpha * d__[j];
 
    }
 
    indic = 4;
    (*simul)(&indic, n, &xfinal[1], f, &gfinal[1], &izs[1], &rzs[1], &dzs[1]);
    ++nappel;
    ++(*ntotap);
    if (indic < 0) {
	depas = (1) ;
	if (*imp > 3) {
	    io___2559.ciunit = *io;
	    s_wsfe(&io___2559);
	    do_fio(&c__1, (char *)&(*alpha), (ftnlen)sizeof(doublereal));
	    do_fio(&c__1, (char *)&indic, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	delta = *alpha - ap;
	if (delta <= *dx) {
	    *retour = 4;
	    return 0;
	} else {
	    bsup = *alpha;
	    *alpha = delta * .1 + ap;
	    goto L1000;
	}
    }
 
    (*prosca)(n, &d__[1], &gfinal[1], &dal, &izs[1], &rzs[1], &dzs[1]);

    if (*imp > 3) {
	aux2 = *f - finit;
	io___2563.ciunit = *io;
	s_wsfe(&io___2563);
	do_fio(&c__1, (char *)&(*alpha), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&aux2, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&dal, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    if (indic == 0) {
	*retour = 2;
	return 0;
    }
    maxpas = *f > finit && dal < 0.;
    if (maxpas) {
	*alpha /= 3.;
	ap = 0.;
	fp = finit;
	dp = *dg;
	rfinie = (0) ;

    } else {
 
	aux1 = finit + *alpha * 1e-4 * *dg;
	aux2 = (d__1 = dal / *dg, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	accept = *f <= aux1 && aux2 <= .9;
	if (accept) {
 
	    rfinie = nappel > 1 || ! (*intfor) || aux2 <= *eps;
	} else {
	    rfinie = (0) ;
	}

	if (! rfinie) {
 
	    aux1 = dp + dal - (fp - *f) * 3. / (ap - *alpha);
	    aux2 = aux1 * aux1 - dp * dal;
	    if (aux2 <= 0.) {
		aux2 = 0.;
	    } else {
		aux2 = sqrt(aux2);
	    }
	    if (dal - dp + aux2 * 2. == 0.) {
		*retour = 4;
		return 0;
	    }
	    at = *alpha - (*alpha - ap) * (dal + aux2 - aux1) / (dal - dp + 
		    aux2 * 2.);
 
	    encadr = dal / dp <= 0.;
	    if (encadr) {
 
		if ((d__1 = *alpha - ap, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= *dx) {
		    *retour = 4;
		    return 0;
		}
		aux1 = (( *alpha ) <= ( ap ) ? ( *alpha ) : ( ap ))  * 1.01;
		aux2 = (( *alpha ) >= ( ap ) ? ( *alpha ) : ( ap ))  * .99;
		if (at < aux1 || at > aux2) {
		    at = (*alpha + ap) / 2.;
		}
	    } else {
 
		aux1 = (( ap ) <= ( *alpha ) ? ( ap ) : ( *alpha ))  * .99;
		if (dal <= 0. || at <= 0. || at >= aux1) {
		    aux1 = (( ap ) >= ( *alpha ) ? ( ap ) : ( *alpha ))  * 1.01;
		    if (dal > 0. || at <= aux1) {
			if (dal <= 0.) {
			    at = (( ap ) >= ( *alpha ) ? ( ap ) : ( *alpha ))  * 2.;
			} else {
			    at = (( ap ) <= ( *alpha ) ? ( ap ) : ( *alpha ))  / 2.;
			}
		    }
		}
	    }
	    if (depas && at >= bsup) {
		delta = bsup - *alpha;
		if (delta <= *dx) {
		    *retour = 4;
		    return 0;
		} else {
		    at = *alpha + delta * .1;
		}
	    }
	    ap = *alpha;
	    fp = *f;
	    dp = dal;
	    *alpha = at;
	}
    }
    if (rfinie) {
	*retour = 0;
	return 0;
    } else {
	goto L1000;
    }
}  

  int n1qn1_(simul, n, x, f, g, var, eps, mode, niter, nsim, 
	imp, lp, zm, izs, rzs, dzs)
  int (*simul) ();
integer *n;
doublereal *x, *f, *g, *var, *eps;
integer *mode, *niter, *nsim, *imp, *lp;
doublereal *zm;
integer *izs;
real *rzs;
doublereal *dzs;
{
     
    static char fmt_1000[] = "(\0021entree dans n1qn1. dimension du probleme\002,i4,\002,   de zm\002,i6)";
    static char fmt_1003[] = "(\002 mode\002,i2,\002   eps=\002,d10.2,\002   niter=\002,i4,\002 nsim=\002,i5,\002 imp=\002,i3)";
    static char fmt_1100[] = "(\002 sortie de n1qn1\002,\002. norme gradient carre =\002,d15.7)";

     
    integer s_wsfe(), do_fio(), e_wsfe();

     
    extern   int n1qn1a_();
    static integer nd, nw, nga, ngb, nxa, nxb;

     
    static cilist io___2571 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___2572 = { 0, 0, 0, fmt_1003, 0 };
    static cilist io___2578 = { 0, 0, 0, fmt_1100, 0 };
     
    --var;
    --g;
    --x;
    --zm;
    --izs;
    --rzs;
    --dzs;

     
 
 
 
    if (*imp <= 0) {
	goto L10;
    }
    nw = *n * (*n + 13) / 2;
    io___2571.ciunit = *lp;
    s_wsfe(&io___2571);
    do_fio(&c__1, (char *)&(*n), (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&nw, (ftnlen)sizeof(integer));
    e_wsfe();
    io___2572.ciunit = *lp;
    s_wsfe(&io___2572);
    do_fio(&c__1, (char *)&(*mode), (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&(*eps), (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&(*niter), (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&(*nsim), (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&(*imp), (ftnlen)sizeof(integer));
    e_wsfe();
L10:
    nd = *n * (*n + 1) / 2 + 1;
    nw = nd + *n;
    nxa = nw + *n;
    nga = nxa + *n;
    nxb = nga + *n;
    ngb = nxb + *n;
    n1qn1a_(simul, n, &x[1], f, &g[1], &var[1], eps, mode, niter, nsim, imp, 
	    lp, &zm[1], &zm[nd], &zm[nw], &zm[nxa], &zm[nga], &zm[nxb], &zm[
	    ngb], &izs[1], &rzs[1], &dzs[1]);
    if (*imp > 0) {
	io___2578.ciunit = *lp;
	s_wsfe(&io___2578);
	do_fio(&c__1, (char *)&(*eps), (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    return 0;
}  

  int n1qn1a_(simul, n, x, f, g, scale, acc, mode, niter, nsim,
	 iprint, lp, h__, d__, w, xa, ga, xb, gb, izs, rzs, dzs)
  int (*simul) ();
integer *n;
doublereal *x, *f, *g, *scale, *acc;
integer *mode, *niter, *nsim, *iprint, *lp;
doublereal *h__, *d__, *w, *xa, *ga, *xb, *gb;
integer *izs;
real *rzs;
doublereal *dzs;
{
     
    static char fmt_1000[] = "(\002 n1qn1 ne peut demarrer (contrainte implicite)\002)";
    static char fmt_1001[] = "(\002 n1qn1 termine par voeu de l'utilisateur\002)";
    static char fmt_1010[] = "(\002 n1qn1 remplace le hessien initial (qui n'est\002,\002 pas defini positif)\002/\002 par une diagonale positive\002)";
    static char fmt_1019[] = "(\002+\002,51x,\002deriv init =\002,d11.4)";
    static char fmt_1020[] = "(\002 n1qn1\002,i4,\002 iters\002,i6,\002 simuls\002,\002   f=\002,d15.7)";
    static char fmt_1021[] = "(\002 n1qn1\002,13x,\002pas\002,d12.5,\002  diff f =\002,d11.4,\002  deriv =\002,d11.4)";
    static char fmt_1022[] = "(\002 n1qn1\002,13x,\002pas\002,d12.5,\002  indic =\002,i2)";
    static char fmt_1023[] = "(\002 n1qn1 bute sur une contrainte implicite\002)";

     
    integer i__1, i__2, i__3;
    doublereal d__1, d__2, d__3, d__4;

     
    integer s_wsfe(), e_wsfe(), do_fio();
    double sqrt();

     
    static doublereal fmin, gmin;
    static integer nfun, isfv;
    static doublereal step, c__;
    static integer i__, j, k;
    static doublereal s;
    static integer indic;
    static doublereal v;
    static integer iecri, i1;
    static doublereal stmin, cc, fa, fb, hh;
    static integer ii, ij, ik, jk, ni, ip, ir, np;
    static doublereal stepbd, steplb;
    extern   int majour_();
    static doublereal gl1, gl2, dga, dgb, dff;
    static integer ial, nip, itr;

     
    static cilist io___2580 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___2581 = { 0, 0, 0, fmt_1001, 0 };
    static cilist io___2597 = { 0, 0, 0, fmt_1010, 0 };
    static cilist io___2612 = { 0, 0, 0, fmt_1020, 0 };
    static cilist io___2613 = { 0, 0, 0, fmt_1019, 0 };
    static cilist io___2615 = { 0, 0, 0, fmt_1001, 0 };
    static cilist io___2616 = { 0, 0, 0, fmt_1022, 0 };
    static cilist io___2617 = { 0, 0, 0, fmt_1023, 0 };
    static cilist io___2622 = { 0, 0, 0, fmt_1021, 0 };
    static cilist io___2623 = { 0, 0, 0, fmt_1020, 0 };
    static cilist io___2625 = { 0, 0, 0, fmt_1023, 0 };



 

     
    --gb;
    --xb;
    --ga;
    --xa;
    --w;
    --d__;
    --scale;
    --g;
    --x;
    --h__;
    --izs;
    --rzs;
    --dzs;

     
 
 
 
 
 
 
 
 
    indic = 4;
    (*simul)(&indic, n, &x[1], f, &g[1], &izs[1], &rzs[1], &dzs[1]);
    if (indic > 0) {
	goto L13;
    }
    if (*iprint == 0) {
	goto L12;
    }
    if (indic < 0) {
	io___2580.ciunit = *lp;
	s_wsfe(&io___2580);
	e_wsfe();
    }
    if (indic == 0) {
	io___2581.ciunit = *lp;
	s_wsfe(&io___2581);
	e_wsfe();
    }
L12:
    *acc = 0.;
    *niter = 1;
    *nsim = 1;
    return 0;
L13:
    nfun = 1;
    iecri = 0;
    itr = 0;
    np = *n + 1;
 
    if (*mode >= 2) {
	goto L60;
    }
L20:
    c__ = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
 
	d__2 = c__, d__3 = (d__1 = g[i__] * scale[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	c__ = (( d__2 ) >= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
    }
    if (c__ <= 0.) {
	c__ = 1.;
    }
    k = *n * np / 2;
    i__1 = k;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	h__[i__] = 0.;
    }
    k = 1;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	h__[k] = c__ * .01 / (scale[i__] * scale[i__]);
 
	k = k + np - i__;
    }
    goto L100;
 
L60:
    if (*mode >= 3) {
	goto L80;
    }
    k = *n;
    if (*n > 1) {
	goto L300;
    }
    if (h__[1] > 0.) {
	goto L305;
    }
    h__[1] = 0.;
    k = 0;
    goto L305;
L300:
    np = *n + 1;
    ii = 1;
    i__1 = *n;
    for (i__ = 2; i__ <= i__1; ++i__) {
	hh = h__[ii];
	ni = ii + np - i__;
	if (hh > 0.) {
	    goto L301;
	}
	h__[ii] = 0.;
	--k;
	ii = ni + 1;
	goto L304;
L301:
	ip = ii + 1;
	ii = ni + 1;
	jk = ii;
	i__2 = ni;
	for (ij = ip; ij <= i__2; ++ij) {
	    v = h__[ij] / hh;
	    i__3 = ni;
	    for (ik = ij; ik <= i__3; ++ik) {
		h__[jk] -= h__[ik] * v;
 
		++jk;
	    }
 
	    h__[ij] = v;
	}
L304:
	;
    }
    if (h__[ii] > 0.) {
	goto L305;
    }
    h__[ii] = 0.;
    --k;
L305:

    if (k >= *n) {
	goto L100;
    }
L70:
    if (*iprint != 0) {
	io___2597.ciunit = *lp;
	s_wsfe(&io___2597);
	e_wsfe();
    }
    goto L20;
 
L80:
    k = 1;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (h__[k] <= 0.) {
	    goto L70;
	}
 
	k = k + np - i__;
    }
 
L100:
    dff = 0.;
L110:
    fa = *f;
    isfv = 1;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	xa[i__] = x[i__];
 
	ga[i__] = g[i__];
    }
 
L130:
    ++itr;
    ial = 0;
    if (itr > *niter) {
	goto L250;
    }
    ++iecri;
    if (iecri != -(*iprint)) {
	goto L140;
    }
    iecri = 0;
    indic = 1;
    (*simul)(&indic, n, &x[1], f, &g[1], &izs[1], &rzs[1], &dzs[1]);
 
L140:
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	d__[i__] = -ga[i__];
    }
    w[1] = d__[1];
    if (*n > 1) {
	goto L400;
    }
    d__[1] /= h__[1];
    goto L412;
L400:
    i__1 = *n;
    for (i__ = 2; i__ <= i__1; ++i__) {
	ij = i__;
	i1 = i__ - 1;
	v = d__[i__];
	i__2 = i1;
	for (j = 1; j <= i__2; ++j) {
	    v -= h__[ij] * d__[j];
 
	    ij = ij + *n - j;
	}
	w[i__] = v;
 
	d__[i__] = v;
    }
    d__[*n] /= h__[ij];
    np = *n + 1;
    i__1 = *n;
    for (nip = 2; nip <= i__1; ++nip) {
	i__ = np - nip;
	ii = ij - nip;
	v = d__[i__] / h__[ii];
	ip = i__ + 1;
	ij = ii;
	i__2 = *n;
	for (j = ip; j <= i__2; ++j) {
	    ++ii;
 
	    v -= h__[ii] * d__[j];
	}
 
	d__[i__] = v;
    }
L412:
 
 
    c__ = 0.;
    dga = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	d__2 = c__, d__3 = (d__1 = d__[i__] / scale[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	c__ = (( d__2 ) >= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
 
	dga += ga[i__] * d__[i__];
    }
 
    if (dga >= 0.) {
	goto L240;
    }
 
    stmin = 0.;
    stepbd = 0.;
    steplb = *acc / c__;
    fmin = fa;
    gmin = dga;
    step = 1.;
    if (dff <= 0.) {
 
	d__1 = step, d__2 = 1. / c__;
	step = (( d__1 ) <= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    }
    if (dff > 0.) {
 
	d__1 = step, d__2 = (dff + dff) / (-dga);
	step = (( d__1 ) <= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    }
    if (*iprint >= 2) {
	io___2612.ciunit = *lp;
	s_wsfe(&io___2612);
	do_fio(&c__1, (char *)&itr, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&nfun, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&fa, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    if (*iprint >= 3) {
	io___2613.ciunit = *lp;
	s_wsfe(&io___2613);
	do_fio(&c__1, (char *)&dga, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
 
L170:
    c__ = stmin + step;
    if (nfun >= *nsim) {
	goto L250;
    }
    ++nfun;
 
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	xb[i__] = xa[i__] + c__ * d__[i__];
    }
    indic = 4;
    (*simul)(&indic, n, &xb[1], &fb, &gb[1], &izs[1], &rzs[1], &dzs[1]);
 
    if (indic > 0) {
	goto L185;
    }
    if (indic < 0) {
	goto L183;
    }
    if (*iprint > 0) {
	io___2615.ciunit = *lp;
	s_wsfe(&io___2615);
	e_wsfe();
    }
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	x[i__] = xb[i__];
 
	g[i__] = gb[i__];
    }
    goto L250;
L183:
    stepbd = step;
    ial = 1;
    step /= 10.;
    if (*iprint >= 3) {
	io___2616.ciunit = *lp;
	s_wsfe(&io___2616);
	do_fio(&c__1, (char *)&c__, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&indic, (ftnlen)sizeof(integer));
	e_wsfe();
    }
    if (stepbd > steplb) {
	goto L170;
    }
    if (*iprint != 0 && isfv < 2) {
	io___2617.ciunit = *lp;
	s_wsfe(&io___2617);
	e_wsfe();
    }
    goto L240;
 
L185:
    isfv = (( 2 ) <= ( isfv ) ? ( 2 ) : ( isfv )) ;
    if (fb > *f) {
	goto L220;
    }
    if (fb < *f) {
	goto L200;
    }
    gl1 = 0.;
    gl2 = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	d__1 = scale[i__] * g[i__];
	gl1 += d__1 * d__1;
 
 
	d__1 = scale[i__] * gb[i__];
	gl2 += d__1 * d__1;
    }
    if (gl2 >= gl1) {
	goto L220;
    }
L200:
    isfv = 3;
    *f = fb;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	x[i__] = xb[i__];
 
	g[i__] = gb[i__];
    }
 
L220:
    dgb = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	dgb += gb[i__] * d__[i__];
    }
    if (*iprint < 3) {
	goto L231;
    }
    s = fb - fa;
    io___2622.ciunit = *lp;
    s_wsfe(&io___2622);
    do_fio(&c__1, (char *)&c__, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&s, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&dgb, (ftnlen)sizeof(doublereal));
    e_wsfe();
 
L231:
    if (fb - fa <= c__ * .1 * dga) {
	goto L280;
    }
    ial = 0;
 
    if (step > steplb) {
	goto L270;
    }
L240:
    if (isfv >= 2) {
	goto L110;
    }
 
L250:
    if (*iprint > 0) {
	io___2623.ciunit = *lp;
	s_wsfe(&io___2623);
	do_fio(&c__1, (char *)&itr, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&nfun, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*f), (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    *acc = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	*acc += g[i__] * g[i__];
    }
    *niter = itr;
    *nsim = nfun;
    return 0;
 
L270:
    stepbd = step;
    c__ = gmin + dgb - (fb - fmin) * 3. / step;
    cc = (( c__ ) >= 0 ? ( c__ ) : -( c__ ))  - gmin * (dgb / (( c__ ) >= 0 ? ( c__ ) : -( c__ )) );
    cc = sqrt(((( c__ ) >= 0 ? ( c__ ) : -( c__ )) )) * sqrt(((( 0. ) >= ( cc ) ? ( 0. ) : ( cc )) ));
    c__ = (c__ - gmin + cc) / (dgb - gmin + cc + cc);
    step *= (( .1 ) >= ( c__ ) ? ( .1 ) : ( c__ )) ;
    goto L170;
 
L280:
    if (ial == 0) {
	goto L285;
    }
    if (stepbd > steplb) {
	goto L285;
    }
    if (*iprint != 0 && isfv < 2) {
	io___2625.ciunit = *lp;
	s_wsfe(&io___2625);
	e_wsfe();
    }
    goto L240;
L285:
    stepbd -= step;
    stmin = c__;
    fmin = fb;
    gmin = dgb;
 
    step = stmin * 9.;
    if (stepbd > 0.) {
	step = stepbd * .5;
    }
    c__ = dga + dgb * 3. - (fb - fa) * 4. / stmin;
    if (c__ > 0.) {
 
 
	d__3 = 1., d__4 = -dgb / c__;
	d__1 = step, d__2 = stmin * (( d__3 ) >= ( d__4 ) ? ( d__3 ) : ( d__4 )) ;
	step = (( d__1 ) <= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    }
    if (dgb < dga * .7) {
	goto L170;
    }
 
    isfv = 4 - isfv;
    if (stmin + step <= steplb) {
	goto L240;
    }
 
    ir = -(*n);
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	xa[i__] = xb[i__];
	xb[i__] = ga[i__];
	d__[i__] = gb[i__] - ga[i__];
 
	ga[i__] = gb[i__];
    }
    d__1 = 1. / dga;
    majour_(&h__[1], &xb[1], &w[1], n, &d__1, &ir, &c__1, &c_b61);
    ir = -ir;
    d__1 = 1. / (stmin * (dgb - dga));
    majour_(&h__[1], &d__[1], &d__[1], n, &d__1, &ir, &c__1, &c_b61);
 
    if (ir < *n) {
	goto L250;
    }
 
    dff = fa - fb;
    fa = fb;
    goto L130;
}  

  int n1qn2_(simul, prosca, n, x, f, g, dxmin, df1, epsg, 
	impres, io, mode, niter, nsim, dz, ndz, izs, rzs, dzs)
  int (*simul) (), (*prosca) ();
integer *n;
doublereal *x, *f, *g, *dxmin, *df1, *epsg;
integer *impres, *io, *mode, *niter, *nsim;
doublereal *dz;
integer *ndz, *izs;
real *rzs;
doublereal *dzs;
{
     
    static char fmt_900[] = "(/,\002 n1qn2: point d'entree\002,/,5x,\002dimension du probleme (n)              :\002,i6,/,5x,\002precision absolue en x (dxmin)         :\002,d9.2,/,5x,\002decroissance attendue pour f (df1)     :\002,d9.2,/,5x,\002precision relative en g (epsg)         :\002,d9.2,/,5x,\002nombre maximal d'iterations (niter)    :\002,i6,/,5x,\002nombre maximal d'appels a simul (nsim) :\002,i6,/,5x,\002niveau d'impression (impres)           :\002,i4)";
    static char fmt_901[] = "(/,\002 >>> n1qn2 : appel incoherent\002)";
    static char fmt_902[] = "(/,\002 >>> n1qn2: memoire allouee insuffisante\002)";
    static char fmt_903[] = "(/5x,\002memoire allouee (ndz)  :\002,i7,/,5x,\002memoire utilisee       :\002,i7,/,5x,\002nombre de mises a jour :\002,i6,/)";
    static char fmt_905[] = "(/,1x,79(\002-\002),/,/,1x,\002n1qn2 : sortie en mode \002,i2,/,5x,\002nombre d'iterations              : \002,i4,/,5x,\002nombre d'appels a simul          : \002,i6,/,5x,\002precision relative atteinte sur g: \002,d9.2)";
    static char fmt_906[] = "(5x,\002norme de x = \002,d15.8,/,5x,\002f          = \002,d15.8,/,5x,\002norme de g = \002,d15.8)";

     
    integer s_wsfe(), do_fio(), e_wsfe();
    double sqrt();

     
    static integer iaux, ndzu, m, isbar;
    extern   int n1qn2a_();
    static integer iybar;
    static doublereal r1, r2;
    static integer l1memo, id, ialpha;
    static doublereal ps;
    static integer igg;

     
    static cilist io___2627 = { 0, 0, 0, fmt_900, 0 };
    static cilist io___2628 = { 0, 0, 0, fmt_901, 0 };
    static cilist io___2629 = { 0, 0, 0, fmt_902, 0 };
    static cilist io___2633 = { 0, 0, 0, fmt_903, 0 };
    static cilist io___2640 = { 0, 0, 0, fmt_905, 0 };
    static cilist io___2644 = { 0, 0, 0, fmt_906, 0 };

     
    --dzs;
    --rzs;
    --izs;
    --dz;
    --g;
    --x;

     
    if (*impres >= 1) {
	io___2627.ciunit = *io;
	s_wsfe(&io___2627);
	do_fio(&c__1, (char *)&(*n), (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*dxmin), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&(*df1), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&(*epsg), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&(*niter), (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*nsim), (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*impres), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    if (*n <= 0 || *niter <= 0 || *nsim <= 0 || *dxmin <= 0. || *epsg <= 0. ||
	     *epsg > 1.) {
	*mode = 2;
	if (*impres >= 1) {
	    io___2628.ciunit = *io;
	    s_wsfe(&io___2628);
	    e_wsfe();
	}
	goto L904;
    }
    if (*ndz < *n * 5 + 1) {
	*mode = 2;
	if (*impres >= 1) {
	    io___2629.ciunit = *io;
	    s_wsfe(&io___2629);
	    e_wsfe();
	}
	goto L904;
    }

 

    ndzu = *ndz - *n * 3;
    l1memo = (*n << 1) + 1;
    m = ndzu / l1memo;
    ndzu = m * l1memo + *n * 3;
    if (*impres >= 1) {
	io___2633.ciunit = *io;
	s_wsfe(&io___2633);
	do_fio(&c__1, (char *)&(*ndz), (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&ndzu, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&m, (ftnlen)sizeof(integer));
	e_wsfe();
    }
    id = 1;
    igg = id + *n;
    iaux = igg + *n;
    ialpha = iaux + *n;
    iybar = ialpha + m;
    isbar = iybar + *n * m;

 

    n1qn2a_(simul, prosca, n, &x[1], f, &g[1], dxmin, df1, epsg, impres, io, 
	    mode, niter, nsim, &m, &dz[id], &dz[igg], &dz[iaux], &dz[ialpha], 
	    &dz[iybar], &dz[isbar], &izs[1], &rzs[1], &dzs[1]);

 

L904:
    if (*impres >= 1) {
	io___2640.ciunit = *io;
	s_wsfe(&io___2640);
	do_fio(&c__1, (char *)&(*mode), (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*niter), (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*nsim), (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*epsg), (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    (*prosca)(n, &x[1], &x[1], &ps, &izs[1], &rzs[1], &dzs[1]);
    r1 = sqrt(ps);
    (*prosca)(n, &g[1], &g[1], &ps, &izs[1], &rzs[1], &dzs[1]);
    r2 = sqrt(ps);
    if (*impres >= 1) {
	io___2644.ciunit = *io;
	s_wsfe(&io___2644);
	do_fio(&c__1, (char *)&r1, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&(*f), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&r2, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }

    return 0;
}  

  int n1qn2a_(simul, prosca, n, x, f, g, dxmin, df1, epsg, 
	impres, io, mode, niter, nsim, m, d__, gg, aux, alpha, ybar, sbar, 
	izs, rzs, dzs)
  int (*simul) (), (*prosca) ();
integer *n;
doublereal *x, *f, *g, *dxmin, *df1, *epsg;
integer *impres, *io, *mode, *niter, *nsim, *m;
doublereal *d__, *gg, *aux, *alpha, *ybar, *sbar;
integer *izs;
real *rzs;
doublereal *dzs;
{
     
    static char fmt_900[] = "(5x,\002f          = \002,d15.8,/,5x,\002norme de g = \002,d15.8)";
    static char fmt_899[] = "(/,\002 n1qn2a: direction de descente -g: precon = \002,d10.3)";
    static char fmt_901[] = "(/,1x,79(\002-\002))";
    static char fmt_9010[] = "(1x)";
    static char fmt_902[] = "(\002 n1qn2: iter \002,i3,\002, simul \002,i3,\002, f=\002,d15.8,\002, h'(0)=\002,d12.5)";
    static char fmt_903[] = "(/,\002 n1qn2: recherche lineaire\002)";
    static char fmt_904[] = "(/,\002 >>> n1qn2 (iteration \002,i3,\002): recherche lineaire bloquee sur tmax: \002,\002reduire l'echelle\002)";
    static char fmt_905[] = "(/,\002 n1qn2: test d'arret sur g: \002,d12.5)";
    static char fmt_906[] = "(/,\002 >>> n1qn2 (iteration \002,i3,\002): nombre maximal d'iterations atteint\002)";
    static char fmt_907[] = "(/,\002 >>> n1qn2 (iteration \002,i3,\002): \002,i6,\002 appels a simul (nombre maximal atteint)\002)";
    static char fmt_908[] = "(/,\002 >>> n1qn2 (iteration \002,i2,\002): le produit scalaire (y,s) = \002,d12.5,/,27x,\002n'est pas positif\002)";
    static char fmt_909[] = "(/,\002 n1qn2: mise a jour: (y,s) = \002,d10.3,\002 Oren-Spedicato = \002,d10.3)";
    static char fmt_910[] = "(/,\002 >>> n1qn2 (iteration \002,i2,\002): \002,/,5x,\002la direction de recherche d n'est pas de \002,\002descente: (g,d) = \002,d12.5)";
    static char fmt_911[] = "(/,\002 n1qn2: direction de descente d: \002,\002angle(-g,d) = \002,f5.1,\002 degres\002)";

     
    integer ybar_dim1, ybar_offset, sbar_dim1, sbar_offset, i__1;
    doublereal d__1, d__2, d__3;

     
    double sqrt();
    integer s_wsfe(), do_fio(), e_wsfe();
    double acos();

     
    static integer jmin, jmax, isim, iter;
    static doublereal tmin, tmax;
    extern   int nlis0_();
    static integer i__;
    static real r__;
    static doublereal t;
    static integer indic;
    static doublereal gnorm, d1, ff, ps;
    static integer moderl;
    static doublereal precon;
    extern   int strang_();
    static doublereal hp0, ps2, eps1;

     
    static cilist io___2649 = { 0, 0, 0, fmt_900, 0 };
    static cilist io___2652 = { 0, 0, 0, fmt_899, 0 };
    static cilist io___2653 = { 0, 0, 0, fmt_901, 0 };
    static cilist io___2654 = { 0, 0, 0, fmt_9010, 0 };
    static cilist io___2655 = { 0, 0, 0, fmt_901, 0 };
    static cilist io___2661 = { 0, 0, 0, fmt_901, 0 };
    static cilist io___2662 = { 0, 0, 0, fmt_9010, 0 };
    static cilist io___2663 = { 0, 0, 0, fmt_902, 0 };
    static cilist io___2665 = { 0, 0, 0, fmt_903, 0 };
    static cilist io___2670 = { 0, 0, 0, fmt_904, 0 };
    static cilist io___2672 = { 0, 0, 0, fmt_905, 0 };
    static cilist io___2673 = { 0, 0, 0, fmt_906, 0 };
    static cilist io___2674 = { 0, 0, 0, fmt_907, 0 };
    static cilist io___2675 = { 0, 0, 0, fmt_908, 0 };
    static cilist io___2676 = { 0, 0, 0, fmt_909, 0 };
    static cilist io___2677 = { 0, 0, 0, fmt_910, 0 };
    static cilist io___2680 = { 0, 0, 0, fmt_911, 0 };


 

 

 

 


 


 


 

     
    --aux;
    --gg;
    --d__;
    --g;
    --x;
    sbar_dim1 = *n;
    sbar_offset = sbar_dim1 + 1;
    sbar -= sbar_offset;
    ybar_dim1 = *n;
    ybar_offset = ybar_dim1 + 1;
    ybar -= ybar_offset;
    --alpha;
    --izs;
    --rzs;
    --dzs;

     
    iter = 0;
    isim = 1;
    (*prosca)(n, &g[1], &g[1], &ps, &izs[1], &rzs[1], &dzs[1]);
    gnorm = sqrt(ps);
    if (*impres >= 1) {
	io___2649.ciunit = *io;
	s_wsfe(&io___2649);
	do_fio(&c__1, (char *)&(*f), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&gnorm, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }

 
 

 
    d__1 = gnorm;
    precon = *df1 * 2. / (d__1 * d__1);
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	d__[i__] = -g[i__] * precon;
 
    }
    if (*impres >= 5) {
	io___2652.ciunit = *io;
	s_wsfe(&io___2652);
	do_fio(&c__1, (char *)&precon, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    if (*impres == 3) {
	io___2653.ciunit = *io;
	s_wsfe(&io___2653);
	e_wsfe();
	io___2654.ciunit = *io;
	s_wsfe(&io___2654);
	e_wsfe();
    }
    if (*impres == 4) {
	io___2655.ciunit = *io;
	s_wsfe(&io___2655);
	e_wsfe();
    }

 

    tmax = 1e20;
    (*prosca)(n, &d__[1], &g[1], &hp0, &izs[1], &rzs[1], &dzs[1]);

 

    jmin = 1;
    jmax = 0;

 
 

 
 

L100:
    ++iter;
    if (*impres < 0) {
	if (iter % (-(*impres)) == 0) {
	    indic = 1;
	    (*simul)(&indic, n, &x[1], f, &g[1], &izs[1], &rzs[1], &dzs[1]);
	    goto L100;
	}
    }
    if (*impres >= 5) {
	io___2661.ciunit = *io;
	s_wsfe(&io___2661);
	e_wsfe();
    }
    if (*impres >= 4) {
	io___2662.ciunit = *io;
	s_wsfe(&io___2662);
	e_wsfe();
    }
    if (*impres >= 3) {
	io___2663.ciunit = *io;
	s_wsfe(&io___2663);
	do_fio(&c__1, (char *)&iter, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&isim, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*f), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&hp0, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	gg[i__] = g[i__];
 
    }
    ff = *f;

 

    if (*impres >= 5) {
	io___2665.ciunit = *io;
	s_wsfe(&io___2665);
	e_wsfe();
    }

 

    tmin = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	d__2 = tmin, d__3 = (d__1 = d__[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	tmin = (( d__2 ) >= ( d__3 ) ? ( d__2 ) : ( d__3 )) ;
 
    }
    tmin = *dxmin / tmin;
    t = 1.;
    d1 = hp0;

    nlis0_(n, simul, prosca, &x[1], f, &d1, &t, &tmin, &tmax, &d__[1], &g[1], 
	    &c_b5732, &c_b5340, impres, io, &moderl, &isim, nsim, &aux[1], &
	    izs[1], &rzs[1], &dzs[1]);

 

    if (moderl != 0) {
	if (moderl < 0) {

 
 
 

	    *mode = moderl;
	} else if (moderl == 1) {

 
 

	    *mode = 3;
	    if (*impres >= 1) {
		io___2670.ciunit = *io;
		s_wsfe(&io___2670);
		do_fio(&c__1, (char *)&iter, (ftnlen)sizeof(integer));
		e_wsfe();
	    }
	} else if (moderl == 4) {

 
 

	    *mode = 5;
	} else if (moderl == 5) {

 
 

	    *mode = 0;
	} else if (moderl == 6) {

 
 

	    *mode = 6;
	}
	goto L1000;
    }

 

    (*prosca)(n, &g[1], &g[1], &ps, &izs[1], &rzs[1], &dzs[1]);
    eps1 = sqrt(ps) / gnorm;

    if (*impres >= 5) {
	io___2672.ciunit = *io;
	s_wsfe(&io___2672);
	do_fio(&c__1, (char *)&eps1, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    if (eps1 < *epsg) {
	*mode = 1;
	goto L1000;
    }
    if (iter == *niter) {
	*mode = 4;
	if (*impres >= 1) {
	    io___2673.ciunit = *io;
	    s_wsfe(&io___2673);
	    do_fio(&c__1, (char *)&iter, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	goto L1000;
    }
    if (isim >= *nsim) {
	*mode = 5;
	if (*impres >= 1) {
	    io___2674.ciunit = *io;
	    s_wsfe(&io___2674);
	    do_fio(&c__1, (char *)&iter, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&isim, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	goto L1000;
    }

 

    ++jmax;
    if (iter > *m) {
	++jmin;
	if (jmin > *m) {
	    jmin -= *m;
	}
	if (jmax > *m) {
	    jmax -= *m;
	}
    }

 

    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	sbar[i__ + jmax * sbar_dim1] = t * d__[i__];
	ybar[i__ + jmax * ybar_dim1] = g[i__] - gg[i__];
 
    }
    (*prosca)(n, &ybar[jmax * ybar_dim1 + 1], &sbar[jmax * sbar_dim1 + 1], &
	    d1, &izs[1], &rzs[1], &dzs[1]);
    if (d1 <= 0.) {
	*mode = 7;
	if (*impres >= 1) {
	    io___2675.ciunit = *io;
	    s_wsfe(&io___2675);
	    do_fio(&c__1, (char *)&iter, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&d1, (ftnlen)sizeof(doublereal));
	    e_wsfe();
	}
	goto L1000;
    }

 

    (*prosca)(n, &ybar[jmax * ybar_dim1 + 1], &ybar[jmax * ybar_dim1 + 1], &
	    ps, &izs[1], &rzs[1], &dzs[1]);
    precon = d1 / ps;
    if (*impres >= 5) {
	io___2676.ciunit = *io;
	s_wsfe(&io___2676);
	do_fio(&c__1, (char *)&d1, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&precon, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }

 

    d1 = sqrt(1. / d1);
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	sbar[i__ + jmax * sbar_dim1] = d1 * sbar[i__ + jmax * sbar_dim1];
	ybar[i__ + jmax * ybar_dim1] = d1 * ybar[i__ + jmax * ybar_dim1];
 
    }

 

    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	d__[i__] = -g[i__];
 
    }
    strang_(prosca, n, m, &d__[1], &jmin, &jmax, &precon, &alpha[1], &ybar[
	    ybar_offset], &sbar[sbar_offset], &izs[1], &rzs[1], &dzs[1]);

 
 

    (*prosca)(n, &d__[1], &g[1], &hp0, &izs[1], &rzs[1], &dzs[1]);
    if (hp0 >= 0.) {
	*mode = 7;
	if (*impres >= 1) {
	    io___2677.ciunit = *io;
	    s_wsfe(&io___2677);
	    do_fio(&c__1, (char *)&iter, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&hp0, (ftnlen)sizeof(doublereal));
	    e_wsfe();
	}
	goto L1000;
    }
    if (*impres >= 5) {
	(*prosca)(n, &g[1], &g[1], &ps, &izs[1], &rzs[1], &dzs[1]);
	ps = sqrt(ps);
	(*prosca)(n, &d__[1], &d__[1], &ps2, &izs[1], &rzs[1], &dzs[1]);
	ps2 = sqrt(ps2);
	ps = hp0 / ps / ps2;
 
	d__1 = -ps;
	ps = (( d__1 ) <= ( 1. ) ? ( d__1 ) : ( 1. )) ;
	ps = acos(ps);
	r__ = (real) (ps * (float)180. / 3.1415927);
	io___2680.ciunit = *io;
	s_wsfe(&io___2680);
	do_fio(&c__1, (char *)&r__, (ftnlen)sizeof(real));
	e_wsfe();
    }

 

    goto L100;

 

L1000:
    *epsg = eps1;
    *niter = iter;
    *nsim = isim;
    return 0;
}  

  int nlis0_(n, simul, prosca, xn, fn, fpn, t, tmin, tmax, d__,
	 g, amd, amf, imp, io, logic, nap, napmax, x, izs, rzs, dzs)
integer *n;
  int (*simul) (), (*prosca) ();
doublereal *xn, *fn, *fpn, *t, *tmin, *tmax, *d__, *g, *amd, *amf;
integer *imp, *io, *logic, *nap, *napmax;
doublereal *x;
integer *izs;
real *rzs;
doublereal *dzs;
{
     
    static char fmt_1000[] = "(/,4x,\002 nlis0       fpn=\002,d10.3,\002 d2=\002,d9.2,\002  tmin=\002,d9.2,\002 tmax=\002,d9.2)";
    static char fmt_1001[] = "(/,4x,\002 nlis0\002,3x,\002fin sur tmin\002,8x,\002pas\002,12x,\002fonctions\002,5x,\002derivees\002)";
    static char fmt_1002[] = "(4x,\002 nlis0\002,37x,d10.3,2d11.3)";
    static char fmt_1003[] = "(4x,\002 nlis0\002,d14.3,2d11.3)";
    static char fmt_1004[] = "(4x,\002 nlis0\002,37x,d10.3,\002 indic=\002,i3)";
    static char fmt_1005[] = "(4x,\002 nlis0\002,14x,2d18.8,d11.3)";
    static char fmt_1006[] = "(4x,\002 nlis0\002,14x,d18.8,\002      indic=\002,i3)";
    static char fmt_1007[] = "(/,4x,\002 nlis0\002,10x,\002tmin force a tmax\002)";

     
    integer i__1;
    doublereal d__1, d__2, d__3, d__4;

     
    integer s_wsfe(), e_wsfe(), do_fio();
    double sqrt();

     
    static doublereal tesd, tesf, test, f;
    static integer i__, indic;
    static doublereal z__, d2, z1, fa, fd, fg, ta, fp;
    static integer indica;
    static doublereal td;
    static integer indicd;
    static doublereal tg, fpa, ffn, fpd, fpg;

     
    static cilist io___2691 = { 0, 0, 0, fmt_1007, 0 };
    static cilist io___2693 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___2698 = { 0, 0, 0, fmt_1004, 0 };
    static cilist io___2703 = { 0, 0, 0, fmt_1002, 0 };
    static cilist io___2704 = { 0, 0, 0, fmt_1003, 0 };
    static cilist io___2708 = { 0, 0, 0, fmt_1001, 0 };
    static cilist io___2709 = { 0, 0, 0, fmt_1005, 0 };
    static cilist io___2710 = { 0, 0, 0, fmt_1005, 0 };
    static cilist io___2711 = { 0, 0, 0, fmt_1006, 0 };


 

 
 

 

 
 
 
 
 
 

 

 


 


     
    --x;
    --g;
    --d__;
    --xn;
    --izs;
    --rzs;
    --dzs;

     
 
 
 
 
 
 
 
 
 
    if (*n > 0 && *fpn < 0. && *t > 0. && *tmax > 0. && *amf > 0. && *amd > *
	    amf && *amd < 1.) {
	goto L5;
    }
    *logic = 6;
    goto L999;
L5:
    tesf = *amf * *fpn;
    tesd = *amd * *fpn;
    td = 0.;
    tg = 0.;
    fg = *fn;
    fpg = *fpn;
    ta = 0.;
    fa = *fn;
    fpa = *fpn;
    (*prosca)(n, &d__[1], &d__[1], &d2, &izs[1], &rzs[1], &dzs[1]);

 

    if (*t > *tmin) {
	goto L20;
    }
    *t = *tmin;
    if (*t <= *tmax) {
	goto L20;
    }
    if (*imp > 0) {
	io___2691.ciunit = *io;
	s_wsfe(&io___2691);
	e_wsfe();
    }
    *tmin = *tmax;
L20:
    if (*fn + *t * *fpn < *fn + *t * .9 * *fpn) {
	goto L30;
    }
    *t *= 2.;
    goto L20;
L30:
    indica = 1;
    *logic = 0;
    if (*t > *tmax) {
	*t = *tmax;
	*logic = 1;
    }
    if (*imp >= 4) {
	io___2693.ciunit = *io;
	s_wsfe(&io___2693);
	do_fio(&c__1, (char *)&(*fpn), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&d2, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&(*tmin), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&(*tmax), (ftnlen)sizeof(doublereal));
	e_wsfe();
    }

 

    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	x[i__] = xn[i__] + *t * d__[i__];
 
    }

 

L100:
    ++(*nap);
    if (*nap > *napmax) {
	*logic = 4;
	*fn = fg;
	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    xn[i__] += tg * d__[i__];
 
	}
	goto L999;
    }
    indic = 4;

 

    (*simul)(&indic, n, &x[1], &f, &g[1], &izs[1], &rzs[1], &dzs[1]);
    if (indic == 0) {

 

	*logic = 5;
	*fn = f;
	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    xn[i__] = x[i__];
 
	}
	goto L999;
    }
    if (indic < 0) {

 


	td = *t;
	indicd = indic;
	*logic = 0;
	if (*imp >= 4) {
	    io___2698.ciunit = *io;
	    s_wsfe(&io___2698);
	    do_fio(&c__1, (char *)&(*t), (ftnlen)sizeof(doublereal));
	    do_fio(&c__1, (char *)&indic, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	*t = tg + (td - tg) * .1;
	goto L905;
    }

 

    (*prosca)(n, &d__[1], &g[1], &fp, &izs[1], &rzs[1], &dzs[1]);

 

    ffn = f - *fn;
    if (ffn > *t * tesf) {
	td = *t;
	fd = f;
	fpd = fp;
	indicd = indic;
	*logic = 0;
	if (*imp >= 4) {
	    io___2703.ciunit = *io;
	    s_wsfe(&io___2703);
	    do_fio(&c__1, (char *)&(*t), (ftnlen)sizeof(doublereal));
	    do_fio(&c__1, (char *)&ffn, (ftnlen)sizeof(doublereal));
	    do_fio(&c__1, (char *)&fp, (ftnlen)sizeof(doublereal));
	    e_wsfe();
	}
	goto L500;
    }

 

    if (*imp >= 4) {
	io___2704.ciunit = *io;
	s_wsfe(&io___2704);
	do_fio(&c__1, (char *)&(*t), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&ffn, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&fp, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    if (fp > tesd) {
	*logic = 0;
	goto L320;
    }
    if (*logic == 0) {
	goto L350;
    }

 

L320:
    *fn = f;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	xn[i__] = x[i__];
 
    }
    goto L999;



L350:
    tg = *t;
    fg = f;
    fpg = fp;
    if (td != 0.) {
	goto L500;
    }

 

    ta = *t;
    *t = tg * 9.;
    z__ = *fpn + fp * 3. - ffn * 4. / tg;
    if (z__ > 0.) {
 
 
	d__3 = 1., d__4 = -fp / z__;
	d__1 = *t, d__2 = tg * (( d__3 ) >= ( d__4 ) ? ( d__3 ) : ( d__4 )) ;
	*t = (( d__1 ) <= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    }
    *t = tg + *t;
    if (*t < *tmax) {
	goto L900;
    }
    *logic = 1;
    *t = *tmax;
    goto L900;

 

L500:
    if (indica <= 0) {
	ta = *t;
	*t = tg * .9 + td * .1;
	goto L900;
    }
    z__ = fp + fpa - (fa - f) * 3. / (ta - *t);
    z1 = z__ * z__ - fp * fpa;
    if (z1 < 0.) {
	ta = *t;
	*t = (td + tg) * .5;
	goto L900;
    }
    if (*t < ta) {
	z1 = z__ - sqrt(z1);
    }
    if (*t > ta) {
	z1 = z__ + sqrt(z1);
    }
    z__ = fp / (fp + z1);
    z__ = *t + z__ * (ta - *t);
    ta = *t;
    test = (td - tg) * .1;
 
    d__1 = z__, d__2 = tg + test;
    *t = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
 
    d__1 = *t, d__2 = td - test;
    *t = (( d__1 ) <= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;

 
 
 

L900:
    fa = f;
    fpa = fp;
L905:
    indica = indic;

 

    if (td == 0.) {
	goto L950;
    }
    if (td - tg < *tmin) {
	goto L920;
    }

 

    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	z__ = xn[i__] + *t * d__[i__];
	if (z__ != xn[i__] && z__ != x[i__]) {
	    goto L950;
	}
 
    }

 

L920:
    *logic = 6;

 


    if (indicd < 0) {
	*logic = indicd;
    }

 
 

    if (tg == 0.) {
	goto L940;
    }
    *fn = fg;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	xn[i__] += tg * d__[i__];
    }
L940:
    if (*imp <= 0) {
	goto L999;
    }
    io___2708.ciunit = *io;
    s_wsfe(&io___2708);
    e_wsfe();
    io___2709.ciunit = *io;
    s_wsfe(&io___2709);
    do_fio(&c__1, (char *)&tg, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&fg, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&fpg, (ftnlen)sizeof(doublereal));
    e_wsfe();
    if (*logic == 6) {
	io___2710.ciunit = *io;
	s_wsfe(&io___2710);
	do_fio(&c__1, (char *)&td, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&fd, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&fpd, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    if (*logic == 7) {
	io___2711.ciunit = *io;
	s_wsfe(&io___2711);
	do_fio(&c__1, (char *)&td, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&indicd, (ftnlen)sizeof(integer));
	e_wsfe();
    }
    goto L999;

 

L950:
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	x[i__] = xn[i__] + *t * d__[i__];
    }
    goto L100;
L999:
    return 0;
}  

  int nlis2_(simul, prosca, n, xn, fn, fpn, t, tmin, tmax, d__,
	 d2, g, gd, amd, amf, imp, io, logic, nap, napmax, x, tol, a, tps, 
	tnc, gg, izs, rzs, dzs)
  int (*simul) (), (*prosca) ();
integer *n;
doublereal *xn, *fn, *fpn, *t, *tmin, *tmax, *d__, *d2, *g, *gd, *amd, *amf;
integer *imp, *io, *logic, *nap, *napmax;
doublereal *x, *tol, *a, *tps, *tnc, *gg;
integer *izs;
real *rzs;
doublereal *dzs;
{
     
    static char fmt_1000[] = "(/4x,\002 nlis2   \002,4x,\002fpn=\002,d10.3,\002 d2=\002,d9.2,\002  tmin=\002,d9.2,\002 tmax=\002,d9.2)";
    static char fmt_1001[] = "(/4x,\002 nlis2\002,10x,\002tmin force a tmax\002)";
    static char fmt_1002[] = "(4x,\002 nlis2\002,36x,\002i\002,d10.3,2d11.3)";
    static char fmt_1003[] = "(4x,\002 nlis2\002,d13.3,2d11.3,\002 i\002)";
    static char fmt_1004[] = "(4x,\002 nlis2\002,36x,\002i\002,d10.3,\002 indic=\002,i3)";
    static char fmt_1006[] = "(4x,\002 nlis2\002,3x,\002contrainte implicite\002,i4,\002 active\002)";
    static char fmt_1007[] = "(/4x,\002 nlis2\002,3x,\002fin sur tmin\002)";
    static char fmt_1010[] = "(/4x,\002 nlis2\002,3x,i5,\002 simulations atteintes\002)";
    static char fmt_1011[] = "(/4x,\002 nlis2\002,3x,\002arret demande par l'utilisateur\002)";

     
    integer i__1;
    doublereal d__1;

     
    integer s_wsfe(), e_wsfe(), do_fio();

     
    static doublereal tesd, tesf, step, f;
    static integer i__;
    static doublereal p, s;
    static integer indic;
    static doublereal z__;
    static integer inout;
    static doublereal fa, fd, fg, hh, ta, fp;
    static integer indica;
    static doublereal td;
    static integer indicd;
    static doublereal tg, cx, cy, fx, gx, fy, gy, cz, fz, gz;
    static integer iyflag;
    static doublereal tx, ty, sthalf, penlty, ggg, fpa, ffn, fpd, fpg;
    extern   int fpq2_();

     
    static cilist io___2729 = { 0, 0, 0, fmt_1001, 0 };
    static cilist io___2730 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___2744 = { 0, 0, 0, fmt_1010, 0 };
    static cilist io___2747 = { 0, 0, 0, fmt_1011, 0 };
    static cilist io___2749 = { 0, 0, 0, fmt_1004, 0 };
    static cilist io___2754 = { 0, 0, 0, fmt_1002, 0 };
    static cilist io___2756 = { 0, 0, 0, fmt_1003, 0 };
    static cilist io___2758 = { 0, 0, 0, fmt_1006, 0 };
    static cilist io___2759 = { 0, 0, 0, fmt_1007, 0 };


 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 

 


 

     
    --gg;
    --x;
    --gd;
    --g;
    --d__;
    --xn;
    --izs;
    --rzs;
    --dzs;

     
 
 
 
 
 
 
 
 
 
    tesf = *amf * *fpn;
    tesd = *amd * *fpn;
    td = 0.;
    tg = 0.;
    fg = *fn;
    fpg = *fpn;
    ta = 0.;
    fa = *fn;
    fpa = *fpn;
    indica = 1;
    *logic = 0;
    tx = 0.;
    cx = 0.;
    fx = *fn;
    gx = *fpn;
    step = *t;
    sthalf = (float).1;
    penlty = 0.;
 
    if (*t > *tmin) {
	goto L20;
    }
    *t = *tmin;
    if (*t <= *tmax) {
	goto L20;
    }
    if (*imp > 0) {
	io___2729.ciunit = *io;
	s_wsfe(&io___2729);
	e_wsfe();
    }
    *tmin = *tmax;
L20:
    if (*fn + *t * *fpn < *fn + *t * .9 * *fpn) {
	goto L30;
    }
    *t *= 2.;
    goto L20;

L30:
    if (*t < *tmax) {
	goto L40;
    }
    *t = *tmax;
    *logic = 1;
L40:
    if (*imp >= 4) {
	io___2730.ciunit = *io;
	s_wsfe(&io___2730);
	do_fio(&c__1, (char *)&(*fpn), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&(*d2), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&(*tmin), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&(*tmax), (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	x[i__] = xn[i__] + *t * d__[i__];
    }
    inout = 0;
    fpq2_(&inout, &tx, &cx, &fx, &gx, &step, &sthalf, &penlty, &iyflag, &ty, &
	    cy, &fy, &gy, t, &cz, &fz, &gz, &ggg, &hh, &s);

 

L100:
    ++(*nap);
    if (*nap <= *napmax) {
	goto L150;
    }
 
    *logic = 4;
    if (*imp >= 4) {
	io___2744.ciunit = *io;
	s_wsfe(&io___2744);
	do_fio(&c__1, (char *)&(*nap), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    if (tg == 0.) {
	goto L999;
    }
    *fn = fg;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	g[i__] = gg[i__];
 
	xn[i__] += tg * d__[i__];
    }
    goto L999;
L150:
    indic = 4;
    (*simul)(&indic, n, &x[1], &f, &g[1], &izs[1], &rzs[1], &dzs[1]);
    if (indic != 0) {
	goto L200;
    }

 
    *logic = 5;
    *fn = f;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	xn[i__] = x[i__];
    }
    if (*imp >= 4) {
	io___2747.ciunit = *io;
	s_wsfe(&io___2747);
	e_wsfe();
    }
    goto L999;

 
 

L200:
    if (indic > 0) {
	goto L210;
    }
    td = *t;
    indicd = indic;
    *logic = 0;
    if (*imp >= 4) {
	io___2749.ciunit = *io;
	s_wsfe(&io___2749);
	do_fio(&c__1, (char *)&(*t), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&indic, (ftnlen)sizeof(integer));
	e_wsfe();
    }
    *t = tg + (td - tg) * .1;
    goto L905;

 

L210:
    (*prosca)(n, &d__[1], &g[1], &fp, &izs[1], &rzs[1], &dzs[1]);

 
    ffn = f - *fn;
    if (ffn <= *t * tesf) {
	goto L300;
    }
    td = *t;
    fd = f;
    fpd = fp;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	gd[i__] = g[i__];
    }
    indicd = indic;
    *logic = 0;
    cz = ffn - *t * tesf;
    fz = f;
    gz = fp;
    if (*imp >= 4) {
	io___2754.ciunit = *io;
	s_wsfe(&io___2754);
	do_fio(&c__1, (char *)&(*t), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&ffn, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&fp, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    if (tg != 0.) {
	goto L500;
    }
 
    if (fpd < tesd) {
	goto L500;
    }
    *tps = *fn - f + td * fpd;
    *tnc = *d2 * td * td;
 
    d__1 = *a * *tnc;
    p = (( d__1 ) >= ( *tps ) ? ( d__1 ) : ( *tps )) ;
    if (p > *tol) {
	goto L500;
    }
    *logic = 3;
    goto L999;

 
L300:
    if (*imp >= 4) {
	io___2756.ciunit = *io;
	s_wsfe(&io___2756);
	do_fio(&c__1, (char *)&(*t), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&ffn, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&fp, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }

 
    if (fp < tesd) {
	goto L320;
    }

 
    *logic = 0;
    *fn = f;
    *fpn = fp;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	xn[i__] = x[i__];
    }
    goto L999;

L320:
    if (*logic == 0) {
	goto L350;
    }

 
    *fn = f;
    *fpn = fp;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	xn[i__] = x[i__];
    }
    goto L999;

 
L350:
    tg = *t;
    fg = f;
    fpg = fp;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	gg[i__] = g[i__];
    }
    cz = 0.;
    fz = f;
    gz = fp;

    if (td != 0.) {
	goto L500;
    }
 
    fpq2_(&inout, &tx, &cx, &fx, &gx, &step, &sthalf, &penlty, &iyflag, &ty, &
	    cy, &fy, &gy, t, &cz, &fz, &gz, &ggg, &hh, &s);
    if (*t < *tmax) {
	goto L900;
    }
    *logic = 1;
    *t = *tmax;
    goto L900;

 

L500:
    fpq2_(&inout, &tx, &cx, &fx, &gx, &step, &sthalf, &penlty, &iyflag, &ty, &
	    cy, &fy, &gy, t, &cz, &fz, &gz, &ggg, &hh, &s);

 

L900:
    fa = f;
    fpa = fp;
L905:
    indica = indic;
 
    if (td == 0.) {
	goto L920;
    }
    if (indicd < 0) {
	goto L920;
    }
    if (td - tg > *tmin * 10.) {
	goto L920;
    }
    if (fpd < tesd) {
	goto L920;
    }
    *tps = fg - fd + (td - tg) * fpd;
    *tnc = *d2 * (td - tg) * (td - tg);
 
    d__1 = *a * *tnc;
    p = (( d__1 ) >= ( *tps ) ? ( d__1 ) : ( *tps )) ;
    if (p > *tol) {
	goto L920;
    }
 
    *logic = 2;
    *fn = fg;
    *fpn = fpg;
    *t = tg;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	xn[i__] += tg * d__[i__];
 
	g[i__] = gg[i__];
    }
    goto L999;

 

L920:
    if (td == 0.) {
	goto L990;
    }
    if (td - tg <= *tmin) {
	goto L950;
    }
    if ((d__1 = ty - tx, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= *tmin) {
	goto L950;
    }
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	z__ = xn[i__] + *t * d__[i__];
	if (z__ != x[i__] && z__ != xn[i__]) {
	    goto L990;
	}
 
    }
 
L950:
    *logic = 6;
    if (indicd < 0) {
	*logic = indicd;
    }
    if (tg == 0.) {
	goto L970;
    }
    *fn = fg;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	xn[i__] += tg * d__[i__];
 
	g[i__] = gg[i__];
    }
L970:
    if (*imp <= 0) {
	goto L999;
    }
    if (*logic < 0) {
	io___2758.ciunit = *io;
	s_wsfe(&io___2758);
	do_fio(&c__1, (char *)&(*logic), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    if (*logic == 6) {
	io___2759.ciunit = *io;
	s_wsfe(&io___2759);
	e_wsfe();
    }
    goto L999;

 
L990:
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	x[i__] = xn[i__] + *t * d__[i__];
    }
    goto L100;

L999:
    return 0;
}  

  int nvkt03_(a, ia, c__, ic, g, v, w, ipvt, dnorma, n, m, mi1,
	 mi, nmd, ndf)
doublereal *a;
integer *ia;
doublereal *c__;
integer *ic;
doublereal *g, *v, *w;
integer *ipvt;
doublereal *dnorma;
integer *n, *m, *mi1, *mi, *nmd, *ndf;
{
     
    integer a_dim1, a_offset, c_dim1, c_offset, i__1, i__2;

     
    extern doublereal ddot_(), dnrm2_();
    static integer i__, j, m1, ij, ni, mi2;
    extern   int dadd_();


 

 

 

 

 

 

 

 

 

 

 

 

 


 
 

 

 

 


 

 

 


 

 

 

 

 
 

 

 

 

 


 
 
 

 
 

     
    a_dim1 = *ia;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    c_dim1 = *ic;
    c_offset = c_dim1 + 1;
    c__ -= c_offset;
    --g;
    --v;
    --w;
    --ipvt;

     
    m1 = *m + 1;
    mi2 = *mi1 + 1;
    ni = *mi - *n;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i__2 = *mi1;
	for (j = 1; j <= i__2; ++j) {
 
	    w[j] = c__[i__ + ipvt[j] * c_dim1];
	}
	i__2 = *m;
	for (j = mi2; j <= i__2; ++j) {
	    ij = ipvt[j];
	    if (ij < 0) {
		if (i__ == -ij) {
		    w[j] = -1.;
		} else {
		    w[j] = 0.;
		}
	    } else if (ij <= *n) {
		if (i__ == ij) {
		    w[j] = 1.;
		} else {
		    w[j] = 0.;
		}
	    } else if (ij <= *nmd) {
		w[j] = c__[i__ + (ij + ni) * c_dim1];
	    } else if (ij < *ndf) {
		w[j] = a[i__ + (ij - *nmd) * a_dim1];
	    }
 
	}
	w[*m + i__] = ddot_(m, &w[1], &c__1, &v[1], &c__1);
 
    }
    dadd_(n, &g[1], &c__1, &w[m1], &c__1);
    *dnorma = dnrm2_(n, &w[m1], &c__1);
}  

  int optr01_(c__, ic, q, iq, r__, ir, ci, cs, b, x, w, ipvt, 
	ire, ira, n, m, mi, mi1, md, ind, imp, io, modo)
doublereal *c__;
integer *ic;
doublereal *q;
integer *iq;
doublereal *r__;
integer *ir;
doublereal *ci, *cs, *b, *x, *w;
integer *ipvt, *ire, *ira, *n, *m, *mi, *mi1, *md, *ind, *imp, *io, *modo;
{
     
    static char fmt_1000[] = "(/,80(\002*\002),/,10x,a,/,10x,a)";
    static char fmt_2000[] = "(/,80(\002*\002),/,10x,a,/,10x,a,i5)";
    static char fmt_3000[] = "(/,80(\002*\002),/,10x,\002THE INDEPENDENT LINEAR EQUALITY CONSTRAINTS ARE:\002,/,(10x,20(2x,i4),/))";
    static char fmt_7000[] = "(/,10x,\002CALCULATED POINT:\002,/,(t31,sp,e22.16))";
    static char fmt_4000[] = "(/,10x,a,i4)";
    static char fmt_5000[] = "(/,80(\002*\002),/,10x,a,/,10x,\002THERE ARE NOT FEASIBLE POINTS.\002)";
    static char fmt_6000[] = "(/,80(\002-\002),/,10x,\002ITERATION:\002,i4,/,10x,\002OBJECTIVE FUNCTION :\002,f24.15)";
    static char fmt_8000[] = "(/,10x,\002SMALLEST LAGRANGE MULTIPLIER :\002,f19.14)";
    static char fmt_9000[] = "(/,80(\002*\002),/,10x,a,/,10x,\002INDEFINITE CICLE ON A DEGENERATED POINT.\002)";
    static char fmt_10000[] = "(/,80(\002*\002),/,10x,a,/,10x,\002THE LIMIT FOR THE ITERATION       NUMBER HAS BEEN PASSED WITHOUT\002,/,10x,\002FINDING A FEASIBLE POINT.\002)";

     
    integer c_dim1, c_offset, q_dim1, q_offset, r_dim1, r_offset, i__1, i__2;
    doublereal d__1;

     
      int s_copy();
    integer s_wsfe(), do_fio(), e_wsfe();
    double sqrt(), pow_dd();

     
    static integer iira, icol, nmid, irei;
    extern doublereal ddot_();
    static integer indx, iopt, icol1, icol2, icol3;
    extern doublereal dnrm0_(), dnrm2_();
    static doublereal test0;
    static integer i__, j, k, l;
    static doublereal s;
    extern   int anfm01_(), anfm02_(), anrs01_();
    static integer ireni, icont;
    extern   int auxo01_(), dcopy_(), dmmul_(), daxpy_();
    static integer i1, i2, m1, n1, n2, n3;
    static doublereal r1, s1, r2;
    static integer ia, ii, icicla, jj;
    extern doublereal dlamch_();
    static integer ni, nm, in, mr, iv;
    static doublereal xi;
    static integer ml;
    static doublereal gigant;
    static integer itemax;
    static doublereal cii;
    static char car[30];
    static integer mid, inf, ipc, nmd, nii;
    static doublereal csi;
    static integer mni;
    static doublereal eps, fun, wii, gig1;
    extern   int dadd_();

     
    static cilist io___2767 = { 0, 6, 0, fmt_1000, 0 };
    static cilist io___2768 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___2774 = { 0, 0, 0, fmt_2000, 0 };
    static cilist io___2775 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___2776 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___2795 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___2796 = { 0, 0, 0, fmt_3000, 0 };
    static cilist io___2798 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___2802 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___2803 = { 0, 0, 0, fmt_7000, 0 };
    static cilist io___2812 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___2814 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___2815 = { 0, 0, 0, fmt_7000, 0 };
    static cilist io___2816 = { 0, 0, 0, fmt_4000, 0 };
    static cilist io___2817 = { 0, 0, 0, fmt_5000, 0 };
    static cilist io___2818 = { 0, 0, 0, fmt_6000, 0 };
    static cilist io___2819 = { 0, 0, 0, fmt_7000, 0 };
    static cilist io___2822 = { 0, 0, 0, fmt_5000, 0 };
    static cilist io___2823 = { 0, 0, 0, fmt_8000, 0 };
    static cilist io___2827 = { 0, 0, 0, fmt_9000, 0 };
    static cilist io___2838 = { 0, 0, 0, fmt_4000, 0 };
    static cilist io___2839 = { 0, 0, 0, fmt_10000, 0 };
     
    c_dim1 = *ic;
    c_offset = c_dim1 + 1;
    c__ -= c_offset;
    q_dim1 = *iq;
    q_offset = q_dim1 + 1;
    q -= q_offset;
    r_dim1 = *ir;
    r_offset = r_dim1 + 1;
    r__ -= r_offset;
    --ci;
    --cs;
    --b;
    --x;
    --w;
    --ipvt;
    --ire;

     
    s_copy(car, "END OF  OPTR01.", 30L, 15L);
    if (*mi < 0 || *md < 0 || *ira < 0 || *ira > 3 || *io < 1 || *n <= 1 || *
	    modo < 1 || *modo > 22 || *ic < *n && (*mi > 0 || *md > 0) || *iq 
	    < *n || *ir < *n) {
	if (*io <= 0) {
	    s_wsfe(&io___2767);
	    do_fio(&c__1, car, 30L);
	    do_fio(&c__1, "INVALID NUMBER FOR THE WRITING CHANEL.", 38L);
	    e_wsfe();
	}
	if (*io > 0) {
	    io___2768.ciunit = *io;
	    s_wsfe(&io___2768);
	    do_fio(&c__1, car, 30L);
	    do_fio(&c__1, "INVALID INTEGER VARIABLES.", 26L);
	    e_wsfe();
	}
	*ind = -5;
	return 0;
    }

 

    gigant = dlamch_("o", 1L);
    gig1 = sqrt(gigant);
    test0 = pow_dd(&gigant, &c_b7108);
    d__1 = dlamch_("p", 1L);
    eps = pow_dd(&d__1, &c_b5779);

 

    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (*ira == 3) {
	    if (ci[i__] >= -gig1 && cs[i__] <= gig1 && ci[i__] > cs[i__]) {
		io___2774.ciunit = *io;
		s_wsfe(&io___2774);
		do_fio(&c__1, car, 30L);
		do_fio(&c__1, "CI(I).GT.CS(I) FOR I=", 21L);
		do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
		e_wsfe();
		*ind = -5;
		return 0;
	    }
	}
	if ((*modo == 2 || *modo == 4 || *modo == 12 || *modo == 14 || *modo 
		== 22) && *ira > 0) {
	    if (ire[i__] < -1 || ire[i__] > 1) {
		io___2775.ciunit = *io;
		s_wsfe(&io___2775);
		do_fio(&c__1, car, 30L);
		do_fio(&c__1, "INCORRECT VECTOR IRE.", 21L);
		e_wsfe();
		*ind = -5;
		return 0;
	    }
	} else {
	    ire[i__] = 0;
	}
 
    }
    i__1 = *n + *md;
    for (i__ = *n + 1; i__ <= i__1; ++i__) {
	if (*modo == 2 || *modo == 4 || *modo == 12 || *modo == 14 || *modo ==
		 22) {
	    if (ire[i__] < 0 || ire[i__] > 1) {
		io___2776.ciunit = *io;
		s_wsfe(&io___2776);
		do_fio(&c__1, car, 30L);
		do_fio(&c__1, "INCORRECT VECTOR IRE.", 21L);
		e_wsfe();
		*ind = -5;
		return 0;
	    }
	} else {
	    ire[i__] = 0;
	}
 
    }

 

    n1 = *n + 1;
    n2 = n1 + *n;
    n3 = n2 + *n;
    nmd = n3 + *md;
    mni = *mi + 1;
    *ind = 0;
    icont = 0;
    icicla = 0;
    icol1 = 0;
    icol2 = 0;
    mid = *mi + *md;
    nmid = *n + mid;
    itemax = nmid << 2;
    s = dnrm0_(n, &x[1], &c__1);
    if (s == 0.) {
	indx = 0;
    } else {
	indx = 1;
    }

 

 
 
 

    iopt = 0;
    inf = 0;
    if (*modo > 20) {
	*modo += -20;
	inf = 1;
    } else if (*modo > 10) {
	*modo += -10;
    } else {
	iopt = 1;
    }

 
 

    if (*modo <= 2) {
	if (*mi == 0) {
	    *m = 0;
	}
	*mi1 = *mi;
	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    w[i__] = 0.;
	}
	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    w[i__] = 1.;
	    dcopy_(n, &w[1], &c__1, &q[i__ * q_dim1 + 1], &c__1);
	    w[i__] = 0.;
 
	}
    }

 

    if (*modo <= 2 && *mi >= 1) {
	*mi1 = 1;
	i2 = *mi;
	i__1 = *mi;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    anfm01_(&q[q_offset], iq, &r__[r_offset], ir, &c__[i__ * c_dim1 + 
		    1], &w[1], n, mi1, ind, io);
	    if (*ind < 0) {
		ipvt[i2] = i__;
		*ind = 0;
		--i2;
	    } else {
		ipvt[*mi1] = i__;
		++(*mi1);
	    }
 
	}
	--(*mi1);
	if (*mi1 > 0) {
	    if (indx == 1) {
		i__1 = *mi1;
		for (i__ = 1; i__ <= i__1; ++i__) {
		    l = ipvt[i__];
		    w[i__] = b[l] - ddot_(n, &c__[l * c_dim1 + 1], &c__1, &x[
			    1], &c__1);
 
		}
	    } else {
		i__1 = *mi1;
		for (i__ = 1; i__ <= i__1; ++i__) {
 
		    w[i__] = b[ipvt[i__]];
		}
	    }
	    *ind = 1;
	    anrs01_(&r__[r_offset], ir, mi1, &w[1], &w[n1], ind, io);
	    *ind = 0;
	    dmmul_(&q[q_offset], iq, &w[n1], mi1, &w[n2], n, n, mi1, &c__1);
	    if (indx == 1) {
		dadd_(n, &w[n2], &c__1, &x[1], &c__1);
	    } else {
		dcopy_(n, &w[n2], &c__1, &x[1], &c__1);
	    }
	}

 
 

	if (*mi1 < *mi) {
	    i__1 = *mi;
	    for (i__ = *mi1 + 1; i__ <= i__1; ++i__) {
		l = ipvt[i__];
		if (*mi1 > 0) {
		    s = b[l] - ddot_(n, &x[1], &c__1, &c__[l * c_dim1 + 1], &
			    c__1);
		} else {
		    s = b[l];
		}
		if ((( s ) >= 0 ? ( s ) : -( s ))  > eps) {
		    *ind = -1;
		    if (*imp >= 11) {
			io___2795.ciunit = *io;
			s_wsfe(&io___2795);
			do_fio(&c__1, car, 30L);
			do_fio(&c__1, "THE SYSTEM OF EQUALITY CONSTRAINTS HAS NOT SOLUTION", 51L);
			e_wsfe();
		    }
		    return 0;
		}
 
	    }
	}
	*m = *mi1;
    }
    if (*imp >= 12 && *mi1 > 0) {
	io___2796.ciunit = *io;
	s_wsfe(&io___2796);
	i__1 = *mi1;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    i__2 = *n + ipvt[i__];
	    do_fio(&c__1, (char *)&i__2, (ftnlen)sizeof(integer));
	}
	e_wsfe();
    }

 
 
 

    if (*modo == 2) {
	if (*ira > 0) {
	    i__ = 1;
	    if (i__ <= *n && *m < *n) {
L500:
		if (ire[i__] == 1) {
		    *ind = i__;
		}
		if (ire[i__] == -1) {
		    *ind = -i__;
		}
		if (*ind != 0) {
		    m1 = *m + 1;
		    anfm01_(&q[q_offset], iq, &r__[r_offset], ir, &w[1], &w[1]
			    , n, &m1, ind, io);
		    if (*ind < 0) {
			*ind = 0;
			ire[i__] = 0;
		    } else {
			*m = m1;
			ipvt[*m] = ire[i__] * i__;
		    }
		}
		++i__;
		if (i__ <= *n && *m < *n) {
		    goto L500;
		}
	    }
	}
	if (*md > 0) {
	    i__ = 1;
	    if (i__ <= *md && *m < *n) {
L525:
		if (ire[*n + i__] == 1) {
		    m1 = *m + 1;
		    anfm01_(&q[q_offset], iq, &r__[r_offset], ir, &c__[(*mi + 
			    i__) * c_dim1 + 1], &w[1], n, &m1, ind, io);
		    if (*ind < 0) {
			*ind = 0;
			ire[*n + i__] = 0;
		    } else {
			*m = m1;
			ipvt[*m] = *n + i__;
		    }
		}
		++i__;
		if (i__ <= *md && *m < *n) {
		    goto L525;
		}
	    }
	}
    }
    if (*modo == 2 && inf == 1) {
	if (*imp >= 11) {
	    io___2798.ciunit = *io;
	    s_wsfe(&io___2798);
	    do_fio(&c__1, car, 30L);
	    do_fio(&c__1, "THE FACTORIZATION  QR  HAS BEEN OBTAINED.", 41L);
	    e_wsfe();
	}
	return 0;
    }

 

 

 

    mr = 0;
    if (inf == 0) {
	i__2 = *mi1;
	for (i__ = 1; i__ <= i__2; ++i__) {
 
	    w[i__] = b[ipvt[i__]];
	}
	i__2 = *m;
	for (i__ = *mi1 + 1; i__ <= i__2; ++i__) {
	    l = ipvt[i__];
	    if (l < 0) {
		w[i__] = -ci[-l];
	    } else if (l <= *n) {
		w[i__] = cs[l];
	    } else {
		w[i__] = b[*mi + l - *n];
	    }
 
	}
	mr = *m;
	if (iopt == 1) {
	    if (*m > 0 && (*modo > 2 || *m > *mi1)) {
		*ind = 1;
		anrs01_(&r__[r_offset], ir, m, &w[1], &w[n1], ind, io);
		dmmul_(&q[q_offset], iq, &w[n1], m, &x[1], n, n, m, &c__1);
		*ind = 0;
	    }

 

	    *ind = 0;
	    auxo01_(&c__[mni * c_dim1 + 1], ic, &ci[1], &cs[1], &b[mni], &x[1]
		    , &w[n3], &ire[1], ira, n, md, ind, &fun, &iv);
	    if (iv == 0) {
		if (*imp >= 11) {
		    io___2802.ciunit = *io;
		    s_wsfe(&io___2802);
		    do_fio(&c__1, car, 30L);
		    do_fio(&c__1, "A FEASIBLE POINT HAS BEEN FOUND (1)", 35L);
		    e_wsfe();
		}
		if (*imp >= 13) {
		    io___2803.ciunit = *io;
		    s_wsfe(&io___2803);
		    i__2 = *n;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			do_fio(&c__1, (char *)&x[i__], (ftnlen)sizeof(
				doublereal));
		    }
		    e_wsfe();
		}
		return 0;
	    }
	}
    }

 

 
 

    if (*ira > 0) {
	i__ = 1;
	if (i__ <= *n && *m < *n) {
L550:
	    iira = 0;
	    if ((*ira == 1 || *ira == 3) && x[i__] <= ci[i__]) {
		iira = 1;
		*ind = -i__;
	    }
	    if (iira == 0 && *ira >= 2 && x[i__] >= cs[i__]) {
		iira = 1;
		*ind = i__;
	    }
	    if (iira > 0) {
		m1 = *m + 1;
		k = *ind;
		anfm01_(&q[q_offset], iq, &r__[r_offset], ir, &w[1], &w[n1], 
			n, &m1, ind, io);
		if (*ind < 0) {
		    *ind = 0;
		} else {
		    *m = m1;
		    ipvt[*m] = k;
		    if (k < 0) {
			ire[i__] = -1;
		    } else {
			ire[i__] = 1;
		    }
		}
	    }
	    ++i__;
	    if (i__ <= *n && *m < *n) {
		goto L550;
	    }
	}
    }
    if (*md > 0 && *m < *n) {
	i__ = *mi + 1;
	nii = *n - *mi;
	if (i__ <= mid && *m < *n) {
L575:
	    s = b[i__] - ddot_(n, &c__[i__ * c_dim1 + 1], &c__1, &x[1], &c__1)
		    ;
	    if (s <= eps) {
		m1 = *m + 1;
		anfm01_(&q[q_offset], iq, &r__[r_offset], ir, &c__[i__ * 
			c_dim1 + 1], &w[n1], n, &m1, ind, io);
		if (*ind < 0) {
		    *ind = 0;
		} else {
		    ni = nii + i__;
		    *m = m1;
		    ire[ni] = 1;
		    ipvt[*m] = ni;
		}
	    }
	    ++i__;
	    if (i__ <= mid && *m < *n) {
		goto L575;
	    }
	}
    }
    if (*ira > 0 && *m < *n && iopt == 0) {
	i__ = 1;
	if (i__ <= *n && *m < *n) {
L600:
	    j = ire[i__];
	    if (j == 0) {
		iira = 0;
		if (*ira == 1 && ci[i__] >= -gig1) {
		    *ind = -i__;
		    iira = 1;
		} else if (*ira == 2 && cs[i__] <= gig1) {
		    *ind = i__;
		    iira = 1;
		} else {
		    cii = ci[i__];
		    csi = cs[i__];
		    if (cii >= -gig1 || csi <= gig1) {
			xi = x[i__];
			iira = 1;
			if (xi - cii < csi - xi) {
			    *ind = -i__;
			} else {
			    *ind = i__;
			}
		    }
		}
		if (iira > 0) {
		    m1 = *m + 1;
		    k = *ind;
		    anfm01_(&q[q_offset], iq, &r__[r_offset], ir, &w[1], &w[
			    n1], n, &m1, ind, io);
		    if (*ind < 0) {
			*ind = 0;
		    } else {
			*m = m1;
			ipvt[*m] = k;
			if (k > 0) {
			    ire[i__] = 1;
			} else {
			    ire[i__] = -1;
			}
		    }
		}
	    }
	    ++i__;
	    if (i__ <= *n && *m < *n) {
		goto L600;
	    }
	}
    }
    i__ = *mi + 1;
    if (i__ <= mid && *m < *n && iopt == 0) {
L625:
	ni = nii + i__;
	j = ire[ni];
	if (j == 0) {
	    m1 = *m + 1;
	    anfm01_(&q[q_offset], iq, &r__[r_offset], ir, &c__[i__ * c_dim1 + 
		    1], &w[n1], n, &m1, ind, io);
	    if (*ind < 0) {
		*ind = 0;
	    } else {
		*m = m1;
		ire[ni] = 1;
		ipvt[*m] = ni;
	    }
	}
	++i__;
	if (i__ <= mid && *m < *n && iopt == 0) {
	    goto L625;
	}
    }
    if (*modo == 1 && inf == 1) {
	if (*imp >= 11) {
	    io___2812.ciunit = *io;
	    s_wsfe(&io___2812);
	    do_fio(&c__1, car, 30L);
	    do_fio(&c__1, "THE FACTORIZATION  QR  HAS BEEN OBTAINED.", 41L);
	    e_wsfe();
	}
	return 0;
    }

 

    m1 = *m + 1;
    i__2 = *m;
    for (i__ = mr + 1; i__ <= i__2; ++i__) {
	l = ipvt[i__];
	if (l < 0) {
	    w[i__] = -ci[-l];
	} else if (l <= *n) {
	    w[i__] = cs[l];
	} else {
	    w[i__] = b[*mi + l - *n];
	}
 
    }
    if (iopt == 1 && mr < *m || iopt == 0) {
	*ind = 1;
	anrs01_(&r__[r_offset], ir, m, &w[1], &w[1], ind, io);
	dmmul_(&q[q_offset], iq, &w[1], m, &x[1], n, n, m, &c__1);
    }
    *ind = 0;
    nm = *n - *m;

 

    if (icont <= itemax) {

 
 

L650:
	if (icicla == 0) {
	    *ind = 1;
	    auxo01_(&c__[mni * c_dim1 + 1], ic, &ci[1], &cs[1], &b[mni], &x[1]
		    , &w[1], &ire[1], ira, n, md, ind, &fun, &iv);
	    *ind = 0;

 

 

	    if (iv == 0) {
		if (*imp >= 11) {
		    io___2814.ciunit = *io;
		    s_wsfe(&io___2814);
		    do_fio(&c__1, car, 30L);
		    do_fio(&c__1, "A FEASIBLE POINT HAS BEEN FOUND", 31L);
		    e_wsfe();
		}
		if (*imp >= 13) {
		    io___2815.ciunit = *io;
		    s_wsfe(&io___2815);
		    i__2 = *n;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			do_fio(&c__1, (char *)&x[i__], (ftnlen)sizeof(
				doublereal));
		    }
		    e_wsfe();
		}
		if (*imp >= 12) {
		    io___2816.ciunit = *io;
		    s_wsfe(&io___2816);
		    do_fio(&c__1, "NUMBER OF ITERATIONS:", 21L);
		    do_fio(&c__1, (char *)&icont, (ftnlen)sizeof(integer));
		    e_wsfe();
		}
		return 0;
	    } else if (iv == 1 && *mi1 == *m) {
		*ind = -2;
		if (*imp >= 11) {
		    io___2817.ciunit = *io;
		    s_wsfe(&io___2817);
		    do_fio(&c__1, car, 30L);
		    e_wsfe();
		}
		return 0;
	    } else {
		if (*imp >= 13) {
		    io___2818.ciunit = *io;
		    s_wsfe(&io___2818);
		    do_fio(&c__1, (char *)&icont, (ftnlen)sizeof(integer));
		    do_fio(&c__1, (char *)&fun, (ftnlen)sizeof(doublereal));
		    e_wsfe();
		    if (*imp >= 14) {
			io___2819.ciunit = *io;
			s_wsfe(&io___2819);
			i__2 = *n;
			for (i__ = 1; i__ <= i__2; ++i__) {
			    do_fio(&c__1, (char *)&x[i__], (ftnlen)sizeof(
				    doublereal));
			}
			e_wsfe();
		    }
		}
	    }
	}
	++icont;
	if (*m < *n) {
	    j = n2;
	    i__2 = *n;
	    for (i__ = m1; i__ <= i__2; ++i__) {
		w[j] = ddot_(n, &q[i__ * q_dim1 + 1], &c__1, &w[1], &c__1);
		++j;
 
	    }
	    i__2 = *n - *m;
	    s = dnrm2_(&i__2, &w[n2], &c__1);
	    s = (( s ) >= 0 ? ( s ) : -( s )) ;
	} else {
	    s = 0.;
	}
	if (s < eps) {

 

	    i__2 = *m;
	    for (i__ = 1; i__ <= i__2; ++i__) {
 
		w[*n + i__] = ddot_(n, &q[i__ * q_dim1 + 1], &c__1, &w[1], &
			c__1);
	    }
	    *ind = 2;
	    anrs01_(&r__[r_offset], ir, m, &w[n1], &w[n2], ind, io);

 

 

	    *ind = 0;
	    icol = *mi1 + 1;
	    s1 = w[n2 + *mi1];
	    i__2 = *m - 1;
	    for (i__ = *mi1 + 1; i__ <= i__2; ++i__) {
		j = n2 + i__;
		if (w[j] < s1) {
		    s1 = w[j];
		    icol = i__ + 1;
		}
 
	    }
	    if (s1 > -eps) {
		if (*imp >= 11) {
		    io___2822.ciunit = *io;
		    s_wsfe(&io___2822);
		    do_fio(&c__1, car, 30L);
		    e_wsfe();
		    io___2823.ciunit = *io;
		    s_wsfe(&io___2823);
		    do_fio(&c__1, (char *)&s1, (ftnlen)sizeof(doublereal));
		    e_wsfe();
		}
		*ind = -2;
		return 0;
	    }

 

	    anfm02_(&q[q_offset], iq, &r__[r_offset], ir, n, m, &icol, io);

 

	    s1 = ddot_(n, &q[*n * q_dim1 + 1], &c__1, &w[1], &c__1);
	    dcopy_(n, &q[*n * q_dim1 + 1], &c__1, &w[n1], &c__1);
	    if (s1 < 0.) {
		i__2 = n2 - 1;
		for (i__ = n1; i__ <= i__2; ++i__) {
 
		    w[i__] = -w[i__];
		}
	    } else {
		s1 = -s1;
	    }
	} else {
	    i__2 = *n - *m;
	    i__1 = *n - *m;
	    dmmul_(&q[m1 * q_dim1 + 1], iq, &w[n2], &i__2, &w[n1], n, n, &
		    i__1, &c__1);
	    s1 = -ddot_(n, &w[1], &c__1, &w[n1], &c__1);
	    icol = n1;
	}

 

	k = 0;
	if (*ira > 0) {
	    i__ = 0;
	    if (i__ < *n && k == 0) {
L675:
		++i__;
		ii = *n + i__;
		if (*ira > 1) {
		    if (cs[i__] <= gig1 && ire[i__] == 0 && w[ii] > eps && x[
			    i__] >= cs[i__] - eps) {
			k = 1;
			icol3 = i__;
		    }
		}
		if (k == 0 && *ira != 2) {
		    if (ci[i__] >= -gig1 && ire[i__] == 0 && w[ii] < -eps && 
			    x[i__] <= ci[i__] + eps) {
			k = 1;
			icol3 = -i__;
		    }
		}
		if (i__ < *n && k == 0) {
		    goto L675;
		}
	    }
	}
	i__ = 0;
	if (i__ < *md && k == 0) {
L700:
	    ii = nmd + i__;
	    in = n3 + i__;
	    ++i__;
	    ni = *n + i__;
	    if (ire[ni] != 1) {
		w[ii] = ddot_(n, &c__[(*mi + i__) * c_dim1 + 1], &c__1, &w[n1]
			, &c__1);
		if (ire[ni] == 0 && w[in] >= -eps && w[ii] > eps) {
		    k = 1;
		    icol3 = ni;
		}
	    }
	    if (i__ < *md && k == 0) {
		goto L700;
	    }
	}

 

 

	if (k == 1) {
	    ++icicla;
	    if (icol < n1) {
		if (icicla > *m || icol3 == icol1 && icol == *m) {
		    if (*imp >= 11) {
			io___2827.ciunit = *io;
			s_wsfe(&io___2827);
			do_fio(&c__1, car, 30L);
			e_wsfe();
		    }
		    *ind = -3;
		    return 0;
		}
		icol1 = icol2;
		icol2 = icol3;
		i__ = ipvt[icol];
		if (i__ > *n) {
		    w[n2 + i__] = ddot_(n, &c__[(i__ - *n + *mi) * c_dim1 + 1]
			    , &c__1, &x[1], &c__1) - b[i__ - *n + *mi];
		}
	    }
	} else if (icicla > 0) {
	    icicla = 0;
	    icol1 = 0;
	    icol2 = 0;
	}

 

 

	k = 0;
	if (*ira > 0) {
	    i__ = 0;
	    if (i__ < *n && icicla == 0) {
L725:
		i1 = i__ + 1;
		j = 0;
		ii = n1 + i__;
		wii = w[ii];
		irei = ire[i1];
		if (*ira > 1) {
		    if (cs[i1] <= gig1 && (irei == 0 && wii > eps || irei == 
			    2 && wii < -eps)) {
			w[n2 + k] = (cs[i1] - x[i1]) / wii;
			++k;
			ipvt[*m + k] = i1;
			j = 1;
		    }
		}
		if (j == 0 && *ira != 2) {
		    if (ci[i1] >= -gig1 && (irei == 0 && wii < -eps || irei ==
			     -2 && wii > eps)) {
			w[n2 + k] = (ci[i1] - x[i1]) / wii;
			++k;
			ipvt[*m + k] = -i1;
		    }
		}
		i__ = i1;
		if (i__ < *n && icicla == 0) {
		    goto L725;
		}
	    }
	}
	if (icol < n1) {
	    ipc = ipvt[icol];
	    ia = (( ipc ) >= 0 ? ( ipc ) : -( ipc )) ;
	    if (icicla == 0 && ia <= *n && *ira == 3) {
		cii = ci[ia];
		csi = cs[ia];
		if (cii >= -gig1 && csi <= gig1) {
		    ++k;
		    if (ipc < 0) {
			w[n2 + k - 1] = (csi - x[ia]) / w[*n + ia];
			ipvt[*m + k] = ia;
		    } else {
			w[n2 + k - 1] = (cii - x[ia]) / w[*n + ia];
			ipvt[*m + k] = -ia;
		    }
		}
	    }
	}
	i__ = 0;
	if (i__ < *md && icicla == 0) {
L750:
	    i1 = i__ + 1;
	    ii = nmd + i__;
	    ni = *n + i1;
	    ireni = ire[ni];
	    wii = w[ii];
	    if (ireni == 0 && wii > eps || ireni == 2 && wii < -eps) {
		w[n2 + k] = -w[n3 + i__] / wii;
		++k;
		ipvt[*m + k] = ni;
	    }
	    i__ = i1;
	    if (i__ < *md && icicla == 0) {
		goto L750;
	    }
	}

 

	r2 = 0.;
	if (icicla == 0 && s1 < -eps) {
L775:
	    l = 0;
	    r1 = r2;
	    r2 = gigant;
	    i__2 = k;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		ii = n2 + i__ - 1;
		wii = w[ii];
		if (wii <= r2 && wii > r1) {
		    if (wii < r2) {
			l = 0;
		    }
		    r2 = wii;
		    w[ii] = w[n2 + l];
		    w[n2 + l] = r2;
		    ni = *m + i__;
		    ++l;
		    j = ipvt[ni];
		    ml = *m + l;
		    ipvt[ni] = ipvt[ml];
		    ipvt[ml] = j;
		}
 
	    }

 

 

	    icol3 = ipvt[m1];
	    i__2 = l;
	    for (i__ = 1; i__ <= i__2; ++i__) {
		j = ipvt[*m + i__];
		if (j < 0) {
		    j = -j;
		    jj = *n + j;
		    if (ire[j] == -2) {
			s1 += w[jj];
			if (*ira == 3) {
			    if (ci[j] >= -gig1 && cs[j] <= gig1) {
				ire[j] = 0;
				ipvt[*m + i__] = j;
				w[n2 + i__ - 1] = (cs[j] - x[j]) / w[*n + j];
			    }
			}
		    } else {
			s1 -= w[jj];
		    }
		} else if (j < n1) {
		    jj = *n + j;
		    if (ire[j] == 2) {
			s1 -= w[jj];
			if (*ira == 3) {
			    if (ci[j] >= -gig1 && cs[i__] <= gig1) {
				ire[j] = 0;
				ipvt[*m + i__] = -j;
				w[n2 + i__ - 1] = (ci[j] - x[j]) / w[*n + j];
			    }
			}
		    } else {
			s1 += w[jj];
		    }
		} else if (j > *n) {
		    jj = nmd + j - n1;
		    if (ire[j] == 2) {
			s1 -= w[jj];
		    }
		    if (ire[j] == 0) {
			s1 += w[jj];
		    }
		}
 
	    }
	    if (icicla == 0 && s1 < -eps) {
		goto L775;
	    }
	}

 

	if (icicla == 0) {
	    ipvt[m1] = icol3;
	    daxpy_(n, &r2, &w[n1], &c__1, &x[1], &c__1);
	}

 

 
 

	if (icol3 < 0) {
	    ire[-icol3] = -1;
	} else {
	    ire[icol3] = 1;
	}
	if (icol < n1) {
	    ire[ia] = 0;
	    i__2 = *m - 1;
	    for (j = icol; j <= i__2; ++j) {
 
		ipvt[j] = ipvt[j + 1];
	    }
	    ipvt[*m] = icol3;
	} else {
	    icicla = 0;
	    *m = m1;
	    ++m1;
	}
	if (icol3 <= *n) {
	    *ind = icol3;
	} else {
	    dcopy_(n, &c__[(*mi + icol3 - *n) * c_dim1 + 1], &c__1, &w[n1], &
		    c__1);
	}
	anfm01_(&q[q_offset], iq, &r__[r_offset], ir, &w[n1], &w[n2], n, m, 
		ind, io);
	*ind = 0;
	if (icicla != 0 && *imp >= 13) {
	    io___2838.ciunit = *io;
	    s_wsfe(&io___2838);
	    do_fio(&c__1, "A DEGENERATED POINT HAS BEEN FOUND IN THE ITERATION:", 52L);
	    do_fio(&c__1, (char *)&icont, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	if (icont <= itemax) {
	    goto L650;
	}
    }
    if (*imp >= 11) {
	io___2839.ciunit = *io;
	s_wsfe(&io___2839);
	do_fio(&c__1, car, 30L);
	e_wsfe();
    }
    *ind = -4;
}  

  int optr03_(a, ia, c__, ic, q, iq, r__, ir, p, b, d__, ci, 
	cs, x, w, iw, ire, ipvt, jpvt, alfa, ira, n, m, mi, mi1, md, mif, mdf,
	 modo, ind, imp, io, iter)
doublereal *a;
integer *ia;
doublereal *c__;
integer *ic;
doublereal *q;
integer *iq;
doublereal *r__;
integer *ir;
doublereal *p, *b, *d__, *ci, *cs, *x, *w;
integer *iw, *ire, *ipvt, *jpvt;
doublereal *alfa;
integer *ira, *n, *m, *mi, *mi1, *md, *mif, *mdf, *modo, *ind, *imp, *io, *
	iter;
{
     
    integer c_dim1, c_offset, a_dim1, a_offset, q_dim1, q_offset, r_dim1, 
	    r_offset, i__1, i__2;
    doublereal d__1, d__2;

     
    double pow_dd(), sqrt();

     
    static integer iadd;
    extern   int ddif_();
    static integer midf, ides, icol, nmdi, indm;
    extern doublereal ddot_();
    static integer info;
    extern   int tol03_();
    static integer iver, inul, icol1, icol2, icol3;
    extern   int aux003_();
    extern doublereal dnrm0_(), dnrm2_();
    static integer i__, j, k, l;
    static doublereal s;
    extern   int anfm01_(), anfm03_(), dscal_(), anfm02_(), 
	    anfm06_(), anfm04_(), dimp03_(), anfm05_();
    static integer iicol;
    extern   int desr03_(), anrs01_(), pasr03_();
    static integer icont;
    extern   int auxo01_(), dmmul_(), dcopy_();
    extern doublereal opvf03_();
    extern   int optr01_(), nvkt03_(), daxpy_();
    static integer i1, j1, m0, m1, n1, n2, n3, m2;
    static doublereal s1, s2, s3;
    static integer id, n10, nd, ii, icicla, il;
    extern doublereal dlamch_();
    static integer ni, ip, nm, iv, iibeta;
    static doublereal ro;
    extern integer idamax_();
    static integer jj, in;
    static doublereal sj, sk;
    static integer nf;
    static doublereal gigant, sw, epsmch, dnorma;
    static integer itemax, minimo, nd1, nm1;
    static doublereal xi1;
    static integer iad, icd;
    static doublereal cii;
    static integer mid, nmd;
    static doublereal csi;
    static integer nmf, idw;
    static doublereal eps, fun, gig1;
    static integer ind1;
    static doublereal eps0;
    extern   int dadd_();
     
    a_dim1 = *ia;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    c_dim1 = *ic;
    c_offset = c_dim1 + 1;
    c__ -= c_offset;
    q_dim1 = *iq;
    q_offset = q_dim1 + 1;
    q -= q_offset;
    r_dim1 = *ir;
    r_offset = r_dim1 + 1;
    r__ -= r_offset;
    --p;
    --b;
    --d__;
    --ci;
    --cs;
    --x;
    --w;
    --ire;
    --ipvt;
    --jpvt;

     
    if (*ic < *n && (*mi > 0 || *md > 0) || *n <= 1 || *ir < *n || (*mif > 0 
	    || *mdf > 0) && *ia < *n || *iq < *n || *modo < -1 || *modo > 6 ||
	     *mi < 0 || *md < 0 || *mif < 0 || *mdf < 0 || *ira < 0 || *ira > 
	    3 || *io < 1) {
	*ind = -4;
	dimp03_(&x[1], &w[1], &ire[1], &ipvt[1], &s, &c__0, &c__0, &c__0, &
		c__0, &c__0, &c__0, &c__0, &c__0, &c__0, ind, imp, io, iter);
	return 0;
    }

 

    epsmch = dlamch_("p", 1L);
    eps = pow_dd(&epsmch, &c_b5779);
    eps0 = pow_dd(&epsmch, &c_b5732);
    gigant = dlamch_("o", 1L);
    gig1 = sqrt(gigant);

 

    if (*ira > 0) {
	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    if (*ira == 3) {
		if (ci[i__] >= -gig1 && cs[i__] <= gig1 && ci[i__] > cs[i__]) 
			{
		    if (*imp >= 7) {
			dimp03_(&x[1], &w[1], &ire[1], &ipvt[1], &s, &i__, &
				c__0, &c__0, &c__0, &c__0, &c__0, &c__0, &
				c__0, &c__0, &c_n24, imp, io, iter);
		    }
		    *ind = -4;
		    return 0;
		}
	    }
	    if (*modo == 3 || *modo == 5 || *modo <= 0) {
		if (ire[i__] < -1 || ire[i__] > 1) {
		    if (*imp >= 7) {
			dimp03_(&x[1], &w[1], &ire[1], &ipvt[1], &s, &c__0, &
				c__0, &c__0, &c__0, &c__0, &c__0, &c__0, &
				c__0, &c__0, &c_n34, imp, io, iter);
		    }
		    *ind = -4;
		    return 0;
		}
	    }
 
	}
    }
    if (*modo == 3 || *modo == 5 || *modo <= 0) {
	i__1 = *n + *md + *mif + *mdf;
	for (i__ = *n + 1; i__ <= i__1; ++i__) {
	    if ((ire[i__] < 0 || ire[i__] > 1) && i__ <= *n + *md || (ire[i__]
		     < -2 || ire[i__] > 2) && i__ > *n + *md) {
		if (*imp >= 7) {
		    dimp03_(&x[1], &w[1], &ire[1], &ipvt[1], &s, &c__0, &c__0,
			     &c__0, &c__0, &c__0, &c__0, &c__0, &c__0, &c__0, 
			    &c_n34, imp, io, iter);
		}
		*ind = -4;
		return 0;
	    }
 
	}
    }

 

    if (*modo > 3) {
	iver = 1;
	if (*modo == 6) {
	    *modo = 1;
	} else {
	    *modo += -2;
	}
    } else {
	iver = -1;
    }
    n1 = *n + 1;
    n2 = n1 + *n;
    n3 = n2 + *n;
    n10 = *iq * 10;
    if (*modo != 3 || *modo != 0) {
	*mi1 = *mi;
    }
    mid = *mi + *md;
    midf = *mif + *mdf;
    nmd = *n + *md;
    nmdi = nmd + *mif;
    nd1 = nmd + 1;
    nd = nmd + midf + 1;
    icd = nd + *n;
    iad = icd + *md;
    idw = iad + midf;
    *iter = 0;
    id = 0;
    *ind = 0;
    icicla = 0;
    il = 0;
    icol = 0;
    icol1 = 0;
    icol2 = 0;
    iicol = 0;
    info = 0;
    itemax = *n + mid + midf << 2;
    icont = 0;
    if (*ira == 0) {
	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    ire[i__] = 0;
	}
    }

 
 
 

    if (*modo == -1) {
	if (*mi == 0) {
	    *m = 0;
	}
	if (mid == 0) {
	    i__1 = *n;
	    for (i__ = 1; i__ <= i__1; ++i__) {
		i__2 = *n;
		for (j = 1; j <= i__2; ++j) {
		    if (i__ == j) {
			q[i__ + j * q_dim1] = 1.;
		    } else {
			q[i__ + j * q_dim1] = 0.;
		    }
 
		}
 
	    }
	}
	if (mid == 0 && *ira > 0) {
	    i__1 = *n;
	    for (i__ = 1; i__ <= i__1; ++i__) {
		if (ire[i__] == 1) {
		    *ind = i__;
		}
		if (ire[i__] == -1) {
		    *ind = -i__;
		}
		if (*ind != 0) {
		    ++(*m);
		    anfm01_(&q[q_offset], iq, &r__[(r_dim1 << 1) + 1], ir, &w[
			    1], &w[1], n, m, ind, io);
		    ipvt[*m] = ire[i__] * i__;
		}
 
	    }
	} else if (mid > 0) {
	    *modo = 22;
	    optr01_(&c__[c_offset], ic, &q[q_offset], iq, &r__[(r_dim1 << 1) 
		    + 1], ir, &ci[1], &cs[1], &d__[1], &x[1], &w[1], &ipvt[1],
		     &ire[1], ira, n, m, mi, mi1, md, ind, imp, io, modo);
	    *modo = -1;
	}
	if (midf > 0) {
	    i__ = 1;
	    if (i__ <= midf && *m < *n) {
L1000:
		ni = nmd + i__;
		if (ire[ni] == 1) {
		    m1 = *m + 1;
		    *ind = 0;
		    anfm01_(&q[q_offset], iq, &r__[(r_dim1 << 1) + 1], ir, &a[
			    i__ * a_dim1 + 1], &w[1], n, &m1, ind, io);
		    if (*ind < 0) {
			ire[ni] = 0;
		    } else {
			*m = m1;
			ipvt[*m] = ni;
		    }
		}
		++i__;
		if (i__ <= midf && *m < *n) {
		    goto L1000;
		}
	    }
	}
    }

 

 

 

    if (*modo <= 0) {
	i1 = idamax_(n, &x[1], &c__1);
	s1 = x[i1];
	if (s1 == 0.) {
	    i__1 = *mi1;
	    for (i__ = 1; i__ <= i__1; ++i__) {
 
		w[i__] = d__[ipvt[i__]];
	    }
	    i__1 = *m;
	    for (i__ = *mi1 + 1; i__ <= i__1; ++i__) {
		l = ipvt[i__];
		if (l < 0) {
		    w[i__] = -ci[-l];
		} else if (l <= *n) {
		    w[i__] = cs[l];
		} else if (l <= nmd) {
		    w[i__] = d__[*mi + l - *n];
		} else {
		    w[i__] = b[l - nmd];
		}
 
	    }
	} else {
	    i__1 = *mi1;
	    for (i__ = 1; i__ <= i__1; ++i__) {
		l = ipvt[i__];
		w[i__] = d__[l] - ddot_(n, &c__[l * c_dim1 + 1], &c__1, &x[1],
			 &c__1);
 
	    }
	    i__1 = *m;
	    for (i__ = *mi1 + 1; i__ <= i__1; ++i__) {
		l = ipvt[i__];
		if (l < 0) {
		    w[i__] = -ci[-l] + x[-l];
		} else if (l <= *n) {
		    w[i__] = cs[l] - x[l];
		} else if (l <= nmd) {
		    ni = *mi + l - *n;
		    w[i__] = d__[ni] - ddot_(n, &c__[ni * c_dim1 + 1], &c__1, 
			    &x[1], &c__1);
		} else {
		    ni = l - nmd;
		    w[i__] = b[ni] - ddot_(n, &a[ni * a_dim1 + 1], &c__1, &x[
			    1], &c__1);
		}
 
	    }
	}
	*ind = 1;
	anrs01_(&r__[(r_dim1 << 1) + 1], ir, m, &w[1], &w[n1], ind, io);
	*ind = 0;
	dmmul_(&q[q_offset], iq, &w[n1], m, &w[1], n, n, m, &c__1);
	dadd_(n, &x[1], &c__1, &w[1], &c__1);

 

 

 

	iv = 0;
	if (mid > 0 || *ira > 0) {
	    i1 = *mi + 1;
	    auxo01_(&c__[i1 * c_dim1 + 1], ic, &ci[1], &cs[1], &d__[i1], &w[1]
		    , &w[n1], &ire[1], ira, n, md, ind, &fun, &iv);
	}
	if (iv == 0) {
	    dcopy_(n, &w[1], &c__1, &x[1], &c__1);
	} else {
	    *modo = 2;
	}
    }

 
 
 

    if (mid == 0 && (*modo == 2 || *modo == 1 && *ira == 0)) {
	*m = 0;
	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    i__2 = *n;
	    for (j = 1; j <= i__2; ++j) {
		if (i__ == j) {
		    q[i__ + j * q_dim1] = 1.;
		} else {
		    q[i__ + j * q_dim1] = 0.;
		}
 
	    }
 
	}
    }

 

 

 

    if (*modo == 1) {
	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    x[i__] = 0.;
	}
	if (mid > 0 || *ira > 0) {
	    if (iver == 1) {
		*modo = 11;
	    }
	    optr01_(&c__[c_offset], ic, &q[q_offset], iq, &r__[(r_dim1 << 1) 
		    + 1], ir, &ci[1], &cs[1], &d__[1], &x[1], &w[1], &ipvt[1],
		     &ire[1], ira, n, m, mi, mi1, md, ind, imp, io, modo);
	    if (iver == 1) {
		*modo = 1;
	    }
	    if (*ind < 0) {
		*ind += -10;
		if (*imp >= 7 && *imp <= 10) {
		    dimp03_(&x[1], &w[1], &ire[1], &ipvt[1], &s, &c__0, &c__0,
			     &c__0, &c__0, &c__0, &c__0, &c__0, &c__0, &c__0, 
			    ind, imp, io, iter);
		}
		return 0;
	    }
	    dcopy_(md, &w[n3], &c__1, &w[n1], &c__1);
	}
    }

 
 

    if (*modo == 2) {
	*m = 0;
	if (*ira >= 1) {
	    i__1 = *n;
	    for (i__ = 1; i__ <= i__1; ++i__) {
		ire[i__] = 0;
		if (*ira != 2) {
		    if (ci[i__] >= -gig1) {
			if (x[i__] < ci[i__] + eps) {
			    x[i__] = ci[i__];
			    ire[i__] = -1;
			    if (mid == 0) {
				++(*m);
				ip = -i__;
				anfm01_(&q[q_offset], iq, &r__[(r_dim1 << 1) 
					+ 1], ir, &x[1], &w[1], n, m, &ip, io)
					;
				ipvt[*m] = -i__;
			    }
			}
		    }
		}
		if (*ira >= 2) {
		    if (cs[i__] <= gig1 && ire[i__] == 0) {
			if (x[i__] > cs[i__] - eps) {
			    x[i__] = cs[i__];
			    ire[i__] = 1;
			    if (mid == 0) {
				++(*m);
				ip = i__;
				anfm01_(&q[q_offset], iq, &r__[(r_dim1 << 1) 
					+ 1], ir, &x[1], &w[1], n, m, &ip, io)
					;
				ipvt[*m] = i__;
			    }
			}
		    }
		}
 
	    }
	}
	i__1 = *md;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    ii = *mi + i__;
	    s = ddot_(n, &c__[ii * c_dim1 + 1], &c__1, &x[1], &c__1) - d__[ii]
		    ;
	    ni = *n + i__;
	    if (s > -eps) {
		ire[ni] = 1;
	    } else {
		ire[ni] = 0;
	    }
	    w[ni] = s;
 
	}
	if (mid > 0) {
	    *modo = 22;
	    optr01_(&c__[c_offset], ic, &q[q_offset], iq, &r__[(r_dim1 << 1) 
		    + 1], ir, &ci[1], &cs[1], &d__[1], &x[1], &w[nd1], &ipvt[
		    1], &ire[1], ira, n, m, mi, mi1, md, ind, imp, io, modo);
	    *modo = 2;
	}
    }
    iv = 0;
    if (iver == 1) {
	iv = *m;
	iver = *m;
    }

 

 

    if (*modo == 3) {
	i__1 = *md;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    ii = *mi + i__;
	    ni = *n + i__;
	    w[ni] = 0.;
	    if (ire[ni] == 0) {
		w[ni] = ddot_(n, &c__[ii * c_dim1 + 1], &c__1, &x[1], &c__1) 
			- d__[ii];
	    }
 
	}
	i__1 = midf;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    ii = (i__2 = ire[nmd + i__], (( i__2 ) >= 0 ? ( i__2 ) : -( i__2 )) );
	    if (i__ <= *mif && ii == 2 || ii != 1) {
		w[nmd + i__] = ddot_(n, &a[i__ * a_dim1 + 1], &c__1, &x[1], &
			c__1) - b[i__];
	    } else {
		w[nmd + i__] = 0.;
	    }
 
	}
    } else {
	i__1 = midf;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    w[nmd + i__] = 0.;
	}
	*ind = 0;
	if (*modo > 0) {
	    i__1 = nmd + midf;
	    for (i__ = nd1; i__ <= i__1; ++i__) {
 
		ire[i__] = 0;
	    }
	}
	aux003_(&a[a_offset], ia, &x[1], &b[1], &q[q_offset], iq, &r__[(
		r_dim1 << 1) + 1], ir, &w[nd1], &ire[nd1], &ipvt[1], &nmd, 
		mif, mdf, &midf, n, m, ind, io);
    }
    if (*m == *n) {
	minimo = 1;
	id = 2;
	nm = 0;
    } else {
	minimo = 0;
    }

 

    if (minimo == 0 && *modo != -2) {
	m1 = *m + 1;
	nm = *n - *m;
	*ind = 0;
	i__1 = iver - iv;
	anfm03_(&r__[r_offset], ir, &r__[(m1 + 1) * r_dim1 + 1], ir, &q[m1 * 
		q_dim1 + 1], iq, &w[1], &jpvt[1], n, &nm, ind, &i__1, io);
	if (*ind <= -n10) {
	    *ind += n10;
	    iibeta = 1;
	} else {
	    iibeta = 0;
	}
	if (*ind == *n && iver == iv) {
	    *ind = -1;
	    if (*imp >= 7) {
		dimp03_(&x[1], &w[1], &ire[1], &ipvt[1], &s, &c__0, &c__0, &
			c__0, &c__0, &c__0, &c__0, &c__0, &c__0, &c__0, ind, 
			imp, io, iter);
	    }
	    return 0;
	}
    } else if (minimo == 0) {
	nm = *n - *m;
    }

 

    if (*iter <= itemax) {
L2000:
	iadd = 0;
	ind1 = 0;
	il = 0;
	if (iicol == 1) {
	    id = 2;
	}

 

	if (icicla == 0) {
	    i__1 = *n;
	    for (i__ = 1; i__ <= i__1; ++i__) {
		i1 = i__ + 1;
		s = ddot_(&i__, &r__[i__ + r_dim1], ir, &x[1], &c__1);
		if (i__ < *n) {
		    i__2 = *n - i__;
		    w[i__] = s + ddot_(&i__2, &r__[i1 + i__ * r_dim1], &c__1, 
			    &x[i1], &c__1);
		}
 
	    }
	    w[*n] = s;
	    dadd_(n, &p[1], &c__1, &w[1], &c__1);
	    if (*alfa != 1.) {
		dscal_(n, alfa, &w[1], &c__1);
	    }
	    i__1 = *mif;
	    for (i__ = 1; i__ <= i__1; ++i__) {
		ni = nmd + i__;
		if (ire[ni] == 2) {
		    dadd_(n, &a[i__ * a_dim1 + 1], &c__1, &w[1], &c__1);
		} else if (ire[ni] == -2) {
		    ddif_(n, &a[i__ * a_dim1 + 1], &c__1, &w[1], &c__1);
		}
 
	    }
	    i__1 = midf;
	    for (i__ = *mif + 1; i__ <= i__1; ++i__) {
 
		if (ire[i__ + nmd] == 2) {
		    dadd_(n, &a[i__ * a_dim1 + 1], &c__1, &w[1], &c__1);
		}
	    }
	}

 

 

 

	s1 = gigant;
	s2 = 0.;
	inul = 0;
	if (id >= 2) {
	    i1 = icd - 1;
	    i__1 = nm;
	    for (i__ = 1; i__ <= i__1; ++i__) {
 
		w[i1 + i__] = ddot_(n, &q[(n1 - i__) * q_dim1 + 1], &c__1, &w[
			1], &c__1);
	    }
	    if (minimo == 0) {
		s2 = dnrm2_(&nm, &w[icd], &c__1) / (dnrm0_(n, &x[1], &c__1) + 
			1);
	    }
	    if (s2 >= eps0) {
		info = 10;
		++icont;
	    } else if (icont > 0) {
		icont = 0;
	    }
	    if ((*m > *mi1 || (*imp >= 8 || *iw == 1) && *m > 0) && (icont == 
		    0 || icont == 3)) {
		i__1 = *m;
		for (i__ = 1; i__ <= i__1; ++i__) {
 
		    w[nd + i__ - 1] = -ddot_(n, &q[i__ * q_dim1 + 1], &c__1, &
			    w[1], &c__1);
		}
		anrs01_(&r__[(r_dim1 << 1) + 1], ir, m, &w[nd], &w[nd], &c__2,
			 io);
		if (*m > *mi1) {

 

 

		    indm = 1;
		    if (indm == 1) {
L3000:
			icol = 0;
			j = nd - 1 + *mi1;
			i__1 = *m;
			for (i__ = *mi1 + 1; i__ <= i__1; ++i__) {
			    ++j;
			    k = ipvt[i__];
			    if (k <= nmd) {
				s = w[j];
			    } else if (k > nmd && k <= nmdi) {
				s = 1. - (d__1 = w[j], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
			    } else {
				sw = w[j];
 
				d__1 = sw, d__2 = 1. - sw;
				s = (( d__1 ) <= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
			    }
			    if (s < s1) {
				s1 = s;
				icol = i__;
			    }
 
			}
			if (icol != 0) {
			    if (ipvt[icol] > nmd) {
				inul = 1;
			    }
			}
			if (s1 < -eps || s1 <= eps && inul == 0) {
			    if (inul == 0 && (( s1 ) >= 0 ? ( s1 ) : -( s1 ))  <= eps) {
				dcopy_(m, &w[nd], &c__1, &w[icd], &c__1);
			    }
			    if (icont > 0) {
				icont = 0;
			    }

 

 

 

 

			    if (*m > 1) {
				anfm02_(&q[q_offset], iq, &r__[(r_dim1 << 1) 
					+ 1], ir, n, m, &icol, io);
			    }
			    m1 = *m - 1;
			    il = ipvt[icol];
			    if (il > *n) {
				w[il] = 0.;
			    }
			    s = w[nd + icol - 1];
			    ire[(( il ) >= 0 ? ( il ) : -( il )) ] = 0;
			    i__1 = m1;
			    for (j = icol; j <= i__1; ++j) {
 
				ipvt[j] = ipvt[j + 1];
			    }
			    if (minimo == 1) {
				*ind = 0;
				nm = 0;
			    }
			    anfm06_(&q[*m * q_dim1 + 1], iq, &r__[r_offset], 
				    ir, &w[nd], &jpvt[1], n, &nm, ind, io);
			    info = 1;
			    *m = m1;
			    if (iver != -1 && il <= nmd) {
				--iver;
			    } else if (iver == iv && *ind < 0) {
				*ind = -1;
				if (*imp >= 7) {
				    dimp03_(&x[1], &w[1], &ire[1], &ipvt[1], &
					    s, &c__0, &c__0, &c__0, &c__0, &
					    c__0, &c__0, &c__0, &c__0, &c__0, 
					    ind, imp, io, iter);
				}
				return 0;
			    }
			}
			if (*ind < 0 || *ind > nm || (( s1 ) >= 0 ? ( s1 ) : -( s1 ))  > eps) {
			    indm = 0;
			} else {
			    s1 = gigant;
			    i__1 = icol - 1;
			    dcopy_(&i__1, &w[icd], &c__1, &w[nd], &c__1);
			    j1 = nd + icol - 1;
			    i__1 = icd + *m;
			    for (j = icd + icol; j <= i__1; ++j) {
				w[j1] = w[j];
				++j1;
 
			    }
			}
			if (indm == 1) {
			    goto L3000;
			}
		    }
		}
	    }
	}

 


	if (id >= 2 && (s1 > eps || s1 >= -eps && inul == 1) && (s2 < eps0 || 
		icont >= 3)) {
	    tol03_(&q[q_offset], iq, &r__[(r_dim1 << 1) + 1], ir, &c__[
		    c_offset], ic, &d__[1], &a[a_offset], ia, &b[1], &ci[1], &
		    cs[1], &x[1], &w[nd + *m], &ipvt[1], n, m, mi, mi1, &nmd, 
		    io);
	    *ind = 0;
	    if (*iw != 0) {
		*iw = nd + *m;
		w[*iw] = opvf03_(&r__[r_offset], ir, &a[a_offset], ia, &p[1], 
			&b[1], &x[1], &w[1], alfa, &nd, n, mif, mdf);
	    }
	    if (*imp >= 8) {
		if (*iw != 0) {
		    s = w[*iw];
		}
		nvkt03_(&a[a_offset], ia, &c__[c_offset], ic, &w[1], &w[nd], &
			w[nd + *m], &ipvt[1], &dnorma, n, m, mi1, mi, &nmd, &
			nd);
		if (*iw != 0) {
		    w[*iw] = s;
		    w[*iw + 1] = dnorma;
		}
	    }
	    if (*imp >= 7) {
		dimp03_(&x[1], &w[1], &ire[1], &ipvt[1], &dnorma, n, m, &nd, 
			iw, &c__0, &c__0, &c__0, mi, mi1, ind, imp, io, iter);
	    }
	    return 0;
	}

 

 

	if (il > nmd) {
	    k = il - nmd;
	    if (s > 0.) {
		dadd_(n, &a[k * a_dim1 + 1], &c__1, &w[1], &c__1);
	    } else if (s < 0. && il <= nmdi) {
		ddif_(n, &a[k * a_dim1 + 1], &c__1, &w[1], &c__1);
	    }
	}
 

	m1 = *m + 1;
	m2 = m1 + 1;
	desr03_(&q[m1 * q_dim1 + 1], iq, &r__[m2 * r_dim1 + 1], ir, &w[1], &w[
		icd], &w[nd], alfa, &jpvt[1], &nm, n, ind, &info, &id, &ro, 
		io);
	if (*imp >= 9) {
	    if (id == 1) {
		ides = 1;
	    } else if (*ind > 0 && *ind <= nm) {
		ides = 0;
	    } else {
		ides = -1;
	    }
	}

 

	k = 0;
	if (iver == -1 || iver != iv) {
	    if (*ira > 0) {
		i__ = 0;
		if (i__ < *n && k == 0) {
L4000:
		    i1 = i__ + 1;
		    ii = i__ + nd;
		    xi1 = x[i1];
		    if (*ira > 1) {
			csi = cs[i1];
			if (csi <= gig1 && ire[i1] == 0 && w[ii] > eps && xi1 
				>= csi - eps) {
			    s2 = dnrm2_(&nm, &q[i1 + m1 * q_dim1], iq);
			    if (s2 >= epsmch) {
				k = 1;
				ipvt[m1] = i1;
			    } else {
				w[ii] = 0.;
			    }
			}
		    }
		    if (k == 0 && *ira != 2) {
			cii = ci[i1];
			if (cii >= -gig1 && ire[i1] == 0 && w[ii] < -eps && 
				xi1 <= cii + eps) {
			    s2 = dnrm2_(&nm, &q[i1 + m1 * q_dim1], iq);
			    if (s2 >= epsmch) {
				k = 1;
				ipvt[m1] = -i1;
			    } else {
				w[ii] = 0.;
			    }
			}
		    }
		    i__ = i1;
		    if (i__ < *n && k == 0) {
			goto L4000;
		    }
		}
	    }
	    i__ = 0;
	    if (i__ < *md && k == 0) {
L5000:
		ii = icd + i__;
		++i__;
		ni = *n + i__;
		if (ire[ni] != 1) {
		    w[ii] = ddot_(n, &c__[(*mi + i__) * c_dim1 + 1], &c__1, &
			    w[nd], &c__1);
		    if (w[ni] >= -eps && w[ii] > eps) {
			jj = idw;
			i__1 = *n;
			for (j = m1; j <= i__1; ++j) {
			    w[jj] = ddot_(n, &q[j * q_dim1 + 1], &c__1, &c__[(
				    *mi + i__) * c_dim1 + 1], &c__1);
			    ++jj;
 
			}
			s2 = dnrm2_(&nm, &w[idw], &c__1);
			if (s2 >= epsmch) {
			    k = 1;
			    ipvt[m1] = ni;
			} else {
			    w[ii] = 0.;
			}
		    }
		}
		if (i__ < *md && k == 0) {
		    goto L5000;
		}
	    }
	} else {
	    i__1 = icd + *md - 1;
	    for (i__ = icd; i__ <= i__1; ++i__) {
 
		w[i__] = 0.;
	    }
	}
	i__ = 0;
	if (i__ < midf && k == 0) {
L6000:
	    i1 = i__ + 1;
	    in = nmd + i1;
	    if (ire[in] != 1) {
		ii = iad + i__;
		w[ii] = ddot_(n, &a[i1 * a_dim1 + 1], &c__1, &w[nd], &c__1);
		if (ire[in] == 0 && in != il) {
		    if (i1 <= *mif && (d__1 = w[ii], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > eps || i1 > 
			    *mif && w[ii] > eps && w[in] >= -eps) {

 

 

 

			if (il == 0) {
			    m0 = m1;
			} else {
			    m0 = *m + 2;
			}
			jj = idw;
			i__1 = *n;
			for (i__ = m0; i__ <= i__1; ++i__) {
			    w[jj] = ddot_(n, &q[i__ * q_dim1 + 1], &c__1, &a[
				    i1 * a_dim1 + 1], &c__1);
			    ++jj;
 
			}
			s2 = dnrm2_(&nm, &w[idw], &c__1);

 

 

 

			if (s2 >= epsmch) {
			    k = 1;
			    ipvt[m1] = in;
			} else if (il == 0) {
			    w[ii] = 0.;
			} else {
			    sj = ddot_(n, &q[m1 * q_dim1 + 1], &c__1, &a[i1 * 
				    a_dim1 + 1], &c__1);
			    if ((( sj ) >= 0 ? ( sj ) : -( sj ))  >= epsmch) {
				if (id != 1) {
				    ind1 = 10;
				}
				if (il < 0) {
				    sj = -sj / q[-il + m1 * q_dim1];
				} else if (il <= *n) {
				    sj /= q[il + m1 * q_dim1];
				} else if (il <= nmd) {
				    s2 = ddot_(n, &q[m1 * q_dim1 + 1], &c__1, 
					    &c__[(*mi + il - *n) * c_dim1 + 1]
					    , &c__1);
				    sj /= s2;
				} else {
				    s2 = ddot_(n, &q[m1 * q_dim1 + 1], &c__1, 
					    &a[(il - nmd) * a_dim1 + 1], &
					    c__1);
				    sj /= s2;
				}
				sk = 0.;
				s3 = -1.;
				if (i1 <= *mif) {
				    s2 = (( sj ) >= 0 ? ( sj ) : -( sj )) ;
				    if (il <= nmd || il > nmdi && s < -eps) {
					s3 = s2 + s;
					if (sj > eps) {
					    sk = -1.;
					} else {
					    sk = 1.;
					}
				    } else {
					s3 = s2 - (( s ) >= 0 ? ( s ) : -( s ))  + 1.;
					if (s < -eps && sj > eps || s > eps &&
						 sj < -eps) {
					    sk = -1.;
					} else {
					    sk = 1.;
					}
				    }
				} else {
				    if (sj < -eps && (il <= nmd || il > nmdi 
					    && s < -eps)) {
					s3 = s - sj;
					sk = 1.;
				    } else if (sj > eps && il > nmd && s > 
					    eps) {
					s3 = sj + s1;
					sk = 1.;
				    } else if (sj < -eps && il > nmd && il <= 
					    nmdi && s < -eps) {
					s3 = s1 - sj;
					sk = 1.;
				    }
				}
				if (s3 > eps) {
				    ipvt[m1] = nmd + i1;
				    if (id == 1) {
					id = 2;
					k = 1;
				    } else {
					ind1 = 11;
				    }
				} else if (id == 1) {

 

 

				    if (s > 0.) {
					s1 = -s + 1;
				    } else if (s < 0. && il <= nmdi && il > 
					    nmd) {
					s1 = -s - 1;
				    } else {
					s1 = -s;
				    }
				    s = sk * sj / s1 + 1.;
				    if (info == 0) {
					dscal_(n, &s, &w[nd], &c__1);
				    } else {
					ro = s * ro;
				    }
				    if (sk == 1.) {
					dadd_(n, &a[i1 * a_dim1 + 1], &c__1, &
						w[1], &c__1);
				    } else if (sk == -1.) {
					ddif_(n, &a[i1 * a_dim1 + 1], &c__1, &
						w[1], &c__1);
				    }
				    w[ii] = 0.;
				}
			    } else {
				w[ii] = 0.;
			    }
			}
		    }
		}
	    }
	    i__ = i1;
	    if (i__ < midf && k == 0) {
		goto L6000;
	    }
	}

 

	if (k == 0) {
	    if (id == 0 && *ind <= nm && *ind > 0) {
		id = 2;
	    }
	    if (ind1 == 11 && id != 1) {
		id += 100;
	    }
	    if (ind1 == 10 && id != 1) {
		id += 10;
	    }
	    pasr03_(&a[a_offset], ia, &b[1], &ci[1], &cs[1], &x[1], &ro, &w[1]
		    , &ire[1], &ipvt[m1], ira, n, md, mif, mdf, m, &id, io);
	    if (id == -1) {
		*ind = -1;
		if (*imp >= 7) {
		    dimp03_(&x[1], &w[1], &ire[1], &ipvt[1], &s, &c__0, &c__0,
			     &c__0, &c__0, &c__0, &c__0, &c__0, &c__0, &c__0, 
			    ind, imp, io, iter);
		}
		return 0;
	    } else if (id == 0) {
		id = 2;
		k = 1;
	    }
	    if (id == 1 || id == 3 || id == 11) {
		icol3 = ipvt[m1];
		if (*imp >= 9) {
		    iadd = icol3;
		}
	    }
	}

 

 

	if (k == 1) {
	    ++icicla;
	    icol3 = ipvt[m1];
	    if (*imp >= 9) {
		iadd = icol3;
	    }
	    if (icicla > *m && *m > 0 || icol3 == icol1 && icol == *m) {
		*ind = -2;
		if (*imp >= 7) {
		    dimp03_(&x[1], &w[1], &ire[1], &ipvt[1], &s, &c__0, &c__0,
			     &c__0, &c__0, &c__0, &c__0, &c__0, &c__0, &c__0, 
			    ind, imp, io, iter);
		}
		return 0;
	    }
	    icol1 = icol2;
	    icol2 = icol3;
	} else if (icicla > 0) {
	    icicla = 0;
	    icol1 = 0;
	    icol2 = 0;
	}

 


	if (*imp >= 9) {
	    dimp03_(&x[1], &w[1], &ire[nd1], &ipvt[1], &s, n, &il, m, &midf, &
		    ides, &icicla, &iadd, mi, mi1, &c__2, imp, io, iter);
	}

 

	if (icicla == 0) {
	    i1 = icd - 1;
	    i__1 = *md;
	    for (i__ = 1; i__ <= i__1; ++i__) {
		ni = *n + i__;
		if (ire[ni] == 0 && (iver != iv || iver == -1) && id < 10) {
		    if (ro == 1.) {
			w[ni] += w[i1 + i__];
		    } else {
			w[ni] += ro * w[i1 + i__];
		    }
		}
 
	    }
	    if (ro == 1.) {
		dadd_(n, &w[nd], &c__1, &x[1], &c__1);
	    } else {
		daxpy_(n, &ro, &w[nd], &c__1, &x[1], &c__1);
	    }
	    i1 = nd - 1;
	}

 

 

	if (icicla != 0 || id == 1 || id == 11 || id == 3) {
	    if (il == -icol3) {
		iicol = 1;
	    } else {
		iicol = 0;
	    }
	    s = r__[m2 * r_dim1 + 1];
	    nm1 = nm - 1;
	    *m = m1;
	    if (icol3 < 0) {
		ire[-icol3] = -1;
	    } else {
		ire[icol3] = 1;
	    }
	    if (icol3 <= *n) {
		ip = icol3;
		anfm04_(&q[q_offset], iq, &r__[(r_dim1 << 1) + 1], ir, &w[1], 
			&w[nd], &jpvt[1], n, m, &ip, io);
	    } else {
		ip = 0;
		if (icol3 <= nmd) {
		    anfm04_(&q[q_offset], iq, &r__[(r_dim1 << 1) + 1], ir, &
			    c__[(*mi + icol3 - *n) * c_dim1 + 1], &w[nd], &
			    jpvt[1], n, m, &ip, io);
		} else {
		    anfm04_(&q[q_offset], iq, &r__[(r_dim1 << 1) + 1], ir, &a[
			    (icol3 - nmd) * a_dim1 + 1], &w[nd], &jpvt[1], n, 
			    m, &ip, io);
		}
	    }

 


	    if (icol3 <= nmd && iver != -1) {
		++iver;
	    }
	    if (nm > 1) {
		if (iibeta == 1 && *ind == -2) {
		    *ind = -1;
		}
		if (*ind > nm << 1 && *ind < nm * 3) {
		    nf = nm * 3 - *ind;
		} else if (*ind > nm && *ind < nm << 1) {
		    nf = (nm << 1) - *ind;
		} else if (*ind < -1 && *ind >= -nm) {
		    nf = -(*ind) - 1;
		} else if (*ind == -1 || *ind == -nm - 1 || *ind == nm * 3 || 
			*ind == nm << 1) {
		    *ind = 0;
		    i__1 = iver - iv;
		    anfm03_(&r__[r_offset], ir, &r__[(*m + 2) * r_dim1 + 1], 
			    ir, &q[(*m + 1) * q_dim1 + 1], iq, &w[nd], &jpvt[
			    1], n, &nm1, ind, &i__1, io);
		    nf = 0;
		} else if (*ind >= 0) {
		    nf = nm;
		} else {
		    nf = -nm - *ind - 1;
		}
		if (nf != 0) {
		    nmf = nm1 - nf;
		    if (*ind > nm) {
			ii = nmf + i1;
		    } else if (*ind < 0) {
			ii = nmf * (nmf + 1) / 2 + i1;
		    }
		    if (iibeta == 1) {
			--nf;
		    }
		    i__1 = iver - iv;
		    anfm05_(&r__[r_offset], ir, &r__[(*m + 2) * r_dim1 + 1], 
			    ir, &q[(*m + 1) * q_dim1 + 1], iq, &w[nd], &w[nd 
			    + (nm1 << 1)], &jpvt[1], &s, &nm1, &nf, n, ind, &
			    i__1, io);
		}
		if (*ind <= -n10) {
		    iibeta = 1;
		    *ind += n10;
		} else {
		    iibeta = 0;
		}
		if (*ind == *n) {
		    *ind = -1;
		    if (*imp >= 7) {
			dimp03_(&x[1], &w[1], &ire[1], &ipvt[1], &s, &c__0, &
				c__0, &c__0, &c__0, &c__0, &c__0, &c__0, &
				c__0, &c__0, ind, imp, io, iter);
		    }
		    return 0;
		}
		nm = nm1;
	    }
	}

 

 

	if (icicla == 0 && midf > 0) {
	    i1 = 1;
	    aux003_(&a[a_offset], ia, &x[1], &b[1], &q[q_offset], iq, &r__[(
		    r_dim1 << 1) + 1], ir, &w[nd1], &ire[nd1], &ipvt[1], &nmd,
		     mif, mdf, &midf, n, m, &i1, io);
	    if (i1 == 0) {
		info = 0;
	    }
	}
	if (info == 1 && id != 2) {
	    if (jpvt[nm] != nm || *ind < 0 && *ind != -(*n) && *ind != *n * 
		    -2 + 1 || *ind > *n) {
		info = 0;
	    }
	}

 

 

 

	if (id == 11) {
	    *iw = nd + *m;
	    w[*iw] = opvf03_(&r__[r_offset], ir, &a[a_offset], ia, &p[1], &b[
		    1], &x[1], &w[1], alfa, &nd, n, mif, mdf);
	    *ind = -3;
	    if (*imp >= 7) {
		dimp03_(&x[1], &w[1], &ire[1], &ipvt[1], &s, n, iw, &c__0, &
			c__0, &c__0, &c__0, &c__0, &c__0, &c__0, ind, imp, io,
			 iter);
	    }
	    return 0;
	}
	if (*m == *n) {
	    minimo = 1;
	    id = 2;
	    nm = 0;
	} else {
	    minimo = 0;
	}
	++(*iter);
	if (*iter <= itemax) {
	    goto L2000;
	}
    }
    *ind = 1;
    if (*imp >= 7) {
	dimp03_(&x[1], &w[1], &ire[1], &ipvt[1], &s, &il, &ides, &c__0, &c__0,
		 &c__0, &c__0, &c__0, &c__0, &c__0, ind, imp, io, iter);
    }
}  

doublereal opvf03_(r__, ir, a, ia, p, b, x, w, alfa, nd, n, mif, mdf)
doublereal *r__;
integer *ir;
doublereal *a;
integer *ia;
doublereal *p, *b, *x, *w, *alfa;
integer *nd, *n, *mif, *mdf;
{
     
    integer r_dim1, r_offset, a_dim1, a_offset, i__1, i__2;
    doublereal ret_val, d__1;

     
    extern doublereal ddot_();
    static integer i__;
    extern   int dscal_();
    static integer i1;
    static doublereal s1;
    static integer ii, ni;
    extern   int dadd_();


 

 

 

 

 

 

 

 

 

 

 

 

 


 
 

 

 

 

 

 


 

 

 

 

 

 

 

 


 
 
 

 
 

     
    r_dim1 = *ir;
    r_offset = r_dim1 + 1;
    r__ -= r_offset;
    a_dim1 = *ia;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --p;
    --b;
    --x;
    --w;

     
    ni = *nd + *n - 1;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i1 = i__ + 1;
	ii = ni + i__;
	w[ii] = ddot_(&i__, &r__[i__ + r_dim1], ir, &x[1], &c__1);
	if (i__ < *n) {
	    i__2 = *n - i__;
	    w[ii] += ddot_(&i__2, &r__[i1 + i__ * r_dim1], &c__1, &x[i1], &
		    c__1);
	}
 
    }
    s1 = .5;
    dscal_(n, &s1, &w[ni + 1], &c__1);
    dadd_(n, &p[1], &c__1, &w[ni + 1], &c__1);
    ret_val = ddot_(n, &x[1], &c__1, &w[ni + 1], &c__1);
    if (*alfa != 1.) {
	ret_val *= *alfa;
    }
    i__1 = *mif;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	ret_val += (d__1 = ddot_(n, &a[i__ * a_dim1 + 1], &c__1, &x[1], &c__1)
		 - b[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
    }
    i__1 = *mif + *mdf;
    for (i__ = *mif + 1; i__ <= i__1; ++i__) {
	s1 = ddot_(n, &a[i__ * a_dim1 + 1], &c__1, &x[1], &c__1) - b[i__];
	if (s1 > 0.) {
	    ret_val += s1;
	}
 
    }
    return ret_val;
}  

  int pasr03_(a, ia, b, ci, cs, x, ro, w, ire, ipvt, ira, n, 
	md, mif, mdf, m, id, io)
doublereal *a;
integer *ia;
doublereal *b, *ci, *cs, *x, *ro, *w;
integer *ire, *ipvt, *ira, *n, *md, *mif, *mdf, *m, *id, *io;
{
     
    integer a_dim1, a_offset, i__1, i__2;
    doublereal d__1;

     
    double pow_dd(), sqrt();

     
    extern doublereal ddot_(), dnrm0_();
    static integer i__, j, k, l;
    static doublereal s, delta;
    static integer i1, i2, k1, j1;
    static doublereal s0, r1, r2, r3, s1;
    static integer nd, ii;
    static doublereal sd;
    extern doublereal dlamch_();
    static integer ip, ni;
    static doublereal gigant;
    static integer id1, nd0, nd1, ip3;
    static doublereal ro1;
    static integer idi, ndf, nmd, iip;
    static doublereal eps;
    static integer iad0, icd0;
    static doublereal gig1;
    static integer ind1;


 

 

 

 

 

 

 

 

 

 

 

 

 


 
 
 

 
 

 


 

 

 

 

 

 

 

 


 
 

 
 

 
 



 

     
    a_dim1 = *ia;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --b;
    --ci;
    --cs;
    --x;
    --w;
    --ire;
    --ipvt;

     
    nmd = *n + *md;
    nd1 = nmd + 1;
    ndf = nmd + *mif;
    nd0 = ndf + *mdf;
    nd = nd0 + 1;
    icd0 = nd0 + *n;
    iad0 = icd0 + *md;
    d__1 = dlamch_("p", 1L);
    eps = pow_dd(&d__1, &c_b5779);
    gigant = dlamch_("o", 1L);
    gig1 = sqrt(gigant);
    ind1 = 0;
    if (*id >= 100) {
	ind1 = 2;
	*id += -100;
    } else if (*id >= 10) {
	ind1 = 1;
	*id += -10;
    }
    idi = *id;
    if (*id != 1) {
	sd = dnrm0_(n, &w[nd], &c__1) + 1;
	delta = 1e8;
    } else {
	s0 = *ro;
    }
    r1 = 0.;
    r2 = gigant;
    k = 0;

 
 

    if (*ira > 0) {
	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    ii = nd0 + i__;
	    j = 0;
	    if (*ira > 1) {
		if (cs[i__] <= gig1 && (ire[i__] == 0 && w[ii] > eps)) {
		    s = (cs[i__] - x[i__]) / w[ii];
		    if (s < r2 && s > r1) {
			r2 = s;
			ip = i__;
		    }
		    j = 1;
		}
	    }
	    if (j == 0 && *ira != 2) {
		if (ci[i__] >= -gig1 && (ire[i__] == 0 && w[ii] < -eps)) {
		    s = (ci[i__] - x[i__]) / w[ii];
		    if (s < r2 && s > r1) {
			ip = -i__;
			r2 = s;
		    }
		}
	    }
 
	}
    }
    i__1 = *md;
    for (i__ = 1; i__ <= i__1; ++i__) {
	ni = *n + i__;
	i2 = icd0 + i__;
	if (ire[ni] == 0) {
	    if (w[i2] > eps) {
		s = -w[ni] / w[i2];
		if (s <= r2 && s > r1) {
		    r2 = s;
		    ip = ni;
		}
	    }
	}
 
    }

 

    if (r2 == gigant && *id == 0) {
	*id = -1;
	return 0;
    }

 

 

    r3 = r2;
    *ro = r2;
    i__1 = *mif;
    for (i__ = 1; i__ <= i__1; ++i__) {
	k1 = k + 1;
	ni = nmd + i__;
	ii = iad0 + i__;
	if ((i__2 = ire[ni], (( i__2 ) >= 0 ? ( i__2 ) : -( i__2 )) ) == 2) {
	    s = w[ii];
	}
	if (ire[ni] == 2 && s < -eps || ire[ni] == -2 && s > eps) {
	    s1 = -w[ni] / s;
	    if (s1 <= r2 && s1 > r1) {
		if (r3 == gigant && *id == 2) {
		    w[nmd + k1] = s1;
		    k = k1;
		    ipvt[k] = ni;
		    if (s1 < *ro) {
			*ro = s1;
			ip = ni;
		    }
		} else {
		    r2 = s1;
		    ip3 = ni;
		}
	    }
	}
 
    }
    i__1 = *mdf;
    for (i__ = 1; i__ <= i__1; ++i__) {
	k1 = k + 1;
	ni = ndf + i__;
	if (ire[ni] != 1) {
	    s = w[iad0 + *mif + i__];
	}
	if (ire[ni] == 2 && s < -eps || ire[ni] == 0 && s > eps) {
	    s1 = -w[ni] / s;
	    if (s1 <= r2 && s1 > r1) {
		if (r3 == gigant && *id == 2) {
		    w[nmd + k1] = s1;
		    k = k1;
		    ipvt[k] = ni;
		    if (s1 < *ro) {
			*ro = s1;
			ip = ni;
		    }
		} else {
		    r2 = s1;
		    ip3 = ni;
		}
	    }
	}
 
    }

 

    if (r3 == gigant && *id == 2) {
	s = ddot_(n, &w[1], &c__1, &w[nd], &c__1);
	if (k > 0) {
	    id1 = iad0 - nmd;
	    ro1 = 0.;
	    if (s < -eps && ro1 < r2) {
L5010:
		l = 0;
		r1 = ro1;
		ro1 = r2;
		i__1 = k;
		for (i__ = 1; i__ <= i__1; ++i__) {
		    ii = nmd + i__;
		    if (w[ii] <= ro1 && w[ii] > r1) {
			if (w[ii] < ro1) {
			    l = 0;
			}
			ro1 = w[ii];
			w[ii] = w[nd1 + l];
			w[nd1 + l] = ro1;
			++l;
			j = ipvt[i__];
			ipvt[i__] = ipvt[l];
			ipvt[l] = j;
		    }
 
		}

 

 

 

		i__1 = l;
		for (i__ = 1; i__ <= i__1; ++i__) {
		    j = ipvt[i__];
		    ii = i__ - 1;
		    i1 = nmd + i__;
		    j1 = j - nmd;
		    if (j <= ndf) {
			if (ire[j] == 2) {
			    s -= w[j + id1] * 2;
			} else if (ire[j] == -2) {
			    s += w[j + id1] * 2;
			}
		    } else {
			if (ire[j] == 0) {
			    s += w[j + id1];
			} else if (ire[j] == 2) {
			    s -= w[j + id1];
			}
		    }
 
		}
		if (s >= -eps && ind1 == 1) {
		    iip = ipvt[*m + 1] - nmd;
		    s1 = ddot_(n, &w[nd], &c__1, &a[iip * a_dim1 + 1], &c__1);
		    if (iip > ndf || s1 > eps) {
			s += s1;
		    }
		    ind1 = 11;
		}
		if (s < -eps && ro1 < r2) {
		    goto L5010;
		}
	    }
	}
	if (s < -eps) {
	    *id = -1;
	    return 0;
	} else {
	    if (ind1 == 2) {
		*id = 0;
		return 0;
	    } else {
		ipvt[1] = ip;
		*id = 1;
	    }
	}
    } else {
	if (r2 < r3) {
	    ip = ip3;
	}
	if (*id == 1) {
	    s = (( r2 ) <= ( s0 ) ? ( r2 ) : ( s0 )) ;
	    if (s == s0) {
		*id = 2;
		if (r2 == s0) {
		    *id = 3;
		    ipvt[1] = ip;
		}
	    } else {
		ipvt[1] = ip;
	    }
	    *ro = s;
	} else {
	    if (ind1 == 2) {
		*id = 0;
		return 0;
	    }
	    *ro = r2;
	    *id = 1;
	    ipvt[1] = ip;
	}
    }

 

 

    if (idi != 1) {
	s = *ro * sd;
	if (s > delta) {
	    *id += 10;
	}
    }
}  

  int plcbas_(h__, p, c__, d__, ci, cs, ira, mi, md, x, f, w, 
	iv, lagr, imp, io, n, modo, info)
doublereal *h__, *p, *c__, *d__, *ci, *cs;
integer *ira, *mi, *md;
doublereal *x, *f, *w;
integer *iv;
doublereal *lagr;
integer *imp, *io, *n, *modo, *info;
{
     
    integer h_dim1, h_offset, c_dim1, c_offset, i__1, i__2;

     
    integer s_wsfe(), e_wsfe();

     
    static doublereal alfa;
    static integer nmid, iter, nmul, modo1;
    static doublereal b;
    static integer i__, j, k, m;
    extern   int dcopy_(), optr03_();
    static integer n1, nipvt, njpvt, nl, iw, nw, mi1, mdf, mid, ind, mif, nmd;

     
    static cilist io___2949 = { 0, 0, 0, "(/10X,'START  OF PLCBAS ')", 0 };


 
 

 

 

 
 


 
 

 

 

 

 

 

 

 

 

 

 

 

 


     
    --p;
    --d__;
    --ci;
    --cs;
    --x;
    --w;
    --iv;
    --lagr;
    c_dim1 = *n;
    c_offset = c_dim1 + 1;
    c__ -= c_offset;
    h_dim1 = *n;
    h_offset = h_dim1 + 1;
    h__ -= h_offset;

     
    if (*imp > 6) {
	io___2949.ciunit = *io;
	s_wsfe(&io___2949);
	e_wsfe();
    }
    iw = 1;
    alfa = 1.;
    mif = 0;
    mdf = 0;
    n1 = *n + 1;
    k = n1;
    mid = *mi + *md;
    nmd = *n + *md;
    nmid = *n + mid;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	--k;
	j = *n * (i__ - 1) + i__;
	dcopy_(&k, &h__[i__ + i__ * h_dim1], &c__1, &w[j], &c__1);
 
    }
    nipvt = nmd + 1;
    njpvt = nipvt + nmid + 1;
    nw = *n * n1 + 1;
    modo1 = *modo;
    if (*modo == 1) {
	*modo = 6;
    }
    if (*modo == 2) {
	*modo = 1;
    }
    if (*modo == 3) {
	*modo = 2;
    }
    optr03_(&w[1], &c__1, &c__[c_offset], n, &h__[h_offset], n, &w[1], n, &p[
	    1], &b, &d__[1], &ci[1], &cs[1], &x[1], &w[nw], &iw, &iv[1], &iv[
	    nipvt], &iv[njpvt], &alfa, ira, n, &m, mi, &mi1, md, &mif, &mdf, 
	    modo, &ind, imp, io, &iter);
    *modo = modo1;
    *info = ind;
    k = n1;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	--k;
	j = *n * (i__ - 1) + i__;
	dcopy_(&k, &w[j], &c__1, &h__[i__ + i__ * h_dim1], &c__1);
 
    }
    i__1 = *n;
    for (j = 2; j <= i__1; ++j) {
	i__2 = j - 1;
	for (i__ = 1; i__ <= i__2; ++i__) {
 
	    h__[i__ + j * h_dim1] = h__[j + i__ * h_dim1];
	}
 
    }
    if (ind != 0) {
	return 0;
    }
    if (ind == 0) {
	*f = w[nw + iw - 1];
	nmul = nmd + nw;
	if (*ira > 0) {
	    nl = *n;
	} else {
	    nl = 0;
	}
	i__1 = nl + mid;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    lagr[i__] = 0.;
	}
	k = nipvt;
	i__1 = mi1;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    j = iv[k] + nl;
	    lagr[j] = w[nmul];
	    ++nmul;
	    ++k;
 
	}
	i__1 = m;
	for (i__ = mi1 + 1; i__ <= i__1; ++i__) {
	    j = iv[k];
	    if (j < 0) {
		lagr[-j] = -w[nmul];
	    } else if (j <= *n) {
		lagr[j] = w[nmul];
	    } else {
		if (*ira == 0) {
		    j -= *n;
		}
		lagr[j + *mi] = w[nmul];
	    }
	    ++nmul;
	    ++k;
 
	}
    }
}  

  int proj_(n, binf, bsup, x)
integer *n;
doublereal *binf, *bsup, *x;
{
     
    integer i__1;
    doublereal d__1, d__2, d__3, d__4;

     
    static integer i__;

     
    --x;
    --bsup;
    --binf;

     
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
 
 
	d__3 = x[i__], d__4 = bsup[i__];
	d__1 = binf[i__], d__2 = (( d__3 ) <= ( d__4 ) ? ( d__3 ) : ( d__4 )) ;
	x[i__] = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    }
    return 0;
}  

  int qform_(m, n, q, ldq, wa)
integer *m, *n;
doublereal *q;
integer *ldq;
doublereal *wa;
{
     

    static doublereal one = 1.;
    static doublereal zero = 0.;

     
    integer q_dim1, q_offset, i__1, i__2, i__3;

     
    static doublereal temp;
    static integer i__, j, k, l, minmn, jm1, np1;
    static doublereal sum;

 

 

 
 
 

 

 

 

 
 

 
 

 
 
 

 
 

 

 

 

 
 

 
     
    --wa;
    q_dim1 = *ldq;
    q_offset = q_dim1 + 1;
    q -= q_offset;

     

 

    minmn = (( *m ) <= ( *n ) ? ( *m ) : ( *n )) ;
    if (minmn < 2) {
	goto L30;
    }
    i__1 = minmn;
    for (j = 2; j <= i__1; ++j) {
	jm1 = j - 1;
	i__2 = jm1;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    q[i__ + j * q_dim1] = zero;
 
	}
 
    }
L30:

 

    np1 = *n + 1;
    if (*m < np1) {
	goto L60;
    }
    i__1 = *m;
    for (j = np1; j <= i__1; ++j) {
	i__2 = *m;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    q[i__ + j * q_dim1] = zero;
 
	}
	q[j + j * q_dim1] = one;
 
    }
L60:

 

    i__1 = minmn;
    for (l = 1; l <= i__1; ++l) {
	k = minmn - l + 1;
	i__2 = *m;
	for (i__ = k; i__ <= i__2; ++i__) {
	    wa[i__] = q[i__ + k * q_dim1];
	    q[i__ + k * q_dim1] = zero;
 
	}
	q[k + k * q_dim1] = one;
	if (wa[k] == zero) {
	    goto L110;
	}
	i__2 = *m;
	for (j = k; j <= i__2; ++j) {
	    sum = zero;
	    i__3 = *m;
	    for (i__ = k; i__ <= i__3; ++i__) {
		sum += q[i__ + j * q_dim1] * wa[i__];
 
	    }
	    temp = sum / wa[k];
	    i__3 = *m;
	    for (i__ = k; i__ <= i__3; ++i__) {
		q[i__ + j * q_dim1] -= temp * wa[i__];
 
	    }
 
	}
L110:
 
	;
    }
    return 0;

 

}  

  int qnbd_(indqn, simul, n, x, f, g, imp, io, zero, napmax, 
	itmax, epsf, epsg, epsx, df0, binf, bsup, nfac, trav, ntrav, itrav, 
	nitrav, izs, rzs, dzs)
integer *indqn;
  int (*simul) ();
integer *n;
doublereal *x, *f, *g;
integer *imp, *io;
doublereal *zero;
integer *napmax, *itmax;
doublereal *epsf, *epsg, *epsx, *df0, *binf, *bsup;
integer *nfac;
doublereal *trav;
integer *ntrav, *itrav, *nitrav, *izs;
real *rzs;
doublereal *dzs;
{
     
    static char fmt_1010[] = "(\002 *********** qnbd ****************\002)";
    static char fmt_110[] = "(\002 qnbd : ntrav=\002,i8,\002 devrait valoir \002,i8)";
    static char fmt_111[] = "(\002 qnbd : nitrav=\002,i8,\002devrait valoir\002,i8)";

     
    integer s_wsfe(), e_wsfe(), do_fio();

     
    static integer iact, izag, irel, ieps1;
    extern   int zqnbd_();
    static integer n1, n2, n3, n4, n5, ig, in;
    static doublereal epsrel;
    static integer ni1, ni2;

     
    static cilist io___2984 = { 0, 0, 0, fmt_1010, 0 };
    static cilist io___2997 = { 0, 0, 0, fmt_110, 0 };
    static cilist io___3000 = { 0, 0, 0, fmt_111, 0 };


 
 
 
 
 
 

 

 
 
 


     
    --bsup;
    --binf;
    --epsx;
    --g;
    --x;
    --trav;
    --itrav;
    --izs;
    --rzs;
    --dzs;

     
    if (*imp >= 1) {
	io___2984.ciunit = *io;
	s_wsfe(&io___2984);
	e_wsfe();
    }


 
 
 
 
 
 
 
 
 
    ig = 0;
    in = 0;
    irel = 1;
    epsrel = .5;
    izag = 0;
    iact = 1;
    ieps1 = 0;

 
    n1 = *n * (*n + 1) / 2 + 1;
    n2 = n1 + *n;
    n3 = n2 + *n;
    n4 = n3 + *n;
    n5 = n4 + *n - 1;
    if (*ntrav < n5) {
	if (*imp > 0) {
	    io___2997.ciunit = *io;
	    s_wsfe(&io___2997);
	    do_fio(&c__1, (char *)&(*ntrav), (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&n5, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	*indqn = -11;
	return 0;
    }
    ni1 = *n + 1;
    if (*nitrav < *n << 1) {
	ni2 = *n << 1;
	if (*imp > 0) {
	    io___3000.ciunit = *io;
	    s_wsfe(&io___3000);
	    do_fio(&c__1, (char *)&(*nitrav), (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&ni2, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	*indqn = -12;
	return 0;
    }
    zqnbd_(indqn, simul, &trav[1], n, &binf[1], &bsup[1], &x[1], f, &g[1], 
	    zero, napmax, itmax, &itrav[1], &itrav[ni1], nfac, imp, io, &epsx[
	    1], epsf, epsg, &trav[n1], &trav[n2], &trav[n3], &trav[n4], df0, &
	    ig, &in, &irel, &izag, &iact, &epsrel, &ieps1, &izs[1], &rzs[1], &
	    dzs[1]);
    return 0;
}  

  int qrfac_(m, n, a, lda, pivot, ipvt, lipvt, rdiag, acnorm, 
	wa)
integer *m, *n;
doublereal *a;
integer *lda;
logical *pivot;
integer *ipvt, *lipvt;
doublereal *rdiag, *acnorm, *wa;
{
     

    static doublereal one = 1.;
    static doublereal p05 = .05;
    static doublereal zero = 0.;

     
    integer a_dim1, a_offset, i__1, i__2, i__3;
    doublereal d__1, d__2, d__3;

     
    double sqrt();

     
    static integer kmax;
    static doublereal temp;
    static integer i__, j, k, minmn;
    extern doublereal enorm_(), dlamch_();
    static doublereal epsmch, ajnorm;
    static integer jp1;
    static doublereal sum;
     
    --wa;
    --acnorm;
    --rdiag;
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --ipvt;

     

 

    epsmch = dlamch_("p", 1L);

 

    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	acnorm[j] = enorm_(m, &a[j * a_dim1 + 1]);
	rdiag[j] = acnorm[j];
	wa[j] = rdiag[j];
	if (*pivot) {
	    ipvt[j] = j;
	}
 
    }

 

    minmn = (( *m ) <= ( *n ) ? ( *m ) : ( *n )) ;
    i__1 = minmn;
    for (j = 1; j <= i__1; ++j) {
	if (! (*pivot)) {
	    goto L40;
	}

 

	kmax = j;
	i__2 = *n;
	for (k = j; k <= i__2; ++k) {
	    if (rdiag[k] > rdiag[kmax]) {
		kmax = k;
	    }
 
	}
	if (kmax == j) {
	    goto L40;
	}
	i__2 = *m;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    temp = a[i__ + j * a_dim1];
	    a[i__ + j * a_dim1] = a[i__ + kmax * a_dim1];
	    a[i__ + kmax * a_dim1] = temp;
 
	}
	rdiag[kmax] = rdiag[j];
	wa[kmax] = wa[j];
	k = ipvt[j];
	ipvt[j] = ipvt[kmax];
	ipvt[kmax] = k;
L40:

 
 

	i__2 = *m - j + 1;
	ajnorm = enorm_(&i__2, &a[j + j * a_dim1]);
	if (ajnorm == zero) {
	    goto L100;
	}
	if (a[j + j * a_dim1] < zero) {
	    ajnorm = -ajnorm;
	}
	i__2 = *m;
	for (i__ = j; i__ <= i__2; ++i__) {
	    a[i__ + j * a_dim1] /= ajnorm;
 
	}
	a[j + j * a_dim1] += one;

 
 

	jp1 = j + 1;
	if (*n < jp1) {
	    goto L100;
	}
	i__2 = *n;
	for (k = jp1; k <= i__2; ++k) {
	    sum = zero;
	    i__3 = *m;
	    for (i__ = j; i__ <= i__3; ++i__) {
		sum += a[i__ + j * a_dim1] * a[i__ + k * a_dim1];
 
	    }
	    temp = sum / a[j + j * a_dim1];
	    i__3 = *m;
	    for (i__ = j; i__ <= i__3; ++i__) {
		a[i__ + k * a_dim1] -= temp * a[i__ + j * a_dim1];
 
	    }
	    if (! (*pivot) || rdiag[k] == zero) {
		goto L80;
	    }
	    temp = a[j + k * a_dim1] / rdiag[k];
 
 
	    d__3 = temp;
	    d__1 = zero, d__2 = one - d__3 * d__3;
	    rdiag[k] *= sqrt(((( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ));
 
	    d__1 = rdiag[k] / wa[k];
	    if (p05 * (d__1 * d__1) > epsmch) {
		goto L80;
	    }
	    i__3 = *m - j;
	    rdiag[k] = enorm_(&i__3, &a[jp1 + k * a_dim1]);
	    wa[k] = rdiag[k];
L80:
 
	    ;
	}
L100:
	rdiag[j] = -ajnorm;
 
    }
    return 0;

 

}  

  int r1mpyq_(m, n, a, lda, v, w)
integer *m, *n;
doublereal *a;
integer *lda;
doublereal *v, *w;
{
     

    static doublereal one = 1.;

     
    integer a_dim1, a_offset, i__1, i__2;
    doublereal d__1, d__2;

     
    double sqrt();

     
    static doublereal temp;
    static integer i__, j, nm1, nmj;
    static doublereal cos__, sin__;

 

 

 
 

 

 
 
 
 

 

 

 

 
 

 
 

 
 
 

 
 

 
 
 

 
 
 

 

 

 
 

 
     
    --w;
    --v;
    a_dim1 = *lda;
    a_offset = a_dim1 + 1;
    a -= a_offset;

     

 

    nm1 = *n - 1;
    if (nm1 < 1) {
	goto L50;
    }
    i__1 = nm1;
    for (nmj = 1; nmj <= i__1; ++nmj) {
	j = *n - nmj;
	if ((d__1 = v[j], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > one) {
	    cos__ = one / v[j];
	}
	if ((d__1 = v[j], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > one) {
 
	    d__2 = cos__;
	    sin__ = sqrt(one - d__2 * d__2);
	}
	if ((d__1 = v[j], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= one) {
	    sin__ = v[j];
	}
	if ((d__1 = v[j], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= one) {
 
	    d__2 = sin__;
	    cos__ = sqrt(one - d__2 * d__2);
	}
	i__2 = *m;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    temp = cos__ * a[i__ + j * a_dim1] - sin__ * a[i__ + *n * a_dim1];
	    a[i__ + *n * a_dim1] = sin__ * a[i__ + j * a_dim1] + cos__ * a[
		    i__ + *n * a_dim1];
	    a[i__ + j * a_dim1] = temp;
 
	}
 
    }

 

    i__1 = nm1;
    for (j = 1; j <= i__1; ++j) {
	if ((d__1 = w[j], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > one) {
	    cos__ = one / w[j];
	}
	if ((d__1 = w[j], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > one) {
 
	    d__2 = cos__;
	    sin__ = sqrt(one - d__2 * d__2);
	}
	if ((d__1 = w[j], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= one) {
	    sin__ = w[j];
	}
	if ((d__1 = w[j], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= one) {
 
	    d__2 = sin__;
	    cos__ = sqrt(one - d__2 * d__2);
	}
	i__2 = *m;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    temp = cos__ * a[i__ + j * a_dim1] + sin__ * a[i__ + *n * a_dim1];
	    a[i__ + *n * a_dim1] = -sin__ * a[i__ + j * a_dim1] + cos__ * a[
		    i__ + *n * a_dim1];
	    a[i__ + j * a_dim1] = temp;
 
	}
 
    }
L50:
    return 0;

 

}  

  int r1updt_(m, n, s, ls, u, v, w, sing)
integer *m, *n;
doublereal *s;
integer *ls;
doublereal *u, *v, *w;
logical *sing;
{
     

    static doublereal one = 1.;
    static doublereal p5 = .5;
    static doublereal p25 = .25;
    static doublereal zero = 0.;

     
    integer i__1, i__2;
    doublereal d__1, d__2;

     
    double sqrt();

     
    static doublereal temp;
    static integer i__, j, l;
    static doublereal giant, cotan;
    static integer jj;
    extern doublereal dlamch_();
    static integer nm1;
    static doublereal tan__;
    static integer nmj;
    static doublereal cos__, sin__, tau;

 

 

 
 
 

 
 

 

 
 

 

 
 
 
 

 

 

 

 
 

 
 

 
 
 

 
 

 
 

 
 
 

 
 
 

 
 
 

 

 

 

 
 
 

 
     
    --w;
    --u;
    --v;
    --s;

     

 

    giant = dlamch_("o", 1L);

 

    jj = *n * ((*m << 1) - *n + 1) / 2 - (*m - *n);

 

    l = jj;
    i__1 = *m;
    for (i__ = *n; i__ <= i__1; ++i__) {
	w[i__] = s[l];
	++l;
 
    }

 
 

    nm1 = *n - 1;
    if (nm1 < 1) {
	goto L70;
    }
    i__1 = nm1;
    for (nmj = 1; nmj <= i__1; ++nmj) {
	j = *n - nmj;
	jj -= *m - j + 1;
	w[j] = zero;
	if (v[j] == zero) {
	    goto L50;
	}

 
 

	if ((d__1 = v[*n], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) >= (d__2 = v[j], (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) )) {
	    goto L20;
	}
	cotan = v[*n] / v[j];
 
	d__1 = cotan;
	sin__ = p5 / sqrt(p25 + p25 * (d__1 * d__1));
	cos__ = sin__ * cotan;
	tau = one;
	if ((( cos__ ) >= 0 ? ( cos__ ) : -( cos__ ))  * giant > one) {
	    tau = one / cos__;
	}
	goto L30;
L20:
	tan__ = v[j] / v[*n];
 
	d__1 = tan__;
	cos__ = p5 / sqrt(p25 + p25 * (d__1 * d__1));
	sin__ = cos__ * tan__;
	tau = sin__;
L30:

 
 

	v[*n] = sin__ * v[j] + cos__ * v[*n];
	v[j] = tau;

 

	l = jj;
	i__2 = *m;
	for (i__ = j; i__ <= i__2; ++i__) {
	    temp = cos__ * s[l] - sin__ * w[i__];
	    w[i__] = sin__ * s[l] + cos__ * w[i__];
	    s[l] = temp;
	    ++l;
 
	}
L50:
 
	;
    }
L70:

 

    i__1 = *m;
    for (i__ = 1; i__ <= i__1; ++i__) {
	w[i__] += v[*n] * u[i__];
 
    }

 

    *sing = (0) ;
    if (nm1 < 1) {
	goto L140;
    }
    i__1 = nm1;
    for (j = 1; j <= i__1; ++j) {
	if (w[j] == zero) {
	    goto L120;
	}

 
 

	if ((d__1 = s[jj], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) >= (d__2 = w[j], (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) )) {
	    goto L90;
	}
	cotan = s[jj] / w[j];
 
	d__1 = cotan;
	sin__ = p5 / sqrt(p25 + p25 * (d__1 * d__1));
	cos__ = sin__ * cotan;
	tau = one;
	if ((( cos__ ) >= 0 ? ( cos__ ) : -( cos__ ))  * giant > one) {
	    tau = one / cos__;
	}
	goto L100;
L90:
	tan__ = w[j] / s[jj];
 
	d__1 = tan__;
	cos__ = p5 / sqrt(p25 + p25 * (d__1 * d__1));
	sin__ = cos__ * tan__;
	tau = sin__;
L100:

 

	l = jj;
	i__2 = *m;
	for (i__ = j; i__ <= i__2; ++i__) {
	    temp = cos__ * s[l] + sin__ * w[i__];
	    w[i__] = -sin__ * s[l] + cos__ * w[i__];
	    s[l] = temp;
	    ++l;
 
	}

 
 

	w[j] = tau;
L120:

 

	if (s[jj] == zero) {
	    *sing = (1) ;
	}
	jj += *m - j + 1;
 
    }
L140:

 

    l = jj;
    i__1 = *m;
    for (i__ = *n; i__ <= i__1; ++i__) {
	s[l] = w[i__];
	++l;
 
    }
    if (s[jj] == zero) {
	*sing = (1) ;
    }
    return 0;

 

}  

doublereal rednor_(n, binf, bsup, x, epsx, g)
integer *n;
doublereal *binf, *bsup, *x, *epsx, *g;
{
     
    integer i__1;
    doublereal ret_val, d__1;

     
    double sqrt();

     
    static integer i__;
    static doublereal aa;

     
    --g;
    --epsx;
    --x;
    --bsup;
    --binf;

     
    ret_val = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	aa = g[i__];
	if (x[i__] - binf[i__] <= epsx[i__]) {
	    aa = (( 0. ) <= ( aa ) ? ( 0. ) : ( aa )) ;
	}
	if (bsup[i__] - x[i__] <= epsx[i__]) {
	    aa = (( 0. ) >= ( aa ) ? ( 0. ) : ( aa )) ;
	}
 
 
	d__1 = aa;
	ret_val += d__1 * d__1;
    }
    ret_val = sqrt(ret_val);
    return ret_val;
}  

 
  int relvar_(ind, n, x, binf, bsup, x2, g, diag, imp, io, 
	ibloc, izag, iter, nfac, irit)
integer *ind, *n;
doublereal *x, *binf, *bsup, *x2, *g, *diag;
integer *imp, *io, *ibloc, *izag, *iter, *nfac, *irit;
{
     
    static char fmt_322[] = "(\002 relvar1. valeur de eps1=\002,d15.7)";
    static char fmt_336[] = "(\002 defactorisation de x(\002,i3,\002)=\002,d15.7)";
    static char fmt_339[] = "(\002 on factorise l indice \002,i3)";
    static char fmt_350[] = "(\002 relvar1 . nbre fact\002,i3,\002 nbre defact\002,i3,\002 nbre var     factorisees\002,i3)";

     
    integer i__1;
    doublereal d__1;

     
    integer s_wsfe(), do_fio(), e_wsfe();

     
    static integer ifac;
    static doublereal frac;
    extern   int proj_();
    static integer izag1, idfac, i__, k;
    static doublereal d1, d2, dd, bi, bs, ep, eps1;

     
    static cilist io___3043 = { 0, 0, 0, fmt_322, 0 };
    static cilist io___3054 = { 0, 0, 0, fmt_336, 0 };
    static cilist io___3056 = { 0, 0, 0, fmt_339, 0 };
    static cilist io___3057 = { 0, 0, 0, fmt_350, 0 };


 
 
 
 

 
     
    --ibloc;
    --diag;
    --g;
    --x2;
    --bsup;
    --binf;
    --x;

     
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	x2[i__] = x[i__] - (d__1 = g[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) * g[i__] / diag[i__];
    }
    proj_(n, &binf[1], &bsup[1], &x2[1]);
    eps1 = (float)0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	eps1 += (d__1 = x2[i__] - x[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
    }
    if (*imp > 2) {
	io___3043.ciunit = *io;
	s_wsfe(&io___3043);
	do_fio(&c__1, (char *)&eps1, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
 
    ifac = 0;
    idfac = 0;
    k = 0;
    frac = (float).10000000000000001;
    i__1 = *n;
    for (k = 1; k <= i__1; ++k) {
	bi = binf[k];
	bs = bsup[k];
	d1 = x[k] - bi;
	d2 = bs - x[k];
	dd = (bs - bi) * frac;
	ep = (( eps1 ) <= ( dd ) ? ( eps1 ) : ( dd )) ;
	if (d1 > ep) {
	    goto L324;
	}
	if (g[k] > (float)0.) {
	    goto L330;
	}
	goto L335;
L324:
	if (d2 > ep) {
	    goto L335;
	}
	if (g[k] > (float)0.) {
	    goto L335;
	}
	goto L330;
 
L330:
	if (ibloc[k] > 0) {
	    goto L340;
	}
	ibloc[k] = *iter;
	++idfac;
	--(*nfac);
	*ind = 1;
	if (*imp >= 4) {
	    io___3054.ciunit = *io;
	    s_wsfe(&io___3054);
	    do_fio(&c__1, (char *)&k, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&x[k], (ftnlen)sizeof(doublereal));
	    e_wsfe();
	}
	goto L340;
 
L335:
	if (*irit == 0) {
	    goto L340;
	}
	if (ibloc[k] <= 0) {
	    goto L340;
	}
	izag1 = *iter - ibloc[k];
	if (*izag >= izag1) {
	    goto L340;
	}
	++ifac;
	++(*nfac);
	ibloc[k] = -(*iter);
	if (*imp >= 4) {
	    io___3056.ciunit = *io;
	    s_wsfe(&io___3056);
	    do_fio(&c__1, (char *)&k, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
L340:
	;
    }
    if (*imp >= 2 && (ifac > 0 || idfac > 0)) {
	io___3057.ciunit = *io;
	s_wsfe(&io___3057);
	do_fio(&c__1, (char *)&ifac, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&idfac, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*nfac), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    *ind = 1;
    if (ifac == 0 && idfac == 0) {
	*ind = 0;
    }
    return 0;
}  

  int rlbd_(indrl, n, simul, x, binf, bsup, f, hp, t, tmax, 
	d__, gn, tproj, amd, amf, imp, io, zero, nap, napmax, xn, izs, rzs, 
	dzs)
integer *indrl, *n;
  int (*simul) ();
doublereal *x, *binf, *bsup, *f, *hp, *t, *tmax, *d__, *gn, *tproj, *amd, *
	amf;
integer *imp, *io;
doublereal *zero;
integer *nap, *napmax;
doublereal *xn;
integer *izs;
real *rzs;
doublereal *dzs;
{
     
    static char fmt_14050[] = "(\002 rlbd tp=\002,e11.4,\002 tmax=\002,e11.4,\002 dh0/dt=\002,e11.4)";
    static char fmt_15000[] = "(a3,\002 t=\002,e11.4,\002 h=\002,e11.4,\002 dh/dt=\002,e11.4,\002 dfh/dt=\002,e11.4,\002 dt\002,e8.1)";
    static char fmt_15020[] = "(3x,\002 t=\002,e11.4,\002 h=\002,e11.4,\002 dh/dt=\002,e11.4,\002 dfh/dt=\002,e11.4,\002 dt\002,e8.1)";
    static char fmt_16000[] = "(\002 rlbd : sortie du domaine : indic=\002,i2,\002  t=\002,e11.4)";
    static char fmt_3330[] = "(\002toutes les variables sont saturees:tmaxp= \002,e11.4)";

     
    integer i__1;
    doublereal d__1, d__2;

     
      int s_copy();
    integer s_wsfe(), do_fio(), e_wsfe();
    double sqrt();

     
    static integer icoi, icop, icos, imax;
    static doublereal hptd, hptg;
    extern   int proj_();
    static doublereal epst, text, topt, hpta1, a, b, e;
    static integer i__, k;
    static doublereal p, r__;
    static integer indic;
    static doublereal difhp, a1, extra;
    static integer iproj;
    static doublereal f0, tmaxp, h1, ttmin;
    extern   int satur_();
    static doublereal extrp, t1, t2, ttsup, fa, f11, di, fn, ta, td, tg, 
	    cofder, fa1, ta1, hpa, hpd, ftd, hpg, ftg, div, hpn, eps, tmi, 
	    xni;
    static integer ico1;
    static doublereal eps1;
    static char var2[3];

     
    static cilist io___3079 = { 0, 0, 0, fmt_14050, 0 };
    static cilist io___3083 = { 0, 0, 0, fmt_16000, 0 };
    static cilist io___3089 = { 0, 0, 0, fmt_3330, 0 };
    static cilist io___3114 = { 0, 0, 0, fmt_15000, 0 };
    static cilist io___3115 = { 0, 0, 0, fmt_15020, 0 };



 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 


     
    --xn;
    --gn;
    --d__;
    --bsup;
    --binf;
    --x;
    --izs;
    --rzs;
    --dzs;

     
    *indrl = 1;
    eps1 = .9;
    eps = .1;
    epst = .1;
    extrp = 100.;
    extra = 10.;
    cofder = (float)100.;
    s_copy(var2, "   ", 3L, 3L);

    ta1 = 0.;
    f0 = *f;
    fa1 = *f;
    hpta1 = *hp;
    imax = 0;
    hptg = *hp;
    ftg = *f;
    tg = 0.;
    td = 0.;
    icos = 0;
    icoi = 0;
    icop = 0;

 
    *tproj = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if ((d__1 = d__[i__]) < 0.) {
	    goto L4;
	} else if (d__1 == 0) {
	    goto L7;
	} else {
	    goto L5;
	}
L4:
	t2 = (binf[i__] - x[i__]) / d__[i__];
	goto L6;
L5:
	t2 = (bsup[i__] - x[i__]) / d__[i__];
L6:
	if (t2 <= 0.) {
	    goto L7;
	}
	if (*tproj == 0.) {
	    *tproj = t2;
	}
	if (t2 > *tproj) {
	    goto L7;
	}
	*tproj = t2;
	icop = i__;
L7:
	;
    }

    if (*imp >= 3) {
	io___3079.ciunit = *io;
	s_wsfe(&io___3079);
	do_fio(&c__1, (char *)&(*tproj), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&(*tmax), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&(*hp), (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
 
 
 

 

 
L200:
    if (*nap >= *napmax) {
	k = 3;
	goto L1000;
    }
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	xn[i__] = x[i__] + *t * d__[i__];
    }
    proj_(n, &binf[1], &bsup[1], &xn[1]);
    if (icos > 0) {
	xn[icos] = bsup[icos];
    }
    if (icoi > 0) {
	xn[icoi] = binf[icoi];
    }
    indic = 4;
    (*simul)(&indic, n, &xn[1], &fn, &gn[1], &izs[1], &rzs[1], &dzs[1]);
    ++(*nap);
    if (indic < 0) {
	if (*imp >= 3) {
	    io___3083.ciunit = *io;
	    s_wsfe(&io___3083);
	    do_fio(&c__1, (char *)&indic, (ftnlen)sizeof(integer));
	    do_fio(&c__1, (char *)&(*t), (ftnlen)sizeof(doublereal));
	    e_wsfe();
	}
	if (*nap >= *napmax) {
	    goto L1000;
	}
	*t = tg + (*t - tg) / 4.;
	*tmax = *t;
	imax = 1;
	icoi = 0;
	icos = 0;
	s_copy(var2, "dd ", 3L, 3L);
	goto L800;
    }
    if (indic == 0) {
	*indrl = 0;
	goto L1010;
    }

 
    hpg = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	xn[i__] = x[i__] + *t * d__[i__];
    }
    if (icoi > 0) {
	xn[icoi] = bsup[icoi];
    }
    if (icos > 0) {
	xn[icos] = bsup[icos];
    }
    proj_(n, &binf[1], &bsup[1], &xn[1]);
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	xni = xn[i__];
 
	if (binf[i__] < xni && xni < bsup[i__]) {
	    hpg += d__[i__] * gn[i__];
	}
    }
    hpd = hpg;
    if (icoi > 0) {
	hpg += d__[icoi] * gn[icoi];
    }
    if (icos > 0) {
	hpg += d__[icos] * gn[icos];
    }

    icoi = 0;
    icos = 0;
    if (hpd != 0. || hpg != 0.) {
	goto L360;
    }

 
 
    tmaxp = 0.;
    ico1 = 0;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if ((d__1 = d__[i__]) < 0.) {
	    goto L310;
	} else if (d__1 == 0) {
	    goto L350;
	} else {
	    goto L320;
	}
L310:
	t2 = (binf[i__] - x[i__]) / d__[i__];
	goto L330;
L320:
	t2 = (bsup[i__] - x[i__]) / d__[i__];
L330:
	if (t2 <= 0.) {
	    goto L350;
	}
	if (tmaxp == 0.) {
	    tmaxp = t2;
	}
	if (tmaxp > t2) {
	    goto L350;
	}
	tmaxp = t2;
	ico1 = i__;
L350:
	;
    }
    if (*t < tmaxp) {
	if (fn <= *f + *amf * *hp * *t) {
	    goto L1010;
	}
	*t /= 10.;
	s_copy(var2, "d  ", 3L, 3L);
	goto L800;
    }
    icos = ico1;
    icoi = 0;
    if (d__[ico1] < 0.) {
	icoi = ico1;
	icos = 0;
    }

 
    if (*imp >= 3) {
	io___3089.ciunit = *io;
	s_wsfe(&io___3089);
	do_fio(&c__1, (char *)&tmaxp, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    *t = tmaxp;
    if (fn < *f + *amf * *hp * tmaxp) {
	*indrl = 8;
	goto L1010;
    }
    hpg = d__[ico1] * gn[ico1];
    if (fn < *f && hpg < 0.) {
	*indrl = 8;
	goto L1010;
    }
L360:

 

    a = *f + *amf * *hp * *t;
    if (fn > a) {
 
 

	td = *t;
	t1 = *t - ta1;
	h1 = (fn - fa1) / t1;
	ftd = fn;
	hptd = hpg;
	ta = tg;
	hpn = hptd;
	hpa = hptg;
	fa = ftg;
    } else {
	if (hpd >= *amd * *hp) {
	    goto L1010;
	}
 
	tg = *t;
	t1 = *t - ta1;
	h1 = (fn - fa1) / t1;
	ftg = fn;
	hptg = hpd;
	ta = td;
	hpn = hptg;
	hpa = hptd;
	fa = ftd;
	if (td == 0.) {
	    goto L700;
	}
	a1 = (d__1 = hptd / *hp, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	if (a1 > cofder && ftd > *f && hptg > *hp * (float).99) {
	    hpta1 = *hp;
	    fa1 = *f;
	    ta1 = 0.;
	    goto L700;
	}
    }
    a1 = (d__1 = hpn / *hp, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
    if (tg != 0. || fn <= *f || a1 <= cofder || hpn < 0.) {
	if (td <= *tproj) {
	    goto L600;
	}
	goto L500;
    }

 

 

    ta1 = *t;
    fa1 = fn;
    div = *hp - hptd;
    text = *t / 10.;
    if ((( div ) >= 0 ? ( div ) : -( div ))  > *zero) {
	text = *t * (*hp / div);
    }
    if (text > *tproj) {
	text = *t / 10.;
    }
 
    d__1 = text, d__2 = *t / (extrp * extra);
    text = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
 
    d__1 = text, d__2 = *t * eps1;
    *t = (( d__1 ) <= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    ttsup = *t * 1.5;
    extrp = (float)10.;
    if (*tproj > ta1) {
	s_copy(var2, "id ", 3L, 3L);
	goto L800;
    }
    ttmin = *t * .7;
    tmi = *t;
    topt = 0.;
    iproj = 0;
    satur_(n, &x[1], &binf[1], &bsup[1], &d__[1], &ttmin, &ttsup, &topt, &tg, 
	    &td, &tmi, &icoi, &icos, &iproj);
    s_copy(var2, "id ", 3L, 3L);
    if (topt != 0.) {
	*t = topt;
	s_copy(var2, "ids", 3L, 3L);
    }
    goto L800;

 

L500:
    if (td <= *tproj) {
	goto L600;
    }
    topt = 0.;
    iproj = 1;
    ta1 = *t;
    fa1 = fn;
    ttmin = tg + eps * (td - tg);
    ttsup = td - eps * (td - tg);
    tmi = (td + tg) / 2.;
    satur_(n, &x[1], &binf[1], &bsup[1], &d__[1], &ttmin, &ttsup, &topt, &tg, 
	    &td, &tmi, &icoi, &icos, &iproj);
    if (topt == 0.) {
	goto L600;
    }
    *t = topt;
    s_copy(var2, "s  ", 3L, 3L);
    if (*t == ttsup || *t == ttmin) {
	s_copy(var2, "sb ", 3L, 3L);
    }
    goto L800;

 

 
L600:
    if (td - tg < *zero * 100.) {
	k = 4;
	goto L1000;
    }

 
    b = 1.;
    p = hpn + hpa - (fn - fa) * 3. / (*t - ta);
    di = p * p - hpn * hpa;
    if (di < 0.) {
	goto L690;
    }
    if (*t - ta < 0.) {
	b = -1.;
    }
    div = hpn + p + b * sqrt(di);
    if ((( div ) >= 0 ? ( div ) : -( div ))  <= *zero) {
	goto L690;
    }
    r__ = hpn / div;
    topt = *t - r__ * (*t - ta);
    if (topt < tg || topt > td) {
	goto L690;
    }

 
    e = epst * (td - tg);
    s_copy(var2, "ic ", 3L, 3L);
    if (topt > td - e) {
	topt = td - e;
	s_copy(var2, "icb", 3L, 3L);
    }
    if (topt < tg + e) {
	topt = tg + e;
	s_copy(var2, "icb", 3L, 3L);
    }
    ta1 = *t;
    fa1 = fn;
    *t = topt;
    goto L800;
L690:
    ta1 = *t;
    fa1 = fn;
    *t = (tg + td) * .5;
    s_copy(var2, "d  ", 3L, 3L);
    goto L800;

 

L700:
    if (imax >= 1) {
	k = 2;
	goto L1000;
    }
    text = *t * 10.;
    difhp = hptg - hpta1;
    if (difhp > *zero) {
	text = (*amd * *hp / 3. - hptg) * ((tg - ta1) / difhp) + tg;
	if (td != 0. && text >= td) {
	    goto L600;
	}
 
 
	d__1 = text, d__2 = extra * extrp * *t;
	text = (( d__1 ) <= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
 
	d__1 = text, d__2 = *t * 2.5;
	text = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    } else {
	text = extra * extrp * *t;
    }
    ta1 = *t;
    fa1 = fn;
    hpta1 = hpn;
    extrp = (float)10.;
    if (text >= *tmax / 2.) {
	text = *tmax;
	imax = 1;
    }
    if (*t < *tproj && text > *tproj) {
 
	d__1 = *tproj, d__2 = *t * 2.5;
	*t = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	icoi = 0;
	icos = icop;
	if (d__[icop] < 0.) {
	    icoi = icop;
	    icos = 0;
	}
	s_copy(var2, "es ", 3L, 3L);
	goto L800;
    }
 
    d__1 = text * 1.5;
    ttsup = (( d__1 ) <= ( *tmax ) ? ( d__1 ) : ( *tmax )) ;
    if (ttsup < *tproj) {
	goto L785;
    }
    ttmin = *t * 2;
    iproj = 0;
    tmi = text;
    topt = 0.;
    satur_(n, &x[1], &binf[1], &bsup[1], &d__[1], &ttmin, &ttsup, &topt, &tg, 
	    &td, &tmi, &icoi, &icos, &iproj);
    if (topt > 0.) {
	*t = topt;
	s_copy(var2, "es ", 3L, 3L);
	goto L800;
    }
L785:
    *t = text;
    s_copy(var2, "e  ", 3L, 3L);
L800:
    f11 = fn - *f;
    if (*imp >= 3 && indic > 0) {
	io___3114.ciunit = *io;
	s_wsfe(&io___3114);
	do_fio(&c__1, var2, 3L);
	do_fio(&c__1, (char *)&ta1, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&f11, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&hpn, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&h1, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&t1, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }

 
    if ((d__1 = ta1 - *t, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) >= *zero * 100.) {
	goto L200;
    }
    k = 4;
 
L1000:
    if (indic < 0) {
	*indrl = 13;
	if (tg == 0.) {
	    *indrl = indic - 1000;
	}
	fn = ftg;
	hpn = hptg;
	*t = tg;
	goto L1010;
    }
    if (fn <= ftg) {
	*indrl = k;
	*t = tg;
	goto L1010;
    }
    if (tg == 0.) {
	*indrl = -k;
	goto L1010;
    }
    *indrl = k + 10;
    *t = tg;
    fn = ftg;
    hpn = hptg;

 
L1010:
    *f = fn;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	x[i__] += *t * d__[i__];
    }
    proj_(n, &binf[1], &bsup[1], &x[1]);
    if (icos > 0) {
	x[icos] = bsup[icos];
    }
    if (icoi > 0) {
	x[icoi] = binf[icoi];
    }

    if (*indrl < 0) {
	++(*nap);
	indic = 4;
	(*simul)(&indic, n, &x[1], f, &gn[1], &izs[1], &rzs[1], &dzs[1]);
    }

    t1 = *t - ta1;
    if (t1 == 0.) {
	t1 = (float)1.;
    }
    h1 = (fn - fa1) / t1;
    *hp = hpd;
    f0 = *f - f0;
    if (*imp >= 3) {
	io___3115.ciunit = *io;
	s_wsfe(&io___3115);
	do_fio(&c__1, (char *)&(*t), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&f0, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&hpd, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&h1, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&t1, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    return 0;
}  

  int satur_(n, x, binf, bsup, d__, ttmin, ttsup, topt, tg, td,
	 tmi, icoi, icos, iproj)
integer *n;
doublereal *x, *binf, *bsup, *d__, *ttmin, *ttsup, *topt, *tg, *td, *tmi;
integer *icoi, *icos, *iproj;
{
     
    integer i__1;
    doublereal d__1;

     
    static doublereal e;
    static integer i__;
    static doublereal ep, tb;
    static integer inf;


 
 
 

 
 

 

 

 
 
 
 
 
 
 
 
 
 
 


     
    --d__;
    --bsup;
    --binf;
    --x;

     
    *icoi = 0;
    *icos = 0;
    ep = *tmi;

 
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	inf = 0;
 
	if ((d__1 = d__[i__]) < 0.) {
	    goto L61;
	} else if (d__1 == 0) {
	    goto L70;
	} else {
	    goto L62;
	}
L61:
	tb = (binf[i__] - x[i__]) / d__[i__];
	inf = 1;
	goto L63;
L62:
	tb = (bsup[i__] - x[i__]) / d__[i__];
L63:
	if (tb > *ttsup || tb < *ttmin) {
 
	    if (*iproj == 0 || tb < *tg || tb > *td) {
		goto L70;
	    }
	    tb = (( tb ) >= ( *ttmin ) ? ( tb ) : ( *ttmin )) ;
	    tb = (( tb ) <= ( *ttsup ) ? ( tb ) : ( *ttsup )) ;
	    inf = 2;
	}
 
	e = (d__1 = tb - *tmi, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	if (e >= ep) {
	    goto L70;
	}
	*topt = tb;
	ep = e;
 
	*icoi = 0;
	*icos = 0;
	if (inf == 0) {
	    *icos = i__;
	}
	if (inf == 1) {
	    *icoi = i__;
	}
L70:
	;
    }
    return 0;
}  

  int shanph_(diag, n, nt, np, y, s, ys, scal, index, io, imp)
doublereal *diag;
integer *n, *nt, *np;
doublereal *y, *s, *ys, *scal;
integer *index, *io, *imp;
{
     
    static char fmt_1203[] = "(\002 gcbd. facteur d echelle=\002,d15.7)";

     
    integer y_dim1, y_offset, s_dim1, s_offset, i__1;
    doublereal d__1;

     
    integer s_wsfe(), do_fio(), e_wsfe();

     
    static integer i__;
    static doublereal cof;
    static integer inp;

     
    static cilist io___3124 = { 0, 0, 0, fmt_1203, 0 };


 
 
 

     
    --diag;
    --index;
    --ys;
    s_dim1 = *nt;
    s_offset = s_dim1 + 1;
    s -= s_offset;
    y_dim1 = *nt;
    y_offset = y_dim1 + 1;
    y -= y_offset;

     
    inp = index[*np];
    cof = (float)0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
 
	d__1 = y[inp + i__ * y_dim1];
	cof += d__1 * d__1 / diag[i__];
    }
    cof /= ys[inp];
    if (*imp > 3) {
	io___3124.ciunit = *io;
	s_wsfe(&io___3124);
	do_fio(&c__1, (char *)&cof, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	diag[i__] = cof * diag[i__];
    }
    *scal = (float)0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	*scal += diag[i__];
    }
    *scal = *n / *scal;
    return 0;
}  

  int strang_(prosca, n, m, depl, jmin, jmax, precon, alpha, 
	ybar, sbar, izs, rzs, dzs)
  int (*prosca) ();
integer *n, *m;
doublereal *depl;
integer *jmin, *jmax;
doublereal *precon, *alpha, *ybar, *sbar;
integer *izs;
real *rzs;
doublereal *dzs;
{
     
    integer ybar_dim1, ybar_offset, sbar_dim1, sbar_offset, i__1, i__2;

     
    static integer jfin, i__, j;
    static doublereal r__;
    static integer jp;
    static doublereal ps;

 

 
 

 
 

 
 
 

 
 

 

 
 

 

 

 

 


 


     
    --depl;
    sbar_dim1 = *n;
    sbar_offset = sbar_dim1 + 1;
    sbar -= sbar_offset;
    ybar_dim1 = *n;
    ybar_offset = ybar_dim1 + 1;
    ybar -= ybar_offset;
    --alpha;
    --izs;
    --rzs;
    --dzs;

     
    jfin = *jmax;
    if (jfin < *jmin) {
	jfin = *jmax + *m;
    }

 

    i__1 = *jmin;
    for (j = jfin; j >= i__1; --j) {
	jp = j;
	if (jp > *m) {
	    jp -= *m;
	}
	(*prosca)(n, &depl[1], &sbar[jp * sbar_dim1 + 1], &ps, &izs[1], &rzs[
		1], &dzs[1]);
	alpha[jp] = ps;
	i__2 = *n;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    depl[i__] -= ps * ybar[i__ + jp * ybar_dim1];
 
	}
 
    }

 

    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	depl[i__] *= *precon;
 
    }

 

    i__1 = jfin;
    for (j = *jmin; j <= i__1; ++j) {
	jp = j;
	if (jp > *m) {
	    jp -= *m;
	}
	(*prosca)(n, &depl[1], &ybar[jp * ybar_dim1 + 1], &ps, &izs[1], &rzs[
		1], &dzs[1]);
	r__ = alpha[jp] - ps;
	i__2 = *n;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    depl[i__] += r__ * sbar[i__ + jp * sbar_dim1];
 
	}
 
    }
    return 0;
}  

  int tol03_(q, iq, r__, ir, c__, ic, d__, a, ia, b, ci, cs, x,
	 w, ipvt, n, m, mi, mi1, nmd, io)
doublereal *q;
integer *iq;
doublereal *r__;
integer *ir;
doublereal *c__;
integer *ic;
doublereal *d__, *a;
integer *ia;
doublereal *b, *ci, *cs, *x, *w;
integer *ipvt, *n, *m, *mi, *mi1, *nmd, *io;
{
     
    integer q_dim1, q_offset, r_dim1, r_offset, c_dim1, c_offset, a_dim1, 
	    a_offset, i__1;
    doublereal d__1;

     
    double pow_dd();

     
    extern doublereal ddot_();
    static integer i__, j;
    static doublereal s;
    extern   int anrs01_(), dmmul_();
    static integer m1;
    static doublereal dj;
    extern doublereal dlamch_();
    static integer ind;
    static doublereal eps;
    extern   int dadd_();


 

 

 

 

 

 

 

 

 

 

 

 


 
 

 

 

 

 

 

 

 
 

 


 

 

 

 

 


 

 

 

 

 

 
 

 

 


 
 
 

 
 


     
    q_dim1 = *iq;
    q_offset = q_dim1 + 1;
    q -= q_offset;
    r_dim1 = *ir;
    r_offset = r_dim1 + 1;
    r__ -= r_offset;
    c_dim1 = *ic;
    c_offset = c_dim1 + 1;
    c__ -= c_offset;
    --d__;
    a_dim1 = *ia;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    --b;
    --ci;
    --cs;
    --x;
    --w;
    --ipvt;

     
    d__1 = dlamch_("p", 1L);
    eps = pow_dd(&d__1, &c_b5779);
    ind = 0;
    m1 = *m + 1;
    i__1 = *mi1;
    for (i__ = 1; i__ <= i__1; ++i__) {
	j = ipvt[i__];
	dj = d__[j];
	s = dj - ddot_(n, &c__[j * c_dim1 + 1], &c__1, &x[1], &c__1);
	w[i__] = s;
	if (ind == 0) {
	    s = (( s ) >= 0 ? ( s ) : -( s ))  / ((( dj ) >= 0 ? ( dj ) : -( dj ))  + 1);
	    if (s > eps) {
		ind = 1;
	    }
	}
 
    }
    i__1 = *m;
    for (i__ = *mi1 + 1; i__ <= i__1; ++i__) {
	j = ipvt[i__];
	if (j < 0) {
	    j = -j;
	    dj = ci[j];
	    s = x[j] - dj;
	} else if (j <= *n) {
	    dj = cs[j];
	    s = dj - x[j];
	} else if (j <= *nmd) {
	    j = *mi + j - *n;
	    dj = d__[j];
	    s = dj - ddot_(n, &c__[j * c_dim1 + 1], &c__1, &x[1], &c__1);
	} else {
	    j -= *nmd;
	    dj = b[j];
	    s = dj - ddot_(n, &a[j * a_dim1 + 1], &c__1, &x[1], &c__1);
	}
	w[i__] = s;
	if (ind == 0) {
	    s = (( s ) >= 0 ? ( s ) : -( s ))  / ((( dj ) >= 0 ? ( dj ) : -( dj ))  + 1.);
	    if (s > eps) {
		ind = 1;
	    }
	}
 
    }
    if (ind == 0) {
	return 0;
    }
    anrs01_(&r__[r_offset], ir, m, &w[1], &w[1], &ind, io);
    dmmul_(&q[q_offset], iq, &w[1], m, &w[m1], n, n, m, &c__1);
    dadd_(n, &w[m1], &c__1, &x[1], &c__1);
}  

  int zgcbd_(simul, n, binf, bsup, x, f, g, zero, napmax, 
	itmax, indgc, ibloc, nfac, imp, io, epsx, epsf, epsg, dir, df0, diag, 
	x2, izs, rzs, dzs, y, s, z__, ys, zs, nt, index, wk1, wk2, alg, ialg, 
	nomf, nomf_len)
  int (*simul) ();
integer *n;
doublereal *binf, *bsup, *x, *f, *g, *zero;
integer *napmax, *itmax, *indgc, *ibloc, *nfac, *imp, *io;
doublereal *epsx, *epsf, *epsg, *dir, *df0, *diag, *x2;
integer *izs;
real *rzs;
doublereal *dzs, *y, *s, *z__, *ys, *zs;
integer *nt, *index;
doublereal *wk1, *wk2, *alg;
integer *ialg;
char *nomf;
ftnlen nomf_len;
{
     
    static char fmt_10000[] = "(\002 dans gcbd. algorithme utilise: \002)";
    static char fmt_10001[] = "(\002        emploi correction de powell \002)"
	    ;
    static char fmt_10002[] = "(\002  mise a jour de diag par la methode bfgs\002)";
    static char fmt_10003[] = "(\002  mise a echelle de diag par methode de shanno-phua\002)";
    static char fmt_10004[] = "(\002  mise a echelle de diag seulement a la 2e iter\002)";
    static char fmt_10005[] = "(\002      memorisation pour choix iteration \002)";
    static char fmt_10006[] = "(\002      memorisation par variable\002)";
    static char fmt_10007[] = "(\002      relachememt de variables a toutes les iteration\002)";
    static char fmt_10008[] = "(\002      relachement de vars si decroissance g_norme\002)";
    static char fmt_10009[] = "(\002      relachement de vars si dec f % iter_init du cycle\002)";
    static char fmt_10010[] = "(\002      relachement de vars si dec f % dec du cycle\002)";
    static char fmt_10011[] = "(\002      choix de vars a relacher par bertsekas modifiee\002)";
    static char fmt_10012[] = "(\002      choix de dir descente par methode de gradient\002)";
    static char fmt_10013[] = "(\002      choix de dir descente par methode qn\002)";
    static char fmt_10014[] = "(\002      choix de dir descente par qn sans memoire.nt depl\002)";
    static char fmt_10015[] = "(\002      choix de dir descente par qn -mem,redem,sans acc.\002)";
    static char fmt_10016[] = "(\002     choix de dir descente par qn -mem,redem,avec acc.\002)";
    static char fmt_10017[] = "(\002      redem si relachement de vars\002)";
    static char fmt_10018[] = "(\002      redem si dec f % dec iter_init du cycle\002)";
    static char fmt_10019[] = "(\002      redem si dec f % dec totale du cycle.\002)";
    static char fmt_10020[] = "(\002    redem si diminution du gradient des var libres d un\002,\002facteur\002,d11.4)";
    static char fmt_123[] = "(\002 gcbd : retour avec indgc=\002,i8)";
    static char fmt_1210[] = "(/\002 dans gcbd  iter=\002,i3,\002  f=\002,d15.7)";
    static char fmt_1270[] = "(\002 gcbd. emploi correction powell (y,s)=\002,d11.4)";
    static char fmt_1280[] = "(\002 erreur relative correction powell =\002,d11.4)";
    static char fmt_1000[] = "(\002   redemarrage. icycl=\002,i5)";
    static char fmt_1712[] = "(\002 gcbd : restauration dir ; fp,zero\002,2d11.4)";
    static char fmt_750[] = "(\002 retour mlibd indrl=\002,i6,\002 pas= \002,d11.4,\002 f= \002,d11.4)";
    static char fmt_777[] = "(\002 i=\002,i2,\002 xgd \002,3f11.4)";
    static char fmt_755[] = "(\002 gcbd max appels simul\002)";
    static char fmt_1805[] = "(\002 gcbd. retour apres convergence sur x\002)"
	    ;
    static char fmt_860[] = "(\002 gcbd. epsg,difg=\002,2d11.4,\002  epsf,diff=\002,2d11.4,\002  nap=\002,i3)";
    static char fmt_1910[] = "(\002 arret impose par la recherche lineaire. cf notice rlbd\002,/,\002 indicateur de rlbd=\002,i6)";
    static char fmt_950[] = "(\002 f,norme grad,nap,iter,indgc=\002,2e11.4,3i6)";
    static char fmt_2001[] = "(1x,a6,2e11.4,2i5,f6.2,i5)";

     
    integer y_dim1, y_offset, s_dim1, s_offset, z_dim1, z_offset, i__1;
    doublereal d__1, d__2;

     
    integer s_wsfe(), e_wsfe(), do_fio();
    double sqrt();

     
    static doublereal diff, difg, scal;
    static integer ired;
    extern   int rlbd_();
    static doublereal diri;
    static integer nred, izag;
    extern doublereal ddot_();
    static integer napm;
    static doublereal teta;
    extern   int majz_();
    static integer iter, irit;
    extern   int proj_();
    static doublereal tmax, ceps0;
    static integer izag1, napm1;
    static doublereal teta1, znog0;
    static integer i__;
    extern   int bfgsd_();
    static doublereal t, condm, param;
    static integer icycl, napav, indrl;
    static doublereal tetaq;
    extern   int dcopy_();
    static doublereal epsxi, tproj;
    static integer indgc1;
    static doublereal dfred1, param1, dfrit1, aa;
    static integer lb, nb;
    static doublereal fn, difred;
    static integer np;
    static doublereal xi, sy, epsgcp;
    extern   int shanph_();
    static integer indsim;
    extern   int majysa_();
    static doublereal znglib, difrit;
    extern doublereal rednor_();
    static doublereal zngred;
    extern   int relvar_();
    static integer iresul;
    static doublereal zngrit, ys1, amd, amf;
    extern   int gcp_();
    static integer ind;
    static doublereal dfp;
    static integer nap, ifp, irl, inp;
    static doublereal bss, zng, zrl;
    static integer imp1;
    static doublereal eps0, bss2;

     
    static cilist io___3138 = { 0, 0, 0, fmt_10000, 0 };
    static cilist io___3139 = { 0, 0, 0, fmt_10001, 0 };
    static cilist io___3140 = { 0, 0, 0, fmt_10002, 0 };
    static cilist io___3141 = { 0, 0, 0, fmt_10003, 0 };
    static cilist io___3142 = { 0, 0, 0, fmt_10004, 0 };
    static cilist io___3143 = { 0, 0, 0, fmt_10005, 0 };
    static cilist io___3144 = { 0, 0, 0, fmt_10006, 0 };
    static cilist io___3145 = { 0, 0, 0, fmt_10007, 0 };
    static cilist io___3146 = { 0, 0, 0, fmt_10008, 0 };
    static cilist io___3147 = { 0, 0, 0, fmt_10009, 0 };
    static cilist io___3148 = { 0, 0, 0, fmt_10010, 0 };
    static cilist io___3149 = { 0, 0, 0, fmt_10011, 0 };
    static cilist io___3150 = { 0, 0, 0, fmt_10012, 0 };
    static cilist io___3151 = { 0, 0, 0, fmt_10013, 0 };
    static cilist io___3152 = { 0, 0, 0, fmt_10014, 0 };
    static cilist io___3153 = { 0, 0, 0, fmt_10015, 0 };
    static cilist io___3154 = { 0, 0, 0, fmt_10016, 0 };
    static cilist io___3155 = { 0, 0, 0, fmt_10017, 0 };
    static cilist io___3156 = { 0, 0, 0, fmt_10018, 0 };
    static cilist io___3157 = { 0, 0, 0, fmt_10019, 0 };
    static cilist io___3158 = { 0, 0, 0, fmt_10020, 0 };
    static cilist io___3167 = { 0, 0, 0, fmt_123, 0 };
    static cilist io___3186 = { 0, 0, 0, fmt_123, 0 };
    static cilist io___3188 = { 0, 0, 0, fmt_1210, 0 };
    static cilist io___3194 = { 0, 0, 0, fmt_1270, 0 };
    static cilist io___3198 = { 0, 0, 0, fmt_1280, 0 };
    static cilist io___3208 = { 0, 0, 0, fmt_1000, 0 };
    static cilist io___3215 = { 0, 0, 0, fmt_1712, 0 };
    static cilist io___3224 = { 0, 0, 0, fmt_750, 0 };
    static cilist io___3225 = { 0, 0, 0, fmt_123, 0 };
    static cilist io___3226 = { 0, 0, 0, fmt_123, 0 };
    static cilist io___3227 = { 0, 0, 0, fmt_777, 0 };
    static cilist io___3228 = { 0, 0, 0, fmt_755, 0 };
    static cilist io___3229 = { 0, 0, 0, fmt_1805, 0 };
    static cilist io___3231 = { 0, 0, 0, fmt_860, 0 };
    static cilist io___3233 = { 0, 0, 0, fmt_123, 0 };
    static cilist io___3234 = { 0, 0, 0, fmt_1910, 0 };
    static cilist io___3235 = { 0, 0, 0, fmt_950, 0 };
    static cilist io___3237 = { 0, 0, 0, fmt_2001, 0 };




     
    --wk2;
    --wk1;
    --x2;
    --diag;
    --dir;
    --epsx;
    --ibloc;
    --g;
    --x;
    --bsup;
    --binf;
    --izs;
    --rzs;
    --dzs;
    --index;
    --zs;
    --ys;
    z_dim1 = *nt;
    z_offset = z_dim1 + 1;
    z__ -= z_offset;
    s_dim1 = *nt;
    s_offset = s_dim1 + 1;
    s -= s_offset;
    y_dim1 = *nt;
    y_offset = y_dim1 + 1;
    y -= y_offset;
    --alg;
    --ialg;

     
    if (*imp >= 4) {
	io___3138.ciunit = *io;
	s_wsfe(&io___3138);
	e_wsfe();
	if (ialg[1] == 1) {
	    io___3139.ciunit = *io;
	    s_wsfe(&io___3139);
	    e_wsfe();
	}
	if (ialg[2] == 1) {
	    io___3140.ciunit = *io;
	    s_wsfe(&io___3140);
	    e_wsfe();
	}
	if (ialg[3] == 1) {
	    io___3141.ciunit = *io;
	    s_wsfe(&io___3141);
	    e_wsfe();
	}
	if (ialg[3] == 2) {
	    io___3142.ciunit = *io;
	    s_wsfe(&io___3142);
	    e_wsfe();
	}
	if (ialg[4] == 1) {
	    io___3143.ciunit = *io;
	    s_wsfe(&io___3143);
	    e_wsfe();
	}
	if (ialg[5] == 1) {
	    io___3144.ciunit = *io;
	    s_wsfe(&io___3144);
	    e_wsfe();
	}
	if (ialg[6] == 1) {
	    io___3145.ciunit = *io;
	    s_wsfe(&io___3145);
	    e_wsfe();
	}
	if (ialg[6] == 2) {
	    io___3146.ciunit = *io;
	    s_wsfe(&io___3146);
	    e_wsfe();
	}
	if (ialg[6] == 10) {
	    io___3147.ciunit = *io;
	    s_wsfe(&io___3147);
	    e_wsfe();
	}
	if (ialg[6] == 11) {
	    io___3148.ciunit = *io;
	    s_wsfe(&io___3148);
	    e_wsfe();
	}
	if (ialg[7] == 1) {
	    io___3149.ciunit = *io;
	    s_wsfe(&io___3149);
	    e_wsfe();
	}
	if (ialg[8] == 1) {
	    io___3150.ciunit = *io;
	    s_wsfe(&io___3150);
	    e_wsfe();
	}
	if (ialg[8] == 2) {
	    io___3151.ciunit = *io;
	    s_wsfe(&io___3151);
	    e_wsfe();
	}
	if (ialg[8] == 3) {
	    io___3152.ciunit = *io;
	    s_wsfe(&io___3152);
	    e_wsfe();
	}
	if (ialg[8] == 4) {
	    io___3153.ciunit = *io;
	    s_wsfe(&io___3153);
	    e_wsfe();
	}
	if (ialg[8] == 5) {
	    io___3154.ciunit = *io;
	    s_wsfe(&io___3154);
	    e_wsfe();
	}
	if (ialg[9] == 2) {
	    io___3155.ciunit = *io;
	    s_wsfe(&io___3155);
	    e_wsfe();
	}
	if (ialg[9] == 10) {
	    io___3156.ciunit = *io;
	    s_wsfe(&io___3156);
	    e_wsfe();
	}
	if (ialg[9] == 11) {
	    io___3157.ciunit = *io;
	    s_wsfe(&io___3157);
	    e_wsfe();
	}
	if (ialg[9] == 12) {
	    io___3158.ciunit = *io;
	    s_wsfe(&io___3158);
	    do_fio(&c__1, (char *)&alg[9], (ftnlen)sizeof(doublereal));
	    e_wsfe();
	}
    }

 
 
 
 

    epsgcp = 1e-5;
    indsim = 4;
    indrl = 1;
    irl = 0;
    irl = 0;
    nred = 1;
    icycl = 1;

    iresul = 1;
    proj_(n, &binf[1], &bsup[1], &x[1]);
    indsim = 4;
    (*simul)(&indsim, n, &x[1], f, &g[1], &izs[1], &rzs[1], &dzs[1]);
    ++nap;
    if (indsim > 0) {
	goto L99;
    }
    *indgc = -1;
    if (indsim == 0) {
	*indgc = 0;
    }
    if (*imp > 0) {
	io___3167.ciunit = *io;
	s_wsfe(&io___3167);
	do_fio(&c__1, (char *)&(*indgc), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    goto L900;
L99:
    ceps0 = 20.;
    eps0 = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	eps0 += epsx[i__];
    }
    eps0 = ceps0 * eps0 / *n;

 
    znog0 = rednor_(n, &binf[1], &bsup[1], &x[1], &epsx[1], &g[1]);
    zng = znog0;
    zngrit = znog0;
    zngred = znog0;

    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	ibloc[i__] = 0;
    }
    izag = 3;
    izag1 = izag;
    nap = 0;
    iter = 0;
    scal = 1.;
    *nfac = *n;
    np = 0;
    lb = 1;
    nb = 2;
    if (ialg[8] == 3) {
	nb = 1;
    }
    i__1 = *nt;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	index[i__] = i__;
    }
    tetaq = alg[9];
    condm = alg[2];
    param = alg[1];
    indgc1 = *indgc;
 

    if (*indgc == 1 || *indgc >= 100) {
	goto L150;
    }
    if (*indgc == 2) {
	goto L180;
    }
    *indgc = -13;
    if (*imp > 0) {
	io___3186.ciunit = *io;
	s_wsfe(&io___3186);
	do_fio(&c__1, (char *)&(*indgc), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    goto L900;

L150:
 
 
 
 
    sy = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
 
	d__1 = g[i__] * epsx[i__];
	sy += d__1 * d__1;
    }
    sy /= *df0 * 2.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
 
	d__1 = epsx[i__];
	diag[i__] = (sy + *zero) / (d__1 * d__1 + *zero);
    }
L180:


 
L200:
    ++iter;
    *indgc = 1;
    if (iter > *itmax) {
	*indgc = 5;
	goto L900;
    }
 
    if (*imp >= 2) {
	io___3188.ciunit = *io;
	s_wsfe(&io___3188);
	do_fio(&c__1, (char *)&iter, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*f), (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    if (iter == 1) {
	irit = 1;
	goto L301;
    }

    majysa_(n, nt, &np, &y[y_offset], &s[s_offset], &ys[1], &lb, &g[1], &x[1],
	     &wk2[1], &wk1[1], &index[1], &ialg[1], &nb);
    inp = index[np];


 
    if (ialg[1] != 1) {
	goto L290;
    }
    param1 = (float)1. - param;
    bss = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
 
	d__1 = s[inp + i__ * s_dim1];
	bss += diag[i__] * (d__1 * d__1);
    }
    bss2 = param * bss;
    if (ys[inp] > bss2) {
	goto L290;
    }
    if (*imp > 2) {
	io___3194.ciunit = *io;
	s_wsfe(&io___3194);
	do_fio(&c__1, (char *)&ys[inp], (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    teta = param1 * bss / (bss - ys[inp]);
    teta1 = 1. - teta;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	y[inp + i__ * y_dim1] = teta * y[inp + i__ * y_dim1] + teta1 * diag[
		i__] * s[inp + i__ * s_dim1];
    }
    ys[inp] = bss2;
 
    ys1 = ddot_(n, &s[inp + s_dim1], &c__1, &y[inp + y_dim1], &c__1);
    ys1 = (d__1 = bss2 - ys1, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) / bss2;
    if (*imp > 2) {
	io___3198.ciunit = *io;
	s_wsfe(&io___3198);
	do_fio(&c__1, (char *)&ys1, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }

 
L290:
    if (ialg[2] == 1) {
	bfgsd_(&diag[1], n, nt, &np, &y[y_offset], &s[s_offset], &ys[1], &
		condm, &param, zero, &index[1]);
    }

    if (ialg[3] == 1 || ialg[3] == 2 && iter == 2) {
	shanph_(&diag[1], n, nt, &np, &y[y_offset], &s[s_offset], &ys[1], &
		scal, &index[1], io, imp);
    }

    majz_(n, &np, nt, &y[y_offset], &s[s_offset], &z__[z_offset], &ys[1], &zs[
	    1], &diag[1], &index[1]);

 
 
 
 
    irit = 0;
    if (ialg[6] == 1) {
	irit = 1;
    }
    if (ialg[6] == 2 && znglib <= alg[6] * zngrit) {
	irit = 1;
    }
    if (ialg[6] == 10 && diff <= dfrit1 * alg[6]) {
	irit = 1;
    }
    if (ialg[6] == 11 && diff <= difrit * alg[6]) {
	irit = 1;
    }
    if (irit == 1) {
	++nred;
    }
 
    imp1 = *imp;
L301:
    if (ialg[7] == 1) {
	relvar_(&ind, n, &x[1], &binf[1], &bsup[1], &x2[1], &g[1], &diag[1], 
		imp, io, &ibloc[1], &izag, &iter, nfac, &irit);
    }


 
    if (np == 0) {
	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    dir[i__] = -g[i__] / diag[i__];
 
	}
    } else {
	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    dir[i__] = -scal * g[i__];
 
	}
	gcp_(n, &index[1], &ibloc[1], &np, nt, &y[y_offset], &s[s_offset], &
		z__[z_offset], &ys[1], &zs[1], &diag[1], &g[1], &dir[1], &wk1[
		1], &wk2[1], &epsgcp);
    }

 

    if (ialg[8] == 4 || ialg[8] == 5) {
	ired = 0;
	if (ialg[9] == 2 && ind == 1) {
	    ired = 1;
	}
	if (ialg[9] == 10 && diff < dfred1 * tetaq) {
	    ired = 1;
	}
	if (ialg[9] == 11 && diff < difred * tetaq) {
	    ired = 1;
	}
	if (ialg[9] == 12 && znglib <= tetaq * zngred) {
	    ired = 1;
	}
	if (ired == 1) {
	    ++icycl;
	    np = 0;
	    lb = 1;
	    if (*imp > 2) {
		io___3208.ciunit = *io;
		s_wsfe(&io___3208);
		do_fio(&c__1, (char *)&icycl, (ftnlen)sizeof(integer));
		e_wsfe();
	    }
	}
    }

 
    if (ialg[6] == 1) {
	goto L640;
    }
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	if (ibloc[i__] > 0) {
	    dir[i__] = 0.;
	}
    }
L640:

 
 
    dcopy_(n, &x[1], &c__1, &wk1[1], &c__1);
    dcopy_(n, &g[1], &c__1, &wk2[1], &c__1);
 
    ifp = 0;
    fn = *f;
    znog0 = zng;
L702:
    dfp = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	epsxi = epsx[i__];
	xi = x[i__];
	diri = dir[i__];
	if (xi - binf[i__] <= epsxi && diri < 0.) {
	    dir[i__] = 0.;
	}
 
	if (bsup[i__] - xi <= epsxi && diri > 0.) {
	    dir[i__] = 0.;
	}
    }
    dfp = ddot_(n, &g[1], &c__1, &dir[1], &c__1);
    if (-dfp > 0.) {
	goto L715;
    }
    if (ifp == 1) {
	*indgc = 6;
	goto L900;
    }
 
    if (*imp >= 3) {
	io___3215.ciunit = *io;
	s_wsfe(&io___3215);
	do_fio(&c__1, (char *)&dfp, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&(*zero), (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	dir[i__] = -scal * g[i__];
    }
    ifp = 1;
    goto L702;
L715:
 
    t = diff * -2. / dfp;
    if (iter == 1) {
	t = *df0 * -2. / dfp;
    }
    tmax = 1e10;
    t = (( t ) <= ( tmax ) ? ( t ) : ( tmax )) ;
 
    d__1 = t, d__2 = *zero * 1e10;
    t = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
    napm = 15;
    napm1 = nap + napm;
    if (napm1 > *napmax) {
	napm1 = *napmax;
    }
    napav = nap;
    amd = .7;
    amf = .1;

    rlbd_(&indrl, n, simul, &x[1], &binf[1], &bsup[1], f, &dfp, &t, &tmax, &
	    dir[1], &g[1], &tproj, &amd, &amf, imp, io, zero, &nap, &napm1, &
	    x2[1], &izs[1], &rzs[1], &dzs[1]);
    if (*imp > 2) {
	io___3224.ciunit = *io;
	s_wsfe(&io___3224);
	do_fio(&c__1, (char *)&indrl, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&t, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&(*f), (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    if (nap - napav >= 5) {
	++irl;
    }
    if (indrl >= 10) {
	indsim = 4;
	++nap;
	(*simul)(&indsim, n, &x[1], f, &g[1], &izs[1], &rzs[1], &dzs[1]);
	if (indsim <= 0) {
	    *indgc = -3;
	    if (indsim == 0) {
		*indgc = 0;
	    }
	    if (*imp > 0) {
		io___3225.ciunit = *io;
		s_wsfe(&io___3225);
		do_fio(&c__1, (char *)&(*indgc), (ftnlen)sizeof(integer));
		e_wsfe();
	    }
	    goto L900;
	}
    }
    if (indrl <= 0) {
	*indgc = 10;
	if (indrl == 0) {
	    *indgc = 0;
	}
	if (indrl == -3) {
	    *indgc = 13;
	}
	if (indrl == -4) {
	    *indgc = 12;
	}
	if (indrl <= -1000) {
	    *indgc = 11;
	}
	if (*imp > 0) {
	    io___3226.ciunit = *io;
	    s_wsfe(&io___3226);
	    do_fio(&c__1, (char *)&(*indgc), (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	goto L900;
    }
    if (*imp >= 5) {
	i__1 = *n;
	for (i__ = 1; i__ <= i__1; ++i__) {
 
	    if (*imp > 2) {
		io___3227.ciunit = *io;
		s_wsfe(&io___3227);
		do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
		do_fio(&c__1, (char *)&x[i__], (ftnlen)sizeof(doublereal));
		do_fio(&c__1, (char *)&g[i__], (ftnlen)sizeof(doublereal));
		do_fio(&c__1, (char *)&dir[i__], (ftnlen)sizeof(doublereal));
		e_wsfe();
	    }
	}
    }

    if (nap < *napmax) {
	goto L758;
    }
    if (*imp > 0) {
	io___3228.ciunit = *io;
	s_wsfe(&io___3228);
	e_wsfe();
    }
    *indgc = 4;
    goto L900;
L758:

 
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if ((d__1 = x[i__] - wk1[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > epsx[i__]) {
	    goto L806;
	}
 
    }
    if (*imp > 0) {
	io___3229.ciunit = *io;
	s_wsfe(&io___3229);
	e_wsfe();
    }
    *indgc = 3;
    goto L900;
 
L806:
    difg = rednor_(n, &binf[1], &bsup[1], &x[1], &epsx[1], &g[1]);
    diff = fn - *f;
    if (*imp >= 2) {
	io___3231.ciunit = *io;
	s_wsfe(&io___3231);
	do_fio(&c__1, (char *)&(*epsg), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&difg, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&(*epsf), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&diff, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&nap, (ftnlen)sizeof(integer));
	e_wsfe();
    }

    if (diff <= *epsf) {
	*indgc = 2;
	goto L900;
    }
    if (difg <= *epsg) {
	*indgc = 1;
	goto L900;
    }

 
    if (irit == 1) {
	difrit = diff;
	dfrit1 = diff;
    } else {
	difrit += diff;
    }
    if (ired == 1) {
	difred = diff;
	dfred1 = diff;
    } else {
	difred += diff;
    }

    znglib = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (ibloc[i__] > 0) {
	    goto L884;
	}
	aa = g[i__];
	if (x[i__] - binf[i__] <= epsx[i__]) {
	    aa = (( 0. ) <= ( aa ) ? ( 0. ) : ( aa )) ;
	}
	if (bsup[i__] - x[i__] <= epsx[i__]) {
	    aa = (( 0. ) >= ( aa ) ? ( 0. ) : ( aa )) ;
	}
 
	d__1 = aa;
	znglib += d__1 * d__1;
L884:
	;
    }
    znglib = sqrt(znglib);
    if (ired == 1) {
	zngred = znglib;
    }
    if (irit == 1) {
	zngrit = znglib;
    }
    goto L200;

 
L900:
    if (indrl == 0) {
	*indgc = 0;
    }
    if (*indgc == 1 && indrl <= 0) {
	*indgc = indrl;
    }
    if (*imp > 0) {
	io___3233.ciunit = *io;
	s_wsfe(&io___3233);
	do_fio(&c__1, (char *)&(*indgc), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    if (*imp >= 1 && (doublereal) indrl <= *zero) {
	io___3234.ciunit = *io;
	s_wsfe(&io___3234);
	do_fio(&c__1, (char *)&indrl, (ftnlen)sizeof(integer));
	e_wsfe();
    }
    if (*imp >= 1) {
	io___3235.ciunit = *io;
	s_wsfe(&io___3235);
	do_fio(&c__1, (char *)&(*f), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&difg, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&nap, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&iter, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*indgc), (ftnlen)sizeof(integer));
	e_wsfe();
    }

 
    if (indgc1 < 100) {
	return 0;
    }
    zrl = (float)0.;
    if (iter > 0) {
	zrl = (doublereal) nap / (doublereal) iter;
    }
 
    io___3237.ciunit = *io;
    s_wsfe(&io___3237);
    do_fio(&c__1, nomf, 6L);
    do_fio(&c__1, (char *)&(*f), (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&difg, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&nap, (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&iter, (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&zrl, (ftnlen)sizeof(doublereal));
    do_fio(&c__1, (char *)&irl, (ftnlen)sizeof(integer));
    e_wsfe();
}  

  int zqnbd_(indqn, simul, dh, n, binf, bsup, x, f, g, zero, 
	napmax, itmax, indic, izig, nfac, imp, io, epsx, epsf, epsg, x1, x2, 
	g1, dir, df0, ig, in, irel, izag, iact, epsrel, ieps1, izs, rzs, dzs)
integer *indqn;
  int (*simul) ();
doublereal *dh;
integer *n;
doublereal *binf, *bsup, *x, *f, *g, *zero;
integer *napmax, *itmax, *indic, *izig, *nfac, *imp, *io;
doublereal *epsx, *epsf, *epsg, *x1, *x2, *g1, *dir, *df0;
integer *ig, *in, *irel, *izag, *iact;
doublereal *epsrel;
integer *ieps1, *izs;
real *rzs;
doublereal *dzs;
{
     
    static char fmt_1020[] = "(\002 qnbd :  izag,ig,in,irel,iact,epsrel=\002,5i3,f11.4)";
    static char fmt_110[] = "(\002 test sur gradient pour sortie ib\002)";
    static char fmt_111[] = "(\002 test sur nombre de defactorisations pour sortie ib\002)";
    static char fmt_112[] = "(\002 memorisation de variables izag=\002,i3)";
    static char fmt_114[] = "(\002 methode de minimisations incompletes ; epsrel=\002,d11.4)";
    static char fmt_116[] = "(\002 blocage des variables dans ib\002)";
    static char fmt_118[] = "(\002 parametre eps1 nul\002)";
    static char fmt_119[] = "(\002 parametre eps1 grand\002)";
    static char fmt_120[] = "(\002 parametre eps1=eps(x) calcule avec cscal1=\002,d11.4)";
    static char fmt_105[] = "(\002 qnbd  : valeur non admissible de indqn  \002,i5)";
    static char fmt_123[] = "(\002 qnbd : indqn=\002,i8)";
    static char fmt_1202[] = "(\002 qnbd : maximum d iterations atteint\002)";
    static char fmt_1210[] = "(/\002 qnbd : iter=\002,i3,\002  f=\002,d15.7)";
    static char fmt_1203[] = "(\002 qnbd : facteur d echelle=\002,d11.4)";
    static char fmt_1272[] = "(\002 qnbd : pb (bs,s) negatif=\002,d11.4)";
    static char fmt_1270[] = "(\002 qnbd : emploi truc powell (y,s)=\002,d11.4)";
    static char fmt_282[] = "(\002 qnbd : pb dans appel majour\002)";
    static char fmt_322[] = "(\002 qnbd : val de eps1 servant a partitionner les variables\002,d11.4)";
    static char fmt_1320[] = "(\002 qnbd : redemarrage ; difg0,epsrel,difg1=\002,3d11.4)";
    static char fmt_336[] = "(\002 defactorisation de \002,i3)";
    static char fmt_333[] = "(\002 qnbd : pb dans ajour. mode=\002,i3)";
    static char fmt_339[] = "(\002 on factorise l indice \002,i3)";
    static char fmt_350[] = "(\002 qnbd : nbre fact\002,i3,\002 defact\002,i3,\002 total var factorisees\002,i3)";
    static char fmt_650[] = "(\002 qnbd : pb num dans mult par inverse\002)";
    static char fmt_1705[] = "(\002 qnbd : arret fpn non negatif=\002,d11.4)";
    static char fmt_777[] = "(\002 i=\002,i2,\002 xgd \002,3f11.4)";
    static char fmt_755[] = "(\002 qnbd : retour cause max appels simul\002,i9)";
    static char fmt_1805[] = "(\002 qnbd : retour apres convergence de x\002)"
	    ;
    static char fmt_860[] = "(\002 qnbd : epsg,difg=\002,2d11.4,\002  epsf,diff=\002,2d11.4,\002  nap=\002,i3)";
    static char fmt_1865[] = "(\002 qnbd : retour cause decroissance f trop petite=\002,d11.4)";
    static char fmt_1900[] = "(\002 qnbd : retour cause gradient projete petit=\002,d11.4)";

     
    integer i__1, i__2;
    doublereal d__1, d__2;

     
    integer s_wsfe(), do_fio(), e_wsfe();
    double sqrt();

     
    static integer ifac;
    static doublereal diff, difg, scal;
    extern   int rlbd_();
    static integer mode, napm;
    static doublereal teta;
    static integer iter, irit;
    extern   int proj_();
    static doublereal tmax;
    static integer nfac1;
    static doublereal difg0, difg1;
    static integer n2fac;
    static doublereal scal1;
    static integer napm1;
    static doublereal teta1, zsig1;
    static integer idfac, i__, j, k;
    static doublereal t;
    static integer nnfac;
    static doublereal v, y, epsmc;
    static integer indrl, iconv;
    extern   int ajour_();
    static doublereal d1, tiers, d2;
    static integer i1;
    static doublereal tproj;
    static integer n1, n3;
    static doublereal t1, cscal1, aa, dd, bi;
    static integer ic, ii, ij;
    static doublereal fn, bs, ep;
    static integer ip, mk, ir;
    extern   int calmaj_();
    static doublereal gr;
    static integer np, indsim, nm1;
    static doublereal amd, amf;
    static integer ndh, nap, ifp;
    static doublereal sig, fpn;
    static integer nip;
    static doublereal cof1, cof2, sig1, eps0, eps1;

     
    static cilist io___3238 = { 0, 0, 0, fmt_1020, 0 };
    static cilist io___3239 = { 0, 0, 0, fmt_110, 0 };
    static cilist io___3240 = { 0, 0, 0, fmt_111, 0 };
    static cilist io___3241 = { 0, 0, 0, fmt_112, 0 };
    static cilist io___3242 = { 0, 0, 0, fmt_114, 0 };
    static cilist io___3243 = { 0, 0, 0, fmt_116, 0 };
    static cilist io___3244 = { 0, 0, 0, fmt_118, 0 };
    static cilist io___3245 = { 0, 0, 0, fmt_119, 0 };
    static cilist io___3247 = { 0, 0, 0, fmt_120, 0 };
    static cilist io___3253 = { 0, 0, 0, fmt_105, 0 };
    static cilist io___3254 = { 0, 0, 0, fmt_123, 0 };
    static cilist io___3259 = { 0, 0, 0, fmt_123, 0 };
    static cilist io___3263 = { 0, 0, 0, fmt_1202, 0 };
    static cilist io___3264 = { 0, 0, 0, fmt_123, 0 };
    static cilist io___3265 = { 0, 0, 0, fmt_1210, 0 };
    static cilist io___3267 = { 0, 0, 0, fmt_1203, 0 };
    static cilist io___3281 = { 0, 0, 0, fmt_1272, 0 };
    static cilist io___3282 = { 0, 0, 0, fmt_123, 0 };
    static cilist io___3283 = { 0, 0, 0, fmt_1270, 0 };
    static cilist io___3291 = { 0, 0, 0, fmt_282, 0 };
    static cilist io___3292 = { 0, 0, 0, fmt_123, 0 };
    static cilist io___3295 = { 0, 0, 0, fmt_322, 0 };
    static cilist io___3302 = { 0, 0, 0, fmt_1320, 0 };
    static cilist io___3312 = { 0, 0, 0, fmt_336, 0 };
    static cilist io___3313 = { 0, 0, 0, fmt_333, 0 };
    static cilist io___3314 = { 0, 0, 0, fmt_123, 0 };
    static cilist io___3315 = { 0, 0, 0, fmt_339, 0 };
    static cilist io___3316 = { 0, 0, 0, fmt_333, 0 };
    static cilist io___3317 = { 0, 0, 0, fmt_123, 0 };
    static cilist io___3318 = { 0, 0, 0, fmt_350, 0 };
    static cilist io___3321 = { 0, 0, 0, fmt_650, 0 };
    static cilist io___3322 = { 0, 0, 0, fmt_123, 0 };
    static cilist io___3326 = { 0, 0, 0, fmt_1705, 0 };
    static cilist io___3327 = { 0, 0, 0, fmt_123, 0 };
    static cilist io___3338 = { 0, 0, 0, fmt_123, 0 };
    static cilist io___3339 = { 0, 0, 0, fmt_123, 0 };
    static cilist io___3340 = { 0, 0, 0, fmt_777, 0 };
    static cilist io___3341 = { 0, 0, 0, fmt_755, 0 };
    static cilist io___3342 = { 0, 0, 0, fmt_123, 0 };
    static cilist io___3343 = { 0, 0, 0, fmt_1805, 0 };
    static cilist io___3344 = { 0, 0, 0, fmt_123, 0 };
    static cilist io___3346 = { 0, 0, 0, fmt_860, 0 };
    static cilist io___3347 = { 0, 0, 0, fmt_1865, 0 };
    static cilist io___3348 = { 0, 0, 0, fmt_123, 0 };
    static cilist io___3349 = { 0, 0, 0, fmt_1900, 0 };
    static cilist io___3350 = { 0, 0, 0, fmt_123, 0 };




     
    --dh;
    --dir;
    --g1;
    --x2;
    --x1;
    --epsx;
    --izig;
    --indic;
    --g;
    --x;
    --bsup;
    --binf;
    --izs;
    --rzs;
    --dzs;

     
    if (*imp < 4) {
	goto L3;
    }
    io___3238.ciunit = *io;
    s_wsfe(&io___3238);
    do_fio(&c__1, (char *)&(*izag), (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&(*ig), (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&(*in), (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&(*irel), (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&(*iact), (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&(*epsrel), (ftnlen)sizeof(doublereal));
    e_wsfe();

    if (*ig == 1) {
	io___3239.ciunit = *io;
	s_wsfe(&io___3239);
	e_wsfe();
    }
    if (*in == 1) {
	io___3240.ciunit = *io;
	s_wsfe(&io___3240);
	e_wsfe();
    }
    if (*izag != 0) {
	io___3241.ciunit = *io;
	s_wsfe(&io___3241);
	do_fio(&c__1, (char *)&(*izag), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    if (*irel == 1) {
	io___3242.ciunit = *io;
	s_wsfe(&io___3242);
	do_fio(&c__1, (char *)&(*epsrel), (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    if (*iact == 1) {
	io___3243.ciunit = *io;
	s_wsfe(&io___3243);
	e_wsfe();
    }
    if (*ieps1 == 1) {
	io___3244.ciunit = *io;
	s_wsfe(&io___3244);
	e_wsfe();
    }
    if (*ieps1 == 2) {
	io___3245.ciunit = *io;
	s_wsfe(&io___3245);
	e_wsfe();
    }

 
    cscal1 = 1e8;
    if (*ieps1 == 2) {
	io___3247.ciunit = *io;
	s_wsfe(&io___3247);
	do_fio(&c__1, (char *)&cscal1, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
L3:

    difg0 = 1.;
    difg1 = 0.;

 
    eps0 = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	izig[i__] = 0;
 
	eps0 += epsx[i__];
    }
    eps0 = eps0 * (float)10. / *n;

 
 

    proj_(n, &binf[1], &bsup[1], &x[1]);
    ndh = *n * (*n + 1) / 2;
    if (*indqn == 1) {
	goto L10;
    }
    if (*indqn == 2) {
	goto L30;
    }
 
    if (*imp > 0) {
	io___3253.ciunit = *io;
	s_wsfe(&io___3253);
	do_fio(&c__1, (char *)&(*indqn), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    *indqn = -105;
    if (*imp > 0) {
	io___3254.ciunit = *io;
	s_wsfe(&io___3254);
	do_fio(&c__1, (char *)&(*indqn), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    return 0;
L10:
 
 
    *nfac = 0;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	indic[i__] = i__;
    }
    i__1 = ndh;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	dh[i__] = 0.;
    }
L30:

 

 
    iter = 0;
    scal = 1.;
    nap = 1;
    indsim = 4;
    if (*indqn == 1) {
	(*simul)(&indsim, n, &x[1], f, &g[1], &izs[1], &rzs[1], &dzs[1]);
    }
    if (indsim <= 0) {
	*indqn = -1;
	if (indsim == 0) {
	    *indqn = 0;
	}
	if (*imp > 0) {
	    io___3259.ciunit = *io;
	    s_wsfe(&io___3259);
	    do_fio(&c__1, (char *)&(*indqn), (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	return 0;
    }
    if (*indqn != 1) {
	goto L200;
    }
 
 
 
 
    cof1 = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
 
	d__1 = g[i__] * epsx[i__];
	cof1 += d__1 * d__1;
    }
    cof1 /= *df0 * 2.;
    i1 = -(*n);
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i1 = i1 + *n + 2 - i__;
 
 
	d__1 = epsx[i__];
	dh[i1] = (cof1 + *zero) / (d__1 * d__1 + *zero);
    }
    iconv = 0;
L200:
    ++iter;
    if (iter <= *itmax) {
	goto L202;
    }
    if (*imp > 0) {
	io___3263.ciunit = *io;
	s_wsfe(&io___3263);
	e_wsfe();
    }
    *indqn = 5;
    if (*imp > 0) {
	io___3264.ciunit = *io;
	s_wsfe(&io___3264);
	do_fio(&c__1, (char *)&(*indqn), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    return 0;
L202:
    if (*imp >= 2) {
	io___3265.ciunit = *io;
	s_wsfe(&io___3265);
	do_fio(&c__1, (char *)&iter, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*f), (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
 
    if (iter == 1) {
	goto L300;
    }
    cof1 = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	x1[i__] = x[i__] - x1[i__];
	g1[i__] = g[i__] - g1[i__];
 
	cof1 += x1[i__] * g1[i__];
    }
    if (cof1 <= *zero) {
	goto L250;
    }
    if (iter > 2 || *indqn != 1) {
	goto L250;
    }
 
 
    cof2 = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
 
	d__1 = g1[i__];
	cof2 += d__1 * d__1;
    }
    cof2 /= cof1;
    if (*imp > 3) {
	io___3267.ciunit = *io;
	s_wsfe(&io___3267);
	do_fio(&c__1, (char *)&cof2, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    dh[1] = cof2;
    i1 = 1;
    i__1 = *nfac;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i1 = i1 + *n + 1 - i__;
 
	dh[i1] = cof2;
    }

 
 
    scal = 1. / cof2;
L250:

 
 
 
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i1 = indic[i__];
	x2[i1] = g1[i__];
 
	dir[i1] = x1[i__];
    }
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	g1[i__] = x2[i__];
    }
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i1 = indic[i__];
 
	x2[i1] = x1[i__];
    }
 
 
    if (*nfac == 0) {
	goto L2312;
    }
    if (*nfac > 1) {
	goto L2300;
    }
    dir[1] *= dh[1];
    goto L2312;
L2300:
    np = *nfac + 1;
    ii = 1;
    n1 = *nfac - 1;
    i__1 = n1;
    for (i__ = 1; i__ <= i__1; ++i__) {
	y = dir[i__];
	if (dh[ii] == 0.) {
	    goto L2302;
	}
	ij = ii;
	ip = i__ + 1;
	i__2 = *nfac;
	for (j = ip; j <= i__2; ++j) {
	    ++ij;
 
	    y += dir[j] * dh[ij];
	}
L2302:
	dir[i__] = y * dh[ii];
 
	ii = ii + np - i__;
    }
    dir[*nfac] *= dh[ii];
    i__1 = n1;
    for (k = 1; k <= i__1; ++k) {
	i__ = *nfac - k;
	ii = ii - np + i__;
	if (dir[i__] == 0.) {
	    goto L2311;
	}
	ip = i__ + 1;
	ij = ii;
	y = dir[i__];
	i__2 = *nfac;
	for (j = ip; j <= i__2; ++j) {
	    ++ij;
 
	    dir[j] += dh[ij] * dir[i__];
	}
L2311:
	;
    }
L2312:
    nfac1 = *nfac + 1;
    n2fac = *nfac * nfac1 / 2;
    nnfac = *n - *nfac;
    k = n2fac;
    if (*nfac == *n) {
	goto L268;
    }
    i__1 = *n;
    for (i__ = nfac1; i__ <= i__1; ++i__) {
 
	dir[i__] = 0.;
    }
    if (*nfac == 0) {
	goto L265;
    }
    i__1 = *nfac;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i__2 = *n;
	for (j = nfac1; j <= i__2; ++j) {
	    ++k;
	    if (x2[j] == (float)0.) {
		goto L260;
	    }
	    dir[i__] += dh[k] * x2[j];
L260:
	    ;
	}
    }
 
    k = n2fac;
    i__2 = *nfac;
    for (j = 1; j <= i__2; ++j) {
	i__1 = *n;
	for (i__ = nfac1; i__ <= i__1; ++i__) {
	    ++k;
	    dir[i__] += dh[k] * x2[j];
 
	}
    }
L265:
    k = n2fac + *nfac * nnfac;
    i__1 = *n;
    for (j = nfac1; j <= i__1; ++j) {
	i__2 = *n;
	for (i__ = j; i__ <= i__2; ++i__) {
	    ++k;
	    if (x2[j] == (float)0.) {
		goto L266;
	    }
	    dir[i__] += dh[k] * x2[j];
L266:
	    ;
	}
    }
    if (*nfac == *n - 1) {
	goto L268;
    }
    nm1 = *n - 1;
    k = n2fac + *nfac * nnfac;
    i__2 = nm1;
    for (i__ = nfac1; i__ <= i__2; ++i__) {
	++k;
	i1 = i__ + 1;
	i__1 = *n;
	for (j = i1; j <= i__1; ++j) {
	    ++k;
	    if (x2[j] == (float)0.) {
		goto L267;
	    }
	    dir[i__] += dh[k] * x2[j];
L267:
	    ;
	}
    }
 
 
L268:
    sig1 = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	sig1 += dir[i__] * x2[i__];
    }
    if (sig1 > 0.) {
	goto L272;
    }
    if (*imp > 2) {
	io___3281.ciunit = *io;
	s_wsfe(&io___3281);
	do_fio(&c__1, (char *)&sig1, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }

 
    *indqn = 8;
    if (iter == 1) {
	*indqn = -5;
    }
    if (*imp > 0) {
	io___3282.ciunit = *io;
	s_wsfe(&io___3282);
	do_fio(&c__1, (char *)&(*indqn), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    return 0;
L272:
    sig1 = -1. / sig1;
 
    if (cof1 > *zero) {
	goto L277;
    }
    if (*imp > 2) {
	io___3283.ciunit = *io;
	s_wsfe(&io___3283);
	do_fio(&c__1, (char *)&cof1, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    teta = -1. / sig1;
    teta = teta * (float).8 / (teta - cof1);
    teta1 = 1. - teta;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	g1[i__] = teta * g1[i__] + teta1 * dir[i__];
    }
    cof1 = (float)-.2 / sig1;
L277:

 
    sig = 1. / cof1;
    zsig1 = 1. / sig1;
    mk = 0;
    ir = *nfac;
    epsmc = 1e-9;
    calmaj_(&dh[1], n, &g1[1], &sig, &x2[1], &ir, &mk, &epsmc, nfac);
    if (ir != *nfac) {
	goto L280;
    }
    calmaj_(&dh[1], n, &dir[1], &sig1, &x2[1], &ir, &mk, &epsmc, nfac);
    if (ir != *nfac) {
	goto L280;
    }
    goto L300;
L280:
    if (*imp > 0) {
	io___3291.ciunit = *io;
	s_wsfe(&io___3291);
	e_wsfe();
    }
    *indqn = 8;
    if (iter == 1) {
	*indqn = -5;
    }
    if (*imp > 0) {
	io___3292.ciunit = *io;
	s_wsfe(&io___3292);
	do_fio(&c__1, (char *)&(*indqn), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    return 0;
L300:

 

 

    scal1 = scal;
    if (*ieps1 == 1) {
	scal1 = 0.;
    }
    if (*ieps1 == 2) {
	scal1 = scal * cscal1;
    }
 
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	x1[i__] = x[i__] - scal1 * (d__1 = g[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) * g[i__];
    }
    proj_(n, &binf[1], &bsup[1], &x1[1]);
    eps1 = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	eps1 += (d__1 = x1[i__] - x[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
    }
    eps1 = (( eps0 ) <= ( eps1 ) ? ( eps0 ) : ( eps1 )) ;
    if (*ieps1 == 1) {
	eps1 = 0.;
    }
    if (*ieps1 == 2) {
	eps1 *= 1e4;
    }
    if (*imp > 3) {
	io___3295.ciunit = *io;
	s_wsfe(&io___3295);
	do_fio(&c__1, (char *)&eps1, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
 
    ifac = 0;
    idfac = 0;
    k = 0;


    gr = 0.;
    if (*ig == 1) {
	gr = difg * (float).2 / *n;
    }
    n3 = *n;
    if (*in == 1) {
	n3 = *n / 10;
    }
 
    irit = 0;
    if (difg1 <= *epsrel * difg0) {
	irit = 1;
    }
    if (*irel == 0 || iter == 1) {
	irit = 1;
    }
    if (irit * *irel > 0 && *imp > 3) {
	io___3302.ciunit = *io;
	s_wsfe(&io___3302);
	do_fio(&c__1, (char *)&difg0, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&(*epsrel), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&difg1, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }

    tiers = .33333333333333331;
    i__1 = *n;
    for (k = 1; k <= i__1; ++k) {
	--izig[k];
	if (izig[k] <= 0) {
	    izig[k] = 0;
	}
	bi = binf[k];
	bs = bsup[k];
	ic = indic[k];
	d1 = x[k] - bi;
	d2 = bs - x[k];
	dd = (bs - bi) * tiers;
	ep = (( eps1 ) <= ( dd ) ? ( eps1 ) : ( dd )) ;
	if (d1 > ep) {
	    goto L324;
	}
	if (g[k] > (float)0.) {
	    goto L330;
	}
	goto L335;
L324:
	if (d2 > ep) {
	    goto L335;
	}
	if (g[k] > (float)0.) {
	    goto L335;
	}
	goto L330;
 
L330:
	if (ic > *nfac) {
	    goto L340;
	}
	++idfac;
	mode = -1;
	if (*imp >= 4) {
	    io___3312.ciunit = *io;
	    s_wsfe(&io___3312);
	    do_fio(&c__1, (char *)&k, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	izig[k] += *izag;
	ajour_(&mode, n, &k, nfac, &dh[1], &x2[1], &indic[1]);
	if (mode == 0) {
	    goto L340;
	}
	if (*imp > 0) {
	    io___3313.ciunit = *io;
	    s_wsfe(&io___3313);
	    do_fio(&c__1, (char *)&mode, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	*indqn = 8;
	if (iter == 1) {
	    *indqn = -5;
	}
	if (*imp > 0) {
	    io___3314.ciunit = *io;
	    s_wsfe(&io___3314);
	    do_fio(&c__1, (char *)&(*indqn), (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	return 0;
 
L335:
	if (irit == 0) {
	    goto L340;
	}
	if (ic <= *nfac) {
	    goto L340;
	}
	if (izig[k] >= 1) {
	    goto L340;
	}
	mode = 1;
	if (ifac >= n3 && iter > 1) {
	    goto L340;
	}
	if ((d__1 = g[k], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= gr) {
	    goto L340;
	}
	++ifac;
	if (*imp >= 4) {
	    io___3315.ciunit = *io;
	    s_wsfe(&io___3315);
	    do_fio(&c__1, (char *)&k, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	ajour_(&mode, n, &k, nfac, &dh[1], &x2[1], &indic[1]);
	if (mode == 0) {
	    goto L340;
	}
	if (*imp > 0) {
	    io___3316.ciunit = *io;
	    s_wsfe(&io___3316);
	    do_fio(&c__1, (char *)&mode, (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	*indqn = 8;
	if (iter == 1) {
	    *indqn = -5;
	}
	if (*imp > 0) {
	    io___3317.ciunit = *io;
	    s_wsfe(&io___3317);
	    do_fio(&c__1, (char *)&(*indqn), (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	return 0;
L340:
	;
    }
    if (*imp >= 2) {
	io___3318.ciunit = *io;
	s_wsfe(&io___3318);
	do_fio(&c__1, (char *)&ifac, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&idfac, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&(*nfac), (ftnlen)sizeof(integer));
	e_wsfe();
    }

 
    if (iconv == 1) {
	return 0;
    }

 
 
 
    ir = *nfac;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i1 = indic[i__];
 
	x2[i1] = g[i__];
    }
 
    if (ir < *nfac) {
	goto L412;
    }
    if (*nfac > 1) {
	goto L400;
    }
    x2[1] /= dh[1];
    goto L412;
L400:
    i__1 = *nfac;
    for (i__ = 2; i__ <= i__1; ++i__) {
	ij = i__;
	i1 = i__ - 1;
	v = x2[i__];
	i__2 = i1;
	for (j = 1; j <= i__2; ++j) {
	    v -= dh[ij] * x2[j];
 
	    ij = ij + *nfac - j;
	}
	x2[i__] = v;
 
	x2[i__] = v;
    }
    x2[*nfac] /= dh[ij];
    np = *nfac + 1;
    i__1 = *nfac;
    for (nip = 2; nip <= i__1; ++nip) {
	i__ = np - nip;
	ii = ij - nip;
	v = x2[i__] / dh[ii];
	ip = i__ + 1;
	ij = ii;
	i__2 = *nfac;
	for (j = ip; j <= i__2; ++j) {
	    ++ii;
 
	    v -= dh[ii] * x2[j];
	}
 
	x2[i__] = v;
    }
L412:
    if (ir == *nfac) {
	goto L660;
    }
    if (*imp > 0) {
	io___3321.ciunit = *io;
	s_wsfe(&io___3321);
	e_wsfe();
    }
    *indqn = 7;
    if (iter == 1) {
	*indqn = -6;
    }
    if (*imp > 0) {
	io___3322.ciunit = *io;
	s_wsfe(&io___3322);
	do_fio(&c__1, (char *)&(*indqn), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    return 0;
L660:
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i1 = indic[i__];
	dir[i__] = -g[i__] * scal;
 
	if (i1 <= *nfac) {
	    dir[i__] = -x2[i1];
	}
    }

 
    if (*iact != 1) {
	goto L675;
    }
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (izig[i__] > 0) {
	    dir[i__] = (float)0.;
	}
	if (indic[i__] > *nfac) {
	    dir[i__] = 0.;
	}
 
    }
L675:

 
 
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	g1[i__] = g[i__];
 
	x1[i__] = x[i__];
    }
 
    ifp = 0;
    fn = *f;
L709:
    fpn = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (x[i__] - binf[i__] <= epsx[i__] && dir[i__] < (float)0.) {
	    dir[i__] = 0.;
	}
	if (bsup[i__] - x[i__] <= epsx[i__] && dir[i__] > (float)0.) {
	    dir[i__] = 0.;
	}
 
	fpn += g[i__] * dir[i__];
    }
    if (fpn > 0.) {
	if (ifp == 1) {
	    if (*imp > 0) {
		io___3326.ciunit = *io;
		s_wsfe(&io___3326);
		do_fio(&c__1, (char *)&fpn, (ftnlen)sizeof(doublereal));
		e_wsfe();
	    }
	    *indqn = 6;
	    if (iter == 1) {
		*indqn = -3;
	    }
	    if (*imp > 0) {
		io___3327.ciunit = *io;
		s_wsfe(&io___3327);
		do_fio(&c__1, (char *)&(*indqn), (ftnlen)sizeof(integer));
		e_wsfe();
	    }
	    return 0;
	} else {
	    ifp = 1;
	    i__1 = *n;
	    for (i__ = 1; i__ <= i__1; ++i__) {
 
		if (izig[i__] > 0) {
		    dir[i__] = -scal * g[i__];
		}
	    }
	    irit = 1;
	    goto L709;
	}
    }
 
    t1 = t;
    if (iter == 1) {
	diff = *df0;
    }
    t = diff * -2. / fpn;
    if (t > .3 && t < 3.) {
	t = 1.;
    }
    if (eps1 < eps0) {
	t = 1.;
    }
    if (*indqn == 2) {
	t = 1.;
    }
    if (iter > 1 && t1 > .01 && t1 < 100.) {
	t = 1.;
    }
    tmax = 1e10;
    t = (( t ) <= ( tmax ) ? ( t ) : ( tmax )) ;
 
    d__1 = t, d__2 = *zero * (float)10.;
    t = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
 
    amd = (float).7;
    amf = (float).1;
    napm = 15;
    napm1 = nap + napm;
    if (napm1 > *napmax) {
	napm1 = *napmax;
    }
    rlbd_(&indrl, n, simul, &x[1], &binf[1], &bsup[1], &fn, &fpn, &t, &tmax, &
	    dir[1], &g[1], &tproj, &amd, &amf, imp, io, zero, &nap, &napm1, &
	    x2[1], &izs[1], &rzs[1], &dzs[1]);
    if (indrl >= 10) {
	indsim = 4;
	++nap;
	(*simul)(&indsim, n, &x[1], f, &g[1], &izs[1], &rzs[1], &dzs[1]);
	if (indsim <= 0) {
	    *indqn = -3;
	    if (indsim == 0) {
		*indqn = 0;
	    }
	    if (*imp > 0) {
		io___3338.ciunit = *io;
		s_wsfe(&io___3338);
		do_fio(&c__1, (char *)&(*indqn), (ftnlen)sizeof(integer));
		e_wsfe();
	    }
	    return 0;
	}
    }
    if (indrl <= 0) {
	*indqn = 10;
	if (indrl == 0) {
	    *indqn = 0;
	}
	if (indrl == -3) {
	    *indqn = 13;
	}
	if (indrl == -4) {
	    *indqn = 12;
	}
	if (indrl <= -1000) {
	    *indqn = 11;
	}
	if (*imp > 0) {
	    io___3339.ciunit = *io;
	    s_wsfe(&io___3339);
	    do_fio(&c__1, (char *)&(*indqn), (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	return 0;
    }

 
    if (*imp < 6) {
	goto L778;
    }
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
 
	io___3340.ciunit = *io;
	s_wsfe(&io___3340);
	do_fio(&c__1, (char *)&i__, (ftnlen)sizeof(integer));
	do_fio(&c__1, (char *)&x[i__], (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&g[i__], (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&dir[i__], (ftnlen)sizeof(doublereal));
	e_wsfe();
    }

L778:
    if (nap < *napmax) {
	goto L758;
    }
    *f = fn;
    if (*imp > 0) {
	io___3341.ciunit = *io;
	s_wsfe(&io___3341);
	do_fio(&c__1, (char *)&(*napmax), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    *indqn = 4;
    if (*imp > 0) {
	io___3342.ciunit = *io;
	s_wsfe(&io___3342);
	do_fio(&c__1, (char *)&(*indqn), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    return 0;
L758:
 

    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if ((d__1 = x[i__] - x1[i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) > epsx[i__]) {
	    goto L806;
	}
 
    }
    *f = fn;
    if (*imp > 0) {
	io___3343.ciunit = *io;
	s_wsfe(&io___3343);
	e_wsfe();
    }
    *indqn = 3;
    if (*imp > 0) {
	io___3344.ciunit = *io;
	s_wsfe(&io___3344);
	do_fio(&c__1, (char *)&(*indqn), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    return 0;
L806:
    difg = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	aa = g[i__];
	if (x[i__] - binf[i__] <= epsx[i__]) {
	    aa = (( 0. ) <= ( aa ) ? ( 0. ) : ( aa )) ;
	}
	if (bsup[i__] - x[i__] <= epsx[i__]) {
	    aa = (( 0. ) >= ( aa ) ? ( 0. ) : ( aa )) ;
	}
 
 
	d__1 = aa;
	difg += d__1 * d__1;
    }
    difg1 = 0.;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (indic[i__] > *nfac) {
	    goto L820;
	}
	aa = g[i__];
	if (x[i__] - binf[i__] <= epsx[i__]) {
	    aa = (( 0. ) <= ( aa ) ? ( 0. ) : ( aa )) ;
	}
	if (bsup[i__] - x[i__] <= epsx[i__]) {
	    aa = (( 0. ) >= ( aa ) ? ( 0. ) : ( aa )) ;
	}
 
	d__1 = aa;
	difg1 += d__1 * d__1;
L820:
	;
    }
    difg1 = sqrt(difg1);
    difg = sqrt(difg);
    difg /= sqrt((real) (*n));
    diff = (d__1 = *f - fn, (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
    *df0 = -diff;
    if (irit == 1) {
	difg0 = difg1;
    }
    *f = fn;
    if (*imp >= 2) {
	io___3346.ciunit = *io;
	s_wsfe(&io___3346);
	do_fio(&c__1, (char *)&(*epsg), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&difg, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&(*epsf), (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&diff, (ftnlen)sizeof(doublereal));
	do_fio(&c__1, (char *)&nap, (ftnlen)sizeof(integer));
	e_wsfe();
    }
    if (diff < *epsf) {
	*indqn = 2;
	if (*imp > 0) {
	    io___3347.ciunit = *io;
	    s_wsfe(&io___3347);
	    do_fio(&c__1, (char *)&diff, (ftnlen)sizeof(doublereal));
	    e_wsfe();
	}
	if (*imp > 0) {
	    io___3348.ciunit = *io;
	    s_wsfe(&io___3348);
	    do_fio(&c__1, (char *)&(*indqn), (ftnlen)sizeof(integer));
	    e_wsfe();
	}
	return 0;
    }
    if (difg > *epsg) {
	goto L200;
    }
    *indqn = 1;
    if (*imp > 0) {
	io___3349.ciunit = *io;
	s_wsfe(&io___3349);
	do_fio(&c__1, (char *)&difg, (ftnlen)sizeof(doublereal));
	e_wsfe();
    }
    if (*imp > 0) {
	io___3350.ciunit = *io;
	s_wsfe(&io___3350);
	do_fio(&c__1, (char *)&(*indqn), (ftnlen)sizeof(integer));
	e_wsfe();
    }
    return 0;
}  

doublereal zthz_(h__, ih, z__, iz, n, i1, i2)
doublereal *h__;
integer *ih;
doublereal *z__;
integer *iz, *n, *i1, *i2;
{
     
    integer h_dim1, h_offset, z_dim1, z_offset, i__1, i__2;
    doublereal ret_val;

     
    extern doublereal ddot_();
    static integer j;
    static doublereal s;
    static integer jj;


 

 

 

 

 

 

 

 

 

 

 

 

 


 
 
 

 

 

 

 

 

 

 

 

 


 

 
 
 

 
 


     
    h_dim1 = *ih;
    h_offset = h_dim1 + 1;
    h__ -= h_offset;
    z_dim1 = *iz;
    z_offset = z_dim1 + 1;
    z__ -= z_offset;

     
    ret_val = 0.;
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	jj = j + 1;
	s = ddot_(&j, &h__[j + h_dim1], ih, &z__[*i2 * z_dim1 + 1], &c__1);
	i__2 = *n - j;
	s += ddot_(&i__2, &h__[jj + j * h_dim1], &c__1, &z__[jj + *i2 * 
		z_dim1], &c__1);
	ret_val += s * z__[j + *i1 * z_dim1];
 
    }
    return ret_val;
}  

  int bezout_(a, da, b, db, f, df, v, dv, ip)
doublereal *a;
integer *da;
doublereal *b;
integer *db;
doublereal *f;
integer *df;
doublereal *v;
integer *dv, *ip;
{
     
    integer i__1, i__2;
    doublereal d__1, d__2;

     
    double sqrt();

     
    static doublereal fact;
    extern   int dset_();
    static doublereal c__[2];
    static integer i__, k, n;
    extern   int dscal_();
    static doublereal x[2];
    extern doublereal dasum_();
    extern   int dcopy_();
    static integer k1, k2, l1, l2, na;
    static doublereal lambda;
    static integer jf[2], nb;
    extern doublereal dlamch_();
    static integer jv[2];
    static doublereal xs[2];
    static integer inc;
    static doublereal eps;

 
 
 
 
 
 
 

 

 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 



     
    dv -= 3;
    --v;
    --df;
    --f;
    --b;
    --a;

     
    eps = dlamch_("p", 1L) * 10.;
    *ip = 0;
    i__1 = *da + 1;
    xs[0] = dasum_(&i__1, &a[1], &c__1);
    i__1 = *db + 1;
    xs[1] = dasum_(&i__1, &b[1], &c__1);
    x[0] = xs[0];
    x[1] = xs[1];
    if (xs[0] == 0.) {
	xs[0] = 1.;
    }
    if (xs[1] == 0.) {
	xs[1] = 1.;
    }
    na = *da + 1;
L10:
    --na;
    if ((d__1 = a[na + 1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= eps * (( xs[0] ) >= 0 ? ( xs[0] ) : -( xs[0] ))  && na >= 1) {
	goto L10;
    }
    nb = *db + 1;
L11:
    --nb;
    if ((d__1 = b[nb + 1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= eps * (( xs[1] ) >= 0 ? ( xs[1] ) : -( xs[1] ))  && nb >= 1) {
	goto L11;
    }

 

    jf[0] = 1;
    jf[1] = *da + 2;
    i__1 = *da + *db + 2;
    dset_(&i__1, &c_b61, &f[1], &c__1);
    i__1 = na + 1;
    dcopy_(&i__1, &a[1], &c__1, &f[1], &c__1);
    i__1 = na + 1;
    d__1 = 1. / xs[0];
    dscal_(&i__1, &d__1, &f[1], &c__1);
    i__1 = nb + 1;
    dcopy_(&i__1, &b[1], &c__1, &f[jf[1]], &c__1);
    i__1 = nb + 1;
    d__1 = 1. / xs[1];
    dscal_(&i__1, &d__1, &f[jf[1]], &c__1);
    df[1] = na;
    df[2] = nb;

    i__1 = *da + *db + 2 << 1;
    dset_(&i__1, &c_b61, &v[1], &c__1);
    jv[0] = 1;
    jv[1] = *db + 3 + *da;
    inc = *db + 1;
    v[1] = 1.;
    v[jv[1] + inc] = 1.;
    dv[3] = 0;
    dv[4] = 0;
    dv[5] = 0;
    dv[6] = 0;
    c__[0] = 1.;
    c__[1] = 1.;

    k1 = 1;
    k2 = 2;

    if ((( x[0] ) >= 0 ? ( x[0] ) : -( x[0] ))  <= eps * (( x[1] ) >= 0 ? ( x[1] ) : -( x[1] )) ) {
	goto L35;
    }
    if ((( x[1] ) >= 0 ? ( x[1] ) : -( x[1] ))  <= eps * (( x[0] ) >= 0 ? ( x[0] ) : -( x[0] )) ) {
	goto L50;
    }
    x[0] = 1.;
    x[1] = 1.;
 

L20:
    if ((i__1 = df[k1] - df[k2]) < 0) {
	goto L22;
    } else if (i__1 == 0) {
	goto L21;
    } else {
	goto L23;
    }
L21:
    if ((d__1 = f[jf[k1 - 1] + df[k1]], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) < (d__2 = f[jf[k2 - 1] + 
	    df[k2]], (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) )) {
	goto L23;
    }
L22:
    k1 = 3 - k1;
    k2 = 3 - k2;
L23:
 
    fact = c__[0] + c__[1];
    fact *= fact;
 
    if ((d__1 = x[k2 - 1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= eps * fact) {
	df[k2] = 0;
	goto L40;
    }
    n = df[k2] + 1;
    l2 = n + jf[k2 - 1];
L24:
    --l2;
    if (n == 0) {
	goto L30;
    }
    --n;
    if ((d__1 = f[l2], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= eps * (d__2 = x[k1 - 1], (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) )) {
	goto L24;
    }
    df[k2] = n;
 
    lambda = f[jf[k1 - 1] + df[k1]] / f[jf[k2 - 1] + df[k2]];
    n = df[k1] - df[k2];
    fact = sqrt(lambda * lambda + 1.);
 
    l2 = jf[k2 - 1];
    l1 = jf[k1 - 1] + n;
    i__1 = df[k2];
    for (i__ = 0; i__ <= i__1; ++i__) {
	f[l1 + i__] -= lambda * f[l2 + i__];
 
    }
 
    l2 = jv[k2 - 1];
    l1 = jv[k1 - 1] + n;
    c__[k1 - 1] = 0.;
    for (k = 1; k <= 2; ++k) {
	if (dv[k + (k2 << 1)] == 0 && v[l2] == 0.) {
	    goto L27;
	}
	i__1 = dv[k + (k2 << 1)];
	for (i__ = 0; i__ <= i__1; ++i__) {
 
	    v[l1 + i__] -= lambda * v[l2 + i__];
	}
 
	i__1 = dv[k + (k1 << 1)], i__2 = n + dv[k + (k2 << 1)];
	dv[k + (k1 << 1)] = (( i__1 ) >= ( i__2 ) ? ( i__1 ) : ( i__2 )) ;
	i__1 = dv[k + (k1 << 1)] + 1;
	c__[k1 - 1] += dasum_(&i__1, &v[jv[k1 - 1]], &c__1);
L27:
	l1 += inc;
	l2 += inc;
 
    }

    n = df[k1];
    l1 = jf[k1 - 1];
    i__1 = n + 1;
    x[k1 - 1] = dasum_(&i__1, &f[l1], &c__1);
    f[l1 + n] = 0.;
    df[k1] = n - 1;
    goto L20;

 

L30:
    if (k1 == 1) {
	*ip = 1;
    }
    goto L50;
L35:
    *ip = 1;
    goto L50;
L40:
    if (k2 == 1) {
	*ip = 1;
    }

L50:
    l2 = jv[1];
    l1 = jv[0];
    for (k = 1; k <= 2; ++k) {
	i__1 = dv[k + 2] + 1;
	d__1 = 1. / xs[k - 1];
	dscal_(&i__1, &d__1, &v[l1], &c__1);
	i__1 = dv[k + 4] + 1;
	d__1 = 1. / xs[k - 1];
	dscal_(&i__1, &d__1, &v[l2], &c__1);
	l1 += inc;
	l2 += inc;
 
    }

}  

  int bezstp_(p1, n1, p2, n2, a, na, u, nu, l, x, v, w, best, 
	ipb, errr)
doublereal *p1;
integer *n1;
doublereal *p2;
integer *n2;
doublereal *a;
integer *na;
doublereal *u;
integer *nu, *l;
doublereal *x, *v, *w, *best;
integer *ipb;
doublereal *errr;
{
     
    integer a_dim1, a_offset, u_dim1, u_offset, x_dim1, x_offset, v_dim1, 
	    v_offset, i__1, i__2;
    doublereal d__1, d__2;

     
    extern   int ddif_();
    static doublereal fact;
    extern doublereal ddot_();
    static doublereal errd, erri;
    extern   int drot_();
    static doublereal c__;
    static integer k;
    static doublereal s;
    extern   int dscal_();
    static doublereal z__;
    static integer ifree;
    extern   int dcopy_(), dpmul_(), daxpy_();
    static integer n0, m1, m2;
    extern   int dpmul1_();
    static integer nb;
    extern doublereal dlamch_();
    static integer ll;
    static doublereal mm;
    static integer nn, np, iw, nw;
    static doublereal dt0;
    static integer iw1;
    extern   int giv_();
    static doublereal eps;
    static integer iuv, ixy;
    extern   int dadd_();


     
    --p1;
    --p2;
    x_dim1 = *na;
    x_offset = x_dim1 + 1;
    x -= x_offset;
    a_dim1 = *na;
    a_offset = a_dim1 + 1;
    a -= a_offset;
    v_dim1 = *nu;
    v_offset = v_dim1 + 1;
    v -= v_offset;
    u_dim1 = *nu;
    u_offset = u_dim1 + 1;
    u -= u_offset;
    --w;
    --best;
    --ipb;

     
    eps = dlamch_("p", 1L);
    n0 = (( *n1 ) >= ( *n2 ) ? ( *n1 ) : ( *n2 ))  + 1;
 
    i__1 = *n1 - *n2;
    m1 = (( i__1 ) >= ( 0 ) ? ( i__1 ) : ( 0 )) ;
 
    i__1 = *n2 - *n1;
    m2 = (( i__1 ) >= ( 0 ) ? ( i__1 ) : ( 0 )) ;
    ll = *l << 1;
    iuv = 1;
    ixy = iuv + ll;
    iw1 = ixy + ll;
    iw = iw1 + n0;
    ifree = iw + (n0 << 1);

    i__1 = *l;
    for (k = 1; k <= i__1; ++k) {
	giv_(&a[k + (n0 + 1 - k) * a_dim1], &a[k + 1 + (n0 + 1 - k) * a_dim1],
		 &c__, &s);
	drot_(&n0, &a[k + a_dim1], na, &a[k + 1 + a_dim1], na, &c__, &s);
	a[k + 1 + (n0 + 1 - k) * a_dim1] = 0.;
	drot_(&ll, &u[k + u_dim1], nu, &u[k + 1 + u_dim1], nu, &c__, &s);
	if (k == 1 && *l < n0) {
	    i__2 = n0 - 1;
	    dcopy_(&i__2, &a[a_dim1 + 2], na, &x[x_offset], na);
	    dcopy_(&ll, &u[u_dim1 + 2], nu, &v[v_offset], nu);
	}
 
    }

    dcopy_(&ll, &u[*l + u_dim1], nu, &w[iuv], &c__1);
    dcopy_(&ll, &u[*l + 1 + u_dim1], nu, &w[ixy], &c__1);

    if (*l <= (i__1 = *n1 - *n2, (( i__1 ) >= 0 ? ( i__1 ) : -( i__1 )) )) {
	goto L99;
    }
    fact = a[*l + (n0 - *l + 1) * a_dim1];
    if (*l > 1) {
 
	d__1 = w[ixy + (m1 << 1)];
 
	d__2 = w[ixy + 1 + (m2 << 1)];
	mm = d__1 * d__1 + d__2 * d__2;
	z__ = w[iuv + (m1 << 1)] * w[ixy + (m1 << 1)] + w[iuv + 1 + (m2 << 1)]
		 * w[ixy + 1 + (m2 << 1)];
    } else {
 
	d__1 = w[ixy + (m1 << 1)];
	mm = d__1 * d__1;
	z__ = w[iuv + (m1 << 1)] * w[ixy + (m1 << 1)];
    }
    if (mm != 0.) {
 
	z__ = -z__ / mm;
	daxpy_(&ll, &z__, &w[ixy], &c__1, &w[iuv], &c__1);
    }

 

 

    if (fact == 0.) {
	goto L99;
    }
    d__1 = 1. / fact;
    dscal_(&ll, &d__1, &w[iuv], &c__1);
    dt0 = w[ixy + (*l - 1 << 1)] * w[iuv + (*l << 1) - 1] - w[ixy + (*l << 1) 
	    - 1] * w[iuv + (*l - 1 << 1)];
    if (dt0 == 0.) {
	goto L99;
    }
    d__1 = 1. / dt0;
    dscal_(&ll, &d__1, &w[ixy], &c__1);
    dt0 = 1.;

 

 
    i__1 = *l - m1;
    dcopy_(&i__1, &w[ixy + (m1 << 1)], &c__2, &w[iw1], &c_n1);
    i__1 = *l - 1 - m1;
    dpmul1_(&p1[1], n1, &w[iw1], &i__1, &w[iw]);
    nw = *n1 + *l - 1 - m1;
 
    i__1 = *l - m2;
    dcopy_(&i__1, &w[ixy + 1 + (m2 << 1)], &c__2, &w[iw1], &c_n1);
    i__1 = *l - 1 - m2;
    dpmul_(&p2[1], n2, &w[iw1], &i__1, &w[iw], &nw);
    i__1 = nw + 1;
    errd = ddot_(&i__1, &w[iw], &c__1, &w[iw], &c__1);
 
    if (*l - 1 - m1 > 0) {
	i__1 = *l - 1 - m1;
	dcopy_(&i__1, &w[iuv + 2 + (m1 << 1)], &c__2, &w[iw1], &c_n1);
	i__1 = *l - 2 - m1;
	dpmul1_(&p1[1], n1, &w[iw1], &i__1, &w[iw]);
	nw = *n1 + *l - 2 - m1;
    } else {
	dpmul1_(&p1[1], n1, &w[iuv + (m1 << 1)], &c__0, &w[iw]);
	nw = *n1;
    }
 
    if (*l - 1 - m2 > 0) {
	i__1 = *l - 1 - m2;
	dcopy_(&i__1, &w[iuv + 3 + (m2 << 1)], &c__2, &w[iw1], &c_n1);
	i__1 = *l - 2 - m2;
	dpmul_(&p2[1], n2, &w[iw1], &i__1, &w[iw], &nw);
    } else {
	dpmul_(&p2[1], n2, &w[iuv + 1 + (m2 << 1)], &c__0, &w[iw], &nw);
    }
 
    np = n0 - *l;
    i__1 = np + 1;
    dcopy_(&i__1, &a[*l + a_dim1], na, &w[iw1], &c__1);
    daxpy_(&np, &z__, &a[*l + 1 + a_dim1], na, &w[iw1], &c__1);
    i__1 = np + 1;
    d__1 = 1. / fact;
    dscal_(&i__1, &d__1, &w[iw1], &c__1);
 
    i__1 = np + 1;
    ddif_(&i__1, &w[iw1], &c__1, &w[iw], &c__1);
    i__1 = nw + 1;
    errd += ddot_(&i__1, &w[iw], &c__1, &w[iw], &c__1);

 
 
 
    i__1 = *n1 - np + 1;
    dcopy_(&i__1, &w[ixy + 1 + (m2 << 1)], &c__2, &w[iw], &c_n1);
 
    i__1 = *n1 - np;
    dpmul1_(&w[iw1], &np, &w[iw], &i__1, &w[iw]);
    i__1 = *n1 + 1;
    dadd_(&i__1, &p1[1], &c__1, &w[iw], &c__1);
    i__1 = *n1 + 1;
    erri = ddot_(&i__1, &w[iw], &c__1, &w[iw], &c__1);
 
    i__1 = *n2 - np + 1;
    dcopy_(&i__1, &w[ixy + (m1 << 1)], &c__2, &w[iw], &c_n1);
 
    i__1 = *n2 - np;
    dpmul1_(&w[iw1], &np, &w[iw], &i__1, &w[iw]);
 
    i__1 = *n2 + 1;
    ddif_(&i__1, &p2[1], &c__1, &w[iw], &c__1);
    i__1 = *n2 + 1;
    erri += ddot_(&i__1, &w[iw], &c__1, &w[iw], &c__1);
 

    if ((( erri ) >= ( errd ) ? ( erri ) : ( errd ))  < *errr) {
	*errr = (( erri ) >= ( errd ) ? ( erri ) : ( errd )) ;
 
	i__1 = 0, i__2 = n0 - *l;
	nb = (( i__1 ) >= ( i__2 ) ? ( i__1 ) : ( i__2 )) ;
	ipb[1] = 1;
 
	i__1 = nb + 1;
	dcopy_(&i__1, &a[*l + a_dim1], na, &best[ipb[1]], &c__1);
	if (*l > 1) {
	    i__1 = nb + 1;
	    daxpy_(&i__1, &z__, &a[*l + 1 + a_dim1], na, &best[ipb[1]], &c__1)
		    ;
	}
	i__1 = nb + 1;
	d__1 = 1. / fact;
	dscal_(&i__1, &d__1, &best[ipb[1]], &c__1);
	ipb[2] = ipb[1] + nb + 1;
	if (*l > 1) {
 
	    i__1 = *n2 - nb;
	    nn = (( i__1 ) >= ( 1 ) ? ( i__1 ) : ( 1 )) ;
	    dcopy_(&nn, &w[iuv + (*l - nn << 1)], &c__2, &best[ipb[2]], &c_n1)
		    ;
	    ipb[3] = ipb[2] + nn;
 
	    i__1 = *n1 - nb;
	    nn = (( i__1 ) >= ( 1 ) ? ( i__1 ) : ( 1 )) ;
	    dcopy_(&nn, &w[iuv + 1 + (*l - nn << 1)], &c__2, &best[ipb[3]], &
		    c_n1);
	    ipb[4] = ipb[3] + nn;
	} else {
	    best[ipb[2]] = w[iuv];
	    ipb[3] = ipb[2] + 1;
	    best[ipb[3]] = w[iuv + 1];
	    ipb[4] = ipb[3] + 1;
	}
	nn = *n2 + 1 - nb;
	dcopy_(&nn, &w[ixy + (*l - nn << 1)], &c__2, &best[ipb[4]], &c_n1);
	ipb[5] = ipb[4] + nn;
	nn = *n1 + 1 - nb;
	dcopy_(&nn, &w[ixy + 1 + (*l - nn << 1)], &c__2, &best[ipb[5]], &c_n1)
		;
	ipb[6] = ipb[5] + nn;
    }

L99:
    return 0;
}  

  int dimin_(lig1, col1, v1, d1, v2, d2, lig2, col2, ligr, 
	colr, ierr)
integer *lig1, *col1, *v1, *d1, *v2, *d2, *lig2, *col2, *ligr, *colr, *ierr;
{
     
    integer i__1;

     
    static integer i__, noo1, noo2;

 

 
 
 
 

 

 

 

 

 

 
 

 
 

 
 
 

 

 
 

 
 
 

 
 


 

 

 
 

 

     
    --v2;
    --v1;

     
    if (*d1 == 0 || *d2 == 0) {
 
	*ierr = 1;
	return 0;
    }

 

 

 

    if (*d1 > 0 && *d2 > 0) {
	goto L5;
    }
    if (*d1 < 0 && *d2 < 0) {
	if (*lig1 != *lig2 || *col1 != *col2) {
 
	    *ierr = 2;
	    return 0;
	}
	*ligr = *lig1;
	*colr = *col1;
	goto L999;
    }

 

 

 

    if (*d1 < 0) {
 
	noo2 = 0;
	i__1 = *d2;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    if (v2[i__] > noo2) {
		noo2 = v2[i__];
	    }
 
	}
 
	*ligr = (( *lig1 ) >= ( 1 ) ? ( *lig1 ) : ( 1 )) ;
	*colr = (( *col1 ) >= ( noo2 ) ? ( *col1 ) : ( noo2 )) ;
	goto L999;
    }

 

 

 

    if (*d2 < 0) {
 
	noo1 = 0;
	i__1 = *d1;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    if (v1[i__] > noo1) {
		noo1 = v1[i__];
	    }
 
	}
 
	*ligr = (( *lig1 ) >= ( noo1 ) ? ( *lig1 ) : ( noo1 )) ;
	*colr = (( *col1 ) >= ( 1 ) ? ( *col1 ) : ( 1 )) ;
	goto L999;
    }

 

 

 

 
L5:
    if (*d1 != *lig2 || *d2 != *col2) {
	*ierr = 2;
	return 0;
    }
 
    noo1 = 0;
    i__1 = *d1;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (v1[i__] > noo1) {
	    noo1 = v1[i__];
	}
 
    }
    noo2 = 0;
    i__1 = *d2;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (v2[i__] > noo2) {
	    noo2 = v2[i__];
	}
 
    }
 
    *ligr = (( *lig1 ) >= ( noo1 ) ? ( *lig1 ) : ( noo1 )) ;
    *colr = (( *col1 ) >= ( noo2 ) ? ( *col1 ) : ( noo2 )) ;
L999:
    *ierr = 0;
    return 0;
}  

 
  int dmdsp_(x, nx, m, n, maxc, mode, ll, lunit, cw, iw, 
	cw_len)
doublereal *x;
integer *nx, *m, *n, *maxc, *mode, *ll, *lunit;
char *cw;
integer *iw;
ftnlen cw_len;
{
     
    static char fmt_130[] = "(\002(1pd\002,i2,\002.\002,i2,\002)\002)";
    static char fmt_120[] = "(\002(f\002,i2,\002.\002,i2,\002)\002)";

     
    address a__1[2], a__2[4];
    integer i__1, i__2, i__3, i__4[2], i__5[4];
    doublereal d__1;
    char ch__1[20], ch__2[27];
    icilist ici__1;

     
      int s_copy();
    integer s_wsfi(), do_fio(), e_wsfi();
    double d_lg10(), pow_di();
      int s_cat();

     
    static integer ldef;
    static doublereal fact;
    static integer imin, imax, ifmt;
    static char form[10*2];
    static doublereal a;
    static integer i__, j, k, l, s, lbloc, nbloc;
    static doublereal a1, a2;
    static integer k1, k2, l1, n1, n2, l0, ib;
    static char dl[1];
    static integer fl, lf, nf;
    extern doublereal dlamch_();
    static integer io, lp;
    extern   int basout_();
    static integer nl1, lgh;
    extern   int fmt_();
    static doublereal eps;
    static char sgn[1];
    static integer typ;

     
    static icilist io___3400 = { 0, form, 0, fmt_130, 10, 1 };


 
 
 
 
 

 

 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 

 
     
    --iw;
    --x;

     
    eps = dlamch_("p", 1L);
    s_copy(cw, " ", cw_len, 1L);
    s_wsfi(&io___3400);
    do_fio(&c__1, (char *)&(*maxc), (ftnlen)sizeof(integer));
    i__1 = *maxc - 7;
    do_fio(&c__1, (char *)&i__1, (ftnlen)sizeof(integer));
    e_wsfi();
    *(unsigned char *)dl = ' ';
    if (*m * *n > 1) {
	*(unsigned char *)dl = '!';
    }

 

    fact = 1.;
    a1 = 0.;
    if (*m * *n == 1) {
	goto L10;
    }
    a2 = (( x[1] ) >= 0 ? ( x[1] ) : -( x[1] )) ;
    l = -(*nx);
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	l += *nx;
	i__2 = *m;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    a = (d__1 = x[l + i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
	    if (a == 0. || a > dlamch_("o", 1L)) {
		goto L5;
	    }
	    a1 = (( a1 ) >= ( a ) ? ( a1 ) : ( a )) ;
	    a2 = (( a2 ) <= ( a ) ? ( a2 ) : ( a )) ;
L5:
	    ;
	}
    }
    imax = 0;
    imin = 0;
    if (a1 > 0.) {
	imax = (integer) d_lg10(&a1);
    }
    if (a2 > 0.) {
	imin = (integer) d_lg10(&a2);
    }
    if (imax * imin <= 0) {
	goto L10;
    }
    imax = (imax + imin) / 2;
    if ((( imax ) >= 0 ? ( imax ) : -( imax ))  >= *maxc - 2) {
	i__2 = -imax;
	fact = pow_di(&c_b8137, &i__2);
    }
L10:
    eps = a1 * fact * eps;

 
 
 
 
 
 
 

    lbloc = *n;
    lf = lbloc + *n + 1;
    nbloc = 1;
    iw[lbloc + nbloc] = *n;
 
 
 
 

    lp = -(*nx);
    ldef = lf;
    s = 0;
    i__2 = *n;
    for (k = 1; k <= i__2; ++k) {
	iw[k] = 0;
	lp += *nx;
	i__1 = *m;
	for (l = 1; l <= i__1; ++l) {

 
	    a = (d__1 = x[lp + l], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) * fact;
 
	    if (a < eps && *mode != 0) {
		a = 0.;
	    }
 
	    typ = 1;
	    if (*mode == 1) {
		fmt_(&a, maxc, &typ, &n1, &n2);
	    }
	    if (typ == 2) {
		fl = n1;
		iw[ldef] = n2 + (n1 << 5);
	    } else if (typ < 0) {
		iw[ldef] = typ;
		fl = 3;
	    } else {
		iw[ldef] = 1;
		fl = *maxc;
		n2 = *maxc - 7;
	    }

 

 

 

 
	    lgh = fl + 3;
 
	    ++ldef;

 
	    i__3 = iw[k];
	    iw[k] = (( i__3 ) >= ( lgh ) ? ( i__3 ) : ( lgh )) ;
 
	}
	s += iw[k];
	if (s > *ll - 2) {
	    iw[lbloc + nbloc] = k - 1;
	    ++nbloc;
	    iw[lbloc + nbloc] = *n;
	    s = iw[k];
	}

 
    }

    if (fact != 1.) {
	ici__1.icierr = 0;
	ici__1.icirnum = 1;
	ici__1.icirlen = 12;
	ici__1.iciunit = cw;
	ici__1.icifmt = "(1x,1pd9.1,' *')";
	s_wsfi(&ici__1);
	d__1 = 1. / fact;
	do_fio(&c__1, (char *)&d__1, (ftnlen)sizeof(doublereal));
	e_wsfi();
	basout_(&io, lunit, cw, 12L);
	basout_(&io, lunit, " ", 1L);
	if (io == -1) {
	    goto L99;
	}
    }
 

 

    k1 = 1;
    i__2 = nbloc;
    for (ib = 1; ib <= i__2; ++ib) {
	k2 = iw[lbloc + ib];
	if (nbloc != 1) {
	    if (k1 == k2) {
		ici__1.icierr = 0;
		ici__1.icirnum = 1;
		ici__1.icirlen = 4;
		ici__1.iciunit = cw;
		ici__1.icifmt = "(i4)";
		s_wsfi(&ici__1);
		do_fio(&c__1, (char *)&k1, (ftnlen)sizeof(integer));
		e_wsfi();
		basout_(&io, lunit, " ", 1L);
 
		i__4[0] = 16, a__1[0] = "         column ";
		i__4[1] = 4, a__1[1] = cw;
		s_cat(ch__1, a__1, i__4, &c__2, 20L);
		basout_(&io, lunit, ch__1, 20L);
	    } else {
		ici__1.icierr = 0;
		ici__1.icirnum = 1;
		ici__1.icirlen = 8;
		ici__1.iciunit = cw;
		ici__1.icifmt = "(2i4)";
		s_wsfi(&ici__1);
		do_fio(&c__1, (char *)&k1, (ftnlen)sizeof(integer));
		do_fio(&c__1, (char *)&k2, (ftnlen)sizeof(integer));
		e_wsfi();
		basout_(&io, lunit, " ", 1L);
 
		i__5[0] = 16, a__2[0] = "        columns ";
		i__5[1] = 4, a__2[1] = cw;
		i__5[2] = 3, a__2[2] = " to";
		i__5[3] = 4, a__2[3] = cw + 4;
		s_cat(ch__2, a__2, i__5, &c__4, 27L);
		basout_(&io, lunit, ch__2, 27L);
		basout_(&io, lunit, " ", 1L);
	    }
	    basout_(&io, lunit, " ", 1L);
	    if (io == -1) {
		goto L99;
	    }
	}

	*(unsigned char *)cw = *(unsigned char *)dl;
	i__1 = *m;
	for (l = 1; l <= i__1; ++l) {
	    ldef = lf + l - 1 + (k1 - 1) * *m;
	    l1 = 2;
	    i__3 = k2;
	    for (k = k1; k <= i__3; ++k) {
		a = x[l + (k - 1) * *nx] * fact;
 
		if ((( a ) >= 0 ? ( a ) : -( a ))  < eps && *mode != 0) {
		    a = 0.;
		}

		l0 = l1;
		ifmt = iw[ldef];
		*(unsigned char *)sgn = ' ';
		if (a < 0.) {
		    *(unsigned char *)sgn = '-';
		}
		a = (( a ) >= 0 ? ( a ) : -( a )) ;

 
		i__4[0] = 1, a__1[0] = " ";
		i__4[1] = 1, a__1[1] = sgn;
		s_cat(cw + (l1 - 1), a__1, i__4, &c__2, 2L);
		l1 += 2;

		if (ifmt == 1) {
		    nf = 1;
		    fl = *maxc;
		    n2 = 1;
		    ici__1.icierr = 0;
		    ici__1.icirnum = 1;
		    ici__1.icirlen = l1 + fl - 1 - (l1 - 1);
		    ici__1.iciunit = cw + (l1 - 1);
		    ici__1.icifmt = form + (nf - 1) * 10;
		    s_wsfi(&ici__1);
		    do_fio(&c__1, (char *)&a, (ftnlen)sizeof(doublereal));
		    e_wsfi();
		} else if (ifmt >= 0) {
		    nf = 2;
		    n1 = ifmt / 32;
		    n2 = ifmt - (n1 << 5);
		    fl = n1;
		    ici__1.icierr = 0;
		    ici__1.icirnum = 1;
		    ici__1.icirlen = 10;
		    ici__1.iciunit = form + (nf - 1) * 10;
		    ici__1.icifmt = fmt_120;
		    s_wsfi(&ici__1);
		    do_fio(&c__1, (char *)&fl, (ftnlen)sizeof(integer));
		    do_fio(&c__1, (char *)&n2, (ftnlen)sizeof(integer));
		    e_wsfi();
		    ici__1.icierr = 0;
		    ici__1.icirnum = 1;
		    ici__1.icirlen = l1 + fl - 1 - (l1 - 1);
		    ici__1.iciunit = cw + (l1 - 1);
		    ici__1.icifmt = form + (nf - 1) * 10;
		    s_wsfi(&ici__1);
		    do_fio(&c__1, (char *)&a, (ftnlen)sizeof(doublereal));
		    e_wsfi();
		} else if (ifmt == -1) {
 
		    fl = 3;
		    s_copy(cw + (l1 - 1), "Inf", l1 + fl - 1 - (l1 - 1), 3L);
		} else if (ifmt == -2) {
 
		    fl = 3;
		    s_copy(cw + (l1 - 1), "Nan", l1 + fl - 1 - (l1 - 1), 3L);
		}
		l1 += fl;

 
		nl1 = l0 + iw[k] - 1;
		s_copy(cw + (l1 - 1), " ", nl1 - (l1 - 1), 1L);
		l1 = nl1 + 1;
		ldef += *m;
 
	    }
	    *(unsigned char *)&cw[l1 - 1] = *(unsigned char *)dl;
	    basout_(&io, lunit, cw, l1);
	    if (io == -1) {
		goto L99;
	    }
 
	}
	k1 = k2 + 1;
 
    }

L99:
    return 0;

}  

 
  int dmdspf_(x, nx, m, n, maxc, ll, lunit)
doublereal *x;
integer *nx, *m, *n, *maxc, *ll, *lunit;
{
     
    static char fmt_130[] = "(\002(1x,\002,i2,\002(1pd\002,i2,\002.\002,i2,\002,2x))\002)";

     
    address a__1[2], a__2[4];
    integer i__1, i__2, i__3[2], i__4[4], i__5;
    char ch__1[21], ch__2[28];

     
    integer s_wsfi(), do_fio(), e_wsfi();
      int s_cat();

     
    static integer ncol;
    static char form[20];
    static integer k, l, nbloc, k1, k2, ib, io;
    static char cw[20];
    extern   int basout_();
    static char buf[80];

     
    static icilist io___3437 = { 0, form, 0, fmt_130, 20, 1 };
    static icilist io___3442 = { 0, cw, 0, "(i4)", 4, 1 };
    static icilist io___3443 = { 0, cw, 0, "(2i4)", 8, 1 };
    static icilist io___3446 = { 0, buf, 0, form, 80, 1 };


 
 
 
 
 

 

 
 


 
 
 
 
 
 
 
 
 

     
    --x;

     
    io = 0;
    ncol = *ll / (*maxc + 2);
    nbloc = (*n + ncol - 1) / ncol;

    s_wsfi(&io___3437);
    do_fio(&c__1, (char *)&ncol, (ftnlen)sizeof(integer));
    do_fio(&c__1, (char *)&(*maxc), (ftnlen)sizeof(integer));
    i__1 = *maxc - 7;
    do_fio(&c__1, (char *)&i__1, (ftnlen)sizeof(integer));
    e_wsfi();

    k1 = 1;
    i__1 = nbloc;
    for (ib = 1; ib <= i__1; ++ib) {
 
	i__2 = k1 - 1 + ncol;
	k2 = (( i__2 ) <= ( *n ) ? ( i__2 ) : ( *n )) ;
	if (nbloc != 1) {
	    if (k1 == k2) {
		s_wsfi(&io___3442);
		do_fio(&c__1, (char *)&k1, (ftnlen)sizeof(integer));
		e_wsfi();
		basout_(&io, lunit, " ", 1L);
 
		i__3[0] = 17, a__1[0] = "         colonne ";
		i__3[1] = 4, a__1[1] = cw;
		s_cat(ch__1, a__1, i__3, &c__2, 21L);
		basout_(&io, lunit, ch__1, 21L);
	    } else {
		s_wsfi(&io___3443);
		do_fio(&c__1, (char *)&k1, (ftnlen)sizeof(integer));
		do_fio(&c__1, (char *)&k2, (ftnlen)sizeof(integer));
		e_wsfi();
		basout_(&io, lunit, " ", 1L);
 
		i__4[0] = 17, a__2[0] = "        colonnes ";
		i__4[1] = 4, a__2[1] = cw;
		i__4[2] = 3, a__2[2] = " a ";
		i__4[3] = 4, a__2[3] = cw + 4;
		s_cat(ch__2, a__2, i__4, &c__4, 28L);
		basout_(&io, lunit, ch__2, 28L);
		basout_(&io, lunit, " ", 1L);
	    }
	    basout_(&io, lunit, " ", 1L);
	    if (io == -1) {
		goto L99;
	    }
	}

	i__2 = *m;
	for (l = 1; l <= i__2; ++l) {
	    s_wsfi(&io___3446);
	    i__5 = k2;
	    for (k = k1; k <= i__5; ++k) {
		do_fio(&c__1, (char *)&x[l + (k - 1) * *nx], (ftnlen)sizeof(
			doublereal));
	    }
	    e_wsfi();
	    basout_(&io, lunit, buf, 80L);
	    if (io == -1) {
		goto L99;
	    }
 
	}
	k1 = k2 + 1;
 
    }

L99:
    return 0;

}  

 
  int dmp2pm_(mp, d__, nl, pm, deg, m, n)
doublereal *mp;
integer *d__, *nl;
doublereal *pm;
integer *deg, *m, *n;
{
     
    integer i__1, i__2, i__3, i__4;

     
    extern   int dset_();
    static integer k, l;
    extern   int dcopy_();
    static integer mn, kij, imp, ipm;

 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 
 

 
 
 

     
    --pm;
    --d__;
    --mp;

     
    mn = *m * *n;
    i__1 = mn * (*deg + 1);
    dset_(&i__1, &c_b61, &pm[1], &c__1);

    imp = -(*nl);
    ipm = -(*m);
    i__1 = *n;
    for (k = 1; k <= i__1; ++k) {
	imp += *nl;
	ipm += *m;
	i__2 = *m;
	for (l = 1; l <= i__2; ++l) {
 
	    i__3 = *deg + 1, i__4 = d__[imp + l + 1] - d__[imp + l];
	    kij = (( i__3 ) <= ( i__4 ) ? ( i__3 ) : ( i__4 )) ;
	    dcopy_(&kij, &mp[d__[imp + l]], &c__1, &pm[l + ipm], &mn);
 
	}
 
    }
    return 0;
}  

 
  int dmpad_(pm1, d1, l1, pm2, d2, l2, pm3, d3, m, n)
doublereal *pm1;
integer *d1, *l1;
doublereal *pm2;
integer *d2, *l2;
doublereal *pm3;
integer *d3, *m, *n;
{
     
    integer i__1, i__2, i__3;
    doublereal d__1, d__2, d__3, d__4;

     
    static integer i__, j, k;
    static doublereal w;
    static integer i1, i2, k1, n1, n2, n3, k3, k2;
    extern doublereal dlamch_();
    static integer mn;
    static doublereal eps;

 
 
 
 

 
 
 

 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 


     
    --d3;
    --pm3;
    --d2;
    --pm2;
    --d1;
    --pm1;

     
    eps = dlamch_("p", 1L);
    mn = *m * *n;
    d3[1] = 1;

    i1 = -(*l1);
    i2 = -(*l2);
    k3 = 0;
 
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	i1 += *l1;
	i2 += *l2;
	i__2 = *m;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    k1 = d1[i1 + i__] - 1;
	    k2 = d2[i2 + i__] - 1;
	    n1 = d1[i1 + i__ + 1] - d1[i1 + i__];
	    n2 = d2[i2 + i__ + 1] - d2[i2 + i__];
	    if (n1 > n2) {
		goto L30;
	    }

 

 
	    i__3 = n1;
	    for (k = 1; k <= i__3; ++k) {
		w = pm1[k1 + k] + pm2[k2 + k];
 
		d__3 = (d__1 = pm1[k1 + k], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ), d__4 = (d__2 = pm2[k2 
			+ k], (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) );
		if ((( w ) >= 0 ? ( w ) : -( w ))  > (( d__3 ) >= ( d__4 ) ? ( d__3 ) : ( d__4 ))  * eps) {
		    pm3[k3 + k] = w;
		} else {
		    pm3[k3 + k] = 0.;
		}
 
	    }
	    if (n1 == n2) {
		goto L23;
	    }
	    n3 = n1 + 1;
	    i__3 = n2;
	    for (k = n3; k <= i__3; ++k) {
		pm3[k3 + k] = pm2[k2 + k];
 
	    }
L23:
	    n3 = n2;
	    d3[i__ + 1 + (j - 1) * *m] = d3[i__ + (j - 1) * *m] + n3;
	    goto L38;

 

L30:
	    i__3 = n2;
	    for (k = 1; k <= i__3; ++k) {
		w = pm1[k1 + k] + pm2[k2 + k];
 
		d__3 = (d__1 = pm1[k1 + k], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ), d__4 = (d__2 = pm2[k2 
			+ k], (( d__2 ) >= 0 ? ( d__2 ) : -( d__2 )) );
		if ((( w ) >= 0 ? ( w ) : -( w ))  > (( d__3 ) >= ( d__4 ) ? ( d__3 ) : ( d__4 ))  * eps) {
		    pm3[k3 + k] = w;
		} else {
		    pm3[k3 + k] = 0.;
		}
 
	    }
	    n3 = n2 + 1;
	    i__3 = n1;
	    for (k = n3; k <= i__3; ++k) {
		pm3[k3 + k] = pm1[k1 + k];
 
	    }
	    n3 = n1;
	    d3[i__ + 1 + (j - 1) * *m] = d3[i__ + (j - 1) * *m] + n3;

L38:
	    k1 += n1;
	    k2 += n2;
	    k3 += n3;
 
	}
 
    }
    return 0;
}  

 
  int dmpadj_(pm1, d1, m, n)
doublereal *pm1;
integer *d1, *m, *n;
{
     
    integer i__1;

     
    static integer j;
    extern   int dcopy_();
    static integer k1, n1, dj, kk;

 
 

 

 
 

 
 
 

 
 
 
 
 
 
 
 
 

 
 
 
 
 


     
    --d1;
    --pm1;

     
    kk = 1;
    dj = 1;
 
    i__1 = *m * *n;
    for (j = 1; j <= i__1; ++j) {
	k1 = dj - 1;
	n1 = d1[j + 1] - dj + 1;
L10:
	--n1;
	if (pm1[k1 + n1] == 0. && n1 > 1) {
	    goto L10;
	}
	if (kk != k1 + 1) {
	    dcopy_(&n1, &pm1[k1 + 1], &c__1, &pm1[kk], &c__1);
	}
	kk += n1;
	dj = d1[j + 1];
	d1[j + 1] = kk;
 
    }

    return 0;
}  

  int dmpcle_(pm1, d1, m, n, d2, epsr, epsa)
doublereal *pm1;
integer *d1, *m, *n, *d2;
doublereal *epsr, *epsa;
{
     
    integer i__1, i__2;
    doublereal d__1, d__2;

     
    static integer lmin, lmax, ivol;
    static doublereal norm;
    static integer k, l;
    extern   int dcopy_();
    static integer count, l1, ll;
    static logical ok;
    static integer mn, ld1;
    static doublereal eps;

 
 
 
 
 

 

 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 



     
    --d2;
    --d1;
    --pm1;

     
    mn = *m * *n;
    ld1 = mn + 1;
    if (mn == 1) {
	lmin = d1[1];
	lmax = d1[2] - 1;
	norm = 0.;
	i__1 = lmax;
	for (l = lmin; l <= i__1; ++l) {
	    norm += (d__1 = pm1[l], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
 
	}
 
	d__1 = *epsa, d__2 = *epsr * norm;
	eps = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	ll = lmax + 1;
	count = 0;
	ok = (0) ;
	i__1 = lmax;
	for (k = lmin; k <= i__1; ++k) {
	    --ll;
	    if ((d__1 = pm1[ll], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= eps) {
		pm1[ll] = 0.;
		if (ll == lmax) {
		    ok = (1) ;
		}
		if (ok == (1) ) {
		    ++count;
		}
	    } else {
		ok = (0) ;
	    }
 
	}
	d1[2] -= count;
	if (d1[2] <= d1[1]) {
	    d1[2] = d1[1] + 1;
	}
	return 0;
    }
    i__1 = ld1;
    for (k = 1; k <= i__1; ++k) {
	d2[k] = d1[k];
 
    }
    i__1 = mn;
    for (k = 1; k <= i__1; ++k) {
	lmin = d2[k];
	lmax = d2[k + 1] - 1;
	norm = 0.;
	i__2 = lmax;
	for (l = lmin; l <= i__2; ++l) {
	    norm += (d__1 = pm1[l], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
 
	}
 
	d__1 = *epsa, d__2 = *epsr * norm;
	eps = (( d__1 ) >= ( d__2 ) ? ( d__1 ) : ( d__2 )) ;
	ll = lmax + 1;
	count = 0;
	ok = (0) ;
	i__2 = lmax;
	for (l = lmin; l <= i__2; ++l) {
	    --ll;
	    if ((d__1 = pm1[ll], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) <= eps) {
		if (ll == lmax) {
		    ok = (1) ;
		}
		if (ok == (1) ) {
		    ++count;
		}
		pm1[ll] = 0.;
	    } else {
		ok = (0) ;
	    }
 
	}
	d1[k + 1] = d1[k] + d2[k + 1] - d2[k] - count;
	if (d1[k + 1] <= d1[k]) {
	    d1[k + 1] = d1[k] + 1;
	}
 
    }
    l1 = d1[2];
    i__1 = mn;
    for (k = 2; k <= i__1; ++k) {
	lmin = d2[k];
	ivol = d1[k + 1] - d1[k];
	dcopy_(&ivol, &pm1[lmin], &c__1, &pm1[l1], &c__1);
	l1 += ivol;
 
    }
    return 0;
}  

 
  int dmpcnc_(pm1, d1, ld1, pm2, d2, ld2, pm3, d3, l, m, n, 
	job)
doublereal *pm1;
integer *d1, *ld1;
doublereal *pm2;
integer *d2, *ld2;
doublereal *pm3;
integer *d3, *l, *m, *n, *job;
{
     
    integer i__1, i__2;

     
    static integer i__, j;
    extern   int dcopy_();
    static integer i1, i2, i3, np;

 
 
 
 
 
 
 

 
 
 

 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 


     
    --d3;
    --pm3;
    --d2;
    --pm2;
    --d1;
    --pm1;

     
    i3 = 1;
    d3[1] = 1;
    i1 = 1 - *ld1;
    i2 = 1 - *ld2;

    if (*job < 0) {
	goto L30;
    }

    i__1 = *m;
    for (j = 1; j <= i__1; ++j) {
	i1 += *ld1;
	np = d1[i1 + *l] - d1[i1];
	dcopy_(&np, &pm1[d1[i1]], &c__1, &pm3[d3[i3]], &c__1);
	i__2 = *l;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    ++i3;
	    d3[i3] = d3[i3 - 1] + d1[i1 + i__] - d1[i1 + i__ - 1];
 
	}
 
    }
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	i2 += *ld2;
	np = d2[i2 + *l] - d2[i2];
	dcopy_(&np, &pm2[d2[i2]], &c__1, &pm3[d3[i3]], &c__1);
	i__2 = *l;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    ++i3;
	    d3[i3] = d3[i3 - 1] + d2[i2 + i__] - d2[i2 + i__ - 1];
 
	}
 
    }
    return 0;

L30:
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	i1 += *ld1;
	i2 += *ld2;
	np = d1[i1 + *l] - d1[i1];
	dcopy_(&np, &pm1[d1[i1]], &c__1, &pm3[d3[i3]], &c__1);
	i__2 = *l;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    ++i3;
	    d3[i3] = d3[i3 - 1] + d1[i1 + i__] - d1[i1 + i__ - 1];
 
	}
	np = d2[i2 + *m] - d2[i2];
	dcopy_(&np, &pm2[d2[i2]], &c__1, &pm3[d3[i3]], &c__1);
	i__2 = *m;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    ++i3;
	    d3[i3] = d3[i3 - 1] + d2[i2 + i__] - d2[i2 + i__ - 1];
 
	}
 
    }
    return 0;
}  

  int dmpdsp_(mp, d__, nl, m, n, var, lvar, maxc, mode, ll, 
	lunit, cw, iw, var_len, cw_len)
doublereal *mp;
integer *d__, *nl, *m, *n;
char *var;
integer *lvar, *maxc, *mode, *ll, *lunit;
char *cw;
integer *iw;
ftnlen var_len;
ftnlen cw_len;
{
     
    static char fmt_130[] = "(\002(1pd\002,i2,\002.\002,i2,\002)\002)";
    static char fmt_120[] = "(\002(f\002,i2,\002.\002,i2,\002)\002)";
    static char fmt_110[] = "(\002(i\002,i2,\002)\002)";

     
    address a__1[2], a__2[4];
    integer i__1, i__2, i__3, i__4[2], i__5[4], i__6, i__7;
    real r__1;
    doublereal d__1;
    char ch__1[20], ch__2[27];
    icilist ici__1;

     
      int s_copy();
    integer s_wsfi(), do_fio(), e_wsfi();
    double r_lg10();
      int s_cat();
    integer s_cmp();

     
    static integer ldef, ifmt;
    static char fexp[10], form[10*2], expo[10];
    static doublereal a;
    static integer i__, j, k, l, lbloc, nbloc, lines, c1, c2;
    static logical first;
    static integer k0, k1, k2, n1, n2, l1, l2, l0, ib;
    static char dl[1];
    static integer fl, lf, nd, nf, io, lp, sk, sl, np;
    extern   int basout_();
    static integer ll1, nl1, ldg, lgh;
    extern   int fmt_();
    static char sgn[1];
    static integer typ;

     
    static icilist io___3493 = { 0, form, 0, fmt_130, 10, 1 };
    static icilist io___3533 = { 0, fexp, 0, fmt_110, 10, 1 };
    static icilist io___3535 = { 0, expo, 0, fexp, 10, 1 };


 
 
 
 
 

 
 

 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

     
    --iw;
    --d__;
    --mp;

     
    s_copy(cw, " ", cw_len, 1L);
    s_wsfi(&io___3493);
    do_fio(&c__1, (char *)&(*maxc), (ftnlen)sizeof(integer));
    i__1 = *maxc - 7;
    do_fio(&c__1, (char *)&i__1, (ftnlen)sizeof(integer));
    e_wsfi();
    *(unsigned char *)dl = ' ';
    if (*m * *n > 1) {
	*(unsigned char *)dl = '!';
    }

 

 
 
 
 
 
 

    lines = 0;
    lbloc = *n;
    lf = lbloc + 2 + *n;
    nbloc = 1;
    iw[lbloc + nbloc] = *n;
    sk = 0;

    ldg = -(*nl);
    ldef = lf;
    k0 = 1;
    i__1 = *n;
    for (k = 1; k <= i__1; ++k) {
	sl = 0;
	iw[k] = 0;
	ldg += *nl;
	i__2 = *m;
	for (l = 1; l <= i__2; ++l) {

 
	    lp = d__[ldg + l] - 1;
	    np = d__[ldg + l + 1] - d__[ldg + l];
	    lgh = 0;
	    first = (1) ;
	    i__3 = np;
	    for (i__ = 1; i__ <= i__3; ++i__) {
		a = (d__1 = mp[lp + i__], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );
		iw[ldef] = 0;
		if (a == 0.) {
		    goto L9;
		}
		first = (0) ;
 
		typ = 1;
		if (*mode == 1) {
		    fmt_(&a, maxc, &typ, &n1, &n2);
		}
		if (typ == 2) {
		    fl = n1;
		    iw[ldef] = n2 + (n1 << 5);
		} else if (typ < 0) {
		    iw[ldef] = typ;
		    fl = 3;
		} else {
		    iw[ldef] = 1;
		    fl = *maxc;
		    n2 = *maxc - 7;
		}

 

 

 
		lgh = lgh + fl + 2;
		if (n2 == 0) {
		    --lgh;
		    if (i__ != 1 && (integer) (a + (float).1) == 1) {
			--lgh;
		    }
		}
		if (i__ != 1) {
		    lgh += *lvar;
		}
L9:
		++ldef;
 
	    }

 
	    r__1 = np + (float).5;
	    nd = (integer) r_lg10(&r__1) + 1;
	    lgh += nd;
 
	    if (first) {
		lgh = 4;
	    }

 
	    i__3 = iw[k];
	    iw[k] = (( i__3 ) >= ( lgh ) ? ( i__3 ) : ( lgh )) ;
	    sl = sl + lgh / (*ll - 2) + 1;

 
	}
	sk += iw[k];
	if (sk > *ll - 2) {
	    if (k == k0) {
		iw[lbloc + nbloc] = k;
		sk = 0;
		k0 = k + 1;
	    } else {
		iw[lbloc + nbloc] = k - 1;
		sk = iw[k];
		k0 = k;
	    }
	    ++nbloc;
	    iw[lbloc + nbloc] = *n;
	    lines = lines + (sl << 1) + *m + 2;
	}
 
    }
    nbloc = (( nbloc ) <= ( *n ) ? ( nbloc ) : ( *n )) ;


 
 
 

    k1 = 1;
    i__1 = nbloc;
    for (ib = 1; ib <= i__1; ++ib) {
	k2 = iw[lbloc + ib];
	ll1 = 0;
	if (nbloc != 1) {
	    if (k1 == k2) {
		ici__1.icierr = 0;
		ici__1.icirnum = 1;
		ici__1.icirlen = 4;
		ici__1.iciunit = cw;
		ici__1.icifmt = "(i4)";
		s_wsfi(&ici__1);
		do_fio(&c__1, (char *)&k1, (ftnlen)sizeof(integer));
		e_wsfi();
		basout_(&io, lunit, " ", 1L);
 
		i__4[0] = 16, a__1[0] = "         column ";
		i__4[1] = 4, a__1[1] = cw;
		s_cat(ch__1, a__1, i__4, &c__2, 20L);
		basout_(&io, lunit, ch__1, 20L);
	    } else {
		ici__1.icierr = 0;
		ici__1.icirnum = 1;
		ici__1.icirlen = 8;
		ici__1.iciunit = cw;
		ici__1.icifmt = "(2i4)";
		s_wsfi(&ici__1);
		do_fio(&c__1, (char *)&k1, (ftnlen)sizeof(integer));
		do_fio(&c__1, (char *)&k2, (ftnlen)sizeof(integer));
		e_wsfi();
		basout_(&io, lunit, " ", 1L);
 
		i__5[0] = 16, a__2[0] = "        columns ";
		i__5[1] = 4, a__2[1] = cw;
		i__5[2] = 3, a__2[2] = " to";
		i__5[3] = 4, a__2[3] = cw + 4;
		s_cat(ch__2, a__2, i__5, &c__4, 27L);
		basout_(&io, lunit, ch__2, 27L);
		basout_(&io, lunit, " ", 1L);
	    }
	    if (io == -1) {
		goto L99;
	    }
	}

	*(unsigned char *)cw = *(unsigned char *)dl;
	c1 = 2;
	i__2 = *ll;
	s_copy(cw + i__2, dl, *ll + 1 - i__2, 1L);
	c2 = *ll + 2;

	i__2 = *m;
	for (l = 1; l <= i__2; ++l) {
	    l1 = c1;
	    l2 = c2;
	    if (iw[k1] > *ll - 2) {
		ll1 = *ll;
	    }
	    i__3 = k2;
	    for (k = k1; k <= i__3; ++k) {
		ldg = (k - 1) * *nl + l;
		lp = d__[ldg] - 1;
		np = d__[ldg + 1] - d__[ldg];
		ldef = lf - 1 + d__[ldg] - d__[1];
		first = (1) ;

		l0 = l1;
		i__6 = np;
		for (j = 1; j <= i__6; ++j) {
		    ifmt = iw[ldef + j];
		    if (ifmt == 0) {
			goto L45;
		    }
		    *(unsigned char *)sgn = '+';
		    if (first) {
			*(unsigned char *)sgn = ' ';
		    }
		    first = (0) ;
		    if (mp[lp + j] < 0.) {
			*(unsigned char *)sgn = '-';
		    }
		    a = (d__1 = mp[lp + j], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) );

		    if (ifmt == 1) {
			nf = 1;
			fl = *maxc;
			n2 = 1;
		    } else if (ifmt >= 0) {
			nf = 2;
			n1 = ifmt / 32;
			n2 = ifmt - (n1 << 5);
			fl = n1;
			ici__1.icierr = 0;
			ici__1.icirnum = 1;
			ici__1.icirlen = 10;
			ici__1.iciunit = form + (nf - 1) * 10;
			ici__1.icifmt = fmt_120;
			s_wsfi(&ici__1);
			do_fio(&c__1, (char *)&fl, (ftnlen)sizeof(integer));
			do_fio(&c__1, (char *)&n2, (ftnlen)sizeof(integer));
			e_wsfi();
		    } else if (ifmt < 0) {
 
			fl = 3;
			n2 = 1;
		    }

		    nd = 0;
		    if (j > 2) {
			r__1 = j + (float).5;
			nd = (integer) r_lg10(&r__1) + 1;
		    }
		    if (l2 + fl + 2 + *lvar + nd > c2 + *ll - 2) {
 
			if (l1 <= *ll - 1) {
			    s_copy(cw + (l1 - 1), " ", *ll - 1 - (l1 - 1), 1L)
				    ;
			}
			if (l2 <= c2 + *ll - 3) {
			    s_copy(cw + (l2 - 1), " ", c2 + *ll - 3 - (l2 - 1)
				    , 1L);
			}
			*(unsigned char *)&cw[*ll - 1] = *(unsigned char *)dl;
			i__7 = c1 - 2;
			basout_(&io, lunit, cw + i__7, *ll - i__7);
			i__7 = c2 + *ll - 3;
			s_copy(cw + i__7, dl, c2 + *ll - 2 - i__7, 1L);
			i__7 = c2 - 2;
			basout_(&io, lunit, cw + i__7, c2 + *ll - 2 - i__7);
			if (io == -1) {
			    goto L99;
			}
			s_copy(cw + (c2 - 1), " ", 10L, 1L);
			l2 = c2 + 10;
			s_copy(cw + (c1 - 1), " ", 10L, 1L);
			l1 = c1 + 10;
		    }
 
 
		    i__4[0] = 1, a__1[0] = " ";
		    i__4[1] = 1, a__1[1] = sgn;
		    s_cat(cw + (l2 - 1), a__1, i__4, &c__2, 2L);
		    ++l2;
		    if (ifmt >= 0) {
			i__7 = l2;
			ici__1.icierr = 0;
			ici__1.icirnum = 1;
			ici__1.icirlen = l2 + fl - i__7;
			ici__1.iciunit = cw + i__7;
			ici__1.icifmt = form + (nf - 1) * 10;
			s_wsfi(&ici__1);
			do_fio(&c__1, (char *)&a, (ftnlen)sizeof(doublereal));
			e_wsfi();
		    } else if (ifmt == -1) {
			i__7 = l2;
			s_copy(cw + i__7, "Inf", l2 + fl - i__7, 3L);
		    } else if (ifmt == -2) {
			i__7 = l2;
			s_copy(cw + i__7, "Nan", l2 + fl - i__7, 3L);
		    }
		    l2 += fl;
		    if (n2 == 0) {
			--l2;
		    }
		    if (j > 1) {
			if (n2 == 0 && (integer) (a + (float).1) == 1) {
			    --l2;
			}
			i__7 = l2;
			s_copy(cw + i__7, var, l2 + *lvar - i__7, (*lvar));
			l2 += *lvar;
		    }
		    nl1 = l2 + c1 - c2;
		    s_copy(cw + (l1 - 1), " ", nl1 - (l1 - 1), 1L);
		    if (j > 2) {
			s_wsfi(&io___3533);
			do_fio(&c__1, (char *)&nd, (ftnlen)sizeof(integer));
			e_wsfi();
			s_wsfi(&io___3535);
			i__7 = j - 1;
			do_fio(&c__1, (char *)&i__7, (ftnlen)sizeof(integer));
			e_wsfi();
			i__7 = nl1;
			s_copy(cw + i__7, expo, nl1 + nd - i__7, nd);
			l1 = nl1 + nd;
		    }
		    ++l1;
		    ++l2;
L45:
		    ;
		}
		if (first) {
 
		    s_copy(cw + (l1 - 1), " ", 4L, 1L);
		    s_copy(cw + (l2 - 1), "   0", 4L, 4L);
		    l1 += 4;
		    l2 += 4;
		    nd = 0;
		}
		if (nd != 0) {
		    s_copy(cw + (l2 - 1), " ", l2 + nd - 1 - (l2 - 1), 1L);
		}
		nl1 = l0 + iw[k];
		if (ll1 == *ll) {
		    nl1 = *ll - 1;
		}
		s_copy(cw + (l1 - 1), " ", nl1 - (l1 - 1), 1L);
		l1 = nl1 + 1;
		s_copy(cw + (l2 - 1), " ", c2 + nl1 - c1 - (l2 - 1), 1L);
		l2 = c2 + nl1 - c1 + 1;
 
	    }
	    if (s_cmp(cw + (c1 - 1), " ", l1 - 1 - (c1 - 1), 1L) != 0) {
 
 
		*(unsigned char *)&cw[l1 - 1] = *(unsigned char *)dl;
		i__3 = c1 - 2;
		basout_(&io, lunit, cw + i__3, l1 - i__3);
	    }
	    *(unsigned char *)&cw[l2 - 1] = *(unsigned char *)dl;
	    i__3 = c2 - 2;
	    basout_(&io, lunit, cw + i__3, l2 - i__3);
	    if (l != *m) {
		s_copy(cw + (c2 - 1), " ", l2 - 1 - (c2 - 1), 1L);
		i__3 = c2 - 2;
		basout_(&io, lunit, cw + i__3, l2 - i__3);
	    }
	    if (io == -1) {
		goto L99;
	    }
 
	}
	k1 = k2 + 1;
 
    }

L99:
    return 0;


}  

 
  int dmpext_(mp, d__, m, n, row, nr, col, nc, mp1, d1, job, 
	ierr)
doublereal *mp;
integer *d__, *m, *n, *row, *nr, *col, *nc;
doublereal *mp1;
integer *d1, *job, *ierr;
{
     
    integer i__1, i__2, i__3;

     
    static integer i__, j;
    extern   int dcopy_();
    static integer id, id1, idi;

 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

     
    --d1;
    --mp1;
    --col;
    --row;
    --d__;
    --mp;

     
    if (*nr * *nc == 0) {
	return 0;
    }
    if (*m <= 0 || *n <= 0) {
	return 0;
    }
    if (*nr < 0) {
	goto L40;
    }
    if (*nc < 0) {
	goto L50;
    }

 

 
    i__1 = *nc;
    for (j = 1; j <= i__1; ++j) {
	if (col[j] <= 0 || col[j] > *n) {
	    goto L100;
	}
 
    }
    i__1 = *nr;
    for (i__ = 1; i__ <= i__1; ++i__) {
	if (row[i__] <= 0 || row[i__] > *m) {
	    goto L100;
	}
 
    }

    if (*job == 1) {
	goto L25;
    }
 
    d1[1] = 1;
    id1 = 1;
    i__1 = *nc;
    for (j = 1; j <= i__1; ++j) {
	id = *m * (col[j] - 1) + 1;
	i__2 = *nr;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    ++id1;
 
	    d1[id1] = d1[id1 - 1] + d__[id + row[i__]] - d__[id + row[i__] - 
		    1];
	}
    }
    if (*job == 0) {
	return 0;
    }

L25:
    id1 = 1;
    i__2 = *nc;
    for (j = 1; j <= i__2; ++j) {
	id = *m * (col[j] - 1);
	i__1 = *nr;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    ++id1;
	    i__3 = d1[id1] - d1[id1 - 1];
	    dcopy_(&i__3, &mp[d__[id + row[i__]]], &c__1, &mp1[d1[id1 - 1]], &
		    c__1);
 
	}
    }
    return 0;

L40:
    if (*nc < 0) {
	goto L60;
    }
 
    i__1 = *nc;
    for (j = 1; j <= i__1; ++j) {
	if (col[j] <= 0 || col[j] > *n) {
	    goto L100;
	}
 
    }
    if (*job == 1) {
	goto L45;
    }
    id1 = 1;
    d1[id1] = 1;
    i__1 = *nc;
    for (j = 1; j <= i__1; ++j) {
	id = *m * (col[j] - 1) + 1;
	i__2 = *m;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    ++id1;
	    d1[id1] = d1[id1 - 1] + d__[id + i__] - d__[id + i__ - 1];
 
	}
    }
    if (*job == 0) {
	return 0;
    }
L45:
    id1 = 1;
    i__2 = *nc;
    for (j = 1; j <= i__2; ++j) {
	id = *m * (col[j] - 1) + 1;
	i__1 = d__[id + *m] - d__[id];
	dcopy_(&i__1, &mp[d__[id]], &c__1, &mp1[d1[id1]], &c__1);
	id1 += *m;
 
    }
    return 0;

L50:
 
    i__2 = *nr;
    for (i__ = 1; i__ <= i__2; ++i__) {
	if (row[i__] <= 0 || row[i__] > *m) {
	    goto L100;
	}
 
    }
    if (*job == 1) {
	goto L55;
    }
    id1 = 1;
    d1[1] = 1;
    id = 1 - *m;
    i__2 = *n;
    for (j = 1; j <= i__2; ++j) {
	id += *m;
	i__1 = *nr;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    ++id1;
	    d1[id1] = d1[id1 - 1] + d__[id + row[i__]] - d__[id + row[i__] - 
		    1];
 
	}
    }
    if (*job == 0) {
	return 0;
    }
L55:
    id1 = 1;
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	id = (j - 1) * *m;
	i__2 = *nr;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    idi = id + row[i__];
	    i__3 = d__[idi + 1] - d__[idi];
	    dcopy_(&i__3, &mp[d__[idi]], &c__1, &mp1[d1[id1]], &c__1);
	    ++id1;
 
	}
    }
    return 0;

L60:
 
    if (*job == 1) {
	goto L65;
    }
    i__2 = *m * *n + 1;
    for (i__ = 1; i__ <= i__2; ++i__) {
	d1[i__] = d__[i__];
 
    }
    if (*job == 0) {
	return 0;
    }
L65:
    i__2 = d__[*m * *n + 1] - 1;
    dcopy_(&i__2, &mp[1], &c__1, &mp1[1], &c__1);
    return 0;
L100:
    *ierr = 1;
    return 0;
}  

 
  int dmpins_(mat1, dep1, lig1, col1, mat2, dep2, lig2, col2, 
	matr, depr, ligr, colr)
doublereal *mat1;
integer *dep1, *lig1, *col1;
doublereal *mat2;
integer *dep2, *lig2, *col2;
doublereal *matr;
integer *depr, *ligr, *colr;
{
     
    integer i__1, i__2;

     
    static integer i__, j, l;
    extern   int dcopy_();
    static integer l1, l2, kr, lr;

 

 
 
 
 

 

 
 

 

 

 
 

 

 
 

 
 


 

 
 

 
 


 

     
    --depr;
    --matr;
    --dep2;
    --mat2;
    --dep1;
    --mat1;

     
    depr[1] = 1;
    kr = 1;

    i__1 = *colr;
    for (j = 1; j <= i__1; ++j) {
	i__2 = *ligr;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    ++kr;
	    lr = depr[kr];
	    if (lr < 0) {
		goto L11;
	    } else if (lr == 0) {
		goto L12;
	    } else {
		goto L13;
	    }
L11:
	    l2 = -lr;
	    l = dep2[l2 + 1] - dep2[l2];
	    dcopy_(&l, &mat2[dep2[l2]], &c__1, &matr[depr[kr - 1]], &c__1);
	    depr[kr] = depr[kr - 1] + l;
	    goto L20;
L12:
	    matr[depr[kr - 1]] = 0.;
	    depr[kr] = depr[kr - 1] + 1;
	    goto L20;
L13:
	    l1 = lr;
	    l = dep1[l1 + 1] - dep1[l1];
	    dcopy_(&l, &mat1[dep1[l1]], &c__1, &matr[depr[kr - 1]], &c__1);
	    depr[kr] = depr[kr - 1] + l;

L20:
	    ;
	}
    }
    return 0;
}  

 
  int dmpmu_(mp1, d1, nl1, mp2, d2, nl2, mp3, d3, l, m, n)
doublereal *mp1;
integer *d1, *nl1;
doublereal *mp2;
integer *d2, *nl2;
doublereal *mp3;
integer *d3, *l, *m, *n;
{
     
    integer i__1, i__2, i__3;

     
    static integer i__, j, k;
    extern   int dpmul_();
    static integer k1, k2, k3, p1, p2, p3;

 
 
 

 

 

 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 

 
 
 

 
 
 

 
 
 

 
 
 
 

 



     
    --d3;
    --mp3;
    --d2;
    --mp2;
    --d1;
    --mp1;

     
    d3[1] = 1;
    if (*l == 0 || *m == 0 || *n == 0) {
	goto L500;
    }

    p2 = -(*nl2);
    p3 = -(*l);
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	p2 += *nl2;
	p3 += *l;
	i__2 = *l;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    mp3[d3[p3 + i__]] = 0.;
	    k3 = 0;
	    p1 = i__ - *nl1;
	    i__3 = *m;
	    for (k = 1; k <= i__3; ++k) {
		p1 += *nl1;
		k2 = d2[p2 + k + 1] - d2[p2 + k] - 1;
		k1 = d1[p1 + 1] - d1[p1] - 1;
		dpmul_(&mp1[d1[p1]], &k1, &mp2[d2[p2 + k]], &k2, &mp3[d3[p3 + 
			i__]], &k3);
 
	    }
	    d3[p3 + i__ + 1] = d3[p3 + i__] + k3 + 1;
 
	}
 
    }
    return 0;
L500:
    if (*l == 0) {
	goto L600;
    }
    if (*m == 0) {
	goto L700;
    }
    p1 = -(*nl1);
    p3 = -(*l);
    k2 = d2[2] - d2[1] - 1;
    i__1 = *m;
    for (j = 1; j <= i__1; ++j) {
	p1 += *nl1;
	p3 += *l;
	i__2 = *l;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    k3 = 0;
	    k1 = d1[p1 + i__ + 1] - d1[p1 + i__] - 1;
	    mp3[d3[p3 + i__]] = 0.;
	    dpmul_(&mp1[d1[p1 + i__]], &k1, &mp2[1], &k2, &mp3[d3[p3 + i__]], 
		    &k3);
	    d3[p3 + i__ + 1] = d3[p3 + i__] + k3 + 1;
 
	}
    }
    return 0;
L600:
    k1 = d1[2] - d1[1] - 1;
    p2 = -(*nl2);
    p3 = -(*m);
    i__2 = *n;
    for (j = 1; j <= i__2; ++j) {
	p2 += *nl2;
	p3 += *m;
	i__1 = *m;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    k3 = 0;
	    k2 = d2[p2 + i__ + 1] - d2[p2 + i__] - 1;
	    mp3[d3[p3 + i__]] = 0.;
	    dpmul_(&mp1[1], &k1, &mp2[d2[p2 + i__]], &k2, &mp3[d3[p3 + i__]], 
		    &k3);
	    d3[p3 + i__ + 1] = d3[p3 + i__] + k3 + 1;
 
	}
    }
    return 0;
L700:
    p1 = -(*nl1);
    p2 = -(*nl2);
    p3 = -(*l);
    i__1 = *n;
    for (j = 1; j <= i__1; ++j) {
	p1 += *nl1;
	p2 += *nl2;
	p3 += *l;
	i__2 = *l;
	for (i__ = 1; i__ <= i__2; ++i__) {
	    k1 = d1[p1 + i__ + 1] - d1[p1 + i__] - 1;
	    k2 = d2[p2 + i__ + 1] - d2[p2 + i__] - 1;
	    mp3[d3[p3 + i__]] = 0.;
	    k3 = 0;
	    dpmul_(&mp1[d1[p1 + i__]], &k1, &mp2[d2[p2 + i__]], &k2, &mp3[d3[
		    p3 + i__]], &k3);
	    d3[p3 + i__ + 1] = d3[p3 + i__] + k3 + 1;
 
	}
    }
    return 0;
}  

 
  int dmptld_(pm1, d1, ld1, pm2, d2, m, n)
doublereal *pm1;
integer *d1, *ld1;
doublereal *pm2;
integer *d2, *m, *n;
{
     
    integer i__1, i__2, i__3;
    doublereal d__1;

     
    extern   int dset_();
    static integer nmax;
    static doublereal norm;
    static integer i__, j;
    extern doublereal dasum_();
    extern   int dcopy_();
    static integer i1, i2, l1, l2, n1;

 
 
 
 
 

 
 
 

 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 

 
     
    --d2;
    --pm2;
    --d1;
    --pm1;

     
    d2[1] = 1;
    nmax = 0;
    i2 = 1;
    i__1 = *m;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i1 = i__;
	i__2 = *n;
	for (j = 1; j <= i__2; ++j) {
	    l1 = d1[i1];
	    n1 = d1[i1 + 1] - l1 + 1;
	    i__3 = n1 - 1;
	    norm = dasum_(&i__3, &pm1[l1], &c__1);
L10:
	    --n1;
	    if ((d__1 = pm1[l1 + n1 - 1], (( d__1 ) >= 0 ? ( d__1 ) : -( d__1 )) ) + norm <= norm) {
		goto L10;
	    }
	    i1 += *ld1;
	    ++i2;
	    d2[i2] = n1;
	    nmax = (( nmax ) >= ( n1 ) ? ( nmax ) : ( n1 )) ;
 
	}
 
    }

 
    d2[1] = 1;
    i2 = 1;
    i__1 = *m;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i1 = i__;
	i__2 = *n;
	for (j = 1; j <= i__2; ++j) {
	    n1 = d2[i2 + 1];
	    l2 = d2[i2];
	    if (n1 < nmax) {
		i__3 = nmax - n1;
		dset_(&i__3, &c_b61, &pm2[l2], &c__1);
	    }
	    dcopy_(&n1, &pm1[d1[i1]], &c__1, &pm2[l2 + nmax - n1], &c_n1);
	    i1 += *ld1;
	    ++i2;
	    d2[i2] = l2 + nmax;
 
	}
 
    }

    return 0;
}  

 
  int dmptra_(pm1, d1, ld1, pm2, d2, m, n)
doublereal *pm1;
integer *d1, *ld1;
doublereal *pm2;
integer *d2, *m, *n;
{
     
    integer i__1, i__2;

     
    static integer i__, j;
    extern   int dcopy_();
    static integer i1, i2, l1, l2, n1;

 
 

 
 

 
 
 

 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
     
    --d2;
    --pm2;
    --d1;
    --pm1;

     
    d2[1] = 1;
    i2 = 1;
    i__1 = *m;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i1 = i__;
	i__2 = *n;
	for (j = 1; j <= i__2; ++j) {
	    l1 = d1[i1];
	    n1 = d1[i1 + 1] - l1;
	    l2 = d2[i2];
	    dcopy_(&n1, &pm1[l1], &c__1, &pm2[l2], &c__1);
	    i1 += *ld1;
	    ++i2;
	    d2[i2] = l2 + n1;
 
	}
 
    }

    return 0;
}  

  int dmrdsp_(mpn, dn, mpd, dd, nl, m, n, var, lvar, maxc, 
	mode, ll, lunit, cw, iw, var_len, cw_len)
doublereal *mpn;
integer *dn;
doublereal *mpd;
integer *dd, *nl, *m, *n;
char *var;
integer *lvar, *maxc, *mode, *ll, *lunit;
char *cw;
integer *iw;
ftnlen var_len;
ftnlen cw_len;
{
     

    static integer nind = 5;

     
    static char fmt_130[] = "(\002(1pd\002,i2,\002.\002,i2,\002)\002)";
    static char fmt_120[] = "(\002(f\002,i2,\002.\002,i2,\002)\002)";
    static char fmt_110[] = "(\002(i\002,i2,\002)\002)";

     
    address a__1[2], a__2[4];
    integer i__1, i__2, i__3, i__4, i__5, i__6, i__7[2], i__8[4];
    real r__1;
    doublereal d__1;
    char ch__1[15], ch__2[24];
    icilist ici__1;

     
      int s_copy();
    integer s_wsfi(), do_fio(), e_wsfi();
    double r_lg10();
      int s_cat();
    integer s_cmp();

     
    static integer ideb, ldeb, lghd, ifin, lcol, lfin, lghn, ifmt;
    static char fexp[10], form[10*2], expo[10];
    static doublereal a;
    static integer i__, j, k, l, ldefd, ldefn, lbloc, nbloc, lines, c1, c2;
    static logical first;
    static integer k0, k1, k2, n1, n2, l1, l2, l0, ib;
    static char dl[1];
    static integer fl, nd, nf, io, sk, sl, idelta, ldelta, ndelta;
    extern   int basout_();
    static integer ll1, nl1, lfd, ldg, lfn, lpd, npd;
    extern   int fmt_();
    static char sgn[1];
    static integer lpn, npn, typ, jjb1;

     
    static icilist io___3575 = { 0, form, 0, fmt_130, 10, 1 };
    static icilist io___3626 = { 0, fexp, 0, fmt_110, 10, 1 };
    static icilist io___3628 = { 0, expo, 0, fexp, 10, 1 };
    static icilist io___3632 = { 0, fexp, 0, fmt_110, 10, 1 };
    static icilist io___3633 = { 0, expo, 0, fexp, 10, 1 };


 
 
 
 
 

 
 

 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 


     
    --iw;
    --dd;
    --mpd;
    --dn;
    --mpn;

     

    s_copy(cw, " ", cw_len, 1L);
    s_wsfi(&io___3575);
    }
