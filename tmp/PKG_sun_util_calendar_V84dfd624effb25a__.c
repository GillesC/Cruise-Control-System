#include <stdlib.h>
#include <stdio.h>
#include "jamaica.h"
#include "jni.h"
#include "jbi.h"
#include "Main__.h"


#ifdef __JAMAICA__

#ifdef __cplusplus
extern "C" {
#endif


JBIEXPORT jamaica_int64 JBICALL jam_comp_sun_util_calendar_BaseCendar_1_getFidDate9(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0,jamaica_int32 n1,jamaica_int32 n2,jamaica_ref r1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r2=JAMAICA_NULL;
 jamaica_int32 n3=0,n4=0,n6=0,n5=0,n7=0;
 jamaica_int64 j3=JAMAICA_INT64_CONST_0,j0=JAMAICA_INT64_CONST_0,j1=JAMAICA_INT64_CONST_0,j4=JAMAICA_INT64_CONST_0,j2=JAMAICA_INT64_CONST_0;
 jamaica_ref b0=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+3;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 if (n1!=1) { goto l5; }
 if (n2!=1) { goto l5; }
 n3=1;
 goto l6;
l5:
 n3=0;
l6:
 n4=n3;
 r2=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r2==JAMAICA_NULL) { goto l11; }
 n5=n0;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_util_calendar_BaseC4Date_2_hit5;
ct->calledMethod=m;
 n6=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,n5);
}
 if (n6==0) { goto l11; }
 if (n3==0) { goto l10; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_util_calendar_BaseC4Date_2_getCadJan18,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r2,3).i&15);
 JAMAICA_GET_REF_ARRAY(r2,n1,r2);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r2;
ct->calledMethod=m;
 j0=((jamaica_int64(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1);
}
 ct->m.cli-=3;
 return j0;
l10:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n3=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_util_calendar_BaseC4Date_2_getCadJan18,1).i>>20) &  ((jamaica_int32)4095));
 n4=(JAMAICA_BLOCK_GET_DATA32(r1,3).i&15);
 JAMAICA_GET_REF_ARRAY(r1,n3,r1);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r1;
