#include "__cf_untitled.h"
#if 0
This file is not available for use in any application other than as a MATLAB
( R ) MEX file for use with the Simulink ( R ) product . If you do not have
the Simulink Coder licensed , this file contains encrypted block names , etc
. If you purchase the Simulink Coder , this file will contain full block
descriptions and improved variable names .
#endif
#include <math.h>
#include "untitled_acc.h"
#include "untitled_acc_private.h"
#include <stdio.h>
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat S-Function
#define AccDefine1 Accelerator_S-Function
static void mdlOutputs ( SimStruct * S , int_T tid ) { real_T currentTime ;
fsg2leehhc * _rtB ; g0szqdi43g * _rtP ; duq1u2s0wi * _rtX ; kywlqvr0yp *
_rtDW ; _rtDW = ( ( kywlqvr0yp * ) ssGetRootDWork ( S ) ) ; _rtX = ( (
duq1u2s0wi * ) ssGetContStates ( S ) ) ; _rtP = ( ( g0szqdi43g * )
ssGetDefaultParam ( S ) ) ; _rtB = ( ( fsg2leehhc * ) _ssGetBlockIO ( S ) ) ;
_rtB -> g41mp00j4s = 0.0 ; _rtB -> g41mp00j4s += _rtP -> P_1 [ 0 ] * _rtX ->
nd323p10eu [ 0 ] ; _rtB -> g41mp00j4s += _rtP -> P_1 [ 1 ] * _rtX ->
nd323p10eu [ 1 ] ; ssCallAccelRunBlock ( S , 0 , 1 , SS_CALL_MDL_OUTPUTS ) ;
if ( ssIsSampleHit ( S , 1 , 0 ) ) { currentTime = ssGetTaskTime ( S , 1 ) ;
_rtDW -> mmgkn1ebcb = ( currentTime >= _rtP -> P_2 ) ; if ( _rtDW ->
mmgkn1ebcb == 1 ) { _rtB -> o20cplkzuy = _rtP -> P_4 ; } else { _rtB ->
o20cplkzuy = _rtP -> P_3 ; } } UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { UNUSED_PARAMETER ( tid
) ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { fsg2leehhc * _rtB ; g0szqdi43g
* _rtP ; duq1u2s0wi * _rtX ; d1e4i05lcy * _rtXdot ; _rtXdot = ( ( d1e4i05lcy
* ) ssGetdX ( S ) ) ; _rtX = ( ( duq1u2s0wi * ) ssGetContStates ( S ) ) ;
_rtP = ( ( g0szqdi43g * ) ssGetDefaultParam ( S ) ) ; _rtB = ( ( fsg2leehhc *
) _ssGetBlockIO ( S ) ) ; _rtXdot -> nd323p10eu [ 0 ] = 0.0 ; _rtXdot ->
nd323p10eu [ 1 ] = 0.0 ; _rtXdot -> nd323p10eu [ 0 ] += _rtP -> P_0 [ 0 ] *
_rtX -> nd323p10eu [ 0 ] ; _rtXdot -> nd323p10eu [ 0 ] += _rtP -> P_0 [ 1 ] *
_rtX -> nd323p10eu [ 1 ] ; _rtXdot -> nd323p10eu [ 1 ] += _rtX -> nd323p10eu
[ 0 ] ; _rtXdot -> nd323p10eu [ 0 ] += _rtB -> o20cplkzuy ; }
#define MDL_ZERO_CROSSINGS
static void mdlZeroCrossings ( SimStruct * S ) { g0szqdi43g * _rtP ;
avyyf1we1b * _rtZCSV ; _rtZCSV = ( ( avyyf1we1b * ) ssGetSolverZcSignalVector
( S ) ) ; _rtP = ( ( g0szqdi43g * ) ssGetDefaultParam ( S ) ) ; _rtZCSV ->
jmf355laqk = ssGetT ( S ) - _rtP -> P_2 ; } static void mdlInitializeSizes (
SimStruct * S ) { ssSetChecksumVal ( S , 0 , 1695546536U ) ; ssSetChecksumVal
( S , 1 , 704698388U ) ; ssSetChecksumVal ( S , 2 , 2271260556U ) ;
ssSetChecksumVal ( S , 3 , 2617550739U ) ; { mxArray * slVerStructMat = NULL
; mxArray * slStrMat = mxCreateString ( "simulink" ) ; char slVerChar [ 10 ]
; int status = mexCallMATLAB ( 1 , & slVerStructMat , 1 , & slStrMat , "ver"
) ; if ( status == 0 ) { mxArray * slVerMat = mxGetField ( slVerStructMat , 0
, "Version" ) ; if ( slVerMat == NULL ) { status = 1 ; } else { status =
mxGetString ( slVerMat , slVerChar , 10 ) ; } } mxDestroyArray ( slStrMat ) ;
mxDestroyArray ( slVerStructMat ) ; if ( ( status == 1 ) || ( strcmp (
slVerChar , "8.5" ) != 0 ) ) { return ; } } ssSetOptions ( S ,
SS_OPTION_EXCEPTION_FREE_CODE ) ; if ( ssGetSizeofDWork ( S ) != sizeof (
kywlqvr0yp ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal DWork sizes do "
"not match for accelerator mex file." ) ; } if ( ssGetSizeofGlobalBlockIO ( S
) != sizeof ( fsg2leehhc ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal BlockIO sizes do "
"not match for accelerator mex file." ) ; } { int ssSizeofParams ;
ssGetSizeofParams ( S , & ssSizeofParams ) ; if ( ssSizeofParams != sizeof (
g0szqdi43g ) ) { static char msg [ 256 ] ; sprintf ( msg ,
"Unexpected error: Internal Parameters sizes do "
"not match for accelerator mex file." ) ; } } _ssSetDefaultParam ( S , (
real_T * ) & lxkrdcync0 ) ; } static void mdlInitializeSampleTimes (
SimStruct * S ) { } static void mdlTerminate ( SimStruct * S ) { }
#include "simulink.c"
