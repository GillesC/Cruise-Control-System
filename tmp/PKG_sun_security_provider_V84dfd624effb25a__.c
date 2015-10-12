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


JBIEXPORT void JBICALL jam_comp_sun_security_provider_ByteAccess_0_b2iBig5(jamaica_thread *ct,jamaica_ref r1,jamaica_int32 n13,jamaica_ref r0,jamaica_int32 n14,jamaica_int32 n0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r3=JAMAICA_NULL;
 jamaica_int32 n17=0,n22=0,n11=0,n15=0,n16=0,n18=0,n19=0,n20=0,n21=0;
 jamaica_ref b1=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+3;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 if (JAMAICA_BLOCK_GET_DATA32(jam_fld_sun_security_provider_ByteAccess_0_littligned1,4).i==0) { goto l11; }
 n15=JAMAICA_ADDS32(n13,JAMAICA_BLOCK_GET_DATA32(jam_fld_sun_security_provider_ByteAccess_0_byteAayOfs3,4).i);
 n13=n15;
 n0=JAMAICA_ADDS32(n0,n15);
 b1=JAMAICA_BLOCK_GET_DATA32(jam_fld_sun_security_provider_ByteAccess_0_unsafe0,7).r;
 n11=0;
 n15=0;
 if (r0==JAMAICA_NULL) { goto l8; }
 n15=JAMAICA_BLOCK_GET_DATA32(r0,3).i;
 n11=((n15>>4) &  ((jamaica_int32)268435455));
 n15=(n15&15);
 if (n15!=0) { goto l8; }
l5:
 if (n13>=n0) { goto l33; }
 n16=n14;
 n14=JAMAICA_ADDS32(n16,1);
 r3=JAMAICA_BLOCK_GET_DATA32(b1,4).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_misc_Unsafe_98_getInt3;
ct->calledMethod=m;
 n17=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int64))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r1,JAMAICA_INT32_TO_INT64(n13));
}
 n18=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Integer_71,5).i;
 if (((n18>>20) |  ((n18>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Integer_71,-1);
 }
{ jamaica_ref m=jam_mtd_java_lang_Integer_71_reverBytes28;
ct->calledMethod=m;
 n17=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,n17);
}
 if (((jamaica_uint32)(n16))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32_D0(r0,n16,n17);
 n13=JAMAICA_ADDS32(n13,4);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l5; }
 jamaicaScheduler_syncPointFull(ct);
 goto l5;
l8:
 if (n13>=n0) { goto l33; }
 n16=n14;
 n14=JAMAICA_ADDS32(n16,1);
 r3=JAMAICA_BLOCK_GET_DATA32(b1,4).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_misc_Unsafe_98_getInt3;
ct->calledMethod=m;
 n17=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int64))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r1,JAMAICA_INT32_TO_INT64(n13));
}
 n18=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Integer_71,5).i;
 if (((n18>>20) |  ((n18>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Integer_71,-1);
 }
{ jamaica_ref m=jam_mtd_java_lang_Integer_71_reverBytes28;
ct->calledMethod=m;
 n17=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,n17);
}
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n16))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r0,n16,n17);
 n13=JAMAICA_ADDS32(n13,4);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l8; }
 jamaicaScheduler_syncPointFull(ct);
 goto l8;
l11:
 if (JAMAICA_BLOCK_GET_DATA32(jam_fld_sun_security_provider_ByteAccess_0_bigEndian2,4).i==0) { goto l21; }
 n15=n13;
 if ((n15&3)!=0) { goto l21; }
 n15=JAMAICA_ADDS32(n15,JAMAICA_BLOCK_GET_DATA32(jam_fld_sun_security_provider_ByteAccess_0_byteAayOfs3,4).i);
 n13=n15;
 n0=JAMAICA_ADDS32(n0,n15);
 b1=JAMAICA_BLOCK_GET_DATA32(jam_fld_sun_security_provider_ByteAccess_0_unsafe0,7).r;
 n11=0;
 n15=0;
 if (r0==JAMAICA_NULL) { goto l18; }
 n15=JAMAICA_BLOCK_GET_DATA32(r0,3).i;
 n11=((n15>>4) &  ((jamaica_int32)268435455));
 n15=(n15&15);
 if (n15!=0) { goto l18; }