ct->calledMethod=m;
 j0=((jamaica_int64(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_util_calendar_BaseCendar_1_getDafYear7;
ct->calledMethod=m;
 j1=((jamaica_int64(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,n5,n1,n2);
}
 ct->m.cli-=3;
 return JAMAICA_SUBS64(JAMAICA_ADDS64(j0,j1),JAMAICA_INT64_CONST_1);
l11:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 n3=n0;
 n5=JAMAICA_SUBS32(n3,1970);
 if (n5<0) { goto l22; }
 b0=JAMAICA_BLOCK_GET_DATA32(jam_fld_sun_util_calendar_BaseCendar_1_FIXEDDATES0,7).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n6=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n7=((n6>>4) &  ((jamaica_int32)268435455));
 if (n5>=n7) { goto l22; }
 if (((jamaica_uint32)(n5))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 n6=(n6&15);
 JAMAICA_GET_ARRAY32(r2,n5,n5);
 j0=JAMAICA_INT32_TO_INT64(n5);
 j1=j0;
 if (r1==JAMAICA_NULL) { goto l18; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r0,1),3).r;
 n5=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_util_calendar_BaseCendar_1_isLeapYear15,1).i>>20) &  ((jamaica_int32)4095));
 n6=(JAMAICA_BLOCK_GET_DATA32(r2,3).i&15);
 JAMAICA_GET_REF_ARRAY(r2,n5,r2);
{ jamaica_ref m=r2;
ct->calledMethod=m;
 n5=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,n3);
}
 r2=r1;
 n6=n3;
 j2=j0;
 if (n5==0) { goto l16; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 n3=366;
 goto l17;
l16:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r2=r1;
 n6=n3;
 j2=j0;
 n3=365;
l17:
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n5=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_util_calendar_BaseC4Date_2_setCache9,1).i>>20) &  ((jamaica_int32)4095));
 n7=(JAMAICA_BLOCK_GET_DATA32(r1,3).i&15);
 JAMAICA_GET_REF_ARRAY(r1,n5,r1);
{ jamaica_ref m=r1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int64,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,n6,j2,n3);
}
l18:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 if (n4==0) { goto l20; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 j0=j1;
 goto l21;
l20:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_util_calendar_BaseCendar_1_getDafYear7;
ct->calledMethod=m;
 j0=((jamaica_int64(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,n0,n1,n2);
}
 j0=JAMAICA_SUBS64(JAMAICA_ADDS64(j1,j0),JAMAICA_INT64_CONST_1);
l21:
 ct->m.cli-=3;
 return j0;
l22:
 n3=n0;
 j0=JAMAICA_INT32_TO_INT64(n3);
 j0=JAMAICA_SUBS64(j0,JAMAICA_INT64_CONST_1);
 j1=j0;
 j2=JAMAICA_INT32_TO_INT64(n2);
 j3=j2;
 if ((JAMAICA_GT_S64(j0,JAMAICA_INT64_CONST_0) ?+1:(JAMAICA_EQ_S64(j0,JAMAICA_INT64_CONST_0)?0:-1))<0) { goto l24; }
 j3=JAMAICA_ADDS64(j3,JAMAICA_ADDS64(JAMAICA_ADDS64(JAMAICA_SUBS64(JAMAICA_ADDS64(JAMAICA_MULS64(((jamaica_int64) 0x16dLL),j1),JAMAICA_DIVS64(j1,((jamaica_int64) 0x4LL))),JAMAICA_DIVS64(j1,((jamaica_int64) 0x64LL))),JAMAICA_DIVS64(j1,((jamaica_int64) 0x190LL))),JAMAICA_INT32_TO_INT64(JAMAICA_DIVS32(JAMAICA_SUBS32(JAMAICA_MULS32(367,n1),362),12))));
 goto l25;
l24:
{ jamaica_ref m=jam_mtd_sun_util_calendar_CalenUtils_5_floorivide2;
ct->calledMethod=m;
 j1=((jamaica_int64(JBICALL *)(jamaica_thread *,jamaica_int64,jamaica_int64))JAMAICA_BLOCK_GET_P(m,4))(ct,j0,((jamaica_int64) 0x4LL));
}
{ jamaica_ref m=jam_mtd_sun_util_calendar_CalenUtils_5_floorivide2;
ct->calledMethod=m;
 j3=((jamaica_int64(JBICALL *)(jamaica_thread *,jamaica_int64,jamaica_int64))JAMAICA_BLOCK_GET_P(m,4))(ct,j0,((jamaica_int64) 0x64LL));
}
{ jamaica_ref m=jam_mtd_sun_util_calendar_CalenUtils_5_floorivide2;
ct->calledMethod=m;
 j4=((jamaica_int64(JBICALL *)(jamaica_thread *,jamaica_int64,jamaica_int64))JAMAICA_BLOCK_GET_P(m,4))(ct,j0,((jamaica_int64) 0x190LL));
}
{ jamaica_ref m=jam_mtd_sun_util_calendar_CalenUtils_5_floorivide3;
ct->calledMethod=m;
 n2=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,JAMAICA_SUBS32(JAMAICA_MULS32(367,n1),362),12);
}
 j3=JAMAICA_ADDS64(j2,JAMAICA_ADDS64(JAMAICA_ADDS64(JAMAICA_SUBS64(JAMAICA_ADDS64(JAMAICA_MULS64(((jamaica_int64) 0x16dLL),j0),j1),j3),j4),JAMAICA_INT32_TO_INT64(n2)));
l25:
 if (n1<=2) { goto l30; }
 j1=j3;
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r0,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_util_calendar_BaseCendar_1_isLeapYear15,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r2,3).i&15);
 JAMAICA_GET_REF_ARRAY(r2,n1,r2);
{ jamaica_ref m=r2;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,n0);
}
 j0=j1;
 if (n1==0) { goto l28; }
 j2=JAMAICA_INT64_CONST_1;
 goto l29;
l28:
 j0=j1;
 j2=((jamaica_int64) 0x2LL);
l29:
 j3=JAMAICA_SUBS64(j0,j2);
l30:
 if (r1==JAMAICA_NULL) { goto l36; }
 if (n4==0) { goto l36; }
 n1=n0;
 j0=j3;
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r0,1),3).r;
 n2=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_util_calendar_BaseCendar_1_isLeapYear15,1).i>>20) &  ((jamaica_int32)4095));
 n3=(JAMAICA_BLOCK_GET_DATA32(r2,3).i&15);
 JAMAICA_GET_REF_ARRAY(r2,n2,r2);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r2;
ct->calledMethod=m;
 n2=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,n1);
}
 r2=r1;
 n6=n1;
 j2=j0;
 if (n2==0) { goto l34; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 n3=366;
 goto l35;
l34:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r2=r1;
 n6=n1;
 j2=j0;
 n3=365;
l35:
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_util_calendar_BaseC4Date_2_setCache9,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r1,3).i&15);
 JAMAICA_GET_REF_ARRAY(r1,n1,r1);
{ jamaica_ref m=r1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int64,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,n6,j2,n3);
}
l36:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->m.cli-=3;
 return j3;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return JAMAICA_INT64_CONST_0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return JAMAICA_INT64_CONST_0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_INT64_CONST_0;
}
JBIEXPORT void JBICALL jam_comp_sun_util_calendar_BaseCendar_1_getCadDate10(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1,jamaica_int64 j0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r2=JAMAICA_NULL,r3=JAMAICA_NULL,r4=JAMAICA_NULL;
 jamaica_int32 n2=0,n4=0,n0=0,n1=0,n3=0,n5=0,n6=0;
 jamaica_int64 j2=JAMAICA_INT64_CONST_0,j3=JAMAICA_INT64_CONST_0,j1=JAMAICA_INT64_CONST_0;
 jamaica_ref b0=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+8;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_sun_util_calendar_BaseCendar_1_getCadDate10;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

l2:
 n0=((r1!=JAMAICA_NULL) && ((JAMAICA_BLOCK_GET_R(r1,1) == jam_class_sun_util_calendar_BaseC4Date_2)?TRUE:((JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r1,1),4) == JAMAICA_NULL) || (JAMAICA_BLOCK_GET_I(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r1,1),4),1)<=1))?FALSE:(jam_class_sun_util_calendar_BaseC4Date_2 == JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r1,1),4),3))));
 if ((r1!=JAMAICA_NULL) && (n0==0)) { goto LABEL_tCCE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 r2=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 j1=j0;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_util_calendar_BaseC4Date_2_hit6;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int64))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,j1);
}
 if (n0==0) { goto l4; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_util_calendar_BaseC4Date_2_getCadYear7,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r1,3).i&15);
 JAMAICA_GET_REF_ARRAY(r1,n0,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 n2=n0;
 n3=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_util_calendar_BaseC4Date_2_getCadJan18,1).i>>20) &  ((jamaica_int32)4095));
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_REF_ARRAY(r1,n3,r1);
{ jamaica_ref m=r1;
ct->calledMethod=m;
 j1=((jamaica_int64(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r0,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_util_calendar_BaseCendar_1_isLeapYear15,1).i>>20) &  ((jamaica_int32)4095));
 n3=(JAMAICA_BLOCK_GET_DATA32(r1,3).i&15);
 JAMAICA_GET_REF_ARRAY(r1,n1,r1);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r1;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,n0);
}
 goto l8;
