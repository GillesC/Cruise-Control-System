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


JBIEXPORT jamaica_int32 JBICALL jam_comp_sun_java2d_pipe_DrawImage_19_rendeeCopy8(jamaica_thread *volatile ct,jamaica_ref volatile r0,jamaica_ref volatile r1,jamaica_ref volatile r2,jamaica_ref volatile r3,jamaica_int32 volatile n0,jamaica_int32 volatile n1,jamaica_int32 volatile n2,jamaica_int32 volatile n3,jamaica_int32 volatile n4,jamaica_int32 volatile n5) {
 jamaica_int32 volatile tp;
 jamaica_native_longjump u;
 jamaica_GCEnv *volatile gc = ct->m.gcenv;
 jamaica_ref *volatile l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref volatile r7=JAMAICA_NULL,r6=JAMAICA_NULL,r5=JAMAICA_NULL,r8=JAMAICA_NULL,r9=JAMAICA_NULL,r10=JAMAICA_NULL,r11=JAMAICA_NULL,r12=JAMAICA_NULL,r13=JAMAICA_NULL,r14=JAMAICA_NULL;
 jamaica_int32 volatile n6=0,n7=0,n8=0,n9=0;
 jamaica_ref volatile b0=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+16;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 if (JAMAICA_NATIVE_ON_LONGJUMP(u)) {
   jamaica_clearRefsOnExc(ct,tp);
    {
  jamaica_ref ec=JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(ct->cT,3),1);
  switch(n6) {
  case 1: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_lang_NullPption_89)) { goto l6; } /* fall through */
  case 2: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_sun_java2d_Invalption_9)) { goto l10; } /* fall through */
  default: jamaica_propagate_exception(ct);
  }
  }
 }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=JAMAICA_LONG_JUMP_BUF_TO_INDEX(ct,&u);
 {jamaica_ref m=jam_mtd_sun_java2d_pipe_DrawImage_19_rendeeCopy8;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 r5=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 r6=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 n6=0;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r7=jam_comp_sun_java2d_SunGrics2D_20_getCopClip12(ct,r1);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r6=JAMAICA_BLOCK_GET_DATA32(r1,5).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 n7=0;
l3:
 r8=r6;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 r9=r2;
 r10=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 if (r10==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r10,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 r11=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 r12=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=r12;}
#else
{jamaica_ref new_ref=r12;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[9]=new_ref;}
#endif

 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 r13=JAMAICA_BLOCK_GET_R(r8,1);
 r13=JAMAICA_BLOCK_GET_DATA32(r13,3).r;
 n8=JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_java2d_SurfaeData_25_getSoeData6,1).i;
 n8=((n8>>20) &  ((jamaica_int32)4095));
 n9=JAMAICA_BLOCK_GET_DATA32(r13,3).i;
 n9=(n9&15);
 JAMAICA_GET_REF_ARRAY(r13,n8,r13);
{ jamaica_ref m=r13;
ct->calledMethod=m;
 r9=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r8,r9,0,r11,r12);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 r5=r9;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[10]=new_ref;}
#endif

 if (r9!=JAMAICA_NULL) { goto l5; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 
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
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-16;
 return 0;
l5:
 n6=1;
 if (r9==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_java2d_SurfaeData_25_getSueType28;
ct->calledMethod=m;
 r11=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r9);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

{ jamaica_ref m=jam_mtd_sun_java2d_SurfaeData_25_getSueType28;
ct->calledMethod=m;
 r13=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r8);
}
 r14=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r0,1),3).r;
 n8=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_java2d_pipe_DrawImage_19_blitSeData15,1).i>>20) &  ((jamaica_int32)4095));
 n9=(JAMAICA_BLOCK_GET_DATA32(r14,3).i&15);
 JAMAICA_GET_REF_ARRAY(r14,n8,r14);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r14;
ct->calledMethod=m;
 {jamaica_address o=JAMAICA_BLOCK_GET_P(m,4);
  if (o) {  ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_ref))o)(ct,r0,r10,r7,r9,r8,r11,r13,n2,n3,n0,n1,n4,n5,r12);
  } else {
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_ref))REV_STUB_RRRRRRRIIIIIIRV)(ct,r0,r10,r7,r9,r8,r11,r13,n2,n3,n0,n1,n4,n5,r12);
  }
 }
}
 n6=0;
 
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-16;
 return 1;
l6:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
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
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r7=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n6=0;
 n8=JAMAICA_BLOCK_GET_DATA32(jam_class_sun_java2d_SurfaeData_25,5).i;
 if (((n8>>20) |  ((n8>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_sun_java2d_SurfaeData_25,-1);
 }
{ jamaica_ref m=jam_mtd_sun_java2d_SurfaeData_25_isNull39;
ct->calledMethod=m;
 n8=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r6);
}
 if (n8!=0) { goto l9; }
 n8=JAMAICA_BLOCK_GET_DATA32(jam_class_sun_java2d_SurfaeData_25,5).i;
{ jamaica_ref m=jam_mtd_sun_java2d_SurfaeData_25_isNull39;
ct->calledMethod=m;
 n8=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r5);
}
 if (n8!=0) { goto l9; }
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r7);
l9:
 
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-16;
 return 0;
l10:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
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
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r7=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 n6=0;
 n8=n7;
 n8=JAMAICA_ADDS32(n8,1);
 n7=n8;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r7=jam_comp_sun_java2d_SunGrics2D_20_getCopClip12(ct,r1);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r8=JAMAICA_BLOCK_GET_DATA32(r1,5).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 r6=r8;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 n9=JAMAICA_BLOCK_GET_DATA32(jam_class_sun_java2d_SurfaeData_25,5).i;
 if (((n9>>20) |  ((n9>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_sun_java2d_SurfaeData_25,-1);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_java2d_SurfaeData_25_isNull39;
ct->calledMethod=m;
 n9=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r8);
}
 if (n9!=0) { goto l15; }
 n9=JAMAICA_BLOCK_GET_DATA32(jam_class_sun_java2d_SurfaeData_25,5).i;
{ jamaica_ref m=jam_mtd_sun_java2d_SurfaeData_25_isNull39;
ct->calledMethod=m;
 n9=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r5);
}
 if (n9!=0) { goto l15; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l14; }
 jamaicaScheduler_syncPointFull(ct);
l14:
 if (n8<=1) { goto l3; }
l15:
 
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-16;
 return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pipe_DrawImage_19_blitSeData15(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1,jamaica_ref r2,jamaica_ref r3,jamaica_ref r4,jamaica_ref r5,jamaica_ref r6,jamaica_int32 n0,jamaica_int32 n1,jamaica_int32 n2,jamaica_int32 n3,jamaica_int32 n4,jamaica_int32 n5,jamaica_ref r7) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r9=JAMAICA_NULL,r8=JAMAICA_NULL,r10=JAMAICA_NULL;
 jamaica_int32 n6=0,n7=0,n8=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+13;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_sun_java2d_pipe_DrawImage_19_blitSeData15;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 if (n4<=0) { goto l4; }
 if (n5>0) { goto l5; }
l4:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
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
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-13;
 return;
l5:
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r1,7).r,1).r,0).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r9=r8;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 n6=JAMAICA_BLOCK_GET_DATA32(jam_class_sun_java2d_loops_CompoeType_8,5).i;
 if (((n6>>20) |  ((n6>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_sun_java2d_loops_CompoeType_8,-1);
 }
 r10=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_sun_java2d_loops_CompoeType_8_SrcOvrNoEa17,7).r,4).r;
 if (r10==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_java2d_loops_CompoeType_8_equals8;
ct->calledMethod=m;
 n6=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r10,r8);
}
 if (n6==0) { goto l10; }
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n6=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_java2d_SurfaeData_25_getTrrency30,1).i>>20) &  ((jamaica_int32)4095));
 n7=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n6,r8);
{ jamaica_ref m=r8;
ct->calledMethod=m;
 n6=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3);
}
 if (n6==1) { goto l9; }
 r8=r7;
 if (r8==JAMAICA_NULL) { goto l10; }
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 r10=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r8,1),3).r;
 n6=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_awt_Color_23_getTrrency19,1).i>>20) &  ((jamaica_int32)4095));
 n7=(JAMAICA_BLOCK_GET_DATA32(r10,3).i&15);
 JAMAICA_GET_REF_ARRAY(r10,n6,r10);
{ jamaica_ref m=r10;
ct->calledMethod=m;
 n6=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r8);
}
 if (n6!=1) { goto l10; }
l9:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 n6=JAMAICA_BLOCK_GET_DATA32(jam_class_sun_java2d_loops_CompoeType_8,5).i;
 if (((n6>>20) |  ((n6>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_sun_java2d_loops_CompoeType_8,-1);
 }
 r9=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_sun_java2d_loops_CompoeType_8_SrcNoEa16,7).r,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

l10:
 r8=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

{ jamaica_ref m=jam_mtd_sun_java2d_pipe_DrawImage_19_isBgOation13;
ct->calledMethod=m;
 n6=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r8,r7);
}
 if (n6!=0) { goto l12; }
 
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

 n6=JAMAICA_BLOCK_GET_DATA32(jam_class_sun_java2d_loops_Blit_0,5).i;
 if (((n6>>20) |  ((n6>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_sun_java2d_loops_Blit_0,-1);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_java2d_loops_Blit_0_getFrCache1;
ct->calledMethod=m;
 r8=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r5,r9,r6);
}
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 r9=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r8,1),3).r;
 n6=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_java2d_loops_Blit_0_Blit4,1).i>>20) &  ((jamaica_int32)4095));
 n7=(JAMAICA_BLOCK_GET_DATA32(r9,3).i&15);
 JAMAICA_GET_REF_ARRAY(r9,n6,r9);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r9;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r8,r3,r4,JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r1,7).r,0).r,3).r,1).r,r2,n0,n1,n2,n3,n4,n5);
}
 goto l13;
l12:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 n6=JAMAICA_BLOCK_GET_DATA32(jam_class_sun_java2d_loops_BlitBg_5,5).i;
 if (((n6>>20) |  ((n6>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_sun_java2d_loops_BlitBg_5,-1);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_java2d_loops_BlitBg_5_getFrCache1;
ct->calledMethod=m;
 r9=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r5,r9,r6);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r1,7).r,0).r,3).r,1).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r10=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r7,1),3).r;
 n6=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_awt_Color_23_getRGB11,1).i>>20) &  ((jamaica_int32)4095));
 n7=(JAMAICA_BLOCK_GET_DATA32(r10,3).i&15);
 JAMAICA_GET_REF_ARRAY(r10,n6,r10);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r10;
ct->calledMethod=m;
 n6=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7);
}
 if (r9==JAMAICA_NULL) { goto LABEL_tNPE; }
 r10=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r9,1),3).r;
 n7=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_java2d_loops_BlitBg_5_BlitBg4,1).i>>20) &  ((jamaica_int32)4095));
 n8=(JAMAICA_BLOCK_GET_DATA32(r10,3).i&15);
 JAMAICA_GET_REF_ARRAY(r10,n7,r10);
 
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
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r10;
ct->calledMethod=m;
 {jamaica_address o=JAMAICA_BLOCK_GET_P(m,4);
  if (o) {  ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32))o)(ct,r9,r8,r4,r1,r2,n6,n0,n1,n2,n3,n4,n5);
  } else {
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32))REV_STUB_RRRRRIIIIIIIV)(ct,r9,r8,r4,r1,r2,n6,n0,n1,n2,n3,n4,n5);
  }
 }
}
l13:
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-13;
 return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pipe_GlyphtPipe_24_drawString1(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1,jamaica_ref r2,jamaica_double d0,jamaica_double d1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r4=JAMAICA_NULL,r5=JAMAICA_NULL,r3=JAMAICA_NULL,r6=JAMAICA_NULL;
 jamaica_int32 n0=0,n1=0;
 jamaica_float f0=0,f1=0;
 jamaica_double d2=0;
 jamaica_ref b0=JAMAICA_NULL,b1=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+10;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_sun_java2d_pipe_GlyphtPipe_24_drawString1;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r3=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_java2d_SunGrics2D_20_getFotInfo16;
ct->calledMethod=m;
 r4=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3);
}
 r5=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r4,7).r;
 if (JAMAICA_BLOCK_GET_DATA32(b0,3).i<=100) { goto l4; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
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

 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_sun_java2d_SurfaeData_25,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_sun_java2d_SurfaeData_25,-1);
 }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_sun_java2d_SurfaeData_25_outliderer9,7).r,4).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r3,jam_mtd_sun_java2d_pipe_TextPipe_51_drawString0);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_double,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r1,r2,d0,d1);
}
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-10;
 return;