l15:
 if (n13>=n0) { goto l33; }
 n16=n14;
 n14=JAMAICA_ADDS32(n16,1);
 r3=JAMAICA_BLOCK_GET_DATA32(b1,4).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_misc_Unsafe_98_getInt3;
ct->calledMethod=m;
 n17=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int64))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r1,JAMAICA_INT32_TO_INT64(n13));
}
 if (((jamaica_uint32)(n16))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32_D0(r0,n16,n17);
 n13=JAMAICA_ADDS32(n13,4);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l15; }
 jamaicaScheduler_syncPointFull(ct);
 goto l15;
l18:
 if (n13>=n0) { goto l33; }
 n16=n14;
 n14=JAMAICA_ADDS32(n16,1);
 r3=JAMAICA_BLOCK_GET_DATA32(b1,4).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_misc_Unsafe_98_getInt3;
ct->calledMethod=m;
 n17=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int64))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r1,JAMAICA_INT32_TO_INT64(n13));
}
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n16))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r0,n16,n17);
 n13=JAMAICA_ADDS32(n13,4);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l18; }
 jamaicaScheduler_syncPointFull(ct);
 goto l18;
l21:
 n0=JAMAICA_ADDS32(n0,n13);
 n11=0;
 n15=0;
 r3=JAMAICA_NULL;
 n17=0;
 n16=0;
 if (r1==JAMAICA_NULL) { goto l23; }
 n15=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n11=((n15>>4) &  ((jamaica_int32)268435455));
 n15=(n15&15);
 r3=JAMAICA_BLOCK_GET_R(r1,1);
l23:
 if (r0==JAMAICA_NULL) { goto l30; }
 n16=JAMAICA_BLOCK_GET_DATA32(r0,3).i;
 n17=((n16>>4) &  ((jamaica_int32)268435455));
 n16=(n16&15);
 if (r1==JAMAICA_NULL) { goto l30; }
 if (n15!=0) { goto l30; }
 if (n16!=0) { goto l30; }
l27:
 if (n13>=n0) { goto l33; }
 n18=n14;
 n14=JAMAICA_ADDS32(n18,1);
 n19=JAMAICA_ADDS32(n13,3);
 if (((jamaica_uint32)(n19))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8_D0(r1,n19,n19);
 n20=JAMAICA_ADDS32(n13,2);
 if (((jamaica_uint32)(n20))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8_D0(r1,n20,n20);
 n21=JAMAICA_ADDS32(n13,1);
 if (((jamaica_uint32)(n21))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8_D0(r1,n21,n21);
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8_D0(r1,n13,n22);
 n19=((((n19&255)|((n20&255)<<8))|((n21&255)<<16))|(n22<<24));
 if (((jamaica_uint32)(n18))>=((jamaica_uint32)(n17))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32_D0(r0,n18,n19);
 n13=JAMAICA_ADDS32(n13,4);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l27; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 goto l27;
l30:
 if (n13>=n0) { goto l33; }
 n18=n14;
 n14=JAMAICA_ADDS32(n18,1);
 n19=JAMAICA_ADDS32(n13,3);
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n19))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8(r1,n19,n19);
 n20=JAMAICA_ADDS32(n13,2);
 if (((jamaica_uint32)(n20))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8(r1,n20,n20);
 n21=JAMAICA_ADDS32(n13,1);
 if (((jamaica_uint32)(n21))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8(r1,n21,n21);
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8(r1,n13,n22);
 n19=((((n19&255)|((n20&255)<<8))|((n21&255)<<16))|(n22<<24));
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n18))>=((jamaica_uint32)(n17))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r0,n18,n19);
 n13=JAMAICA_ADDS32(n13,4);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l30; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 goto l30;
l33:
 
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
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_sun_security_provider_DigestBase_1_enginpdate3(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r2=JAMAICA_NULL,r1=JAMAICA_NULL;
 jamaica_int32 n1=0,n2=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+2;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r1=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (JAMAICA_BLOCK_GET_DATA32(r1,4).r!=JAMAICA_NULL) { goto l4; }
 r2=jamaicaInterpreter_allocSimpleArray(ct,1,ct->vm->array_class[8]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r1,4).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r1,4).r=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r1,4).r=new_ref;}