l4:
 n1=jam_comp_sun_util_calendar_BaseCendar_1_getGrdDate13(ct,r0,j1);
 n2=n1;
 r3=JAMAICA_BLOCK_GET_R(r0,1);
 r3=JAMAICA_BLOCK_GET_DATA32(r3,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 n0=JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_util_calendar_BaseCendar_1_getFidDate9,1).i;
 n0=((n0>>20) &  ((jamaica_int32)4095));
 n3=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n3=(n3&15);
 JAMAICA_GET_REF_ARRAY(r3,n0,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 j2=((jamaica_int64(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,n1,1,1,JAMAICA_NULL);
}
 j1=j2;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_util_calendar_BaseCendar_1_isLeapYear15,1).i>>20) &  ((jamaica_int32)4095));
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_REF_ARRAY(r3,n0,r3);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r3;
ct->calledMethod=m;
 n3=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,n1);
}
 n0=n3;
 r3=r1;
 n4=n1;
 j3=j2;
 if (n3==0) { goto l6; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 n1=366;
 goto l7;
l6:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r3=r1;
 n4=n1;
 j3=j2;
 n1=365;
l7:
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n3=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_util_calendar_BaseC4Date_2_setCache9,1).i>>20) &  ((jamaica_int32)4095));
 n5=(JAMAICA_BLOCK_GET_DATA32(r1,3).i&15);
 JAMAICA_GET_REF_ARRAY(r1,n3,r1);
{ jamaica_ref m=r1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int64,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,n4,j3,n1);
}
l8:
 j2=j1;
 n1=JAMAICA_INT64_TO_INT32(JAMAICA_SUBS64(j0,j2));
 j2=JAMAICA_ADDS64(j2,((jamaica_int64) 0x1fLL));
 j2=JAMAICA_ADDS64(j2,((jamaica_int64) 0x1cLL));
 j3=j2;
 if (n0==0) { goto l10; }
 j3=JAMAICA_ADDS64(j2,JAMAICA_INT64_CONST_1);
l10:
 if ((JAMAICA_GT_S64(j0,j3) ?+1:(JAMAICA_EQ_S64(j0,j3)?0:-1))<0) { goto l15; }
 n3=n1;
 if (n0==0) { goto l13; }
 n4=1;
 goto l14;
l13:
 n3=n1;
 n4=2;
l14:
 n1=JAMAICA_ADDS32(n3,n4);
l15:
 n1=JAMAICA_MULS32(12,n1);
 n1=JAMAICA_ADDS32(n1,373);
 n3=n1;
 if (n1<=0) { goto l17; }
 n3=JAMAICA_DIVS32(n3,367);
 goto l18;
l17:
{ jamaica_ref m=jam_mtd_sun_util_calendar_CalenUtils_5_floorivide3;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,n1,367);
}
 n3=n1;
l18:
 b0=JAMAICA_BLOCK_GET_DATA32(jam_fld_sun_util_calendar_BaseCendar_1_ACCUMMONTH2,7).r;
 r1=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 n1=n3;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n4=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n5=((n4>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n1))>=((jamaica_uint32)(n5))) { goto LABEL_tAIOOBE; }
 n4=(n4&15);
 JAMAICA_GET_ARRAY32(r1,n1,n4);
 j2=JAMAICA_INT32_TO_INT64(n4);
 j1=JAMAICA_ADDS64(j1,j2);
 j2=j1;
 if (n0==0) { goto l21; }
 if (n1<3) { goto l21; }
 j2=JAMAICA_ADDS64(j1,JAMAICA_INT64_CONST_1);