l4:
 b1=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 if (JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b1,1).r,4).i<3) { goto l6; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r3=jamaicaInterpreter_allocSimpleArray(ct,2,ct->vm->array_class[7]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r5,7).r;
 d2=(d0+((jamaica_double)JAMAICA_BLOCK_GET_DATA32(b0,4).f));
 JAMAICA_SET_ARRAY_DOUBLE_D0(r3,0,d2);
 d2=(d1+((jamaica_double)JAMAICA_BLOCK_GET_DATA32(b0,5).f));
 JAMAICA_SET_ARRAY_DOUBLE_D0(r3,1,d2);
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r1,7).r,0).r,4).r;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_awt_geom_Affinsform_0_transform38,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r6,3).i&15);
 JAMAICA_GET_REF_ARRAY(r6,n0,r6);
{ jamaica_ref m=r6;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,r3,0,r3,0,1);
}
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 n0=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n1=((n0>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n1))) { goto LABEL_tAIOOBE; }
 n0=(n0&15);
 JAMAICA_GET_ARRAY_DOUBLE(r3,0,d2);
 f0=((jamaica_float)d2);
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n1))) { goto LABEL_tAIOOBE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_ARRAY_DOUBLE(r3,1,d2);
 f1=((jamaica_float)d2);
 goto l7;
l6:
 b1=JAMAICA_BLOCK_GET_DATA32(b1,0).r;
 f0=((jamaica_float)((d0+((jamaica_double)JAMAICA_BLOCK_GET_DATA32(b0,4).f))+((jamaica_double)JAMAICA_BLOCK_GET_DATA32(b1,5).i)));
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 f1=((jamaica_float)((d1+((jamaica_double)JAMAICA_BLOCK_GET_DATA32(b0,5).f))+((jamaica_double)JAMAICA_BLOCK_GET_DATA32(b1,6).i)));
l7:
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_sun_font_GlyphList_61,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_sun_font_GlyphList_61,-1);
 }
{ jamaica_ref m=jam_mtd_sun_font_GlyphList_61_getIntance3;
ct->calledMethod=m;
 r4=((jamaica_ref(JBICALL *)(jamaica_thread *))JAMAICA_BLOCK_GET_P(m,4))(ct);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r3=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 n0=jam_comp_sun_font_GlyphList_61_setFrtring4(ct,r4,r5,r2,f0,f1);
 if (n0==0) { goto l9; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r0,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_java2d_pipe_GlyphtPipe_24_drawGhList4,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n0,r4);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r4;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,r1,r3);
}
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_font_GlyphList_61_dispose20;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3);
}
 goto l10;
l9:
 
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_font_GlyphList_61_dispose20;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4);
}
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_java_awt_font_TextLayout_13,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_awt_font_TextLayout_13,-1);
 }
 r3=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_awt_font_TextLayout_13);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r3==JAMAICA_NULL) { goto LABEL_tOOME; }
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_java2d_SunGrics2D_20_getFont13;
ct->calledMethod=m;
 r4=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

{ jamaica_ref m=jam_mtd_sun_java2d_SunGrics2D_20_getFontext87;
ct->calledMethod=m;
 r5=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_java_awt_font_TextLayout_13__00030003e0;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r2,r4,r5);
}
 
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

{ jamaica_ref m=jam_mtd_java_awt_font_TextLayout_13_draw44;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_float,jamaica_float))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r1,((jamaica_float)d0),((jamaica_float)d1));
}
l10:
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-10;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pipe_LoopPipe_26_drawLine1(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1,jamaica_int32 n0,jamaica_int32 n1,jamaica_int32 n2,jamaica_int32 n3) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r3=JAMAICA_NULL,r2=JAMAICA_NULL,r4=JAMAICA_NULL;
 jamaica_int32 n4=0,n5=0,n6=0,n7=0;
 jamaica_ref b0=JAMAICA_NULL,b1=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+6;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_sun_java2d_pipe_LoopPipe_26_drawLine1;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 n4=JAMAICA_BLOCK_GET_DATA32(b1,5).i;
 n5=JAMAICA_BLOCK_GET_DATA32(b1,6).i;
 r2=JAMAICA_BLOCK_GET_DATA32(b0,7).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(r2,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

{ jamaica_ref m=jam_mtd_sun_java2d_SunGrics2D_20_getSueData22;
ct->calledMethod=m;
 r3=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1);
}
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n6=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_java2d_loops_DrawLine_18_DrawLine3,1).i>>20) &  ((jamaica_int32)4095));
 n7=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n6,r4);
 
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

{ jamaica_ref m=r4;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,r1,r3,JAMAICA_ADDS32(n0,n4),JAMAICA_ADDS32(n1,n5),JAMAICA_ADDS32(n2,n4),JAMAICA_ADDS32(n3,n5));
}
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-6;
 return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_sun_java2d_pipe_Region_34_dimAdd1(jamaica_thread *ct,jamaica_int32 n0,jamaica_int32 n1) {
 jamaica_int32 tp;
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+0;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 if (n1>0) { goto l4; }
 return n0;
l4:
 n1=JAMAICA_ADDS32(n1,n0);
 if (n1>=n0) { goto l6; }
 return 2147483647;
l6:
 return n1;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pipe_Region_34__00030003e3(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0,jamaica_int32 n1,jamaica_int32 n2,jamaica_int32 n3) {
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
 JAMAICA_BLOCK_GET_DATA32(r0,3).i = n0;
 JAMAICA_BLOCK_GET_DATA32(r0,4).i = n1;
 JAMAICA_BLOCK_GET_DATA32(r0,5).i = n2;
 JAMAICA_BLOCK_GET_DATA32(r0,6).i = n3;
 ct->m.cli-=1;
 return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT jamaica_ref JBICALL jam_comp_sun_java2d_pipe_Region_34_getIneXYWH4(jamaica_thread *ct,jamaica_int32 n0,jamaica_int32 n1,jamaica_int32 n2,jamaica_int32 n3) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r0=JAMAICA_NULL;
 jamaica_int32 n5=0,n4=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+1;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 n4=n1;
 n5=n0;
 if (n2<=0) { goto l6; }
 n2=JAMAICA_ADDS32(n2,n0);
 if (n2>=n0) { goto l5; }
 n5=2147483647;
 goto l6;
l5:
 n5=n2;
l6:
 n2=n5;
 n5=n1;
 if (n3>0) { goto l8; }
 n1=n5;
 goto l11;
l8:
 n5=JAMAICA_ADDS32(n3,n1);
 if (n5>=n1) { goto l10; }
 n1=2147483647;
 goto l11;
l10:
 n1=n5;
l11:
 r0=jamaicaInterpreter_allocJavaObject(ct,jam_class_sun_java2d_pipe_Region_34);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r0==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_sun_java2d_pipe_Region_34__00030003e3(ct,r0,n0,n4,n2,n1);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->m.cli-=1;
 return r0;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return JAMAICA_NULL;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
}
JBIEXPORT jamaica_ref JBICALL jam_comp_sun_java2d_pipe_Region_34_getIneXYXY6(jamaica_thread *ct,jamaica_int32 n0,jamaica_int32 n1,jamaica_int32 n2,jamaica_int32 n3) {
 jamaica_int32 tp;
 jamaica_ref r0=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+0;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r0=jamaicaInterpreter_allocJavaObject(ct,jam_class_sun_java2d_pipe_Region_34);
 if (r0==JAMAICA_NULL) { goto LABEL_tOOME; }
 JAMAICA_BLOCK_GET_DATA32(r0,3).i = n0;
 JAMAICA_BLOCK_GET_DATA32(r0,4).i = n1;
 JAMAICA_BLOCK_GET_DATA32(r0,5).i = n2;
 JAMAICA_BLOCK_GET_DATA32(r0,6).i = n3;
 return r0;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return JAMAICA_NULL;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pipe_Region_34_appenSpans7(jamaica_thread *ct,jamaica_ref r3,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r4=JAMAICA_NULL,r2=JAMAICA_NULL,r5=JAMAICA_NULL,r6=JAMAICA_NULL;
 jamaica_int32 n0=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+6;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r4=jamaicaInterpreter_allocSimpleArray(ct,6,ct->vm->array_class[10]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 r5=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r2=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 if (r0==JAMAICA_NULL) { goto l4; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r2=jamaicaInterpreter_getInterfaceMethod(ct,r0,jam_mtd_sun_java2d_pipe_SpanIrator_48_nextSpan1);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

l4:
 r6=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 if (r0==JAMAICA_NULL) { goto l8; }
l5:
{ jamaica_ref m=r2;
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,r5);
}
 if (n0==0) { goto l11; }
 jam_comp_sun_java2d_pipe_Region_34_appendSpan18(ct,r6,r4);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l5; }
 jamaicaScheduler_syncPointFull(ct);
 goto l5;
l8:
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=r2;
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,r5);
}
 if (n0==0) { goto l11; }
 jam_comp_sun_java2d_pipe_Region_34_appendSpan18(ct,r6,r4);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l8; }
 jamaicaScheduler_syncPointFull(ct);
 goto l8;
l11:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
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
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 jam_comp_sun_java2d_pipe_Region_34_endRow20(ct,r3,r5);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 jam_comp_sun_java2d_pipe_Region_34_calcBBox21(ct,r3);
 ct->m.cli-=6;
 return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT jamaica_ref JBICALL jam_comp_sun_java2d_pipe_Region_34_getInction10(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_int32 n0=0,n1=0,n2=0,n3=0,n4=0,n5=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+2;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 
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

 jamaicaScheduler_syncPointFull(ct);
 
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

l2:
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n0=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n1=JAMAICA_BLOCK_GET_DATA32(r1,4).i;
 n2=JAMAICA_BLOCK_GET_DATA32(r1,5).i;
 n3=JAMAICA_BLOCK_GET_DATA32(r1,6).i;
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r0,1),3).r;
 n4=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_java2d_pipe_Region_34_getInnXYWH11,1).i>>20) &  ((jamaica_int32)4095));
 n5=(JAMAICA_BLOCK_GET_DATA32(r1,3).i&15);
 JAMAICA_GET_REF_ARRAY(r1,n4,r1);
{ jamaica_ref m=r1;
ct->calledMethod=m;
 r0=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,n0,n1,n2,n3);
}
 ct->m.cli-=2;
 return r0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return JAMAICA_NULL;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
}
JBIEXPORT jamaica_ref JBICALL jam_comp_sun_java2d_pipe_Region_34_getInnXYWH11(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0,jamaica_int32 n1,jamaica_int32 n2,jamaica_int32 n3) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL;
 jamaica_int32 n5=0,n4=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
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
 n4=n1;
 n5=n0;
 if (n2<=0) { goto l6; }
 n2=JAMAICA_ADDS32(n2,n0);
 if (n2>=n0) { goto l5; }
 n5=2147483647;
 goto l6;
l5:
 n5=n2;
l6:
 n2=n5;
 n5=n1;
 if (n3>0) { goto l8; }
 n1=n5;
 goto l11;
l8:
 n5=JAMAICA_ADDS32(n3,n1);
 if (n5>=n1) { goto l10; }
 n1=2147483647;
 goto l11;
l10:
 n1=n5;
l11:
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r0,1),3).r;
 n5=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_java2d_pipe_Region_34_getInnXYXY12,1).i>>20) &  ((jamaica_int32)4095));
 n3=(JAMAICA_BLOCK_GET_DATA32(r1,3).i&15);
 JAMAICA_GET_REF_ARRAY(r1,n5,r1);
{ jamaica_ref m=r1;
ct->calledMethod=m;
 r0=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,n0,n4,n2,n1);
}
 ct->m.cli-=1;
 return r0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
}
JBIEXPORT jamaica_ref JBICALL jam_comp_sun_java2d_pipe_Region_34_getInnXYXY12(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0,jamaica_int32 n1,jamaica_int32 n2,jamaica_int32 n3) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r3=JAMAICA_NULL,r4=JAMAICA_NULL,r1=JAMAICA_NULL,r2=JAMAICA_NULL;
 jamaica_int32 n4=0,n5=0,n6=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+3;
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

 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n4=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_java2d_pipe_Region_34_isInseXYXY30,1).i>>20) &  ((jamaica_int32)4095));
 n5=(JAMAICA_BLOCK_GET_DATA32(r2,3).i&15);
 JAMAICA_GET_REF_ARRAY(r2,n4,r2);
{ jamaica_ref m=r2;
ct->calledMethod=m;
 n4=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,n0,n1,n2,n3);
}
 if (n4==0) { goto l4; }
 
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

 ct->m.cli-=3;
 return r0;
l4:
 r2=jamaicaInterpreter_allocJavaObject(ct,jam_class_sun_java2d_pipe_Region_34);
 if (r2==JAMAICA_NULL) { goto LABEL_tOOME; }
 r3=r2;
 r4=r2;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 if (n0>=JAMAICA_BLOCK_GET_DATA32(r1,3).i) { goto l6; }
 n0=JAMAICA_BLOCK_GET_DATA32(r0,3).i;
 goto l7;
l6:
 r3=r2;
 r4=r2;
l7:
 r1=r3;
 r2=r4;
 n4=n0;
 r3=r1;
 r4=r2;
 n0=n4;
 if (n1>=JAMAICA_BLOCK_GET_DATA32(r0,4).i) { goto l9; }
 n1=JAMAICA_BLOCK_GET_DATA32(r0,4).i;
 goto l10;
l9:
 r3=r1;
 r4=r2;
 n0=n4;
l10:
 r1=r3;
 r2=r4;
 n4=n0;
 n5=n1;
 r3=r1;
 r4=r2;
 n0=n4;
 n1=n5;
 if (n2<=JAMAICA_BLOCK_GET_DATA32(r0,5).i) { goto l12; }
 n2=JAMAICA_BLOCK_GET_DATA32(r0,5).i;
 goto l13;
l12:
 r3=r1;
 r4=r2;
 n0=n4;
 n1=n5;
l13:
 r1=r3;
 r2=r4;
 n4=n0;
 n5=n1;
 n6=n2;
 r3=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r4=r2;
 n0=n4;
 n1=n5;
 n2=n6;
 if (n3<=JAMAICA_BLOCK_GET_DATA32(r0,6).i) { goto l15; }
 n3=JAMAICA_BLOCK_GET_DATA32(r0,6).i;
 goto l16;
l15:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r3=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r4=r2;
 n0=n4;
 n1=n5;
 n2=n6;
l16:
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(r4,3).i = n0;
 JAMAICA_BLOCK_GET_DATA32(r4,4).i = n1;
 JAMAICA_BLOCK_GET_DATA32(r4,5).i = n2;
 JAMAICA_BLOCK_GET_DATA32(r4,6).i = n3;
 r1=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,3).r==JAMAICA_NULL) { goto l18; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r0,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_java2d_pipe_Region_34_getSprator37,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r2,3).i&15);
 JAMAICA_GET_REF_ARRAY(r2,n0,r2);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r2;