#endif

l4:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r1=JAMAICA_BLOCK_GET_DATA32(r0,4).r;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n1=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(((n1>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n2=(n1&15);
 JAMAICA_SET_ARRAY8(r1,0,n0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jam_comp_sun_security_provider_DigestBase_1_enginpdate4(ct,r0,r1,0,1);
 ct->m.cli-=2;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_sun_security_provider_DigestBase_1_enginpdate4(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1,jamaica_int32 n4,jamaica_int32 n5) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r7=JAMAICA_NULL,r4=JAMAICA_NULL,r5=JAMAICA_NULL,r6=JAMAICA_NULL;
 jamaica_int32 n6=0,n7=0,n8=0;
 jamaica_ref b1=JAMAICA_NULL,b2=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+5;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 n6=n5;
 if (n6!=0) { goto l4; }
 
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

 ct->m.cli-=5;
 return;
l4:
 n7=n4;
 if (n7<0) { goto l7; }
 if (n6<0) { goto l7; }
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (n7<=JAMAICA_SUBS32(((JAMAICA_BLOCK_GET_DATA32(r1,3).i>>4) &  ((jamaica_int32)268435455)),n6)) { goto l8; }
l7:
 
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

 r1=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Arrayption_6);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r1==JAMAICA_NULL) { goto LABEL_tOOME; }
{ jamaica_ref m=jam_mtd_java_lang_Arrayption_6__00030003e0;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r1);
l8:
 r4=r0;
 b2=JAMAICA_BLOCK_GET_DATA32(r4,7).r;
 if ((JAMAICA_GT_S64(JAMAICA_BLOCK_GET_DATA64(b2,6).l,JAMAICA_INT64_CONST_0) ?+1:(JAMAICA_EQ_S64(JAMAICA_BLOCK_GET_DATA64(b2,6).l,JAMAICA_INT64_CONST_0)?0:-1))>=0) { goto l10; }
{ jamaica_ref m=jam_mtd_sun_security_provider_DigestBase_1_enginReset5;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4);
}
l10:
 r4=r0;
 b2=JAMAICA_BLOCK_GET_DATA32(r4,7).r;
 n6=n5;
 JAMAICA_BLOCK_GET_DATA64(b2,6).l = JAMAICA_ADDS64(JAMAICA_BLOCK_GET_DATA64(b2,6).l,JAMAICA_INT32_TO_INT64(n6));
 n7=JAMAICA_BLOCK_GET_DATA32(b2,4).i;
 if (n7==0) { goto l16; }
 n8=JAMAICA_BLOCK_GET_DATA32(b2,2).i;
 n7=JAMAICA_SUBS32(n8,n7);
 n8=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n8>>20) |  ((n8>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n8=n6;
 if (n6>n7) { goto l13; }
 n6=n8;
 goto l14;
l13:
 n6=n7;
l14:
 r4=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 b2=JAMAICA_BLOCK_GET_DATA32(r4,7).r;
 Jam_java_lang_System_arraycopy(ct,r1,n4,JAMAICA_BLOCK_GET_DATA32(b2,3).r,JAMAICA_BLOCK_GET_DATA32(b2,4).i,n6);
 JAMAICA_BLOCK_GET_DATA32(b2,4).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b2,4).i,n6);
 n4=JAMAICA_ADDS32(n4,n6);
 n5=JAMAICA_SUBS32(n5,n6);
 if (JAMAICA_BLOCK_GET_DATA32(b2,4).i<JAMAICA_BLOCK_GET_DATA32(b2,2).i) { goto l16; }
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n6=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_security_provider_DigestBase_1_implCpress8,1).i>>20) &  ((jamaica_int32)4095));
 n7=(JAMAICA_BLOCK_GET_DATA32(r5,3).i&15);
 JAMAICA_GET_REF_ARRAY(r5,n6,r5);
{ jamaica_ref m=r5;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,JAMAICA_BLOCK_GET_DATA32(b2,3).r,0);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b2,4).i = 0;
l16:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r4=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 b2=JAMAICA_BLOCK_GET_DATA32(r4,7).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r5=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 r6=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 r0=JAMAICA_BLOCK_GET_R(r5,1);
 r0=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n6=JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_security_provider_DigestBase_1_implCpress8,1).i;
 n6=((n6>>20) &  ((jamaica_int32)4095));
 n7=JAMAICA_BLOCK_GET_DATA32(r0,3).i;
 n7=(n7&15);
 b1=JAMAICA_BLOCK_GET_DATA32(r5,7).r;