l21:
 n1=JAMAICA_ADDS32(JAMAICA_INT64_TO_INT32(JAMAICA_SUBS64(j0,j2)),1);
{ jamaica_ref m=jam_mtd_sun_util_calendar_BaseCendar_1_getDadDate12;
ct->calledMethod=m;
 n4=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_int64))JAMAICA_BLOCK_GET_P(m,4))(ct,j0);
}
 n5=n4;
 if (JAMAICA_BLOCK_GET_DATA32(jam_fld_sun_util_calendar_BaseCendar_1__0002abled4,4).i!=0) { goto l24; }
 if (n4>0) { goto l24; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r1=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_AsserError_8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r1==JAMAICA_NULL) { goto LABEL_tOOME; }
 r2=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r2==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r2);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=jam_comp_java_lang_Strinilder_140_append4(ct,r2,jam_str_sun_util_calendar_BaseCendar_174);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=jam_comp_java_lang_Strinilder_140_append13(ct,r2,n4);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=jam_comp_java_lang_Strinilder_140_toString20(ct,r2);
{ jamaica_ref m=jam_mtd_java_lang_AsserError_8__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,r2);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r1);
l24:
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 n4=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_util_calendar_BaseC4Date_2_setNodYear4,1).i>>20) &  ((jamaica_int32)4095));
 n6=(JAMAICA_BLOCK_GET_DATA32(r1,3).i&15);
 JAMAICA_GET_REF_ARRAY(r1,n4,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,n2);
}
 n2=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_util_calendar_CalenrDate_3_setMonth10,1).i>>20) &  ((jamaica_int32)4095));
 JAMAICA_GET_REF_ARRAY(r1,n2,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 r3=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,n3);
}
 n2=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_util_calendar_CalenrDate_3_setDaMonth13,1).i>>20) &  ((jamaica_int32)4095));
 JAMAICA_GET_REF_ARRAY(r1,n2,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 r3=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,n1);
}
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_util_calendar_CalenrDate_3_setDafWeek36,1).i>>20) &  ((jamaica_int32)4095));
 JAMAICA_GET_REF_ARRAY(r1,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,n5);
}
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_util_calendar_CalenrDate_3_setLepYear8,1).i>>20) &  ((jamaica_int32)4095));
 JAMAICA_GET_REF_ARRAY(r1,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,n0);
}
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_util_calendar_CalenrDate_3_setNolized37,1).i>>20) &  ((jamaica_int32)4095));
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_REF_ARRAY(r1,n0,r1);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,1);
}
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-8;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
LABEL_tCCE:    jamaica_throwClassCastExc(ct);       return;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_sun_util_calendar_BaseCendar_1_getGrdDate13(jamaica_thread *ct,jamaica_ref r0,jamaica_int64 j0) {
 jamaica_int32 tp;
 jamaica_int32 n0=0,n2=0,n3=0,n4=0,n1=0;
 jamaica_int64 j1=JAMAICA_INT64_CONST_0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+0;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 j1=j0;
 if ((JAMAICA_GT_S64(j1,JAMAICA_INT64_CONST_0) ?+1:(JAMAICA_EQ_S64(j1,JAMAICA_INT64_CONST_0)?0:-1))<=0) { goto l4; }
 j0=JAMAICA_SUBS64(j0,JAMAICA_INT64_CONST_1);
 n0=JAMAICA_INT64_TO_INT32(JAMAICA_DIVS64(j0,((jamaica_int64) 0x23ab1LL)));
 n1=JAMAICA_INT64_TO_INT32(JAMAICA_MODS64(j0,((jamaica_int64) 0x23ab1LL)));
 n2=JAMAICA_DIVS32(n1,36524);
 n1=JAMAICA_MODS32(n1,36524);
 n3=JAMAICA_DIVS32(n1,1461);
 n1=JAMAICA_MODS32(n1,1461);
 n4=JAMAICA_DIVS32(n1,365);
 goto l5;
l4:
 j0=JAMAICA_SUBS64(j1,JAMAICA_INT64_CONST_1);
{ jamaica_ref m=jam_mtd_sun_util_calendar_CalenUtils_5_floorivide2;
ct->calledMethod=m;
 j1=((jamaica_int64(JBICALL *)(jamaica_thread *,jamaica_int64,jamaica_int64))JAMAICA_BLOCK_GET_P(m,4))(ct,j0,((jamaica_int64) 0x23ab1LL));
}
 n0=JAMAICA_INT64_TO_INT32(j1);
{ jamaica_ref m=jam_mtd_sun_util_calendar_CalenUtils_5_mod5;
ct->calledMethod=m;
 j0=((jamaica_int64(JBICALL *)(jamaica_thread *,jamaica_int64,jamaica_int64))JAMAICA_BLOCK_GET_P(m,4))(ct,j0,((jamaica_int64) 0x23ab1LL));
}
 n1=JAMAICA_INT64_TO_INT32(j0);
{ jamaica_ref m=jam_mtd_sun_util_calendar_CalenUtils_5_floorivide3;
ct->calledMethod=m;
 n2=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,n1,36524);
}
{ jamaica_ref m=jam_mtd_sun_util_calendar_CalenUtils_5_mod6;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,n1,36524);
}
{ jamaica_ref m=jam_mtd_sun_util_calendar_CalenUtils_5_floorivide3;
ct->calledMethod=m;
 n3=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,n1,1461);
}
{ jamaica_ref m=jam_mtd_sun_util_calendar_CalenUtils_5_mod6;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,n1,1461);
}
{ jamaica_ref m=jam_mtd_sun_util_calendar_CalenUtils_5_floorivide3;
ct->calledMethod=m;
 n4=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,n1,365);
}
{ jamaica_ref m=jam_mtd_sun_util_calendar_CalenUtils_5_mod6;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,n1,365);
}
l5:
 n0=JAMAICA_MULS32(400,n0);
 n1=JAMAICA_MULS32(100,n2);
 n0=JAMAICA_ADDS32(n0,n1);
 n1=JAMAICA_MULS32(4,n3);
 n0=JAMAICA_ADDS32(n0,n1);
 n0=JAMAICA_ADDS32(n0,n4);
 n1=n0;
 if (n2==4) { goto l8; }
 if (n4==4) { goto l8; }
 n1=JAMAICA_ADDS32(n0,1);