ct->calledMethod=m;
 r0=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0);
}
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_java2d_pipe_Region_34_appenSpans7,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r2,3).i&15);
 JAMAICA_GET_REF_ARRAY(r2,n0,r2);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r2;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r0);
}
l18:
 
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 ct->m.cli-=3;
 return r1;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return JAMAICA_NULL;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return JAMAICA_NULL;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
}
JBIEXPORT jamaica_ref JBICALL jam_comp_sun_java2d_pipe_Region_34_getInction13(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r5=JAMAICA_NULL,r2=JAMAICA_NULL,r3=JAMAICA_NULL,r4=JAMAICA_NULL;
 jamaica_int32 n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+4;
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
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r3=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_java2d_pipe_Region_34_isInsCheck31,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n0,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,r3);
}
 if (n0==0) { goto l4; }
 
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

 ct->m.cli-=4;
 return r0;
l4:
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_java2d_pipe_Region_34_isInsCheck31,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n0,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r2);
}
 if (n0==0) { goto l6; }
 
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

 ct->m.cli-=4;
 return r1;
l6:
 r4=jamaicaInterpreter_allocJavaObject(ct,jam_class_sun_java2d_pipe_Region_34);
 if (r4==JAMAICA_NULL) { goto LABEL_tOOME; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 n0=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 r3=r4;
 r5=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 if (n0>=JAMAICA_BLOCK_GET_DATA32(r2,3).i) { goto l8; }
 n0=JAMAICA_BLOCK_GET_DATA32(r0,3).i;
 goto l9;
l8:
 r3=r4;
 r5=r4;
l9:
 r2=r3;
 r4=r5;
 n1=n0;
 r3=r1;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r3,4).i;
 r3=r2;
 r5=r4;
 n0=n1;
 if (n2>=JAMAICA_BLOCK_GET_DATA32(r0,4).i) { goto l11; }
 n2=JAMAICA_BLOCK_GET_DATA32(r0,4).i;
 goto l12;
l11:
 r3=r2;
 r5=r4;
 n0=n1;
l12:
 r2=r3;
 r4=r5;
 n1=n0;
 n3=n2;
 r3=r1;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 n4=JAMAICA_BLOCK_GET_DATA32(r3,5).i;
 r3=r2;
 r5=r4;
 n0=n1;
 n2=n3;
 if (n4<=JAMAICA_BLOCK_GET_DATA32(r0,5).i) { goto l14; }
 n4=JAMAICA_BLOCK_GET_DATA32(r0,5).i;
 goto l15;
l14:
 r3=r2;
 r5=r4;
 n0=n1;
 n2=n3;
l15:
 r2=r3;
 r4=r5;
 n1=n0;
 n3=n2;
 n5=n4;
 r3=r1;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 n6=JAMAICA_BLOCK_GET_DATA32(r3,6).i;
 r3=r2;
 r5=r4;
 n0=n1;
 n2=n3;
 n4=n5;
 if (n6<=JAMAICA_BLOCK_GET_DATA32(r0,6).i) { goto l17; }
 n6=JAMAICA_BLOCK_GET_DATA32(r0,6).i;
 goto l18;
l17:
 r3=r2;
 r5=r4;
 n0=n1;
 n2=n3;
 n4=n5;
l18:
 r2=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(r5,3).i = n0;
 JAMAICA_BLOCK_GET_DATA32(r5,4).i = n2;
 JAMAICA_BLOCK_GET_DATA32(r5,5).i = n4;
 JAMAICA_BLOCK_GET_DATA32(r5,6).i = n6;
 r3=r2;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_java2d_pipe_Region_34_isEmpty28,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n0,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 if (n0!=0) { goto l20; }
 
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
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 jam_comp_sun_java2d_pipe_Region_34_filteSpans15(ct,r2,r0,r1,4);
l20:
 
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 ct->m.cli-=4;
 return r3;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return JAMAICA_NULL;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return JAMAICA_NULL;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pipe_Region_34_filteSpans15(jamaica_thread *ct,jamaica_ref r3,jamaica_ref r4,jamaica_ref r6,jamaica_int32 n13) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r5=JAMAICA_NULL,r7=JAMAICA_NULL,r9=JAMAICA_NULL,r10=JAMAICA_NULL,r11=JAMAICA_NULL,r12=JAMAICA_NULL,r13=JAMAICA_NULL,r14=JAMAICA_NULL,r15=JAMAICA_NULL,r16=JAMAICA_NULL,r17=JAMAICA_NULL,r18=JAMAICA_NULL,r19=JAMAICA_NULL,r20=JAMAICA_NULL,r21=JAMAICA_NULL,r22=JAMAICA_NULL,r23=JAMAICA_NULL,r24=JAMAICA_NULL,r25=JAMAICA_NULL,r26=JAMAICA_NULL,r27=JAMAICA_NULL,r28=JAMAICA_NULL,r29=JAMAICA_NULL,r30=JAMAICA_NULL,r31=JAMAICA_NULL;
 jamaica_int32 n81=0,n85=0,n15=0,n16=0,n20=0,n21=0,n23=0,n24=0,n26=0,n27=0,n30=0,n31=0,n33=0,n34=0,n36=0,n37=0,n39=0,n40=0,n42=0,n43=0,n45=0,n46=0,n48=0,n49=0,n52=0,n53=0,n62=0,n63=0,n68=0,n69=0,n70=0,n103=0,n72=0,n73=0,n74=0,n75=0,n76=0,n77=0,n78=0,n79=0,n80=0,n82=0,n83=0,n84=0,n86=0,n87=0,n88=0,n89=0,n90=0,n91=0,n92=0,n93=0,n94=0,n95=0,n96=0,n97=0,n98=0,n99=0,n100=0,n101=0,n102=0;
 jamaica_ref b1=JAMAICA_NULL,b2=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+28;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r9=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r9==JAMAICA_NULL) { goto LABEL_tNPE; }
 r10=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r9,7).r,3).r;
 r5=r10;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r6,7).r,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 if (r10!=JAMAICA_NULL) { goto l4; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r10=jamaicaInterpreter_allocSimpleArray(ct,5,ct->vm->array_class[10]);
 n77=JAMAICA_BLOCK_GET_DATA32(r9,4).i;
 n78=(JAMAICA_BLOCK_GET_DATA32(r10,3).i&15);
 JAMAICA_SET_ARRAY32(r10,0,n77);
 n77=JAMAICA_BLOCK_GET_DATA32(r9,6).i;
 JAMAICA_SET_ARRAY32(r10,1,n77);
 JAMAICA_SET_ARRAY32(r10,2,1);
 n77=JAMAICA_BLOCK_GET_DATA32(r9,3).i;
 JAMAICA_SET_ARRAY32(r10,3,n77);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 n77=JAMAICA_BLOCK_GET_DATA32(r9,5).i;
 JAMAICA_SET_ARRAY32(r10,4,n77);
 r5=r10;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

l4:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 if (r7!=JAMAICA_NULL) { goto l6; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 r9=jamaicaInterpreter_allocSimpleArray(ct,5,ct->vm->array_class[10]);
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n77=JAMAICA_BLOCK_GET_DATA32(r6,4).i;
 n78=(JAMAICA_BLOCK_GET_DATA32(r9,3).i&15);
 JAMAICA_SET_ARRAY32(r9,0,n77);
 n77=JAMAICA_BLOCK_GET_DATA32(r6,6).i;
 JAMAICA_SET_ARRAY32(r9,1,n77);
 JAMAICA_SET_ARRAY32(r9,2,1);
 n77=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 JAMAICA_SET_ARRAY32(r9,3,n77);
 n77=JAMAICA_BLOCK_GET_DATA32(r6,5).i;
 JAMAICA_SET_ARRAY32(r9,4,n77);
 r7=r9;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

l6:
 r9=jamaicaInterpreter_allocSimpleArray(ct,6,ct->vm->array_class[10]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n77=0;
 n78=JAMAICA_ADDS32(n77,1);
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 n79=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n80=((n79>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n77))>=((jamaica_uint32)(n80))) { goto LABEL_tAIOOBE; }
 n79=(n79&15);
 JAMAICA_GET_ARRAY32(r5,n77,n77);
 n81=n77;
 n82=JAMAICA_ADDS32(n78,1);
 if (((jamaica_uint32)(n78))>=((jamaica_uint32)(n80))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r5,n78,n77);
 n78=n77;
 n83=JAMAICA_ADDS32(n82,1);
 n77=n83;
 if (((jamaica_uint32)(n82))>=((jamaica_uint32)(n80))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r5,n82,n79);
 n79=JAMAICA_ADDS32(n83,JAMAICA_MULS32(2,n79));
 n80=0;
 n82=JAMAICA_ADDS32(n80,1);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 n83=JAMAICA_BLOCK_GET_DATA32(r7,3).i;
 n84=((n83>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n80))>=((jamaica_uint32)(n84))) { goto LABEL_tAIOOBE; }
 n83=(n83&15);
 JAMAICA_GET_ARRAY32(r7,n80,n80);
 n85=n80;
 n86=JAMAICA_ADDS32(n82,1);
 if (((jamaica_uint32)(n82))>=((jamaica_uint32)(n84))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r7,n82,n80);
 n82=n80;
 n87=JAMAICA_ADDS32(n86,1);
 n80=n87;
 if (((jamaica_uint32)(n86))>=((jamaica_uint32)(n84))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r7,n86,n83);
 n83=JAMAICA_ADDS32(n87,JAMAICA_MULS32(2,n83));
 n84=JAMAICA_BLOCK_GET_DATA32(r3,4).i;
 r10=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 b1=JAMAICA_NULL;
 n87=0;
 n86=0;
 b2=JAMAICA_NULL;
 n16=0;
 n15=0;
 n21=0;
 n20=0;
 n24=0;
 n23=0;
 n27=0;
 n26=0;
 n31=0;
 n30=0;
 n34=0;
 n33=0;
 n37=0;
 n36=0;
 n40=0;
 n39=0;
 n43=0;
 n42=0;
 n46=0;
 n45=0;
 n49=0;
 n48=0;
 n53=0;
 n52=0;
 n63=0;
 n62=0;
 if (r4==JAMAICA_NULL) { goto l8; }
 b1=JAMAICA_BLOCK_GET_DATA32(r4,7).r;
l8:
 r11=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 if (r11==JAMAICA_NULL) { goto l10; }
 n86=JAMAICA_BLOCK_GET_DATA32(r11,3).i;
 n87=((n86>>4) &  ((jamaica_int32)268435455));
 n86=(n86&15);
l10:
 n88=n13;
 n88=(n88&2);
 r12=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r12;}
#else
{jamaica_ref new_ref=r12;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 if (r6==JAMAICA_NULL) { goto l12; }
 b2=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
l12:
 r13=r7;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[9]=new_ref;}
#endif

 if (r13==JAMAICA_NULL) { goto l14; }
 n15=JAMAICA_BLOCK_GET_DATA32(r13,3).i;
 n16=((n15>>4) &  ((jamaica_int32)268435455));
 n15=(n15&15);
l14:
 n89=n13;
 n89=(n89&1);
 r14=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[10]=new_ref;}
#endif

 n90=n13;
 n90=(n90&1);
 r15=r9;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r15;}
#else
{jamaica_ref new_ref=r15;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 if (r15==JAMAICA_NULL) { goto l16; }
 n20=JAMAICA_BLOCK_GET_DATA32(r15,3).i;
 n21=((n20>>4) &  ((jamaica_int32)268435455));
 n20=(n20&15);
l16:
 r16=r9;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=r16;}
#else
{jamaica_ref new_ref=r16;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[12]=new_ref;}
#endif

 r17=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[13]=new_ref;}
#endif

 if (r17==JAMAICA_NULL) { goto l18; }
 n23=JAMAICA_BLOCK_GET_DATA32(r17,3).i;
 n24=((n23>>4) &  ((jamaica_int32)268435455));
 n23=(n23&15);
l18:
 if (r16==JAMAICA_NULL) { goto l20; }
 n26=JAMAICA_BLOCK_GET_DATA32(r16,3).i;
 n27=((n26>>4) &  ((jamaica_int32)268435455));
 n26=(n26&15);
l20:
 r18=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=r18;}
#else
{jamaica_ref new_ref=r18;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[14]=new_ref;}
#endif

 n91=n13;
 n91=(n91&2);
 r19=r9;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[15];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[15]=r19;}
#else
{jamaica_ref new_ref=r19;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[15]=new_ref;}
#endif

 if (r19==JAMAICA_NULL) { goto l22; }
 n30=JAMAICA_BLOCK_GET_DATA32(r19,3).i;
 n31=((n30>>4) &  ((jamaica_int32)268435455));
 n30=(n30&15);
l22:
 r20=r9;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[16];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[16]=r20;}
#else
{jamaica_ref new_ref=r20;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[16]=new_ref;}
#endif

 r21=r7;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[17];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[17]=r21;}
#else
{jamaica_ref new_ref=r21;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[17]=new_ref;}
#endif

 if (r21==JAMAICA_NULL) { goto l24; }
 n33=JAMAICA_BLOCK_GET_DATA32(r21,3).i;
 n34=((n33>>4) &  ((jamaica_int32)268435455));
 n33=(n33&15);
l24:
 if (r20==JAMAICA_NULL) { goto l26; }
 n36=JAMAICA_BLOCK_GET_DATA32(r20,3).i;
 n37=((n36>>4) &  ((jamaica_int32)268435455));
 n36=(n36&15);
l26:
 r22=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[18];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[18]=r22;}
#else
{jamaica_ref new_ref=r22;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[18]=new_ref;}
#endif

 r23=r9;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=r23;}