l17:
 n8=n5;
 if (n8<JAMAICA_BLOCK_GET_DATA32(b2,2).i) { goto l20; }
 JAMAICA_GET_REF_ARRAY(r0,n6,r7);
{ jamaica_ref m=r7;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r5,r6,n4);
}
 n8=JAMAICA_BLOCK_GET_DATA32(b1,2).i;
 n5=JAMAICA_SUBS32(n5,n8);
 n4=JAMAICA_ADDS32(n4,n8);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l17; }
 jamaicaScheduler_syncPointFull(ct);
 goto l17;
l20:
 
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

 if (n8<=0) { goto l22; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 Jam_java_lang_System_arraycopy(ct,r1,n4,JAMAICA_BLOCK_GET_DATA32(b2,3).r,0,n8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b2,4).i = n8;
l22:
 
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

 ct->m.cli-=5;
 return;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_sun_security_provider_SHA_30_implCpress5(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r6,jamaica_int32 n15) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r7=JAMAICA_NULL;
 jamaica_int32 n21=0,n10=0,n13=0,n16=0,n17=0,n18=0,n19=0,n20=0;
 jamaica_ref b8=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+3;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r,0).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 n16=JAMAICA_BLOCK_GET_DATA32(jam_class_sun_security_provider_ByteAccess_0,5).i;
 if (((n16>>20) |  ((n16>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_sun_security_provider_ByteAccess_0,-1);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_security_provider_ByteAccess_0_b2iBig646;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r6,n15,r7);
}
 n15=16;
 r6=r0;
 n13=0;
 n16=0;
 b8=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b8=JAMAICA_BLOCK_GET_DATA32(b8,1).r;
 r7=JAMAICA_BLOCK_GET_DATA32(b8,0).r;
 if (r7==JAMAICA_NULL) { goto l7; }
 n16=JAMAICA_BLOCK_GET_DATA32(r7,3).i;
 n13=((n16>>4) &  ((jamaica_int32)268435455));
 n16=(n16&15);
 if (n16!=0) { goto l7; }
l4:
 if (n15>79) { goto l10; }
 n17=JAMAICA_SUBS32(n15,3);
 if (((jamaica_uint32)(n17))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r7,n17,n17);
 n18=JAMAICA_SUBS32(n15,8);
 if (((jamaica_uint32)(n18))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r7,n18,n18);
 n19=JAMAICA_SUBS32(n15,14);
 if (((jamaica_uint32)(n19))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r7,n19,n19);
 n20=JAMAICA_SUBS32(n15,16);
 if (((jamaica_uint32)(n20))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r7,n20,n20);
 n17=(((n17^n18)^n19)^n20);
 n17=((n17<<1)|((n17>>31) &  ((jamaica_int32)1)));
 if (((jamaica_uint32)(n15))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32_D0(r7,n15,n17);
 n15=JAMAICA_ADDS32(n15,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l4; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 goto l4;
l7:
 if (n15>79) { goto l10; }
 n17=JAMAICA_SUBS32(n15,3);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n17))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r7,n17,n17);
 n18=JAMAICA_SUBS32(n15,8);
 if (((jamaica_uint32)(n18))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r7,n18,n18);
 n19=JAMAICA_SUBS32(n15,14);
 if (((jamaica_uint32)(n19))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r7,n19,n19);
 n20=JAMAICA_SUBS32(n15,16);
 if (((jamaica_uint32)(n20))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r7,n20,n20);
 n17=(((n17^n18)^n19)^n20);
 n17=((n17<<1)|((n17>>31) &  ((jamaica_int32)1)));
 if (((jamaica_uint32)(n15))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r7,n15,n17);
 n15=JAMAICA_ADDS32(n15,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l7; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 goto l7;
l10:
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r,1).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n15=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 n13=((n15>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 n17=(n15&15);
 JAMAICA_GET_ARRAY32(r6,0,n15);
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r6,1,n16);
 if (((jamaica_uint32)(2))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r6,2,n18);
 if (((jamaica_uint32)(3))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r6,3,n19);
 if (((jamaica_uint32)(4))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r6,4,n13);
 n17=0;
 r6=r0;
 n10=0;
 n20=0;
 b8=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b8=JAMAICA_BLOCK_GET_DATA32(b8,1).r;
 r7=JAMAICA_BLOCK_GET_DATA32(b8,0).r;
 if (r7==JAMAICA_NULL) { goto l15; }
 n20=JAMAICA_BLOCK_GET_DATA32(r7,3).i;
 n10=((n20>>4) &  ((jamaica_int32)268435455));
 n20=(n20&15);
 if (n20!=0) { goto l15; }
l12:
 if (n17>=20) { goto l18; }
 if (((jamaica_uint32)(n17))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r7,n17,n21);
 n21=JAMAICA_ADDS32(JAMAICA_ADDS32(JAMAICA_ADDS32(JAMAICA_ADDS32(((n15<<5)|((n15>>27) &  ((jamaica_int32)31))),((n16&n18)|((n16^(-1))&n19))),n13),n21),1518500249);
 n13=n19;
 n19=n18;
 n18=((n16<<30)|((n16>>2) &  ((jamaica_int32)1073741823)));
 n16=n15;
 n15=n21;
 n17=JAMAICA_ADDS32(n17,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l12; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 goto l12;
l15:
 if (n17>=20) { goto l18; }
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n17))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r7,n17,n21);
 n21=JAMAICA_ADDS32(JAMAICA_ADDS32(JAMAICA_ADDS32(JAMAICA_ADDS32(((n15<<5)|((n15>>27) &  ((jamaica_int32)31))),((n16&n18)|((n16^(-1))&n19))),n13),n21),1518500249);
 n13=n19;
 n19=n18;
 n18=((n16<<30)|((n16>>2) &  ((jamaica_int32)1073741823)));
 n16=n15;
 n15=n21;
 n17=JAMAICA_ADDS32(n17,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l15; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 goto l15;
l18:
 n17=20;
 r6=r0;
 n10=0;
 n20=0;
 b8=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b8=JAMAICA_BLOCK_GET_DATA32(b8,1).r;
 r7=JAMAICA_BLOCK_GET_DATA32(b8,0).r;
 if (r7==JAMAICA_NULL) { goto l23; }
 n20=JAMAICA_BLOCK_GET_DATA32(r7,3).i;
 n10=((n20>>4) &  ((jamaica_int32)268435455));
 n20=(n20&15);
 if (n20!=0) { goto l23; }
l20:
 if (n17>=40) { goto l26; }
 if (((jamaica_uint32)(n17))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r7,n17,n21);
 n21=JAMAICA_ADDS32(JAMAICA_ADDS32(JAMAICA_ADDS32(JAMAICA_ADDS32(((n15<<5)|((n15>>27) &  ((jamaica_int32)31))),((n16^n18)^n19)),n13),n21),1859775393);
 n13=n19;
 n19=n18;
 n18=((n16<<30)|((n16>>2) &  ((jamaica_int32)1073741823)));
 n16=n15;
 n15=n21;
 n17=JAMAICA_ADDS32(n17,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l20; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 goto l20;
l23:
 if (n17>=40) { goto l26; }
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n17))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r7,n17,n21);
 n21=JAMAICA_ADDS32(JAMAICA_ADDS32(JAMAICA_ADDS32(JAMAICA_ADDS32(((n15<<5)|((n15>>27) &  ((jamaica_int32)31))),((n16^n18)^n19)),n13),n21),1859775393);
 n13=n19;
 n19=n18;
 n18=((n16<<30)|((n16>>2) &  ((jamaica_int32)1073741823)));
 n16=n15;
 n15=n21;
 n17=JAMAICA_ADDS32(n17,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l23; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 goto l23;
l26:
 n17=40;
 r6=r0;
 n10=0;
 n20=0;
 b8=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b8=JAMAICA_BLOCK_GET_DATA32(b8,1).r;
 r7=JAMAICA_BLOCK_GET_DATA32(b8,0).r;
 if (r7==JAMAICA_NULL) { goto l31; }
 n20=JAMAICA_BLOCK_GET_DATA32(r7,3).i;
 n10=((n20>>4) &  ((jamaica_int32)268435455));
 n20=(n20&15);
 if (n20!=0) { goto l31; }
l28:
 if (n17>=60) { goto l34; }
 if (((jamaica_uint32)(n17))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r7,n17,n21);
 n21=JAMAICA_ADDS32(JAMAICA_ADDS32(JAMAICA_ADDS32(JAMAICA_ADDS32(((n15<<5)|((n15>>27) &  ((jamaica_int32)31))),(((n16&n18)|(n16&n19))|(n18&n19))),n13),n21),(-1894007588));
 n13=n19;
 n19=n18;
 n18=((n16<<30)|((n16>>2) &  ((jamaica_int32)1073741823)));
 n16=n15;
 n15=n21;
 n17=JAMAICA_ADDS32(n17,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l28; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 goto l28;
l31:
 if (n17>=60) { goto l34; }
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n17))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r7,n17,n21);
 n21=JAMAICA_ADDS32(JAMAICA_ADDS32(JAMAICA_ADDS32(JAMAICA_ADDS32(((n15<<5)|((n15>>27) &  ((jamaica_int32)31))),(((n16&n18)|(n16&n19))|(n18&n19))),n13),n21),(-1894007588));
 n13=n19;
 n19=n18;
 n18=((n16<<30)|((n16>>2) &  ((jamaica_int32)1073741823)));
 n16=n15;
 n15=n21;
 n17=JAMAICA_ADDS32(n17,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l31; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 goto l31;
l34:
 n17=60;
 r6=r0;
 n10=0;
 n20=0;
 b8=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 b8=JAMAICA_BLOCK_GET_DATA32(b8,1).r;
 r7=JAMAICA_BLOCK_GET_DATA32(b8,0).r;
 if (r7==JAMAICA_NULL) { goto l39; }
 n20=JAMAICA_BLOCK_GET_DATA32(r7,3).i;
 n10=((n20>>4) &  ((jamaica_int32)268435455));
 n20=(n20&15);
 if (n20!=0) { goto l39; }
l36:
 if (n17>=80) { goto l42; }
 if (((jamaica_uint32)(n17))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r7,n17,n21);
 n21=JAMAICA_ADDS32(JAMAICA_ADDS32(JAMAICA_ADDS32(JAMAICA_ADDS32(((n15<<5)|((n15>>27) &  ((jamaica_int32)31))),((n16^n18)^n19)),n13),n21),(-899497514));
 n13=n19;
 n19=n18;
 n18=((n16<<30)|((n16>>2) &  ((jamaica_int32)1073741823)));
 n16=n15;
 n15=n21;
 n17=JAMAICA_ADDS32(n17,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l36; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 goto l36;
l39:
 if (n17>=80) { goto l42; }
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n17))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r7,n17,n21);
 n21=JAMAICA_ADDS32(JAMAICA_ADDS32(JAMAICA_ADDS32(JAMAICA_ADDS32(((n15<<5)|((n15>>27) &  ((jamaica_int32)31))),((n16^n18)^n19)),n13),n21),(-899497514));
 n13=n19;
 n19=n18;
 n18=((n16<<30)|((n16>>2) &  ((jamaica_int32)1073741823)));
 n16=n15;
 n15=n21;
 n17=JAMAICA_ADDS32(n17,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l39; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 goto l39;
l42:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r,1).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n17=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 n20=((n17>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n20))) { goto LABEL_tAIOOBE; }
 n17=(n17&15);
 JAMAICA_GET_ARRAY32(r6,0,n10);
 n15=JAMAICA_ADDS32(n10,n15);
 JAMAICA_SET_ARRAY32(r6,0,n15);
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n20))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r6,1,n15);
 n15=JAMAICA_ADDS32(n15,n16);
 JAMAICA_SET_ARRAY32(r6,1,n15);
 if (((jamaica_uint32)(2))>=((jamaica_uint32)(n20))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r6,2,n15);
 n15=JAMAICA_ADDS32(n15,n18);
 JAMAICA_SET_ARRAY32(r6,2,n15);
 if (((jamaica_uint32)(3))>=((jamaica_uint32)(n20))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r6,3,n15);
 n15=JAMAICA_ADDS32(n15,n19);
 JAMAICA_SET_ARRAY32(r6,3,n15);
 if (((jamaica_uint32)(4))>=((jamaica_uint32)(n20))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r6,4,n15);
 n15=JAMAICA_ADDS32(n15,n13);
 JAMAICA_SET_ARRAY32(r6,4,n15);
 ct->m.cli-=3;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_sun_security_provider_Securandom_31_updatState5(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r2) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r3=JAMAICA_NULL,r4=JAMAICA_NULL,r5=JAMAICA_NULL,r6=JAMAICA_NULL;
 jamaica_int32 n11=0,n14=0,n12=0,n13=0,n15=0,n17=0,n0=0,n1=0,n3=0,n4=0,n6=0,n7=0,n9=0,n10=0,n16=0;
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+7;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