l8:
 return n1;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_sun_util_calendar_CalenrDate_3_isNorlized27(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+1;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

l2:
 ct->m.cli-=1;
 return ((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,3).b[1]);
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT jamaica_ref JBICALL jam_comp_sun_util_calendar_CalenrDate_3_getZone30(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+1;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

l2:
 ct->m.cli-=1;
 return JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r,2).r;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_sun_util_calendar_ZoneInfo_15_getOffsets6(jamaica_thread *ct,jamaica_ref r4,jamaica_int64 j1,jamaica_ref r5,jamaica_int32 n10) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r2=JAMAICA_NULL,r3=JAMAICA_NULL,r6=JAMAICA_NULL,r7=JAMAICA_NULL,r8=JAMAICA_NULL;
 jamaica_int32 n11=0,n12=0,n1=0,n4=0,n5=0,n8=0,n9=0,n13=0,n14=0,n15=0,n16=0,n17=0;
 jamaica_int64 j3=JAMAICA_INT64_CONST_0,j4=JAMAICA_INT64_CONST_0,j6=JAMAICA_INT64_CONST_0,j2=JAMAICA_INT64_CONST_0,j5=JAMAICA_INT64_CONST_0;
 jamaica_ref b2=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+6;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r6=r4;
 b2=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 r7=JAMAICA_BLOCK_GET_DATA32(b2,3).r;
 if (r7!=JAMAICA_NULL) { goto l6; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_util_calendar_ZoneInfo_15_getLaffset10;
ct->calledMethod=m;
 n11=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4);
}
 n12=n11;
 if (r5==JAMAICA_NULL) { goto l5; }
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 n13=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n14=((n13>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 n13=(n13&15);
 JAMAICA_SET_ARRAY32(r5,0,n11);
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_ARRAY32(r5,1,0);
l5:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 ct->m.cli-=6;
 return n12;
l6:
 j2=JAMAICA_SUBS64(j1,JAMAICA_INT32_TO_INT64(JAMAICA_BLOCK_GET_DATA32(r6,5).i));
 j1=j2;
 n11=n10;
 n12=0;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 n13=JAMAICA_SUBS32(((JAMAICA_BLOCK_GET_DATA32(r7,3).i>>4) &  ((jamaica_int32)268435455)),1);
 r7=r6;
 b2=JAMAICA_NULL;
 r1=JAMAICA_NULL;
 n1=0;
 n14=0;
 r2=JAMAICA_NULL;
 n5=0;
 n4=0;
 r3=JAMAICA_NULL;
 n8=0;
 n9=0;
 if (r7==JAMAICA_NULL) { goto l9; }
 b2=JAMAICA_BLOCK_GET_DATA32(r7,7).r;
 r1=JAMAICA_BLOCK_GET_DATA32(b2,3).r;
 if (r1==JAMAICA_NULL) { goto l9; }
 n14=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n1=((n14>>4) &  ((jamaica_int32)268435455));
 n14=(n14&15);
l9:
 n15=n11;
 if (r7==JAMAICA_NULL) { goto l12; }
 r2=JAMAICA_BLOCK_GET_DATA32(b2,4).r;
 if (r2==JAMAICA_NULL) { goto l12; }
 n4=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n5=((n4>>4) &  ((jamaica_int32)268435455));
 n4=(n4&15);
l12:
 n16=n11;
 r8=r6;
 if (r8==JAMAICA_NULL) { goto l15; }
 b2=JAMAICA_BLOCK_GET_DATA32(r8,7).r;
 r3=JAMAICA_BLOCK_GET_DATA32(b2,4).r;
 if (r3==JAMAICA_NULL) { goto l15; }
 n11=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n8=((n11>>4) &  ((jamaica_int32)268435455));
 n9=(n11&15);
l15:
 if (r7==JAMAICA_NULL) { goto l36; }
 if (r1==JAMAICA_NULL) { goto l36; }
 if (r2==JAMAICA_NULL) { goto l36; }
 if (r8==JAMAICA_NULL) { goto l36; }
 if (r3==JAMAICA_NULL) { goto l36; }
 if (n14!=0) { goto l36; }
 if (n4!=0) { goto l36; }
 if (n9!=0) { goto l36; }
l23:
 n11=n12;
 if (n12>n13) { goto l49; }
 n11=n12;
 n17=n13;
 n11=JAMAICA_ADDS32(n11,n17);
 n11=JAMAICA_DIVS32(n11,2);
 n17=n11;
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n1))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY64_D0(r1,n11,j3);
 j4=j3;
 j5=JAMAICA_SHIFTR_S64(j3,12);
 j6=j5;
 if (n15==0) { goto l26; }
 n11=JAMAICA_INT64_TO_INT32(JAMAICA_ANDS64(j3,((jamaica_int64) 0xfLL)));
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n5))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r2,n11,n11);
 j6=JAMAICA_ADDS64(j5,JAMAICA_INT32_TO_INT64(n11));
