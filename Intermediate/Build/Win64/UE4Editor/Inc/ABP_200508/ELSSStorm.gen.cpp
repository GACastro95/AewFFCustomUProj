// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSStorm.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSStorm() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSStorm_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSStorm();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSStormPhaseParam();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSStormAnchor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSStormState();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSStormZone_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSStormPositionRelation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSStormFinalParam();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActorCommonInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSStorm::execAddSchedule)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_phaseLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSchedule(Z_Param_phaseLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStorm::execCalcAnchorLocation)
	{
		P_GET_STRUCT_REF(FSSStormPhaseParam,Z_Param_Out_phaseParam);
		P_GET_OBJECT(AELSSStormAnchor,Z_Param_prevAnchor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalcAnchorLocation(Z_Param_Out_phaseParam,Z_Param_prevAnchor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStorm::execCalcCurrentPhase)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_timeSinceStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CalcCurrentPhase(Z_Param_timeSinceStart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStorm::execCalcIntersection)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_center1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_r1);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_center2);
		P_GET_PROPERTY(FFloatProperty,Z_Param_r2);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_resultA);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_resultB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalcIntersection(Z_Param_Out_center1,Z_Param_r1,Z_Param_Out_center2,Z_Param_r2,Z_Param_Out_resultA,Z_Param_Out_resultB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStorm::execCalcShrinkEndTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_phaseLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalcShrinkEndTime(Z_Param_phaseLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStorm::execCalcShrinkStartTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_phaseLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalcShrinkStartTime(Z_Param_phaseLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStorm::execCreateAnchor)
	{
		P_GET_STRUCT_REF(FSSStormPhaseParam,Z_Param_Out_phaseParam);
		P_GET_OBJECT(AELSSStormAnchor,Z_Param_prevAnchor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSStormAnchor**)Z_Param__Result=P_THIS->CreateAnchor(Z_Param_Out_phaseParam,Z_Param_prevAnchor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStorm::execDebugDrawCourse)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugDrawCourse(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStorm::execDebugSetupCourse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugSetupCourse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStorm::execGetAnchor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_phaseLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSStormAnchor**)Z_Param__Result=P_THIS->GetAnchor(Z_Param_phaseLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStorm::execGetCurrentAnchor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSStormAnchor**)Z_Param__Result=P_THIS->GetCurrentAnchor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStorm::execGetCurrentPhaseTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentPhaseTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStorm::execGetCurrentStormState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSStormState*)Z_Param__Result=P_THIS->GetCurrentStormState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStorm::execGetStormState)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_timeSinceStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSStormState*)Z_Param__Result=P_THIS->GetStormState(Z_Param_timeSinceStart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStorm::execGetZone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSStormZone**)Z_Param__Result=P_THIS->GetZone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStorm::execIsFinalPhase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFinalPhase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStorm::execSetupCourse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupCourse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStorm::execToPositionRelation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSStormPositionRelation*)Z_Param__Result=P_THIS->ToPositionRelation(Z_Param_Out_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStorm::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_timeSinceStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_timeSinceStart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSStorm::execUpdateZone)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_timeSinceStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateZone(Z_Param_timeSinceStart);
		P_NATIVE_END;
	}
	static FName NAME_AELSSStorm_BeginDamageAreaSE = FName(TEXT("BeginDamageAreaSE"));
	void AELSSStorm::BeginDamageAreaSE()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSStorm_BeginDamageAreaSE),NULL);
	}
	static FName NAME_AELSSStorm_EndDamageAreaSE = FName(TEXT("EndDamageAreaSE"));
	void AELSSStorm::EndDamageAreaSE()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSStorm_EndDamageAreaSE),NULL);
	}
	void AELSSStorm::StaticRegisterNativesAELSSStorm()
	{
		UClass* Class = AELSSStorm::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSchedule", &AELSSStorm::execAddSchedule },
			{ "CalcAnchorLocation", &AELSSStorm::execCalcAnchorLocation },
			{ "CalcCurrentPhase", &AELSSStorm::execCalcCurrentPhase },
			{ "CalcIntersection", &AELSSStorm::execCalcIntersection },
			{ "CalcShrinkEndTime", &AELSSStorm::execCalcShrinkEndTime },
			{ "CalcShrinkStartTime", &AELSSStorm::execCalcShrinkStartTime },
			{ "CreateAnchor", &AELSSStorm::execCreateAnchor },
			{ "DebugDrawCourse", &AELSSStorm::execDebugDrawCourse },
			{ "DebugSetupCourse", &AELSSStorm::execDebugSetupCourse },
			{ "GetAnchor", &AELSSStorm::execGetAnchor },
			{ "GetCurrentAnchor", &AELSSStorm::execGetCurrentAnchor },
			{ "GetCurrentPhaseTime", &AELSSStorm::execGetCurrentPhaseTime },
			{ "GetCurrentStormState", &AELSSStorm::execGetCurrentStormState },
			{ "GetStormState", &AELSSStorm::execGetStormState },
			{ "GetZone", &AELSSStorm::execGetZone },
			{ "IsFinalPhase", &AELSSStorm::execIsFinalPhase },
			{ "SetupCourse", &AELSSStorm::execSetupCourse },
			{ "ToPositionRelation", &AELSSStorm::execToPositionRelation },
			{ "Update", &AELSSStorm::execUpdate },
			{ "UpdateZone", &AELSSStorm::execUpdateZone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSStorm_AddSchedule_Statics
	{
		struct ELSSStorm_eventAddSchedule_Parms
		{
			int32 phaseLevel;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_phaseLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSStorm_AddSchedule_Statics::NewProp_phaseLevel = { "phaseLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventAddSchedule_Parms, phaseLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStorm_AddSchedule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_AddSchedule_Statics::NewProp_phaseLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_AddSchedule_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStorm_AddSchedule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStorm, nullptr, "AddSchedule", nullptr, nullptr, sizeof(ELSSStorm_eventAddSchedule_Parms), Z_Construct_UFunction_AELSSStorm_AddSchedule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_AddSchedule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_AddSchedule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_AddSchedule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStorm_AddSchedule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStorm_AddSchedule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStorm_BeginDamageAreaSE_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_BeginDamageAreaSE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStorm_BeginDamageAreaSE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStorm, nullptr, "BeginDamageAreaSE", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_BeginDamageAreaSE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_BeginDamageAreaSE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStorm_BeginDamageAreaSE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStorm_BeginDamageAreaSE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStorm_CalcAnchorLocation_Statics
	{
		struct ELSSStorm_eventCalcAnchorLocation_Parms
		{
			FSSStormPhaseParam phaseParam;
			AELSSStormAnchor* prevAnchor;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_phaseParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_phaseParam;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_prevAnchor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_CalcAnchorLocation_Statics::NewProp_phaseParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSStorm_CalcAnchorLocation_Statics::NewProp_phaseParam = { "phaseParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventCalcAnchorLocation_Parms, phaseParam), Z_Construct_UScriptStruct_FSSStormPhaseParam, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_CalcAnchorLocation_Statics::NewProp_phaseParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_CalcAnchorLocation_Statics::NewProp_phaseParam_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSStorm_CalcAnchorLocation_Statics::NewProp_prevAnchor = { "prevAnchor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventCalcAnchorLocation_Parms, prevAnchor), Z_Construct_UClass_AELSSStormAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSStorm_CalcAnchorLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventCalcAnchorLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStorm_CalcAnchorLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_CalcAnchorLocation_Statics::NewProp_phaseParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_CalcAnchorLocation_Statics::NewProp_prevAnchor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_CalcAnchorLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_CalcAnchorLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStorm_CalcAnchorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStorm, nullptr, "CalcAnchorLocation", nullptr, nullptr, sizeof(ELSSStorm_eventCalcAnchorLocation_Parms), Z_Construct_UFunction_AELSSStorm_CalcAnchorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_CalcAnchorLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_CalcAnchorLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_CalcAnchorLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStorm_CalcAnchorLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStorm_CalcAnchorLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStorm_CalcCurrentPhase_Statics
	{
		struct ELSSStorm_eventCalcCurrentPhase_Parms
		{
			float timeSinceStart;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeSinceStart;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSStorm_CalcCurrentPhase_Statics::NewProp_timeSinceStart = { "timeSinceStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventCalcCurrentPhase_Parms, timeSinceStart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSStorm_CalcCurrentPhase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventCalcCurrentPhase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStorm_CalcCurrentPhase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_CalcCurrentPhase_Statics::NewProp_timeSinceStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_CalcCurrentPhase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_CalcCurrentPhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStorm_CalcCurrentPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStorm, nullptr, "CalcCurrentPhase", nullptr, nullptr, sizeof(ELSSStorm_eventCalcCurrentPhase_Parms), Z_Construct_UFunction_AELSSStorm_CalcCurrentPhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_CalcCurrentPhase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_CalcCurrentPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_CalcCurrentPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStorm_CalcCurrentPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStorm_CalcCurrentPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics
	{
		struct ELSSStorm_eventCalcIntersection_Parms
		{
			FVector2D center1;
			float r1;
			FVector2D center2;
			float r2;
			FVector2D resultA;
			FVector2D resultB;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_center1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_center1;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_r1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_center2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_center2;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_r2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_resultA;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_resultB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::NewProp_center1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::NewProp_center1 = { "center1", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventCalcIntersection_Parms, center1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::NewProp_center1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::NewProp_center1_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::NewProp_r1 = { "r1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventCalcIntersection_Parms, r1), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::NewProp_center2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::NewProp_center2 = { "center2", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventCalcIntersection_Parms, center2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::NewProp_center2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::NewProp_center2_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::NewProp_r2 = { "r2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventCalcIntersection_Parms, r2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::NewProp_resultA = { "resultA", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventCalcIntersection_Parms, resultA), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::NewProp_resultB = { "resultB", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventCalcIntersection_Parms, resultB), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::NewProp_center1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::NewProp_r1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::NewProp_center2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::NewProp_r2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::NewProp_resultA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::NewProp_resultB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStorm, nullptr, "CalcIntersection", nullptr, nullptr, sizeof(ELSSStorm_eventCalcIntersection_Parms), Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStorm_CalcIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStorm_CalcIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStorm_CalcShrinkEndTime_Statics
	{
		struct ELSSStorm_eventCalcShrinkEndTime_Parms
		{
			int32 phaseLevel;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_phaseLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSStorm_CalcShrinkEndTime_Statics::NewProp_phaseLevel = { "phaseLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventCalcShrinkEndTime_Parms, phaseLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSStorm_CalcShrinkEndTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventCalcShrinkEndTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStorm_CalcShrinkEndTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_CalcShrinkEndTime_Statics::NewProp_phaseLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_CalcShrinkEndTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_CalcShrinkEndTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStorm_CalcShrinkEndTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStorm, nullptr, "CalcShrinkEndTime", nullptr, nullptr, sizeof(ELSSStorm_eventCalcShrinkEndTime_Parms), Z_Construct_UFunction_AELSSStorm_CalcShrinkEndTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_CalcShrinkEndTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_CalcShrinkEndTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_CalcShrinkEndTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStorm_CalcShrinkEndTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStorm_CalcShrinkEndTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStorm_CalcShrinkStartTime_Statics
	{
		struct ELSSStorm_eventCalcShrinkStartTime_Parms
		{
			int32 phaseLevel;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_phaseLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSStorm_CalcShrinkStartTime_Statics::NewProp_phaseLevel = { "phaseLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventCalcShrinkStartTime_Parms, phaseLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSStorm_CalcShrinkStartTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventCalcShrinkStartTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStorm_CalcShrinkStartTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_CalcShrinkStartTime_Statics::NewProp_phaseLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_CalcShrinkStartTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_CalcShrinkStartTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStorm_CalcShrinkStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStorm, nullptr, "CalcShrinkStartTime", nullptr, nullptr, sizeof(ELSSStorm_eventCalcShrinkStartTime_Parms), Z_Construct_UFunction_AELSSStorm_CalcShrinkStartTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_CalcShrinkStartTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_CalcShrinkStartTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_CalcShrinkStartTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStorm_CalcShrinkStartTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStorm_CalcShrinkStartTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStorm_CreateAnchor_Statics
	{
		struct ELSSStorm_eventCreateAnchor_Parms
		{
			FSSStormPhaseParam phaseParam;
			AELSSStormAnchor* prevAnchor;
			AELSSStormAnchor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_phaseParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_phaseParam;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_prevAnchor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_CreateAnchor_Statics::NewProp_phaseParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSStorm_CreateAnchor_Statics::NewProp_phaseParam = { "phaseParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventCreateAnchor_Parms, phaseParam), Z_Construct_UScriptStruct_FSSStormPhaseParam, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_CreateAnchor_Statics::NewProp_phaseParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_CreateAnchor_Statics::NewProp_phaseParam_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSStorm_CreateAnchor_Statics::NewProp_prevAnchor = { "prevAnchor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventCreateAnchor_Parms, prevAnchor), Z_Construct_UClass_AELSSStormAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSStorm_CreateAnchor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventCreateAnchor_Parms, ReturnValue), Z_Construct_UClass_AELSSStormAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStorm_CreateAnchor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_CreateAnchor_Statics::NewProp_phaseParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_CreateAnchor_Statics::NewProp_prevAnchor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_CreateAnchor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_CreateAnchor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStorm_CreateAnchor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStorm, nullptr, "CreateAnchor", nullptr, nullptr, sizeof(ELSSStorm_eventCreateAnchor_Parms), Z_Construct_UFunction_AELSSStorm_CreateAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_CreateAnchor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_CreateAnchor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_CreateAnchor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStorm_CreateAnchor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStorm_CreateAnchor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStorm_DebugDrawCourse_Statics
	{
		struct ELSSStorm_eventDebugDrawCourse_Parms
		{
			float Time;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSStorm_DebugDrawCourse_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventDebugDrawCourse_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStorm_DebugDrawCourse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_DebugDrawCourse_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_DebugDrawCourse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStorm_DebugDrawCourse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStorm, nullptr, "DebugDrawCourse", nullptr, nullptr, sizeof(ELSSStorm_eventDebugDrawCourse_Parms), Z_Construct_UFunction_AELSSStorm_DebugDrawCourse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_DebugDrawCourse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_DebugDrawCourse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_DebugDrawCourse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStorm_DebugDrawCourse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStorm_DebugDrawCourse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStorm_DebugSetupCourse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_DebugSetupCourse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStorm_DebugSetupCourse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStorm, nullptr, "DebugSetupCourse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_DebugSetupCourse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_DebugSetupCourse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStorm_DebugSetupCourse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStorm_DebugSetupCourse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStorm_EndDamageAreaSE_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_EndDamageAreaSE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStorm_EndDamageAreaSE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStorm, nullptr, "EndDamageAreaSE", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_EndDamageAreaSE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_EndDamageAreaSE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStorm_EndDamageAreaSE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStorm_EndDamageAreaSE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStorm_GetAnchor_Statics
	{
		struct ELSSStorm_eventGetAnchor_Parms
		{
			int32 phaseLevel;
			AELSSStormAnchor* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_phaseLevel;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSStorm_GetAnchor_Statics::NewProp_phaseLevel = { "phaseLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventGetAnchor_Parms, phaseLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSStorm_GetAnchor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventGetAnchor_Parms, ReturnValue), Z_Construct_UClass_AELSSStormAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStorm_GetAnchor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_GetAnchor_Statics::NewProp_phaseLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_GetAnchor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_GetAnchor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStorm_GetAnchor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStorm, nullptr, "GetAnchor", nullptr, nullptr, sizeof(ELSSStorm_eventGetAnchor_Parms), Z_Construct_UFunction_AELSSStorm_GetAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_GetAnchor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_GetAnchor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_GetAnchor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStorm_GetAnchor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStorm_GetAnchor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStorm_GetCurrentAnchor_Statics
	{
		struct ELSSStorm_eventGetCurrentAnchor_Parms
		{
			AELSSStormAnchor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSStorm_GetCurrentAnchor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventGetCurrentAnchor_Parms, ReturnValue), Z_Construct_UClass_AELSSStormAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStorm_GetCurrentAnchor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_GetCurrentAnchor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_GetCurrentAnchor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStorm_GetCurrentAnchor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStorm, nullptr, "GetCurrentAnchor", nullptr, nullptr, sizeof(ELSSStorm_eventGetCurrentAnchor_Parms), Z_Construct_UFunction_AELSSStorm_GetCurrentAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_GetCurrentAnchor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_GetCurrentAnchor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_GetCurrentAnchor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStorm_GetCurrentAnchor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStorm_GetCurrentAnchor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStorm_GetCurrentPhaseTime_Statics
	{
		struct ELSSStorm_eventGetCurrentPhaseTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSStorm_GetCurrentPhaseTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventGetCurrentPhaseTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStorm_GetCurrentPhaseTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_GetCurrentPhaseTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_GetCurrentPhaseTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStorm_GetCurrentPhaseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStorm, nullptr, "GetCurrentPhaseTime", nullptr, nullptr, sizeof(ELSSStorm_eventGetCurrentPhaseTime_Parms), Z_Construct_UFunction_AELSSStorm_GetCurrentPhaseTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_GetCurrentPhaseTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_GetCurrentPhaseTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_GetCurrentPhaseTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStorm_GetCurrentPhaseTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStorm_GetCurrentPhaseTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStorm_GetCurrentStormState_Statics
	{
		struct ELSSStorm_eventGetCurrentStormState_Parms
		{
			ESSStormState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSStorm_GetCurrentStormState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSStorm_GetCurrentStormState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventGetCurrentStormState_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSStormState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStorm_GetCurrentStormState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_GetCurrentStormState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_GetCurrentStormState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_GetCurrentStormState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStorm_GetCurrentStormState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStorm, nullptr, "GetCurrentStormState", nullptr, nullptr, sizeof(ELSSStorm_eventGetCurrentStormState_Parms), Z_Construct_UFunction_AELSSStorm_GetCurrentStormState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_GetCurrentStormState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_GetCurrentStormState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_GetCurrentStormState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStorm_GetCurrentStormState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStorm_GetCurrentStormState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStorm_GetStormState_Statics
	{
		struct ELSSStorm_eventGetStormState_Parms
		{
			float timeSinceStart;
			ESSStormState ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeSinceStart;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSStorm_GetStormState_Statics::NewProp_timeSinceStart = { "timeSinceStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventGetStormState_Parms, timeSinceStart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSStorm_GetStormState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSStorm_GetStormState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventGetStormState_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSStormState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStorm_GetStormState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_GetStormState_Statics::NewProp_timeSinceStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_GetStormState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_GetStormState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_GetStormState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStorm_GetStormState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStorm, nullptr, "GetStormState", nullptr, nullptr, sizeof(ELSSStorm_eventGetStormState_Parms), Z_Construct_UFunction_AELSSStorm_GetStormState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_GetStormState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_GetStormState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_GetStormState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStorm_GetStormState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStorm_GetStormState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStorm_GetZone_Statics
	{
		struct ELSSStorm_eventGetZone_Parms
		{
			AELSSStormZone* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSStorm_GetZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventGetZone_Parms, ReturnValue), Z_Construct_UClass_AELSSStormZone_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStorm_GetZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_GetZone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_GetZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStorm_GetZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStorm, nullptr, "GetZone", nullptr, nullptr, sizeof(ELSSStorm_eventGetZone_Parms), Z_Construct_UFunction_AELSSStorm_GetZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_GetZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_GetZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_GetZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStorm_GetZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStorm_GetZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStorm_IsFinalPhase_Statics
	{
		struct ELSSStorm_eventIsFinalPhase_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSStorm_IsFinalPhase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSStorm_eventIsFinalPhase_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSStorm_IsFinalPhase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSStorm_eventIsFinalPhase_Parms), &Z_Construct_UFunction_AELSSStorm_IsFinalPhase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStorm_IsFinalPhase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_IsFinalPhase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_IsFinalPhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStorm_IsFinalPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStorm, nullptr, "IsFinalPhase", nullptr, nullptr, sizeof(ELSSStorm_eventIsFinalPhase_Parms), Z_Construct_UFunction_AELSSStorm_IsFinalPhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_IsFinalPhase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_IsFinalPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_IsFinalPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStorm_IsFinalPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStorm_IsFinalPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStorm_SetupCourse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_SetupCourse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStorm_SetupCourse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStorm, nullptr, "SetupCourse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_SetupCourse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_SetupCourse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStorm_SetupCourse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStorm_SetupCourse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStorm_ToPositionRelation_Statics
	{
		struct ELSSStorm_eventToPositionRelation_Parms
		{
			FVector Location;
			ESSStormPositionRelation ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_ToPositionRelation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSStorm_ToPositionRelation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventToPositionRelation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_ToPositionRelation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_ToPositionRelation_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSStorm_ToPositionRelation_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSStorm_ToPositionRelation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventToPositionRelation_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSStormPositionRelation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStorm_ToPositionRelation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_ToPositionRelation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_ToPositionRelation_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_ToPositionRelation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_ToPositionRelation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStorm_ToPositionRelation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStorm, nullptr, "ToPositionRelation", nullptr, nullptr, sizeof(ELSSStorm_eventToPositionRelation_Parms), Z_Construct_UFunction_AELSSStorm_ToPositionRelation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_ToPositionRelation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_ToPositionRelation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_ToPositionRelation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStorm_ToPositionRelation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStorm_ToPositionRelation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStorm_Update_Statics
	{
		struct ELSSStorm_eventUpdate_Parms
		{
			float timeSinceStart;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeSinceStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSStorm_Update_Statics::NewProp_timeSinceStart = { "timeSinceStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventUpdate_Parms, timeSinceStart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStorm_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_Update_Statics::NewProp_timeSinceStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStorm_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStorm, nullptr, "Update", nullptr, nullptr, sizeof(ELSSStorm_eventUpdate_Parms), Z_Construct_UFunction_AELSSStorm_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStorm_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStorm_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSStorm_UpdateZone_Statics
	{
		struct ELSSStorm_eventUpdateZone_Parms
		{
			float timeSinceStart;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeSinceStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSStorm_UpdateZone_Statics::NewProp_timeSinceStart = { "timeSinceStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSStorm_eventUpdateZone_Parms, timeSinceStart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSStorm_UpdateZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSStorm_UpdateZone_Statics::NewProp_timeSinceStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSStorm_UpdateZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSStorm_UpdateZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSStorm, nullptr, "UpdateZone", nullptr, nullptr, sizeof(ELSSStorm_eventUpdateZone_Parms), Z_Construct_UFunction_AELSSStorm_UpdateZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_UpdateZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSStorm_UpdateZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSStorm_UpdateZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSStorm_UpdateZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSStorm_UpdateZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSStorm_NoRegister()
	{
		return AELSSStorm::StaticClass();
	}
	struct Z_Construct_UClass_AELSSStorm_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zoneClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_zoneClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_zone;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anchors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anchors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Anchors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_finalParamTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_finalParamTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_finalParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_finalParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_finalLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_finalLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_finalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_finalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndShrinkSE_PlayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndShrinkSE_PlayTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StormParams_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StormParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StormParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomStream;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSStorm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSStorm_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSStorm_AddSchedule, "AddSchedule" }, // 2833563738
		{ &Z_Construct_UFunction_AELSSStorm_BeginDamageAreaSE, "BeginDamageAreaSE" }, // 4057452336
		{ &Z_Construct_UFunction_AELSSStorm_CalcAnchorLocation, "CalcAnchorLocation" }, // 188283676
		{ &Z_Construct_UFunction_AELSSStorm_CalcCurrentPhase, "CalcCurrentPhase" }, // 306489634
		{ &Z_Construct_UFunction_AELSSStorm_CalcIntersection, "CalcIntersection" }, // 673078801
		{ &Z_Construct_UFunction_AELSSStorm_CalcShrinkEndTime, "CalcShrinkEndTime" }, // 1763745194
		{ &Z_Construct_UFunction_AELSSStorm_CalcShrinkStartTime, "CalcShrinkStartTime" }, // 3229293663
		{ &Z_Construct_UFunction_AELSSStorm_CreateAnchor, "CreateAnchor" }, // 3825570931
		{ &Z_Construct_UFunction_AELSSStorm_DebugDrawCourse, "DebugDrawCourse" }, // 1112133501
		{ &Z_Construct_UFunction_AELSSStorm_DebugSetupCourse, "DebugSetupCourse" }, // 2396391650
		{ &Z_Construct_UFunction_AELSSStorm_EndDamageAreaSE, "EndDamageAreaSE" }, // 3169930441
		{ &Z_Construct_UFunction_AELSSStorm_GetAnchor, "GetAnchor" }, // 3858801590
		{ &Z_Construct_UFunction_AELSSStorm_GetCurrentAnchor, "GetCurrentAnchor" }, // 2078201929
		{ &Z_Construct_UFunction_AELSSStorm_GetCurrentPhaseTime, "GetCurrentPhaseTime" }, // 4076714356
		{ &Z_Construct_UFunction_AELSSStorm_GetCurrentStormState, "GetCurrentStormState" }, // 1662394744
		{ &Z_Construct_UFunction_AELSSStorm_GetStormState, "GetStormState" }, // 195250005
		{ &Z_Construct_UFunction_AELSSStorm_GetZone, "GetZone" }, // 169140783
		{ &Z_Construct_UFunction_AELSSStorm_IsFinalPhase, "IsFinalPhase" }, // 3925439621
		{ &Z_Construct_UFunction_AELSSStorm_SetupCourse, "SetupCourse" }, // 3231635269
		{ &Z_Construct_UFunction_AELSSStorm_ToPositionRelation, "ToPositionRelation" }, // 1100715756
		{ &Z_Construct_UFunction_AELSSStorm_Update, "Update" }, // 4044236953
		{ &Z_Construct_UFunction_AELSSStorm_UpdateZone, "UpdateZone" }, // 1475947369
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStorm_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSStorm.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStorm_Statics::NewProp_CurrentTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStorm" },
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSStorm_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStorm, CurrentTime), METADATA_PARAMS(Z_Construct_UClass_AELSSStorm_Statics::NewProp_CurrentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStorm_Statics::NewProp_CurrentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStorm_Statics::NewProp_zoneClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStorm" },
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSStorm_Statics::NewProp_zoneClass = { "zoneClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStorm, zoneClass), Z_Construct_UClass_AELSSStormZone_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSStorm_Statics::NewProp_zoneClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStorm_Statics::NewProp_zoneClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStorm_Statics::NewProp_zone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStorm" },
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSStorm_Statics::NewProp_zone = { "zone", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStorm, zone), Z_Construct_UClass_AELSSStormZone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSStorm_Statics::NewProp_zone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStorm_Statics::NewProp_zone_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSStorm_Statics::NewProp_Anchors_Inner = { "Anchors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSStormAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStorm_Statics::NewProp_Anchors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStorm" },
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSStorm_Statics::NewProp_Anchors = { "Anchors", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStorm, Anchors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSStorm_Statics::NewProp_Anchors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStorm_Statics::NewProp_Anchors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStorm_Statics::NewProp_finalParamTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStorm" },
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSStorm_Statics::NewProp_finalParamTable = { "finalParamTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStorm, finalParamTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSStorm_Statics::NewProp_finalParamTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStorm_Statics::NewProp_finalParamTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStorm_Statics::NewProp_finalParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStorm" },
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSStorm_Statics::NewProp_finalParam = { "finalParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStorm, finalParam), Z_Construct_UScriptStruct_FSSStormFinalParam, METADATA_PARAMS(Z_Construct_UClass_AELSSStorm_Statics::NewProp_finalParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStorm_Statics::NewProp_finalParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStorm_Statics::NewProp_finalLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStorm" },
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSStorm_Statics::NewProp_finalLocation = { "finalLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStorm, finalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSStorm_Statics::NewProp_finalLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStorm_Statics::NewProp_finalLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStorm_Statics::NewProp_finalOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStorm" },
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSStorm_Statics::NewProp_finalOffset = { "finalOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStorm, finalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSStorm_Statics::NewProp_finalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStorm_Statics::NewProp_finalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStorm_Statics::NewProp_EndShrinkSE_PlayTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStorm" },
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSStorm_Statics::NewProp_EndShrinkSE_PlayTime = { "EndShrinkSE_PlayTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStorm, EndShrinkSE_PlayTime), METADATA_PARAMS(Z_Construct_UClass_AELSSStorm_Statics::NewProp_EndShrinkSE_PlayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStorm_Statics::NewProp_EndShrinkSE_PlayTime_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSStorm_Statics::NewProp_StormParams_Inner = { "StormParams", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSStormPhaseParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStorm_Statics::NewProp_StormParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStorm" },
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSStorm_Statics::NewProp_StormParams = { "StormParams", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStorm, StormParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSStorm_Statics::NewProp_StormParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStorm_Statics::NewProp_StormParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStorm_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStorm" },
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSStorm_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStorm, RandomSeed), METADATA_PARAMS(Z_Construct_UClass_AELSSStorm_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStorm_Statics::NewProp_RandomSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSStorm_Statics::NewProp_RandomStream_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSStorm" },
		{ "ModuleRelativePath", "Public/ELSSStorm.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSStorm_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSStorm, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UClass_AELSSStorm_Statics::NewProp_RandomStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStorm_Statics::NewProp_RandomStream_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSStorm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStorm_Statics::NewProp_CurrentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStorm_Statics::NewProp_zoneClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStorm_Statics::NewProp_zone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStorm_Statics::NewProp_Anchors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStorm_Statics::NewProp_Anchors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStorm_Statics::NewProp_finalParamTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStorm_Statics::NewProp_finalParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStorm_Statics::NewProp_finalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStorm_Statics::NewProp_finalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStorm_Statics::NewProp_EndShrinkSE_PlayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStorm_Statics::NewProp_StormParams_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStorm_Statics::NewProp_StormParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStorm_Statics::NewProp_RandomSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSStorm_Statics::NewProp_RandomStream,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELSSStorm_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELSSActorCommonInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSStorm, IELSSActorCommonInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSStorm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSStorm>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSStorm_Statics::ClassParams = {
		&AELSSStorm::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSStorm_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStorm_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSStorm_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSStorm_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSStorm()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSStorm_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSStorm, 2482104523);
	template<> ABP_200508_API UClass* StaticClass<AELSSStorm>()
	{
		return AELSSStorm::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSStorm(Z_Construct_UClass_AELSSStorm, &AELSSStorm::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSStorm"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSStorm);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