#else
{jamaica_ref new_ref=r23;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[19]=new_ref;}
#endif

 if (r23==JAMAICA_NULL) { goto l28; }
 n39=JAMAICA_BLOCK_GET_DATA32(r23,3).i;
 n40=((n39>>4) &  ((jamaica_int32)268435455));
 n39=(n39&15);
l28:
 r24=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=r24;}
#else
{jamaica_ref new_ref=r24;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[20]=new_ref;}
#endif

 if (r24==JAMAICA_NULL) { goto l30; }
 n42=JAMAICA_BLOCK_GET_DATA32(r24,3).i;
 n43=((n42>>4) &  ((jamaica_int32)268435455));
 n42=(n42&15);
l30:
 r25=r7;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=r25;}
#else
{jamaica_ref new_ref=r25;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[21]=new_ref;}
#endif

 if (r25==JAMAICA_NULL) { goto l32; }
 n45=JAMAICA_BLOCK_GET_DATA32(r25,3).i;
 n46=((n45>>4) &  ((jamaica_int32)268435455));
 n45=(n45&15);
l32:
 r26=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=r26;}
#else
{jamaica_ref new_ref=r26;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[22]=new_ref;}
#endif

 r27=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=r27;}
#else
{jamaica_ref new_ref=r27;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[23]=new_ref;}
#endif

 if (r5==JAMAICA_NULL) { goto l34; }
 n48=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n49=((n48>>4) &  ((jamaica_int32)268435455));
 n48=(n48&15);
l34:
 n92=n13;
 n92=(n92&2);
 r28=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=r28;}
#else
{jamaica_ref new_ref=r28;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[24]=new_ref;}
#endif

 if (r7==JAMAICA_NULL) { goto l36; }
 n52=JAMAICA_BLOCK_GET_DATA32(r7,3).i;
 n53=((n52>>4) &  ((jamaica_int32)268435455));
 n52=(n52&15);
l36:
 n93=n13;
 n93=(n93&1);
 r29=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[25];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[25]=r29;}
#else
{jamaica_ref new_ref=r29;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[25]=new_ref;}
#endif

 n94=n13;
 n94=(n94&1);
 n94=(0!=(n94));
 n95=n13;
 n95=(n95&2);
 n95=(0!=(n95));
 n13=(n13&4);
 n13=(0!=(n13));
 r30=r9;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=r30;}
#else
{jamaica_ref new_ref=r30;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[26]=new_ref;}
#endif

 if (r30==JAMAICA_NULL) { goto l38; }
 n62=JAMAICA_BLOCK_GET_DATA32(r30,3).i;
 n63=((n62>>4) &  ((jamaica_int32)268435455));
 n62=(n62&15);
l38:
 r31=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[27];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[27]=r31;}
#else
{jamaica_ref new_ref=r31;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[27]=new_ref;}
#endif

 if (r4==JAMAICA_NULL) { goto l158; }
 if (r11==JAMAICA_NULL) { goto l158; }
 if (r6==JAMAICA_NULL) { goto l158; }
 if (r13==JAMAICA_NULL) { goto l158; }
 if (r15==JAMAICA_NULL) { goto l158; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n21))) { goto l158; }
 if (((jamaica_uint32)(3))>=((jamaica_uint32)(n21))) { goto l158; }
 if (r17==JAMAICA_NULL) { goto l158; }
 if (r16==JAMAICA_NULL) { goto l158; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n27))) { goto l158; }
 if (((jamaica_uint32)(2))>=((jamaica_uint32)(n27))) { goto l158; }
 if (r19==JAMAICA_NULL) { goto l158; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n31))) { goto l158; }
 if (((jamaica_uint32)(3))>=((jamaica_uint32)(n31))) { goto l158; }
 if (r21==JAMAICA_NULL) { goto l158; }
 if (r20==JAMAICA_NULL) { goto l158; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n37))) { goto l158; }
 if (((jamaica_uint32)(2))>=((jamaica_uint32)(n37))) { goto l158; }
 if (r23==JAMAICA_NULL) { goto l158; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n40))) { goto l158; }
 if (((jamaica_uint32)(3))>=((jamaica_uint32)(n40))) { goto l158; }
 if (r24==JAMAICA_NULL) { goto l158; }
 if (r25==JAMAICA_NULL) { goto l158; }
 if (r5==JAMAICA_NULL) { goto l158; }
 if (r7==JAMAICA_NULL) { goto l158; }
 if (r30==JAMAICA_NULL) { goto l158; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n63))) { goto l158; }
 if (((jamaica_uint32)(2))>=((jamaica_uint32)(n63))) { goto l158; }
 if (n86!=0) { goto l158; }
 if (n15!=0) { goto l158; }
 if (n20!=0) { goto l158; }
 if (n23!=0) { goto l158; }
 if (n26!=0) { goto l158; }
 if (n30!=0) { goto l158; }
 if (n33!=0) { goto l158; }
 if (n36!=0) { goto l158; }
 if (n39!=0) { goto l158; }
 if (n42!=0) { goto l158; }
 if (n45!=0) { goto l158; }
 if (n48!=0) { goto l158; }
 if (n52!=0) { goto l158; }
 if (n62!=0) { goto l158; }
l80:
 n96=n84;
 n72=JAMAICA_BLOCK_GET_DATA32(r10,6).i;
 n73=JAMAICA_BLOCK_GET_DATA32(b1,2).i;
 n74=JAMAICA_BLOCK_GET_DATA32(r12,6).i;
 n75=JAMAICA_BLOCK_GET_DATA32(b2,2).i;
 n76=JAMAICA_BLOCK_GET_DATA32(r14,6).i;
l81:
 if (n96>=n72) { goto l326; }
 n97=n78;
 if (n96<n97) { goto l89; }
 if (n79>=n73) { goto l86; }
 n77=n79;
 n78=JAMAICA_ADDS32(n77,1);
 if (((jamaica_uint32)(n77))>=((jamaica_uint32)(n87))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r11,n77,n77);
 n81=n77;
 n79=JAMAICA_ADDS32(n78,1);
 if (((jamaica_uint32)(n78))>=((jamaica_uint32)(n87))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r11,n78,n77);
 n78=n77;
 n97=JAMAICA_ADDS32(n79,1);
 n77=n97;
 if (((jamaica_uint32)(n79))>=((jamaica_uint32)(n87))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r11,n79,n79);
 n79=JAMAICA_ADDS32(n97,JAMAICA_MULS32(2,n79));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l81; }
 jamaicaScheduler_syncPointFull(ct);
 goto l81;
l86:
 if (n88==0) { goto l326; }
 n78=n74;
 n81=n74;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l81; }
 jamaicaScheduler_syncPointFull(ct);
 goto l81;
l89:
 n98=n82;
 if (n96<n98) { goto l96; }
 if (n83>=n75) { goto l93; }
 n80=n83;
 n82=JAMAICA_ADDS32(n80,1);
 if (((jamaica_uint32)(n80))>=((jamaica_uint32)(n16))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r13,n80,n80);
 n85=n80;
 n83=JAMAICA_ADDS32(n82,1);
 if (((jamaica_uint32)(n82))>=((jamaica_uint32)(n16))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r13,n82,n80);
 n82=n80;
 n97=JAMAICA_ADDS32(n83,1);
 n80=n97;
 if (((jamaica_uint32)(n83))>=((jamaica_uint32)(n16))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r13,n83,n83);
 n83=JAMAICA_ADDS32(n97,JAMAICA_MULS32(2,n83));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l81; }
 jamaicaScheduler_syncPointFull(ct);
 goto l81;
l93:
 if (n89==0) { goto l326; }
 n82=n76;
 n85=n76;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l81; }
 jamaicaScheduler_syncPointFull(ct);
 goto l81;
l96:
 if (n96>=n85) { goto l105; }
 if (n84>=n81) { goto l100; }
 n84=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n84>>20) |  ((n84>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n84=jam_comp_java_lang_Math_82_min23(ct,n81,n85);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l80; }
 jamaicaScheduler_syncPointFull(ct);
 goto l80;
l100:
 n96=n78;
 n72=n85;
 n73=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n73>>20) |  ((n73>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n96=jam_comp_java_lang_Math_82_min23(ct,n96,n72);
 n72=n96;
 if (n90==0) { goto l156; }
 JAMAICA_SET_ARRAY32_D0(r15,1,n84);
 JAMAICA_SET_ARRAY32_D0(r15,3,n96);
 n84=n77;
 n96=n79;
l102:
 if (n84>=n96) { goto l156; }
 n73=JAMAICA_ADDS32(n84,1);
 if (((jamaica_uint32)(n84))>=((jamaica_uint32)(n24))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r17,n84,n84);
 JAMAICA_SET_ARRAY32_D0(r16,0,n84);
 n84=JAMAICA_ADDS32(n73,1);
 if (((jamaica_uint32)(n73))>=((jamaica_uint32)(n24))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r17,n73,n73);
 JAMAICA_SET_ARRAY32_D0(r16,2,n73);
 jam_comp_sun_java2d_pipe_Region_34_appendSpan18(ct,r18,r16);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l102; }
 jamaicaScheduler_syncPointFull(ct);
 goto l102;
l105:
 if (n96>=n81) { goto l111; }
 n96=n82;
 n72=n81;
 n73=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n73>>20) |  ((n73>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n96=jam_comp_java_lang_Math_82_min23(ct,n96,n72);
 n72=n96;
 if (n91==0) { goto l156; }
 JAMAICA_SET_ARRAY32_D0(r19,1,n84);
 JAMAICA_SET_ARRAY32_D0(r19,3,n96);
 n84=n80;
 n96=n83;
l108:
 if (n84>=n96) { goto l156; }
 n73=JAMAICA_ADDS32(n84,1);
 if (((jamaica_uint32)(n84))>=((jamaica_uint32)(n34))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r21,n84,n84);
 JAMAICA_SET_ARRAY32_D0(r20,0,n84);
 n84=JAMAICA_ADDS32(n73,1);
 if (((jamaica_uint32)(n73))>=((jamaica_uint32)(n34))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r21,n73,n73);
 JAMAICA_SET_ARRAY32_D0(r20,2,n73);
 jam_comp_sun_java2d_pipe_Region_34_appendSpan18(ct,r22,r20);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l108; }
 jamaicaScheduler_syncPointFull(ct);
 goto l108;
l111:
 n96=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n96>>20) |  ((n96>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n96=n97;
 if (n97<=n98) { goto l113; }
 n96=n98;
l113:
 n72=n96;
 JAMAICA_SET_ARRAY32_D0(r23,1,n84);
 JAMAICA_SET_ARRAY32_D0(r23,3,n96);
 n96=n80;
 n73=JAMAICA_ADDS32(n77,1);
 if (((jamaica_uint32)(n77))>=((jamaica_uint32)(n43))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r24,n77,n74);
 n75=n74;
 n84=JAMAICA_ADDS32(n73,1);
 if (((jamaica_uint32)(n73))>=((jamaica_uint32)(n43))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r24,n73,n73);
 n76=JAMAICA_ADDS32(n96,1);
 if (((jamaica_uint32)(n96))>=((jamaica_uint32)(n46))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r25,n96,n97);
 n98=n97;
 n96=JAMAICA_ADDS32(n76,1);
 if (((jamaica_uint32)(n76))>=((jamaica_uint32)(n46))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r25,n76,n76);
 n99=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n99>>20) |  ((n99>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n99=n74;
 if (n74>n97) { goto l115; }
 n74=n99;
 goto l116;
l115:
 n74=n97;
l116:
 n97=n74;
 n99=JAMAICA_BLOCK_GET_DATA32(r26,3).i;
 if (n74>=n99) { goto l118; }
 n97=n99;
l118:
 n74=n79;
 n99=n83;
l119:
 n100=n97;
 n68=JAMAICA_BLOCK_GET_DATA32(r27,5).i;
 n69=JAMAICA_BLOCK_GET_DATA32(r28,5).i;
 n70=JAMAICA_BLOCK_GET_DATA32(r29,5).i;
l120:
 if (n100>=n68) { goto l156; }
 n101=n73;
 if (n100<n101) { goto l130; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l124; }
 jamaicaScheduler_syncPointFull(ct);
l124:
 if (n84>=n74) { goto l127; }
 n73=JAMAICA_ADDS32(n84,1);
 if (((jamaica_uint32)(n84))>=((jamaica_uint32)(n49))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r5,n84,n84);
 n75=n84;
 n84=JAMAICA_ADDS32(n73,1);
 if (((jamaica_uint32)(n73))>=((jamaica_uint32)(n49))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r5,n73,n73);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l120; }
 jamaicaScheduler_syncPointFull(ct);
 goto l120;
l127:
 if (n92==0) { goto l156; }
 n73=n69;
 n75=n69;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l120; }
 jamaicaScheduler_syncPointFull(ct);
 goto l120;
l130:
 n102=n76;
 if (n100<n102) { goto l139; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l133; }
 jamaicaScheduler_syncPointFull(ct);
l133:
 if (n96>=n99) { goto l136; }
 n76=JAMAICA_ADDS32(n96,1);
 if (((jamaica_uint32)(n96))>=((jamaica_uint32)(n53))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r7,n96,n96);
 n98=n96;
 n96=JAMAICA_ADDS32(n76,1);
 if (((jamaica_uint32)(n76))>=((jamaica_uint32)(n53))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r7,n76,n76);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l120; }
 jamaicaScheduler_syncPointFull(ct);
 goto l120;
l136:
 if (n93==0) { goto l156; }
 n76=n70;
 n98=n70;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l120; }
 jamaicaScheduler_syncPointFull(ct);
 goto l120;
l139:
 if (n100>=n98) { goto l145; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l142; }
 jamaicaScheduler_syncPointFull(ct);