l26:
 if (n16!=1) { goto l29; }
 j3=JAMAICA_USHIFTR_S64(j4,4);
 j3=JAMAICA_ANDS64(j3,((jamaica_int64) 0xfLL));
 n11=JAMAICA_INT64_TO_INT32(j3);
 if (n11==0) { goto l29; }
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n8))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r3,n11,n11);
 j6=JAMAICA_SUBS64(j6,JAMAICA_INT32_TO_INT64(n11));
l29:
 n11=(JAMAICA_GT_S64(j6,j2) ?+1:(JAMAICA_EQ_S64(j6,j2)?0:-1));
 if (n11>=0) { goto l32; }
 n12=JAMAICA_ADDS32(n17,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l23; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 goto l23;
l32:
 if (n11<=0) { goto l35; }
 n13=JAMAICA_SUBS32(n17,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l23; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 goto l23;
l35:
 n11=n17;
 goto l52;
l36:
 n11=n12;
 if (n12>n13) { goto l49; }
 n11=n12;
 n17=n13;
 n11=JAMAICA_ADDS32(n11,n17);
 n11=JAMAICA_DIVS32(n11,2);
 n17=n11;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n1))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY64(r1,n11,j3);
 j4=j3;
 j5=JAMAICA_SHIFTR_S64(j3,12);
 j6=j5;
 if (n15==0) { goto l39; }
 n11=JAMAICA_INT64_TO_INT32(JAMAICA_ANDS64(j3,((jamaica_int64) 0xfLL)));
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n5))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r2,n11,n11);
 j6=JAMAICA_ADDS64(j5,JAMAICA_INT32_TO_INT64(n11));
l39:
 if (n16!=1) { goto l42; }
 j3=JAMAICA_USHIFTR_S64(j4,4);
 j3=JAMAICA_ANDS64(j3,((jamaica_int64) 0xfLL));
 n11=JAMAICA_INT64_TO_INT32(j3);
 if (n11==0) { goto l42; }
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n8))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r3,n11,n11);
 j6=JAMAICA_SUBS64(j6,JAMAICA_INT32_TO_INT64(n11));