l2:
 n11=1;
 n12=0;
 n13=0;
 r5=r0;
 n0=0;
 n1=0;
 n3=0;
 n4=0;
 r1=JAMAICA_NULL;
 n6=0;
 n7=0;
 r3=JAMAICA_NULL;
 n9=0;
 n10=0;
 r4=JAMAICA_NULL;
 if (r5==JAMAICA_NULL) { goto l4; }
 n0=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n1=((n0>>4) &  ((jamaica_int32)268435455));
l4:
 r6=r0;
 if (r6==JAMAICA_NULL) { goto l6; }
 n14=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 n3=((n14>>4) &  ((jamaica_int32)268435455));
 n4=(n14&15);
 r1=JAMAICA_BLOCK_GET_R(r6,1);
l6:
 if (r2==JAMAICA_NULL) { goto l8; }
 n14=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n6=((n14>>4) &  ((jamaica_int32)268435455));
 n7=(n14&15);
 r3=JAMAICA_BLOCK_GET_R(r2,1);
l8:
 if (r0==JAMAICA_NULL) { goto l10; }
 n14=JAMAICA_BLOCK_GET_DATA32(r0,3).i;
 n9=((n14>>4) &  ((jamaica_int32)268435455));
 n10=(n14&15);
 r4=JAMAICA_BLOCK_GET_R(r0,1);