l142:
 if (n97>=n75) { goto l144; }
 n100=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n100>>20) |  ((n100>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n100=jam_comp_java_lang_Math_82_min23(ct,n75,n98);
 n68=0;
 goto l152;
l144:
 n100=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n100>>20) |  ((n100>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n100=jam_comp_java_lang_Math_82_min23(ct,n73,n98);
 n68=n94;
 goto l152;
l145:
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l147; }
 jamaicaScheduler_syncPointFull(ct);
l147:
 if (n100>=n75) { goto l149; }
 n100=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n100>>20) |  ((n100>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n100=jam_comp_java_lang_Math_82_min23(ct,n75,n76);
 n68=n95;
 goto l152;
l149:
 n100=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n100>>20) |  ((n100>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n100=n101;
 if (n101<=n102) { goto l151; }
 n100=n102;
l151:
 n68=n13;
l152:
 if (n68==0) { goto l154; }
 JAMAICA_SET_ARRAY32_D0(r30,0,n97);
 JAMAICA_SET_ARRAY32_D0(r30,2,n100);
 jam_comp_sun_java2d_pipe_Region_34_appendSpan18(ct,r31,r30);
l154:
 n97=n100;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l119; }
 jamaicaScheduler_syncPointFull(ct);
 goto l119;
l156:
 n84=n72;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l80; }
 jamaicaScheduler_syncPointFull(ct);
 goto l80;
l158:
 n96=n84;
 n73=0;
 n75=0;
 n72=JAMAICA_BLOCK_GET_DATA32(r10,6).i;
 if (r4==JAMAICA_NULL) { goto l160; }
 n73=JAMAICA_BLOCK_GET_DATA32(b1,2).i;
l160:
 n74=JAMAICA_BLOCK_GET_DATA32(r12,6).i;
 if (r6==JAMAICA_NULL) { goto l162; }
 n75=JAMAICA_BLOCK_GET_DATA32(b2,2).i;
l162:
 n76=JAMAICA_BLOCK_GET_DATA32(r14,6).i;
 if (r4==JAMAICA_NULL) { goto l181; }
 if (r11==JAMAICA_NULL) { goto l181; }
 if (r6==JAMAICA_NULL) { goto l181; }
 if (r13==JAMAICA_NULL) { goto l181; }
l166:
 if (n96>=n72) { goto l326; }
 n97=n78;
 n99=n97;
 if (n96<n97) { goto l174; }
 if (n79>=n73) { goto l171; }
 n77=n79;
 n78=JAMAICA_ADDS32(n77,1);
 if (((jamaica_uint32)(n77))>=((jamaica_uint32)(n87))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r11,n77,n77);
 n81=n77;
 n79=JAMAICA_ADDS32(n78,1);
 if (((jamaica_uint32)(n78))>=((jamaica_uint32)(n87))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r11,n78,n77);
 n78=n77;
 n97=JAMAICA_ADDS32(n79,1);
 n77=n97;
 if (((jamaica_uint32)(n79))>=((jamaica_uint32)(n87))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r11,n79,n79);
 n79=JAMAICA_ADDS32(n97,JAMAICA_MULS32(2,n79));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l166; }
 jamaicaScheduler_syncPointFull(ct);
 goto l166;
l171:
 if (n88==0) { goto l326; }
 n78=n74;
 n81=n74;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l166; }
 jamaicaScheduler_syncPointFull(ct);
 goto l166;
l174:
 n98=n82;
 n97=n98;
 if (n96<n98) { goto l213; }
 if (n83>=n75) { goto l178; }
 n80=n83;
 n82=JAMAICA_ADDS32(n80,1);
 if (((jamaica_uint32)(n80))>=((jamaica_uint32)(n16))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r13,n80,n80);
 n85=n80;
 n83=JAMAICA_ADDS32(n82,1);
 if (((jamaica_uint32)(n82))>=((jamaica_uint32)(n16))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r13,n82,n80);
 n82=n80;
 n97=JAMAICA_ADDS32(n83,1);
 n80=n97;
 if (((jamaica_uint32)(n83))>=((jamaica_uint32)(n16))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r13,n83,n83);
 n83=JAMAICA_ADDS32(n97,JAMAICA_MULS32(2,n83));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l166; }
 jamaicaScheduler_syncPointFull(ct);
 goto l166;
l178:
 if (n89==0) { goto l326; }
 n82=n76;
 n85=n76;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l166; }
 jamaicaScheduler_syncPointFull(ct);
 goto l166;
l181:
 if (r4==JAMAICA_NULL) { goto l191; }
 if (r11==JAMAICA_NULL) { goto l191; }
l183:
 if (n96>=n72) { goto l326; }
 n97=n78;
 n99=n97;
 if (n96<n97) { goto l206; }
 if (n79>=n73) { goto l188; }
 n77=n79;
 n78=JAMAICA_ADDS32(n77,1);
 if (((jamaica_uint32)(n77))>=((jamaica_uint32)(n87))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r11,n77,n77);
 n81=n77;
 n79=JAMAICA_ADDS32(n78,1);
 if (((jamaica_uint32)(n78))>=((jamaica_uint32)(n87))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r11,n78,n77);
 n78=n77;
 n97=JAMAICA_ADDS32(n79,1);
 n77=n97;
 if (((jamaica_uint32)(n79))>=((jamaica_uint32)(n87))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r11,n79,n79);
 n79=JAMAICA_ADDS32(n97,JAMAICA_MULS32(2,n79));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l183; }
 jamaicaScheduler_syncPointFull(ct);
 goto l183;
l188:
 if (n88==0) { goto l326; }
 n78=n74;
 n81=n74;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l183; }
 jamaicaScheduler_syncPointFull(ct);
 goto l183;
l191:
 if (r4==JAMAICA_NULL) { goto l198; }
 if (r11==JAMAICA_NULL) { goto l198; }
l193:
 if (n96>=n72) { goto l326; }
 n97=n78;
 n99=n97;
 if (n96<n97) { goto l206; }
 if (n79>=n73) { goto l203; }
 n77=n79;
 n78=JAMAICA_ADDS32(n77,1);
 if (((jamaica_uint32)(n77))>=((jamaica_uint32)(n87))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r11,n77,n77);
 n81=n77;
 n79=JAMAICA_ADDS32(n78,1);
 if (((jamaica_uint32)(n78))>=((jamaica_uint32)(n87))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r11,n78,n77);
 n78=n77;
 n97=JAMAICA_ADDS32(n79,1);
 n77=n97;
 if (((jamaica_uint32)(n79))>=((jamaica_uint32)(n87))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r11,n79,n79);
 n79=JAMAICA_ADDS32(n97,JAMAICA_MULS32(2,n79));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l193; }
 jamaicaScheduler_syncPointFull(ct);
 goto l193;
l198:
 if (n96>=n72) { goto l326; }
 n97=n78;
 n99=n97;
 if (n96<n97) { goto l206; }
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (n79>=n73) { goto l203; }
 n77=n79;
 n78=JAMAICA_ADDS32(n77,1);
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n77))>=((jamaica_uint32)(n87))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r11,n77,n77);
 n81=n77;
 n79=JAMAICA_ADDS32(n78,1);
 if (((jamaica_uint32)(n78))>=((jamaica_uint32)(n87))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r11,n78,n77);
 n78=n77;
 n97=JAMAICA_ADDS32(n79,1);
 n77=n97;
 if (((jamaica_uint32)(n79))>=((jamaica_uint32)(n87))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r11,n79,n79);
 n79=JAMAICA_ADDS32(n97,JAMAICA_MULS32(2,n79));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l198; }
 jamaicaScheduler_syncPointFull(ct);
 goto l198;
l203:
 if (n88==0) { goto l326; }
 n78=n74;
 n81=n74;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l191; }
 jamaicaScheduler_syncPointFull(ct);
 goto l191;
l206:
 n98=n82;
 n97=n98;
 if (n96<n98) { goto l213; }
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (n83>=n75) { goto l210; }
 n80=n83;
 n82=JAMAICA_ADDS32(n80,1);
 if (r13==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n80))>=((jamaica_uint32)(n16))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r13,n80,n80);
 n85=n80;
 n83=JAMAICA_ADDS32(n82,1);
 if (((jamaica_uint32)(n82))>=((jamaica_uint32)(n16))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r13,n82,n80);
 n82=n80;
 n97=JAMAICA_ADDS32(n83,1);
 n80=n97;
 if (((jamaica_uint32)(n83))>=((jamaica_uint32)(n16))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r13,n83,n83);
 n83=JAMAICA_ADDS32(n97,JAMAICA_MULS32(2,n83));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l181; }
 jamaicaScheduler_syncPointFull(ct);
 goto l181;
l210:
 if (n89==0) { goto l326; }
 n82=n76;
 n85=n76;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l181; }
 jamaicaScheduler_syncPointFull(ct);
 goto l181;
l213:
 if (n96>=n85) { goto l228; }
 if (n84>=n81) { goto l217; }
 n84=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n84>>20) |  ((n84>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n84=jam_comp_java_lang_Math_82_min23(ct,n81,n85);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l158; }
 jamaicaScheduler_syncPointFull(ct);
 goto l158;
l217:
 n96=n78;
 n72=n85;
 n73=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n73>>20) |  ((n73>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n96=jam_comp_java_lang_Math_82_min23(ct,n96,n72);
 n72=n96;
 if (n90==0) { goto l324; }
 if (r15==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n21))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r15,1,n84);
 if (((jamaica_uint32)(3))>=((jamaica_uint32)(n21))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r15,3,n96);
 n84=n77;
 n96=n79;
 if (r17==JAMAICA_NULL) { goto l225; }
 if (r16==JAMAICA_NULL) { goto l225; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n27))) { goto l225; }
 if (((jamaica_uint32)(2))>=((jamaica_uint32)(n27))) { goto l225; }
l222:
 if (n84>=n96) { goto l324; }
 n73=JAMAICA_ADDS32(n84,1);
 if (((jamaica_uint32)(n84))>=((jamaica_uint32)(n24))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r17,n84,n84);
 JAMAICA_SET_ARRAY32(r16,0,n84);
 n84=JAMAICA_ADDS32(n73,1);
 if (((jamaica_uint32)(n73))>=((jamaica_uint32)(n24))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r17,n73,n73);
 JAMAICA_SET_ARRAY32(r16,2,n73);
 jam_comp_sun_java2d_pipe_Region_34_appendSpan18(ct,r18,r16);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l222; }
 jamaicaScheduler_syncPointFull(ct);
 goto l222;
l225:
 if (n84>=n96) { goto l324; }
 n73=JAMAICA_ADDS32(n84,1);
 if (r17==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n84))>=((jamaica_uint32)(n24))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r17,n84,n84);
 if (r16==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n27))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r16,0,n84);
 n84=JAMAICA_ADDS32(n73,1);
 if (((jamaica_uint32)(n73))>=((jamaica_uint32)(n24))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r17,n73,n73);
 if (((jamaica_uint32)(2))>=((jamaica_uint32)(n27))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r16,2,n73);
 jam_comp_sun_java2d_pipe_Region_34_appendSpan18(ct,r18,r16);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l225; }
 jamaicaScheduler_syncPointFull(ct);
 goto l225;
l228:
 if (n96>=n81) { goto l240; }
 n96=n82;
 n72=n81;
 n73=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n73>>20) |  ((n73>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n96=jam_comp_java_lang_Math_82_min23(ct,n96,n72);
 n72=n96;
 if (n91==0) { goto l324; }
 if (r19==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n31))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r19,1,n84);
 if (((jamaica_uint32)(3))>=((jamaica_uint32)(n31))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r19,3,n96);
 n84=n80;
 n96=n83;
 if (r21==JAMAICA_NULL) { goto l237; }
 if (r20==JAMAICA_NULL) { goto l237; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n37))) { goto l237; }
 if (((jamaica_uint32)(2))>=((jamaica_uint32)(n37))) { goto l237; }
l234:
 if (n84>=n96) { goto l324; }
 n73=JAMAICA_ADDS32(n84,1);
 if (((jamaica_uint32)(n84))>=((jamaica_uint32)(n34))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r21,n84,n84);
 JAMAICA_SET_ARRAY32(r20,0,n84);
 n84=JAMAICA_ADDS32(n73,1);
 if (((jamaica_uint32)(n73))>=((jamaica_uint32)(n34))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r21,n73,n73);
 JAMAICA_SET_ARRAY32(r20,2,n73);
 jam_comp_sun_java2d_pipe_Region_34_appendSpan18(ct,r22,r20);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l234; }
 jamaicaScheduler_syncPointFull(ct);
 goto l234;
l237:
 if (n84>=n96) { goto l324; }
 n73=JAMAICA_ADDS32(n84,1);
 if (r21==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n84))>=((jamaica_uint32)(n34))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r21,n84,n84);
 if (r20==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n37))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r20,0,n84);
 n84=JAMAICA_ADDS32(n73,1);
 if (((jamaica_uint32)(n73))>=((jamaica_uint32)(n34))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r21,n73,n73);
 if (((jamaica_uint32)(2))>=((jamaica_uint32)(n37))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r20,2,n73);
 jam_comp_sun_java2d_pipe_Region_34_appendSpan18(ct,r22,r20);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l237; }
 jamaicaScheduler_syncPointFull(ct);
 goto l237;