l42:
 n11=(JAMAICA_GT_S64(j6,j2) ?+1:(JAMAICA_EQ_S64(j6,j2)?0:-1));
 if (n11>=0) { goto l45; }
 n12=JAMAICA_ADDS32(n17,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l36; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 goto l36;
l45:
 if (n11<=0) { goto l48; }
 n13=JAMAICA_SUBS32(n17,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l36; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 goto l36;
l48:
 n11=n17;
 goto l52;
l49:
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r6,7).r,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (n11<((JAMAICA_BLOCK_GET_DATA32(r6,3).i>>4) &  ((jamaica_int32)268435455))) { goto l51; }
 n11=n12;
 goto l52;
l51:
 n11=JAMAICA_SUBS32(n11,1);
l52:
 n12=n11;
 if (n11>=0) { goto l56; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_util_calendar_ZoneInfo_15_getLaffset10;
ct->calledMethod=m;
 n11=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4);
}
 n12=n11;
 if (r5==JAMAICA_NULL) { goto l55; }
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 n13=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n14=((n13>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 n13=(n13&15);
 JAMAICA_SET_ARRAY32(r5,0,n11);
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_ARRAY32(r5,1,0);
l55:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 ct->m.cli-=6;
 return n12;
l56:
 r6=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r6,7).r,3).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (n11>=((JAMAICA_BLOCK_GET_DATA32(r7,3).i>>4) &  ((jamaica_int32)268435455))) { goto l63; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 b2=JAMAICA_BLOCK_GET_DATA32(r4,7).r;
 r6=JAMAICA_BLOCK_GET_DATA32(b2,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n11=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 n13=((n11>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 n11=(n11&15);
 JAMAICA_GET_ARRAY64(r6,n12,j1);
 r6=JAMAICA_BLOCK_GET_DATA32(b2,4).r;
 n11=JAMAICA_INT64_TO_INT32(JAMAICA_ANDS64(j1,((jamaica_int64) 0xfLL)));
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n12=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 n13=((n12>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 n12=(n12&15);
 JAMAICA_GET_ARRAY32(r6,n11,n11);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 n11=JAMAICA_ADDS32(n11,JAMAICA_BLOCK_GET_DATA32(r4,5).i);
 if (r5==JAMAICA_NULL) { goto l62; }
 j1=JAMAICA_USHIFTR_S64(j1,4);
 j1=JAMAICA_ANDS64(j1,((jamaica_int64) 0xfLL));
 n14=JAMAICA_INT64_TO_INT32(j1);
 if (n14!=0) { goto l60; }
 n12=0;
 goto l61;
l60:
 if (((jamaica_uint32)(n14))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r6,n14,n12);
l61:
 n13=JAMAICA_SUBS32(n11,n12);
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 n14=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n10=((n14>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 n14=(n14&15);
 JAMAICA_SET_ARRAY32(r5,0,n13);
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_ARRAY32(r5,1,n12);
l62:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 ct->m.cli-=6;
 return n11;
l63:
{ jamaica_ref m=jam_mtd_sun_util_calendar_ZoneInfo_15_getLatRule16;
ct->calledMethod=m;
 r7=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r6);
}
 r1=r7;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r7==JAMAICA_NULL) { goto l72; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n11=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_SimpleZone_181_getRaffset9,1).i>>20) &  ((jamaica_int32)4095));
 n12=(JAMAICA_BLOCK_GET_DATA32(r6,3).i&15);
 JAMAICA_GET_REF_ARRAY(r6,n11,r6);
{ jamaica_ref m=r6;
ct->calledMethod=m;
 n11=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1);
}
 n13=n11;
 j2=j1;
 if (n10==0) { goto l66; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 j2=JAMAICA_SUBS64(j1,JAMAICA_INT32_TO_INT64(JAMAICA_BLOCK_GET_DATA32(r4,4).i));
l66:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 n11=JAMAICA_BLOCK_GET_DATA32(jam_class_java_util_Date_60,5).i;
 if (((n11>>20) |  ((n11>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_util_Date_60,-1);
 }
 if (ct->plainAlloc) {
  r4 = jamaicaGC_PlainAllocHeadBlock(ct,10);
  if (r4 != JAMAICA_NULL) {
   JAMAICA_BLOCK_GET_R(r4,1)=jam_class_java_util_Date_60;
  }
 } else {
 r4=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_util_Date_60);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r4==JAMAICA_NULL) { goto LABEL_tOOME; }
{ jamaica_ref m=jam_mtd_java_util_Date_60__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int64))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,j2);
}
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n11=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_SimpleZone_181_inDaytTime12,1).i>>20) &  ((jamaica_int32)4095));
 n12=(JAMAICA_BLOCK_GET_DATA32(r6,3).i&15);
 JAMAICA_GET_REF_ARRAY(r6,n11,r6);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r6;
ct->calledMethod=m;
 n11=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,r4);
}
 if (n11==0) { goto l68; }
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n11=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_util_SimpleZone_181_getDSvings10,1).i>>20) &  ((jamaica_int32)4095));
 n12=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n11,r4);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r4;
ct->calledMethod=m;
 n11=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1);
}
 n12=n11;
 goto l69;
