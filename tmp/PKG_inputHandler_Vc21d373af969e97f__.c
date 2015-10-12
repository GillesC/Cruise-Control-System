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


JBIEXPORT void JBICALL jam_comp_inputHandler_Inputhread_0__00030003e1(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref b0=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+6;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_inputHandler_Inputhread_0__00030003e1;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
{ jamaica_ref m=jam_mtd_java_lang_Thread_157__00030003e17;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0);
}
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,2).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(b0,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(b0,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(b0,3).r=JAMAICA_NULL;}
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(b0,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(b0,3).r=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(b0,3).r=new_ref;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-6;
 return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_inputHandler_Inputhread_0_run2(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r4=JAMAICA_NULL,r2=JAMAICA_NULL,r6=JAMAICA_NULL,r3=JAMAICA_NULL,r1=JAMAICA_NULL,r5=JAMAICA_NULL;
 jamaica_int32 n0=0,n1=0;
 jamaica_ref b0=JAMAICA_NULL,b1=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+11;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_inputHandler_Inputhread_0_run2;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 b0=JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_System_146_out5,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(jam_fld_inputHandler_Inputhread_0_sc0,7).r;
 goto l10;
l3:
 r1=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 r2=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r2==JAMAICA_NULL) { goto LABEL_tOOME; }
{ jamaica_ref m=jam_mtd_java_lang_Strinilder_140__00030003e2;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,jam_str_inputHandler_Inputhread_042);
}
 r3=jam_comp_java_lang_Abstrilder_1_append9(ct,r2,r4);
 r3=r2;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 r5=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 r6=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 if (r5!=JAMAICA_NULL) { goto l5; }
 
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
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_String_134,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_String_134,-1);
 }
 if (ct->plainAlloc) {
  r2 = jamaicaGC_PlainAllocHeadBlock(ct,2);
  if (r2 != JAMAICA_NULL) {
   JAMAICA_BLOCK_GET_R(r2,1)=jam_class_java_lang_String_134;
  }
 } else {
 r2=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_String_134);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r2==JAMAICA_NULL) { goto LABEL_tOOME; }
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_java_lang_String_134__00030003e7;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,JAMAICA_BLOCK_GET_DATA32(r3,5).r);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 goto l9;
l5:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r2,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r2,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(r2,3).r=JAMAICA_NULL;}
#endif

 n0=((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(r2,4).b[0]);
 if (n0!=0) { goto l7; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 n0=JAMAICA_BLOCK_GET_DATA32(r3,6).i;
 n1=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_String_134,5).i;
 if (((n1>>20) |  ((n1>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_String_134,-1);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 r2=Jam_java_lang_String_cast2string(ct,r6,n0);
 goto l8;
l7:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 n0=JAMAICA_BLOCK_GET_DATA32(r2,6).i;
 n1=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_String_134,5).i;
 if (((n1>>20) |  ((n1>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_String_134,-1);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 r2=jam_comp_java_lang_String_134_valueOf72(ct,r5,0,n0);
l8:
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r3,5).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r3,5).r=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r3,5).r=new_ref;}
#endif

l9:
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n0,r3);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,r2);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 jam_comp_inputHandler_Inputhread_0_activmands3(ct,r0,r4);
l10:
 r4=JAMAICA_BLOCK_GET_DATA32(b1,4).r;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_java_util_Scanner_174_nextLine21;
ct->calledMethod=m;
 r1=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4);
}
 r4=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_java_lang_String_134_equals31;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,jam_str_inputHandler_Inputhread_066);
}
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l12; }
 jamaicaScheduler_syncPointFull(ct);
l12:
 if (n0==0) { goto l3; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_System_146_out5,7).r,4).r;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r0,3).i&15);
 JAMAICA_GET_REF_ARRAY(r0,n0,r0);
{ jamaica_ref m=r0;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,jam_str_inputHandler_Inputhread_074);
}
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-11;
 return;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_inputHandler_Inputhread_0_activmands3(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r2=JAMAICA_NULL,r3=JAMAICA_NULL;
 jamaica_int32 n0=0,n1=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+2;
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
 if (jam_str_inputHandler_Inputhread_079==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_java_lang_String_134_equals31;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,jam_str_inputHandler_Inputhread_079,r1);
}
 if (n0==0) { goto l4; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,2).r,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_control_Contrystem_0_activate1,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n0,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
l4:
 if (jam_str_inputHandler_Inputhread_086==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_java_lang_String_134_equals31;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,jam_str_inputHandler_Inputhread_086,r1);
}
 if (n0==0) { goto l6; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,2).r,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_control_Contrystem_0_deactivate2,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n0,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
l6:
 if (jam_str_inputHandler_Inputhread_091==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_java_lang_String_134_equals31;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,jam_str_inputHandler_Inputhread_091,r1);
}
 if (n0==0) { goto l8; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,2).r,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_control_Contrystem_0_accelerate3,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n0,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
l8:
 if (jam_str_inputHandler_Inputhread_096==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_java_lang_String_134_equals31;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,jam_str_inputHandler_Inputhread_096,r1);
}
 if (n0==0) { goto l10; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,2).r,3).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_control_Contrystem_0_decelerate4,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n0,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
l10:
 if (jam_str_inputHandler_Inputhread_0101==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_java_lang_String_134_equals31;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,jam_str_inputHandler_Inputhread_0101,r1);
}
 if (n0==0) { goto l12; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,2).r,3).r;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_control_Contrystem_0_resume5,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r0,3).i&15);
 JAMAICA_GET_REF_ARRAY(r0,n0,r0);
{ jamaica_ref m=r0;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1);
}
l12:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 ct->m.cli-=2;
 return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
#else
#error 'jamaica.h' not found!
#endif

#ifdef __cplusplus
}
#endif