l240:
 n96=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n96>>20) |  ((n96>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n96=n99;
 if (n99<=n97) { goto l242; }
 n96=n97;
l242:
 n72=n96;
 if (r23==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n40))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r23,1,n84);
 if (((jamaica_uint32)(3))>=((jamaica_uint32)(n40))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r23,3,n96);
 n96=n80;
 n73=JAMAICA_ADDS32(n77,1);
 if (r24==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n77))>=((jamaica_uint32)(n43))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r24,n77,n74);
 n75=n74;
 n84=JAMAICA_ADDS32(n73,1);
 if (((jamaica_uint32)(n73))>=((jamaica_uint32)(n43))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r24,n73,n73);
 n76=JAMAICA_ADDS32(n96,1);
 if (r25==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n96))>=((jamaica_uint32)(n46))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r25,n96,n97);
 n98=n97;
 n96=JAMAICA_ADDS32(n76,1);
 if (((jamaica_uint32)(n76))>=((jamaica_uint32)(n46))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r25,n76,n76);
 n99=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n99>>20) |  ((n99>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n99=n74;
 if (n74>n97) { goto l244; }
 n74=n99;
 goto l245;
l244:
 n74=n97;
l245:
 n97=n74;
 n99=JAMAICA_BLOCK_GET_DATA32(r26,3).i;
 if (n74>=n99) { goto l247; }
 n97=n99;
l247:
 n74=n79;
 n99=n83;
l248:
 n100=n97;
 n68=JAMAICA_BLOCK_GET_DATA32(r27,5).i;
 n69=JAMAICA_BLOCK_GET_DATA32(r28,5).i;
 n70=JAMAICA_BLOCK_GET_DATA32(r29,5).i;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l250; }
 jamaicaScheduler_syncPointFull(ct);
l250:
 if (r5==JAMAICA_NULL) { goto l267; }
 if (r7==JAMAICA_NULL) { goto l267; }
l252:
 if (n100>=n68) { goto l324; }
 n101=n73;
 n103=n101;
 if (n100<n101) { goto l260; }
 if (n84>=n74) { goto l257; }
 n73=JAMAICA_ADDS32(n84,1);
 if (((jamaica_uint32)(n84))>=((jamaica_uint32)(n49))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r5,n84,n84);
 n75=n84;
 n84=JAMAICA_ADDS32(n73,1);
 if (((jamaica_uint32)(n73))>=((jamaica_uint32)(n49))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r5,n73,n73);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l252; }
 jamaicaScheduler_syncPointFull(ct);
 goto l252;
l257:
 if (n92==0) { goto l324; }
 n73=n69;
 n75=n69;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l252; }
 jamaicaScheduler_syncPointFull(ct);
 goto l252;
l260:
 n102=n76;
 n101=n102;
 if (n100<n102) { goto l311; }
 if (n96>=n99) { goto l264; }
 n76=JAMAICA_ADDS32(n96,1);
 if (((jamaica_uint32)(n96))>=((jamaica_uint32)(n53))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r7,n96,n96);
 n98=n96;
 n96=JAMAICA_ADDS32(n76,1);
 if (((jamaica_uint32)(n76))>=((jamaica_uint32)(n53))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r7,n76,n76);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l252; }
 jamaicaScheduler_syncPointFull(ct);
 goto l252;
l264:
 if (n93==0) { goto l324; }
 n76=n70;
 n98=n70;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l252; }
 jamaicaScheduler_syncPointFull(ct);
 goto l252;
l267:
 if (r5==JAMAICA_NULL) { goto l281; }
 if (r7==JAMAICA_NULL) { goto l281; }
l269:
 if (n100>=n68) { goto l324; }
 n101=n73;
 n103=n101;
 if (n100<n101) { goto l277; }
 if (n84>=n74) { goto l274; }
 n73=JAMAICA_ADDS32(n84,1);
 if (((jamaica_uint32)(n84))>=((jamaica_uint32)(n49))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r5,n84,n84);
 n75=n84;
 n84=JAMAICA_ADDS32(n73,1);
 if (((jamaica_uint32)(n73))>=((jamaica_uint32)(n49))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r5,n73,n73);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l269; }
 jamaicaScheduler_syncPointFull(ct);
 goto l269;
l274:
 if (n92==0) { goto l324; }
 n73=n69;
 n75=n69;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l269; }
 jamaicaScheduler_syncPointFull(ct);
 goto l269;
l277:
 n102=n76;
 n101=n102;
 if (n100<n102) { goto l311; }
 if (n96>=n99) { goto l308; }
 n76=JAMAICA_ADDS32(n96,1);
 if (((jamaica_uint32)(n96))>=((jamaica_uint32)(n53))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r7,n96,n96);
 n98=n96;
 n96=JAMAICA_ADDS32(n76,1);
 if (((jamaica_uint32)(n76))>=((jamaica_uint32)(n53))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r7,n76,n76);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l269; }
 jamaicaScheduler_syncPointFull(ct);
 goto l269;
l281:
 if (r5==JAMAICA_NULL) { goto l290; }
l282:
 if (n100>=n68) { goto l324; }
 n101=n73;
 n103=n101;
 if (n100<n101) { goto l304; }
 if (n84>=n74) { goto l287; }
 n73=JAMAICA_ADDS32(n84,1);
 if (((jamaica_uint32)(n84))>=((jamaica_uint32)(n49))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r5,n84,n84);
 n75=n84;
 n84=JAMAICA_ADDS32(n73,1);
 if (((jamaica_uint32)(n73))>=((jamaica_uint32)(n49))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r5,n73,n73);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l282; }
 jamaicaScheduler_syncPointFull(ct);
 goto l282;
l287:
 if (n92==0) { goto l324; }
 n73=n69;
 n75=n69;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l282; }
 jamaicaScheduler_syncPointFull(ct);
 goto l282;
l290:
 if (r5==JAMAICA_NULL) { goto l296; }
l291:
 if (n100>=n68) { goto l324; }
 n101=n73;
 n103=n101;
 if (n100<n101) { goto l304; }
 if (n84>=n74) { goto l301; }
 n73=JAMAICA_ADDS32(n84,1);
 if (((jamaica_uint32)(n84))>=((jamaica_uint32)(n49))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r5,n84,n84);
 n75=n84;
 n84=JAMAICA_ADDS32(n73,1);
 if (((jamaica_uint32)(n73))>=((jamaica_uint32)(n49))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r5,n73,n73);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l291; }
 jamaicaScheduler_syncPointFull(ct);
 goto l291;
l296:
 if (n100>=n68) { goto l324; }
 n101=n73;
 n103=n101;
 if (n100<n101) { goto l304; }
 if (n84>=n74) { goto l301; }
 n73=JAMAICA_ADDS32(n84,1);
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n84))>=((jamaica_uint32)(n49))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r5,n84,n84);
 n75=n84;
 n84=JAMAICA_ADDS32(n73,1);
 if (((jamaica_uint32)(n73))>=((jamaica_uint32)(n49))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r5,n73,n73);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l296; }
 jamaicaScheduler_syncPointFull(ct);
 goto l296;
l301:
 if (n92==0) { goto l324; }
 n73=n69;
 n75=n69;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l290; }
 jamaicaScheduler_syncPointFull(ct);
 goto l290;
l304:
 n102=n76;
 n101=n102;
 if (n100<n102) { goto l311; }
 if (n96>=n99) { goto l308; }
 n76=JAMAICA_ADDS32(n96,1);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n96))>=((jamaica_uint32)(n53))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r7,n96,n96);
 n98=n96;
 n96=JAMAICA_ADDS32(n76,1);
 if (((jamaica_uint32)(n76))>=((jamaica_uint32)(n53))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r7,n76,n76);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l281; }
 jamaicaScheduler_syncPointFull(ct);
 goto l281;
l308:
 if (n93==0) { goto l324; }
 n76=n70;
 n98=n70;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l267; }
 jamaicaScheduler_syncPointFull(ct);
 goto l267;
l311:
 if (n100>=n98) { goto l315; }
 if (n97>=n75) { goto l314; }
 n100=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n100>>20) |  ((n100>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n100=jam_comp_java_lang_Math_82_min23(ct,n75,n98);
 n68=0;
 goto l320;
l314:
 n100=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n100>>20) |  ((n100>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n100=jam_comp_java_lang_Math_82_min23(ct,n73,n98);
 n68=n94;
 goto l320;
l315:
 if (n100>=n75) { goto l317; }
 n100=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n100>>20) |  ((n100>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n100=jam_comp_java_lang_Math_82_min23(ct,n75,n76);
 n68=n95;
 goto l320;
l317:
 n100=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n100>>20) |  ((n100>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n100=n103;
 if (n103<=n101) { goto l319; }
 n100=n101;
l319:
 n68=n13;
l320:
 if (n68==0) { goto l322; }
 if (r30==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n63))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r30,0,n97);
 if (((jamaica_uint32)(2))>=((jamaica_uint32)(n63))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r30,2,n100);
 jam_comp_sun_java2d_pipe_Region_34_appendSpan18(ct,r31,r30);
l322:
 n97=n100;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l248; }
 jamaicaScheduler_syncPointFull(ct);
 goto l248;
l324:
 n84=n72;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l158; }
 jamaicaScheduler_syncPointFull(ct);
 goto l158;
l326:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[27];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[27]=JAMAICA_NULL;}
#else
{l[27]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=JAMAICA_NULL;}
#else
{l[26]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[25];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[25]=JAMAICA_NULL;}
#else
{l[25]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=JAMAICA_NULL;}
#else
{l[24]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=JAMAICA_NULL;}
#else
{l[23]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=JAMAICA_NULL;}
#else
{l[22]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=JAMAICA_NULL;}
#else
{l[21]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=JAMAICA_NULL;}
#else
{l[20]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=JAMAICA_NULL;}
#else
{l[19]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[18];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[18]=JAMAICA_NULL;}
#else
{l[18]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[17];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[17]=JAMAICA_NULL;}
#else
{l[17]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[16];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[16]=JAMAICA_NULL;}
#else
{l[16]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[15];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[15]=JAMAICA_NULL;}
#else
{l[15]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=JAMAICA_NULL;}
#else
{l[14]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=JAMAICA_NULL;}
#else
{l[13]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=JAMAICA_NULL;}
#else
{l[12]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
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
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r4=r3;
 r10=r4;
 r5=r9;
 if (r9==JAMAICA_NULL) { goto LABEL_tNPE; }
 n77=JAMAICA_BLOCK_GET_DATA32(r9,3).i;
 n78=((n77>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(4))>=((jamaica_uint32)(n78))) { goto LABEL_tAIOOBE; }
 n77=(n77&15);
 JAMAICA_GET_ARRAY32(r9,4,n79);
 if (((jamaica_uint32)(5))>=((jamaica_uint32)(n78))) { goto LABEL_tAIOOBE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_ARRAY32(r9,5,n78);
 if (n79<=n78) { goto l345; }
 b1=JAMAICA_BLOCK_GET_DATA32(r4,7).r;
 r4=JAMAICA_BLOCK_GET_DATA32(b1,3).r;
 r9=r4;
 n77=JAMAICA_ADDS32(n78,1);
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 n80=JAMAICA_BLOCK_GET_DATA32(r4,3).i;
 n81=((n80>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n77))>=((jamaica_uint32)(n81))) { goto LABEL_tAIOOBE; }
 n80=(n80&15);
 JAMAICA_GET_ARRAY32(r4,n77,n77);
 if (((jamaica_uint32)(n79))>=((jamaica_uint32)(n81))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r4,n79,n82);
 if (n77!=n82) { goto l345; }
 n77=JAMAICA_ADDS32(n78,2);
 if (((jamaica_uint32)(n77))>=((jamaica_uint32)(n81))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r4,n77,n77);
 n82=JAMAICA_ADDS32(n79,2);
 if (((jamaica_uint32)(n82))>=((jamaica_uint32)(n81))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r4,n82,n80);
 if (n77!=n80) { goto l345; }
 n80=JAMAICA_MULS32(n80,2);
 n77=JAMAICA_ADDS32(n79,3);
 n78=JAMAICA_ADDS32(n78,3);
 r4=r9;
 n81=0;
 n79=0;
 if (r4==JAMAICA_NULL) { goto l337; }
 n79=JAMAICA_BLOCK_GET_DATA32(r4,3).i;
 n81=((n79>>4) &  ((jamaica_int32)268435455));
 n79=(n79&15);
 if (n79!=0) { goto l337; }
l331:
 n82=n80;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l333; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
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

l333:
 if (n82<=0) { goto l343; }
 n83=n77;
 n77=JAMAICA_ADDS32(n83,1);
 if (((jamaica_uint32)(n83))>=((jamaica_uint32)(n81))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r4,n83,n83);
 n84=n78;
 n78=JAMAICA_ADDS32(n84,1);
 if (((jamaica_uint32)(n84))>=((jamaica_uint32)(n81))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r4,n84,n84);
 if (n83!=n84) { goto l343; }
 n80=JAMAICA_ADDS32(n82,(-1));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l331; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
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

 goto l331;
l337:
 n82=n80;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l339; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
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

l339:
 if (n82<=0) { goto l343; }
 n83=n77;
 n77=JAMAICA_ADDS32(n83,1);
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n83))>=((jamaica_uint32)(n81))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r4,n83,n83);
 n84=n78;
 n78=JAMAICA_ADDS32(n84,1);
 if (((jamaica_uint32)(n84))>=((jamaica_uint32)(n81))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r4,n84,n84);
 if (n83!=n84) { goto l343; }
 n80=JAMAICA_ADDS32(n82,(-1));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l337; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
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

 goto l337;