l68:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 n12=0;
l69:
 n11=n12;
 if (r5==JAMAICA_NULL) { goto l71; }
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 n14=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n10=((n14>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 n14=(n14&15);
 JAMAICA_SET_ARRAY32(r5,0,n13);
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_ARRAY32(r5,1,n12);
l71:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 ct->m.cli-=6;
 return JAMAICA_ADDS32(n13,n11);
l72:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_util_calendar_ZoneInfo_15_getLaffset10;
ct->calledMethod=m;
 n11=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r6);
}
 n13=n11;
 if (r5==JAMAICA_NULL) { goto l74; }
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 n12=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n14=((n12>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 n12=(n12&15);
 JAMAICA_SET_ARRAY32(r5,0,n11);
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 JAMAICA_SET_ARRAY32(r5,1,0);
l74:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 ct->m.cli-=6;
 return n13;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return 0;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_sun_util_calendar_ZoneInfo_15_getTrIndex7(jamaica_thread *ct,jamaica_ref r0,jamaica_int64 j0,jamaica_int32 n3) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r2=JAMAICA_NULL,r3=JAMAICA_NULL,r4=JAMAICA_NULL,r5=JAMAICA_NULL;
 jamaica_int32 n10=0,n11=0,n0=0,n1=0,n4=0,n5=0,n7=0,n8=0,n13=0,n12=0,n14=0;
 jamaica_int64 j1=JAMAICA_INT64_CONST_0,j2=JAMAICA_INT64_CONST_0,j4=JAMAICA_INT64_CONST_0,j3=JAMAICA_INT64_CONST_0;
 jamaica_ref b0=JAMAICA_NULL;
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+4;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

l2:
 n10=0;
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,3).r;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 n11=JAMAICA_SUBS32(((JAMAICA_BLOCK_GET_DATA32(r4,3).i>>4) &  ((jamaica_int32)268435455)),1);
 r4=r0;
 n1=0;
 n0=0;
 n5=0;
 n4=0;
 n8=0;
 n7=0;
 b0=JAMAICA_BLOCK_GET_DATA32(r4,7).r;
 r1=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 if (r1==JAMAICA_NULL) { goto l4; }
 n0=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n1=((n0>>4) &  ((jamaica_int32)268435455));
 n0=(n0&15);
l4:
 n12=n3;
 r2=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 if (r2==JAMAICA_NULL) { goto l6; }
 n4=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n5=((n4>>4) &  ((jamaica_int32)268435455));
 n4=(n4&15);
l6:
 r5=r0;
 b0=JAMAICA_BLOCK_GET_DATA32(r5,7).r;
 r3=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 if (r3==JAMAICA_NULL) { goto l8; }
 n7=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n8=((n7>>4) &  ((jamaica_int32)268435455));
 n7=(n7&15);
l8:
 if (r1==JAMAICA_NULL) { goto l27; }
 if (r2==JAMAICA_NULL) { goto l27; }
 if (r3==JAMAICA_NULL) { goto l27; }
 if (n0!=0) { goto l27; }
 if (n4!=0) { goto l27; }
 if (n7!=0) { goto l27; }
l14:
 n13=n10;
 if (n10>n11) { goto l40; }
 n13=n10;
 n14=n11;
 n13=JAMAICA_ADDS32(n13,n14);
 n13=JAMAICA_DIVS32(n13,2);
 n14=n13;
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n1))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY64_D0(r1,n13,j1);
 j2=j1;
 j3=JAMAICA_SHIFTR_S64(j1,12);
 j4=j3;
 if (n12==0) { goto l17; }
 n13=JAMAICA_INT64_TO_INT32(JAMAICA_ANDS64(j1,((jamaica_int64) 0xfLL)));
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n5))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r2,n13,n13);
 j4=JAMAICA_ADDS64(j3,JAMAICA_INT32_TO_INT64(n13));
l17:
 if (n3!=1) { goto l20; }
 j1=JAMAICA_USHIFTR_S64(j2,4);
 j1=JAMAICA_ANDS64(j1,((jamaica_int64) 0xfLL));
 n13=JAMAICA_INT64_TO_INT32(j1);
 if (n13==0) { goto l20; }
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n8))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r3,n13,n13);
 j4=JAMAICA_SUBS64(j4,JAMAICA_INT32_TO_INT64(n13));
l20:
 n13=(JAMAICA_GT_S64(j4,j0) ?+1:(JAMAICA_EQ_S64(j4,j0)?0:-1));
 if (n13>=0) { goto l23; }
 n10=JAMAICA_ADDS32(n14,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l14; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 goto l14;
l23:
 if (n13<=0) { goto l26; }
 n11=JAMAICA_SUBS32(n14,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l14; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 goto l14;
l26:
 ct->m.cli-=4;
 return n14;
l27:
 n13=n10;
 if (n10>n11) { goto l40; }
 n13=n10;
 n14=n11;
 n13=JAMAICA_ADDS32(n13,n14);
 n13=JAMAICA_DIVS32(n13,2);
 n14=n13;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n1))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY64(r1,n13,j1);
 j2=j1;
 j3=JAMAICA_SHIFTR_S64(j1,12);
 j4=j3;
 if (n12==0) { goto l30; }
 n13=JAMAICA_INT64_TO_INT32(JAMAICA_ANDS64(j1,((jamaica_int64) 0xfLL)));
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n5))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r2,n13,n13);
 j4=JAMAICA_ADDS64(j3,JAMAICA_INT32_TO_INT64(n13));
l30:
 if (n3!=1) { goto l33; }
 j1=JAMAICA_USHIFTR_S64(j2,4);
 j1=JAMAICA_ANDS64(j1,((jamaica_int64) 0xfLL));
 n13=JAMAICA_INT64_TO_INT32(j1);
 if (n13==0) { goto l33; }
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n8))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r3,n13,n13);
 j4=JAMAICA_SUBS64(j4,JAMAICA_INT32_TO_INT64(n13));
l33:
 n13=(JAMAICA_GT_S64(j4,j0) ?+1:(JAMAICA_EQ_S64(j4,j0)?0:-1));
 if (n13>=0) { goto l36; }
 n10=JAMAICA_ADDS32(n14,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l27; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 goto l27;
l36:
 if (n13<=0) { goto l39; }
 n11=JAMAICA_SUBS32(n14,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l27; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 goto l27;
l39:
 ct->m.cli-=4;
 return n14;
l40:
 r0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,3).r;
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (n13<((JAMAICA_BLOCK_GET_DATA32(r0,3).i>>4) &  ((jamaica_int32)268435455))) { goto l42; }
 ct->m.cli-=4;
 return n10;
l42:
 ct->m.cli-=4;
 return JAMAICA_SUBS32(n13,1);
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
#else
#error 'jamaica.h' not found!
#endif

#ifdef __cplusplus
}
#endif