l10:
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (n13>=n1) { goto l16; }
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n3))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8(r6,n13,n15);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n6))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8(r2,n13,n14);
 n14=JAMAICA_ADDS32(JAMAICA_ADDS32(n15,n14),n11);
 n11=n14;
 n16=JAMAICA_SUBS32((n14&127),(n14&128));
 n14=n16;
 n17=n12;
 if (n15==n16) { goto l13; }
 n12=1;
 goto l14;
l13:
 n17=n12;
 n12=0;
l14:
 n12=(n17|n12);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY8(r0,n13,n14);
 n11=((n11>>8) |  ((n11>=0)?0:(jamaica_int32)(-16777216)));
 n13=JAMAICA_ADDS32(n13,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l10; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 
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

 goto l10;
l16:
 if (n12!=0) { goto l18; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n1))) { goto LABEL_tAIOOBE; }
 n11=(n0&15);
 r0=JAMAICA_BLOCK_GET_R(r5,1);
 JAMAICA_GET_ARRAY8(r5,0,n14);
 n14=JAMAICA_ADDS32(n14,1);
 n14=JAMAICA_SUBS32((n14&127),(n14&128));
 JAMAICA_SET_ARRAY8(r5,0,n14);
l18:
 ct->m.cli-=7;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
#else
#error 'jamaica.h' not found!
#endif

#ifdef __cplusplus
}
#endif