l343:
 if (n80!=0) { goto l345; }
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 n77=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 if (((jamaica_uint32)(5))>=((jamaica_uint32)(((n77>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n79=(n77&15);
 JAMAICA_GET_ARRAY32(r5,5,n77);
 n77=JAMAICA_ADDS32(n77,1);
 n79=JAMAICA_ADDS32(n78,1);
 if (r9==JAMAICA_NULL) { goto LABEL_tNPE; }
 n80=JAMAICA_BLOCK_GET_DATA32(r9,3).i;
 n81=((n80>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n79))>=((jamaica_uint32)(n81))) { goto LABEL_tAIOOBE; }
 n80=(n80&15);
 JAMAICA_GET_ARRAY32(r9,n79,n79);
 if (((jamaica_uint32)(n77))>=((jamaica_uint32)(n81))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r9,n77,n79);
 if (r10==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r10,7).r,2).i = n78;
 goto l346;
l345:
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 n77=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n78=((n77>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(4))>=((jamaica_uint32)(n78))) { goto LABEL_tAIOOBE; }
 n77=(n77&15);
 JAMAICA_GET_ARRAY32(r5,4,n79);
 if (((jamaica_uint32)(5))>=((jamaica_uint32)(n78))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r5,5,n79);
 if (r10==JAMAICA_NULL) { goto LABEL_tNPE; }
 n79=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r10,7).r,2).i;
 JAMAICA_SET_ARRAY32(r5,4,n79);
l346:
 r4=r3;
 b1=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 r9=JAMAICA_BLOCK_GET_DATA32(b1,3).r;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l348; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
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

l348:
 if (JAMAICA_BLOCK_GET_DATA32(b1,2).i>5) { goto l353; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 r10=r4;
 if (r10==JAMAICA_NULL) { goto LABEL_tNPE; }
 b1=JAMAICA_BLOCK_GET_DATA32(r10,7).r;
 if (JAMAICA_BLOCK_GET_DATA32(b1,2).i!=0) { goto l351; }
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(r4,6).i = 0;
 JAMAICA_BLOCK_GET_DATA32(r4,5).i = 0;
 JAMAICA_BLOCK_GET_DATA32(r4,4).i = 0;
 JAMAICA_BLOCK_GET_DATA32(r4,3).i = 0;
 goto l352;
l351:
 if (r9==JAMAICA_NULL) { goto LABEL_tNPE; }
 n77=JAMAICA_BLOCK_GET_DATA32(r9,3).i;
 n78=((n77>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n78))) { goto LABEL_tAIOOBE; }
 n77=(n77&15);
 JAMAICA_GET_ARRAY32(r9,0,n79);
 JAMAICA_BLOCK_GET_DATA32(r10,4).i = n79;
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n78))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r9,1,n79);
 JAMAICA_BLOCK_GET_DATA32(r10,6).i = n79;
 if (((jamaica_uint32)(3))>=((jamaica_uint32)(n78))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r9,3,n79);
 JAMAICA_BLOCK_GET_DATA32(r10,3).i = n79;
 if (((jamaica_uint32)(4))>=((jamaica_uint32)(n78))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r9,4,n77);
 JAMAICA_BLOCK_GET_DATA32(r10,5).i = n77;
 JAMAICA_BLOCK_GET_DATA32(b1,2).i = 0;
l352:
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r4,7).r,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r4,7).r,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r4,7).r,3).r=JAMAICA_NULL;}
#endif

 goto l368;
l353:
 n77=JAMAICA_BLOCK_GET_DATA32(r3,5).i;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 n78=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n79=0;
 n80=0;
 n81=0;
 n83=0;
 n82=0;
 n85=0;
 n84=0;
 if (r4==JAMAICA_NULL) { goto l355; }
 b1=JAMAICA_BLOCK_GET_DATA32(r4,7).r;
 n81=JAMAICA_BLOCK_GET_DATA32(b1,2).i;
l355:
 r10=r9;
 if (r10==JAMAICA_NULL) { goto l357; }
 n82=JAMAICA_BLOCK_GET_DATA32(r10,3).i;
 n83=((n82>>4) &  ((jamaica_int32)268435455));
 n82=(n82&15);
l357:
 r5=r9;
 if (r5==JAMAICA_NULL) { goto l359; }
 n84=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n85=((n84>>4) &  ((jamaica_int32)268435455));
 n84=(n84&15);
l359:
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (n80>=n81) { goto l367; }
 n79=n80;
 n86=JAMAICA_ADDS32(n80,2);
 if (r10==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n86))>=((jamaica_uint32)(n83))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r10,n86,n86);
 n87=JAMAICA_ADDS32(n80,3);
 n80=n87;
 if (((jamaica_uint32)(n87))>=((jamaica_uint32)(n83))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r10,n87,n87);
 if (n77<=n87) { goto l362; }
 n77=n87;
l362:
 n86=JAMAICA_MULS32(n86,2);
 n86=JAMAICA_ADDS32(n80,n86);
 n80=n86;
 n86=JAMAICA_SUBS32(n86,1);
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n86))>=((jamaica_uint32)(n85))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r5,n86,n86);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l364; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
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

l364:
 if (n78>=n86) { goto l359; }
 n78=n86;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l359; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
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

 goto l359;
l367:
 JAMAICA_BLOCK_GET_DATA32(r4,3).i = n77;
 if (r9==JAMAICA_NULL) { goto LABEL_tNPE; }
 n77=JAMAICA_BLOCK_GET_DATA32(r9,3).i;
 n80=((n77>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n80))) { goto LABEL_tAIOOBE; }
 n77=(n77&15);
 JAMAICA_GET_ARRAY32(r9,0,n81);
 JAMAICA_BLOCK_GET_DATA32(r4,4).i = n81;
 JAMAICA_BLOCK_GET_DATA32(r4,5).i = n78;
 n78=JAMAICA_ADDS32(n79,1);
 if (((jamaica_uint32)(n78))>=((jamaica_uint32)(n80))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r9,n78,n77);
 JAMAICA_BLOCK_GET_DATA32(r4,6).i = n77;
l368:
 ct->m.cli-=28;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pipe_Region_34_appendSpan18(jamaica_thread *ct,jamaica_ref r1,jamaica_ref r2) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r5=JAMAICA_NULL,r6=JAMAICA_NULL,r3=JAMAICA_NULL,r4=JAMAICA_NULL;
 jamaica_int32 n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0,n10=0,n11=0,n12=0,n13=0,n14=0,n15=0;
 jamaica_ref b0=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+6;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(((n3>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n4=(n3&15);
 JAMAICA_GET_ARRAY32(r2,0,n3);
 n4=n3;
 r3=r1;
 n5=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 if (n3>=n5) { goto l4; }
 n4=n5;
l4:
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(((n3>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n5=(n3&15);
 JAMAICA_GET_ARRAY32(r2,1,n3);
 n5=n3;
 r3=r1;
 n6=JAMAICA_BLOCK_GET_DATA32(r3,4).i;
 if (n3>=n6) { goto l6; }
 n5=n6;
l6:
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 if (((jamaica_uint32)(2))>=((jamaica_uint32)(((n3>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n6=(n3&15);
 JAMAICA_GET_ARRAY32(r2,2,n3);
 n6=n3;
 r3=r1;
 n7=JAMAICA_BLOCK_GET_DATA32(r3,5).i;
 if (n3<=n7) { goto l8; }
 n6=n7;
l8:
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 if (((jamaica_uint32)(3))>=((jamaica_uint32)(((n3>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n7=(n3&15);
 JAMAICA_GET_ARRAY32(r2,3,n3);
 n7=n3;
 r3=r1;
 n8=JAMAICA_BLOCK_GET_DATA32(r3,6).i;
 if (n3<=n8) { goto l10; }
 n7=n8;
l10:
 n3=n4;
 if (n6<=n3) { goto l12; }
 n8=n7;
 n9=n5;
 if (n8>n9) { goto l13; }
l12:
 
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

 ct->m.cli-=6;
 return;
l13:
 r3=r2;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 n10=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n11=((n10>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(4))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 n10=(n10&15);
 JAMAICA_GET_ARRAY32(r3,4,n10);
 n11=n10;
 r3=r1;
 b0=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 n12=JAMAICA_BLOCK_GET_DATA32(b0,2).i;
 if (n12==0) { goto l15; }
 r4=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 n13=JAMAICA_ADDS32(n10,1);
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 n14=JAMAICA_BLOCK_GET_DATA32(r4,3).i;
 n15=((n14>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n15))) { goto LABEL_tAIOOBE; }
 n14=(n14&15);
 JAMAICA_GET_ARRAY32(r4,n13,n13);
 if (n9<n13) { goto l37; }
l15:
 r3=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 r4=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r4!=JAMAICA_NULL) { goto l17; }
 
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
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r2=jamaicaInterpreter_allocSimpleArray(ct,50,ct->vm->array_class[10]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r1,7).r,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r1,7).r,3).r=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r1,7).r,3).r=new_ref;}
#endif

 goto l36;
l17:
 n3=5;
 n8=JAMAICA_BLOCK_GET_DATA32(b0,2).i;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 n9=JAMAICA_BLOCK_GET_DATA32(r4,3).i;
 n9=((n9>>4) &  ((jamaica_int32)268435455));
 if (JAMAICA_ADDS32(n8,n3)<n9) { goto l19; }
 n3=JAMAICA_ADDS32(n9,50);
 if ((n3<0)) { goto LABEL_tNASE; }
 r5=jamaicaInterpreter_allocSimpleArray(ct,n3,ct->vm->array_class[10]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 Jam_java_lang_System_arraycopy(ct,r4,0,r5,0,n8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(b0,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(b0,3).r=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(b0,3).r=new_ref;}
#endif

l19:
 
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

 r3=r1;
 r4=r2;
 r5=r3;
 r6=r4;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r4,3).i;
 n8=((n3>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(4))>=((jamaica_uint32)(n8))) { goto LABEL_tAIOOBE; }
 n3=(n3&15);
 JAMAICA_GET_ARRAY32(r4,4,n9);
 if (((jamaica_uint32)(5))>=((jamaica_uint32)(n8))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r4,5,n8);
 if (n9<=n8) { goto l34; }
 b0=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 r3=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 r4=r3;
 n3=JAMAICA_ADDS32(n8,1);
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 n10=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n11=((n10>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 n10=(n10&15);
 JAMAICA_GET_ARRAY32(r3,n3,n3);
 if (((jamaica_uint32)(n9))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r3,n9,n12);
 if (n3!=n12) { goto l34; }
 n3=JAMAICA_ADDS32(n8,2);
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r3,n3,n3);
 n12=JAMAICA_ADDS32(n9,2);
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r3,n12,n10);
 if (n3!=n10) { goto l34; }
 n10=JAMAICA_MULS32(n10,2);
 n3=JAMAICA_ADDS32(n9,3);
 n8=JAMAICA_ADDS32(n8,3);
 r3=r4;
 n11=0;
 n9=0;
 if (r3==JAMAICA_NULL) { goto l28; }
 n9=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n11=((n9>>4) &  ((jamaica_int32)268435455));
 n9=(n9&15);
 if (n9!=0) { goto l28; }
l24:
 n12=n10;
 if (n12<=0) { goto l32; }
 n13=n3;
 n3=JAMAICA_ADDS32(n13,1);
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r3,n13,n13);
 n14=n8;
 n8=JAMAICA_ADDS32(n14,1);
 if (((jamaica_uint32)(n14))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r3,n14,n14);
 if (n13!=n14) { goto l32; }
 n10=JAMAICA_ADDS32(n12,(-1));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l24; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
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
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 goto l24;
l28:
 n12=n10;
 if (n12<=0) { goto l32; }
 n13=n3;
 n3=JAMAICA_ADDS32(n13,1);
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r3,n13,n13);
 n14=n8;
 n8=JAMAICA_ADDS32(n14,1);
 if (((jamaica_uint32)(n14))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r3,n14,n14);
 if (n13!=n14) { goto l32; }
 n10=JAMAICA_ADDS32(n12,(-1));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l28; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
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
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 goto l28;
l32:
 if (n10!=0) { goto l34; }
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 if (((jamaica_uint32)(5))>=((jamaica_uint32)(((n3>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n9=(n3&15);
 JAMAICA_GET_ARRAY32(r6,5,n3);
 n3=JAMAICA_ADDS32(n3,1);
 n9=JAMAICA_ADDS32(n8,1);
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 n10=JAMAICA_BLOCK_GET_DATA32(r4,3).i;
 n11=((n10>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n9))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 n10=(n10&15);
 JAMAICA_GET_ARRAY32(r4,n9,n9);
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r4,n3,n9);
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r5,7).r,2).i = n8;
 goto l35;
l34:
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 n8=((n3>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(4))>=((jamaica_uint32)(n8))) { goto LABEL_tAIOOBE; }
 n3=(n3&15);
 JAMAICA_GET_ARRAY32(r6,4,n9);
 if (((jamaica_uint32)(5))>=((jamaica_uint32)(n8))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r6,5,n9);
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 n9=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r5,7).r,2).i;
 JAMAICA_SET_ARRAY32(r6,4,n9);
l35:
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 if (((jamaica_uint32)(4))>=((jamaica_uint32)(((n3>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n8=(n3&15);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_GET_ARRAY32(r2,4,n3);
 n11=n3;
l36:
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 n3=JAMAICA_BLOCK_GET_DATA32(b0,2).i;
 JAMAICA_BLOCK_GET_DATA32(b0,2).i = JAMAICA_ADDS32(n3,1);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n8=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n9=((n8>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 n8=(n8&15);
 JAMAICA_SET_ARRAY32(r2,n3,n5);
 n3=JAMAICA_BLOCK_GET_DATA32(b0,2).i;
 JAMAICA_BLOCK_GET_DATA32(b0,2).i = JAMAICA_ADDS32(n3,1);
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r2,n3,n7);
 n3=JAMAICA_BLOCK_GET_DATA32(b0,2).i;
 JAMAICA_BLOCK_GET_DATA32(b0,2).i = JAMAICA_ADDS32(n3,1);
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r2,n3,0);
 goto l44;
l37:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 if (((jamaica_uint32)(n10))>=((jamaica_uint32)(n15))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r4,n10,n5);
 if (n9!=n5) { goto l43; }
 if (n8!=n13) { goto l43; }
 n5=JAMAICA_SUBS32(n12,1);
 if (((jamaica_uint32)(n5))>=((jamaica_uint32)(n15))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r4,n5,n5);
 if (n3<n5) { goto l43; }
 if (n3!=n5) { goto l42; }
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 n3=JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b0,2).i,1);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n4=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(((n4>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n5=(n4&15);
 JAMAICA_SET_ARRAY32(r2,n3,n6);
 ct->m.cli-=6;
 return;
l42:
 jam_comp_sun_java2d_pipe_Region_34_needSpace19(ct,r3,2);
 goto l44;
l43:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r2=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_InterError_73);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r2==JAMAICA_NULL) { goto LABEL_tOOME; }
{ jamaica_ref m=jam_mtd_java_lang_InterError_73__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,jam_str_sun_java2d_pipe_Region_3453);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r2);
l44:
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 n3=JAMAICA_BLOCK_GET_DATA32(b0,2).i;
 JAMAICA_BLOCK_GET_DATA32(b0,2).i = JAMAICA_ADDS32(n3,1);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n5=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n7=((n5>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 n5=(n5&15);
 JAMAICA_SET_ARRAY32(r2,n3,n4);
 n3=JAMAICA_BLOCK_GET_DATA32(b0,2).i;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b0,2).i = JAMAICA_ADDS32(n3,1);
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r2,n3,n6);
 n3=JAMAICA_ADDS32(n11,2);
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r2,n3,n4);
 n4=JAMAICA_ADDS32(n4,1);
 JAMAICA_SET_ARRAY32(r2,n3,n4);
 ct->m.cli-=6;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
LABEL_tNASE:   jamaica_throwNegArrSzExc(ct);        return;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pipe_Region_34_needSpace19(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r2=JAMAICA_NULL,r1=JAMAICA_NULL;
 jamaica_int32 n1=0,n2=0;
 jamaica_ref b0=JAMAICA_NULL;
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+3;
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
 b0=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 n1=JAMAICA_BLOCK_GET_DATA32(b0,2).i;
 r1=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n2=((n2>>4) &  ((jamaica_int32)268435455));
 if (JAMAICA_ADDS32(n1,n0)<n2) { goto l4; }
 n0=JAMAICA_ADDS32(n2,50);
 if ((n0<0)) { goto LABEL_tNASE; }
 r2=jamaicaInterpreter_allocSimpleArray(ct,n0,ct->vm->array_class[10]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 Jam_java_lang_System_arraycopy(ct,r1,0,r2,0,n1);
 
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(b0,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(b0,3).r=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(b0,3).r=new_ref;}
#endif

l4:
 
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

 ct->m.cli-=3;
 return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
LABEL_tNASE:   jamaica_throwNegArrSzExc(ct);        return;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pipe_Region_34_endRow20(jamaica_thread *ct,jamaica_ref r1,jamaica_ref r2) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r0=JAMAICA_NULL,r3=JAMAICA_NULL;
 jamaica_int32 n5=0,n8=0,n3=0,n4=0,n6=0,n7=0,n9=0,n10=0;
 jamaica_ref b0=JAMAICA_NULL;
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+4;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
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

l2:
 r3=r2;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n4=((n3>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(4))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 n3=(n3&15);
 JAMAICA_GET_ARRAY32(r3,4,n5);
 if (((jamaica_uint32)(5))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r3,5,n4);
 if (n5<=n4) { goto l17; }
 r3=r1;
 b0=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 r3=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 r0=r3;
 n3=JAMAICA_ADDS32(n4,1);
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 n6=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n7=((n6>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 n6=(n6&15);
 JAMAICA_GET_ARRAY32(r3,n3,n3);
 if (((jamaica_uint32)(n5))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r3,n5,n8);
 if (n3!=n8) { goto l17; }
 n3=JAMAICA_ADDS32(n4,2);
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r3,n3,n3);
 n8=JAMAICA_ADDS32(n5,2);
 if (((jamaica_uint32)(n8))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r3,n8,n6);
 if (n3!=n6) { goto l17; }
 n6=JAMAICA_MULS32(n6,2);
 n3=JAMAICA_ADDS32(n5,3);
 n4=JAMAICA_ADDS32(n4,3);
 r3=r0;
 n7=0;
 n5=0;
 if (r3==JAMAICA_NULL) { goto l11; }
 n5=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n7=((n5>>4) &  ((jamaica_int32)268435455));
 n5=(n5&15);
 if (n5!=0) { goto l11; }
l7:
 n8=n6;
 if (n8<=0) { goto l15; }
 n9=n3;
 n3=JAMAICA_ADDS32(n9,1);
 if (((jamaica_uint32)(n9))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r3,n9,n9);
 n10=n4;
 n4=JAMAICA_ADDS32(n10,1);
 if (((jamaica_uint32)(n10))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r3,n10,n10);
 if (n9!=n10) { goto l15; }
 n6=JAMAICA_ADDS32(n8,(-1));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l7; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
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

 goto l7;
l11:
 n8=n6;
 if (n8<=0) { goto l15; }
 n9=n3;
 n3=JAMAICA_ADDS32(n9,1);
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n9))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r3,n9,n9);
 n10=n4;
 n4=JAMAICA_ADDS32(n10,1);
 if (((jamaica_uint32)(n10))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r3,n10,n10);
 if (n9!=n10) { goto l15; }
 n6=JAMAICA_ADDS32(n8,(-1));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l11; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
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

 goto l11;
l15:
 if (n6!=0) { goto l17; }
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 if (((jamaica_uint32)(5))>=((jamaica_uint32)(((n3>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n5=(n3&15);
 JAMAICA_GET_ARRAY32(r2,5,n3);
 n3=JAMAICA_ADDS32(n3,1);
 n5=JAMAICA_ADDS32(n4,1);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 n6=JAMAICA_BLOCK_GET_DATA32(r0,3).i;
 n7=((n6>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n5))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 n6=(n6&15);
 JAMAICA_GET_ARRAY32(r0,n5,n5);
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r0,n3,n5);
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r1,7).r,2).i = n4;
 ct->m.cli-=4;
 return;
l17:
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n4=((n3>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(4))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 n3=(n3&15);
 JAMAICA_GET_ARRAY32(r2,4,n5);
 if (((jamaica_uint32)(5))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r2,5,n5);
 n5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r1,7).r,2).i;
 JAMAICA_SET_ARRAY32(r2,4,n5);
 ct->m.cli-=4;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pipe_Region_34_calcBBox21(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r2=JAMAICA_NULL,r3=JAMAICA_NULL;
 jamaica_int32 n10=0,n9=0,n0=0,n1=0,n2=0,n4=0,n5=0,n7=0,n8=0,n11=0,n12=0;
 jamaica_ref b1=JAMAICA_NULL;
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
 r2=r0;
 b1=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 r1=JAMAICA_BLOCK_GET_DATA32(b1,3).r;
 if (JAMAICA_BLOCK_GET_DATA32(b1,2).i>5) { goto l7; }
 r2=r0;
 b1=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 if (JAMAICA_BLOCK_GET_DATA32(b1,2).i!=0) { goto l5; }
 JAMAICA_BLOCK_GET_DATA32(r0,6).i = 0;
 JAMAICA_BLOCK_GET_DATA32(r0,5).i = 0;
 JAMAICA_BLOCK_GET_DATA32(r0,4).i = 0;
 JAMAICA_BLOCK_GET_DATA32(r0,3).i = 0;
 goto l6;
l5:
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n7=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n8=((n7>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n8))) { goto LABEL_tAIOOBE; }
 n7=(n7&15);
 JAMAICA_GET_ARRAY32(r1,0,n9);
 JAMAICA_BLOCK_GET_DATA32(r2,4).i = n9;
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n8))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r1,1,n9);
 JAMAICA_BLOCK_GET_DATA32(r2,6).i = n9;
 if (((jamaica_uint32)(3))>=((jamaica_uint32)(n8))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r1,3,n9);
 JAMAICA_BLOCK_GET_DATA32(r2,3).i = n9;
 if (((jamaica_uint32)(4))>=((jamaica_uint32)(n8))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r1,4,n7);
 JAMAICA_BLOCK_GET_DATA32(r2,5).i = n7;
 JAMAICA_BLOCK_GET_DATA32(b1,2).i = 0;
l6:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,3).r=JAMAICA_NULL;}
#endif

 ct->m.cli-=4;
 return;
l7:
 n7=JAMAICA_BLOCK_GET_DATA32(r2,5).i;
 n8=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n9=0;
 n10=0;
 n2=0;
 n1=0;
 n5=0;
 n4=0;
 b1=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 n0=JAMAICA_BLOCK_GET_DATA32(b1,2).i;
 r2=r1;
 if (r2==JAMAICA_NULL) { goto l9; }
 n1=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n2=((n1>>4) &  ((jamaica_int32)268435455));
 n1=(n1&15);
l9:
 r3=r1;
 if (r3==JAMAICA_NULL) { goto l11; }
 n4=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n5=((n4>>4) &  ((jamaica_int32)268435455));
 n4=(n4&15);
l11:
 if (n10>=n0) { goto l19; }
 n9=n10;
 n11=JAMAICA_ADDS32(n10,2);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n2))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r2,n11,n11);
 n12=JAMAICA_ADDS32(n10,3);
 n10=n12;
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n2))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r2,n12,n12);
 if (n7<=n12) { goto l14; }
 n7=n12;
l14:
 n11=JAMAICA_MULS32(n11,2);
 n11=JAMAICA_ADDS32(n10,n11);
 n10=n11;
 n11=JAMAICA_SUBS32(n11,1);
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n5))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r3,n11,n11);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l16; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
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

l16:
 if (n8>=n11) { goto l11; }
 n8=n11;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l11; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
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

 goto l11;
l19:
 JAMAICA_BLOCK_GET_DATA32(r0,3).i = n7;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n7=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n10=((n7>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 n7=(n7&15);
 JAMAICA_GET_ARRAY32(r1,0,n0);
 JAMAICA_BLOCK_GET_DATA32(r0,4).i = n0;
 JAMAICA_BLOCK_GET_DATA32(r0,5).i = n8;
 n8=JAMAICA_ADDS32(n9,1);
 if (((jamaica_uint32)(n8))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r1,n8,n7);
 JAMAICA_BLOCK_GET_DATA32(r0,6).i = n7;
 ct->m.cli-=4;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_sun_java2d_pipe_Region_34_isInseXYXY30(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0,jamaica_int32 n1,jamaica_int32 n2,jamaica_int32 n3) {
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
 if (JAMAICA_BLOCK_GET_DATA32(r0,3).i<n0) { goto l7; }
 if (JAMAICA_BLOCK_GET_DATA32(r0,4).i<n1) { goto l7; }
 if (JAMAICA_BLOCK_GET_DATA32(r0,5).i>n2) { goto l7; }
 if (JAMAICA_BLOCK_GET_DATA32(r0,6).i>n3) { goto l7; }
 n0=1;
 goto l8;
l7:
 n0=0;
l8:
 ct->m.cli-=1;
 return n0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_sun_java2d_pipe_Region_34_isInsCheck31(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_int32 n0=0;
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+2;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
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

l2:
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r1,7).r,3).r!=JAMAICA_NULL) { goto l8; }
 if (JAMAICA_BLOCK_GET_DATA32(r1,3).i>JAMAICA_BLOCK_GET_DATA32(r0,3).i) { goto l8; }
 if (JAMAICA_BLOCK_GET_DATA32(r1,4).i>JAMAICA_BLOCK_GET_DATA32(r0,4).i) { goto l8; }
 if (JAMAICA_BLOCK_GET_DATA32(r1,5).i<JAMAICA_BLOCK_GET_DATA32(r0,5).i) { goto l8; }
 if (JAMAICA_BLOCK_GET_DATA32(r1,6).i<JAMAICA_BLOCK_GET_DATA32(r0,6).i) { goto l8; }
 n0=1;
 goto l9;
l8:
 n0=0;
l9:
 ct->m.cli-=2;
 return n0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_sun_java2d_pipe_Region_34_interkXYXY32(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0,jamaica_int32 n1,jamaica_int32 n2,jamaica_int32 n3) {
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
 if (n2<=JAMAICA_BLOCK_GET_DATA32(r0,3).i) { goto l7; }
 if (n0>=JAMAICA_BLOCK_GET_DATA32(r0,5).i) { goto l7; }
 if (n3<=JAMAICA_BLOCK_GET_DATA32(r0,4).i) { goto l7; }
 if (n1>=JAMAICA_BLOCK_GET_DATA32(r0,6).i) { goto l7; }
 n2=1;
 goto l8;
l7:
 n2=0;
l8:
 ct->m.cli-=1;
 return n2;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_sun_java2d_pipe_Region_34_interCheck33(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_int32 n0=0;
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+2;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
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

l2:
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (JAMAICA_BLOCK_GET_DATA32(r1,5).i<=JAMAICA_BLOCK_GET_DATA32(r0,3).i) { goto l7; }
 if (JAMAICA_BLOCK_GET_DATA32(r1,3).i>=JAMAICA_BLOCK_GET_DATA32(r0,5).i) { goto l7; }
 if (JAMAICA_BLOCK_GET_DATA32(r1,6).i<=JAMAICA_BLOCK_GET_DATA32(r0,4).i) { goto l7; }
 if (JAMAICA_BLOCK_GET_DATA32(r1,4).i>=JAMAICA_BLOCK_GET_DATA32(r0,6).i) { goto l7; }
 n0=1;
 goto l8;
l7:
 n0=0;
l8:
 ct->m.cli-=2;
 return n0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
#else
#error 'jamaica.h' not found!
#endif

#ifdef __cplusplus
}
#endif

