// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELReplayBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELReplayBase() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UELReplayBase_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELReplayBase();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELHighlightReplayParam();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELReplayBase::execConvertReplayIndex_N)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Index);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Rate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Sec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConvertReplayIndex_N(Z_Param_Out_Index,Z_Param_Out_Rate,Z_Param_Sec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplayBase::execGetDamageTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDamageTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplayBase::execGetHighlightReplayParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FELHighlightReplayParam*)Z_Param__Result=P_THIS->GetHighlightReplayParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplayBase::execGetReplayParam)
	{
		P_GET_STRUCT_REF(FPoseSnapshot,Z_Param_Out_PlayerPose);
		P_GET_STRUCT_REF(FPoseSnapshot,Z_Param_Out_PlayerNextPose);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_PlayerTransform);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_PlayerNextTransform);
		P_GET_OBJECT_REF(UParticleSystem,Z_Param_Out_Particle);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ParticleTransform);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_DamageLv);
		P_GET_UBOOL_REF(Z_Param_Out_Critical);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InterpolateValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetReplayParam(Z_Param_Out_PlayerPose,Z_Param_Out_PlayerNextPose,Z_Param_Out_PlayerTransform,Z_Param_Out_PlayerNextTransform,Z_Param_Out_Particle,Z_Param_Out_ParticleTransform,Z_Param_Out_DamageLv,Z_Param_Out_Critical,Z_Param_Out_InterpolateValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplayBase::execGetTotalRecordTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTotalRecordTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplayBase::execIsPlayReplay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayReplay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplayBase::execIsSlowTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BeginTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSlowTime(Z_Param_BeginTime,Z_Param_EndTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplayBase::execRequestBackupRecord)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DelayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestBackupRecord(Z_Param_Index,Z_Param_DelayTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplayBase::execRequestPlayReplay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ReplayDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestPlayReplay(Z_Param_ReplayDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplayBase::execResolveReplay)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResolveReplay(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplayBase::execSetDamageLv)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DamageLv);
		P_GET_UBOOL(Z_Param_Critical);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDamageLv(Z_Param_DamageLv,Z_Param_Critical);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplayBase::execSetHighlightReplayParam)
	{
		P_GET_STRUCT_REF(FELHighlightReplayParam,Z_Param_Out_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHighlightReplayParam(Z_Param_Out_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplayBase::execSetHitParticle)
	{
		P_GET_OBJECT(UParticleSystem,Z_Param_Particle);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHitParticle(Z_Param_Particle,Z_Param_Out_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplayBase::execSetSnapshotPoseTransform_N)
	{
		P_GET_STRUCT_REF(FPoseSnapshot,Z_Param_Out_Pose);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSnapshotPoseTransform_N(Z_Param_Out_Pose,Z_Param_Out_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplayBase::execStartRec)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRec();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplayBase::execStopReplay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopReplay();
		P_NATIVE_END;
	}
	void UELReplayBase::StaticRegisterNativesUELReplayBase()
	{
		UClass* Class = UELReplayBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertReplayIndex_N", &UELReplayBase::execConvertReplayIndex_N },
			{ "GetDamageTime", &UELReplayBase::execGetDamageTime },
			{ "GetHighlightReplayParam", &UELReplayBase::execGetHighlightReplayParam },
			{ "GetReplayParam", &UELReplayBase::execGetReplayParam },
			{ "GetTotalRecordTime", &UELReplayBase::execGetTotalRecordTime },
			{ "IsPlayReplay", &UELReplayBase::execIsPlayReplay },
			{ "IsSlowTime", &UELReplayBase::execIsSlowTime },
			{ "RequestBackupRecord", &UELReplayBase::execRequestBackupRecord },
			{ "RequestPlayReplay", &UELReplayBase::execRequestPlayReplay },
			{ "ResolveReplay", &UELReplayBase::execResolveReplay },
			{ "SetDamageLv", &UELReplayBase::execSetDamageLv },
			{ "SetHighlightReplayParam", &UELReplayBase::execSetHighlightReplayParam },
			{ "SetHitParticle", &UELReplayBase::execSetHitParticle },
			{ "SetSnapshotPoseTransform_N", &UELReplayBase::execSetSnapshotPoseTransform_N },
			{ "StartRec", &UELReplayBase::execStartRec },
			{ "StopReplay", &UELReplayBase::execStopReplay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELReplayBase_ConvertReplayIndex_N_Statics
	{
		struct ELReplayBase_eventConvertReplayIndex_N_Parms
		{
			int32 Index;
			float Rate;
			float Sec;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Sec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELReplayBase_ConvertReplayIndex_N_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventConvertReplayIndex_N_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELReplayBase_ConvertReplayIndex_N_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventConvertReplayIndex_N_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplayBase_ConvertReplayIndex_N_Statics::NewProp_Sec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELReplayBase_ConvertReplayIndex_N_Statics::NewProp_Sec = { "Sec", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventConvertReplayIndex_N_Parms, Sec), METADATA_PARAMS(Z_Construct_UFunction_UELReplayBase_ConvertReplayIndex_N_Statics::NewProp_Sec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_ConvertReplayIndex_N_Statics::NewProp_Sec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplayBase_ConvertReplayIndex_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_ConvertReplayIndex_N_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_ConvertReplayIndex_N_Statics::NewProp_Rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_ConvertReplayIndex_N_Statics::NewProp_Sec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplayBase_ConvertReplayIndex_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplayBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplayBase_ConvertReplayIndex_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplayBase, nullptr, "ConvertReplayIndex_N", nullptr, nullptr, sizeof(ELReplayBase_eventConvertReplayIndex_N_Parms), Z_Construct_UFunction_UELReplayBase_ConvertReplayIndex_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_ConvertReplayIndex_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplayBase_ConvertReplayIndex_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_ConvertReplayIndex_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplayBase_ConvertReplayIndex_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplayBase_ConvertReplayIndex_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplayBase_GetDamageTime_Statics
	{
		struct ELReplayBase_eventGetDamageTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELReplayBase_GetDamageTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventGetDamageTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplayBase_GetDamageTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_GetDamageTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplayBase_GetDamageTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplayBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplayBase_GetDamageTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplayBase, nullptr, "GetDamageTime", nullptr, nullptr, sizeof(ELReplayBase_eventGetDamageTime_Parms), Z_Construct_UFunction_UELReplayBase_GetDamageTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_GetDamageTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplayBase_GetDamageTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_GetDamageTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplayBase_GetDamageTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplayBase_GetDamageTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplayBase_GetHighlightReplayParam_Statics
	{
		struct ELReplayBase_eventGetHighlightReplayParam_Parms
		{
			FELHighlightReplayParam ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELReplayBase_GetHighlightReplayParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventGetHighlightReplayParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FELHighlightReplayParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplayBase_GetHighlightReplayParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_GetHighlightReplayParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplayBase_GetHighlightReplayParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplayBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplayBase_GetHighlightReplayParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplayBase, nullptr, "GetHighlightReplayParam", nullptr, nullptr, sizeof(ELReplayBase_eventGetHighlightReplayParam_Parms), Z_Construct_UFunction_UELReplayBase_GetHighlightReplayParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_GetHighlightReplayParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplayBase_GetHighlightReplayParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_GetHighlightReplayParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplayBase_GetHighlightReplayParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplayBase_GetHighlightReplayParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics
	{
		struct ELReplayBase_eventGetReplayParam_Parms
		{
			FPoseSnapshot PlayerPose;
			FPoseSnapshot PlayerNextPose;
			FTransform PlayerTransform;
			FTransform PlayerNextTransform;
			UParticleSystem* Particle;
			FTransform ParticleTransform;
			int32 DamageLv;
			bool Critical;
			float InterpolateValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerPose;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerNextPose;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerNextTransform;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Particle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticleTransform;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DamageLv;
		static void NewProp_Critical_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Critical;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolateValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::NewProp_PlayerPose = { "PlayerPose", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventGetReplayParam_Parms, PlayerPose), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::NewProp_PlayerNextPose = { "PlayerNextPose", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventGetReplayParam_Parms, PlayerNextPose), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::NewProp_PlayerTransform = { "PlayerTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventGetReplayParam_Parms, PlayerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::NewProp_PlayerNextTransform = { "PlayerNextTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventGetReplayParam_Parms, PlayerNextTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventGetReplayParam_Parms, Particle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::NewProp_ParticleTransform = { "ParticleTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventGetReplayParam_Parms, ParticleTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::NewProp_DamageLv = { "DamageLv", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventGetReplayParam_Parms, DamageLv), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::NewProp_Critical_SetBit(void* Obj)
	{
		((ELReplayBase_eventGetReplayParam_Parms*)Obj)->Critical = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::NewProp_Critical = { "Critical", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELReplayBase_eventGetReplayParam_Parms), &Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::NewProp_Critical_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::NewProp_InterpolateValue = { "InterpolateValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventGetReplayParam_Parms, InterpolateValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::NewProp_PlayerPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::NewProp_PlayerNextPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::NewProp_PlayerTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::NewProp_PlayerNextTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::NewProp_Particle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::NewProp_ParticleTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::NewProp_DamageLv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::NewProp_Critical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::NewProp_InterpolateValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplayBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplayBase, nullptr, "GetReplayParam", nullptr, nullptr, sizeof(ELReplayBase_eventGetReplayParam_Parms), Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplayBase_GetReplayParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplayBase_GetReplayParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplayBase_GetTotalRecordTime_Statics
	{
		struct ELReplayBase_eventGetTotalRecordTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELReplayBase_GetTotalRecordTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventGetTotalRecordTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplayBase_GetTotalRecordTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_GetTotalRecordTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplayBase_GetTotalRecordTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplayBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplayBase_GetTotalRecordTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplayBase, nullptr, "GetTotalRecordTime", nullptr, nullptr, sizeof(ELReplayBase_eventGetTotalRecordTime_Parms), Z_Construct_UFunction_UELReplayBase_GetTotalRecordTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_GetTotalRecordTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplayBase_GetTotalRecordTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_GetTotalRecordTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplayBase_GetTotalRecordTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplayBase_GetTotalRecordTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplayBase_IsPlayReplay_Statics
	{
		struct ELReplayBase_eventIsPlayReplay_Parms
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
	void Z_Construct_UFunction_UELReplayBase_IsPlayReplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELReplayBase_eventIsPlayReplay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELReplayBase_IsPlayReplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELReplayBase_eventIsPlayReplay_Parms), &Z_Construct_UFunction_UELReplayBase_IsPlayReplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplayBase_IsPlayReplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_IsPlayReplay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplayBase_IsPlayReplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplayBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplayBase_IsPlayReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplayBase, nullptr, "IsPlayReplay", nullptr, nullptr, sizeof(ELReplayBase_eventIsPlayReplay_Parms), Z_Construct_UFunction_UELReplayBase_IsPlayReplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_IsPlayReplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplayBase_IsPlayReplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_IsPlayReplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplayBase_IsPlayReplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplayBase_IsPlayReplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplayBase_IsSlowTime_Statics
	{
		struct ELReplayBase_eventIsSlowTime_Parms
		{
			float BeginTime;
			float EndTime;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BeginTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELReplayBase_IsSlowTime_Statics::NewProp_BeginTime = { "BeginTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventIsSlowTime_Parms, BeginTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELReplayBase_IsSlowTime_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventIsSlowTime_Parms, EndTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELReplayBase_IsSlowTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELReplayBase_eventIsSlowTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELReplayBase_IsSlowTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELReplayBase_eventIsSlowTime_Parms), &Z_Construct_UFunction_UELReplayBase_IsSlowTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplayBase_IsSlowTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_IsSlowTime_Statics::NewProp_BeginTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_IsSlowTime_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_IsSlowTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplayBase_IsSlowTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplayBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplayBase_IsSlowTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplayBase, nullptr, "IsSlowTime", nullptr, nullptr, sizeof(ELReplayBase_eventIsSlowTime_Parms), Z_Construct_UFunction_UELReplayBase_IsSlowTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_IsSlowTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplayBase_IsSlowTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_IsSlowTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplayBase_IsSlowTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplayBase_IsSlowTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplayBase_RequestBackupRecord_Statics
	{
		struct ELReplayBase_eventRequestBackupRecord_Parms
		{
			int32 Index;
			float DelayTime;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELReplayBase_RequestBackupRecord_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventRequestBackupRecord_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELReplayBase_RequestBackupRecord_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventRequestBackupRecord_Parms, DelayTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplayBase_RequestBackupRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_RequestBackupRecord_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_RequestBackupRecord_Statics::NewProp_DelayTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplayBase_RequestBackupRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplayBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplayBase_RequestBackupRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplayBase, nullptr, "RequestBackupRecord", nullptr, nullptr, sizeof(ELReplayBase_eventRequestBackupRecord_Parms), Z_Construct_UFunction_UELReplayBase_RequestBackupRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_RequestBackupRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplayBase_RequestBackupRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_RequestBackupRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplayBase_RequestBackupRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplayBase_RequestBackupRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplayBase_RequestPlayReplay_Statics
	{
		struct ELReplayBase_eventRequestPlayReplay_Parms
		{
			float ReplayDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReplayDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELReplayBase_RequestPlayReplay_Statics::NewProp_ReplayDuration = { "ReplayDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventRequestPlayReplay_Parms, ReplayDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplayBase_RequestPlayReplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_RequestPlayReplay_Statics::NewProp_ReplayDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplayBase_RequestPlayReplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplayBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplayBase_RequestPlayReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplayBase, nullptr, "RequestPlayReplay", nullptr, nullptr, sizeof(ELReplayBase_eventRequestPlayReplay_Parms), Z_Construct_UFunction_UELReplayBase_RequestPlayReplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_RequestPlayReplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplayBase_RequestPlayReplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_RequestPlayReplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplayBase_RequestPlayReplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplayBase_RequestPlayReplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplayBase_ResolveReplay_Statics
	{
		struct ELReplayBase_eventResolveReplay_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELReplayBase_ResolveReplay_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventResolveReplay_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplayBase_ResolveReplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_ResolveReplay_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplayBase_ResolveReplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplayBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplayBase_ResolveReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplayBase, nullptr, "ResolveReplay", nullptr, nullptr, sizeof(ELReplayBase_eventResolveReplay_Parms), Z_Construct_UFunction_UELReplayBase_ResolveReplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_ResolveReplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplayBase_ResolveReplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_ResolveReplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplayBase_ResolveReplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplayBase_ResolveReplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplayBase_SetDamageLv_Statics
	{
		struct ELReplayBase_eventSetDamageLv_Parms
		{
			int32 DamageLv;
			bool Critical;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DamageLv;
		static void NewProp_Critical_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Critical;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELReplayBase_SetDamageLv_Statics::NewProp_DamageLv = { "DamageLv", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventSetDamageLv_Parms, DamageLv), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELReplayBase_SetDamageLv_Statics::NewProp_Critical_SetBit(void* Obj)
	{
		((ELReplayBase_eventSetDamageLv_Parms*)Obj)->Critical = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELReplayBase_SetDamageLv_Statics::NewProp_Critical = { "Critical", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELReplayBase_eventSetDamageLv_Parms), &Z_Construct_UFunction_UELReplayBase_SetDamageLv_Statics::NewProp_Critical_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplayBase_SetDamageLv_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_SetDamageLv_Statics::NewProp_DamageLv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_SetDamageLv_Statics::NewProp_Critical,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplayBase_SetDamageLv_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplayBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplayBase_SetDamageLv_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplayBase, nullptr, "SetDamageLv", nullptr, nullptr, sizeof(ELReplayBase_eventSetDamageLv_Parms), Z_Construct_UFunction_UELReplayBase_SetDamageLv_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_SetDamageLv_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplayBase_SetDamageLv_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_SetDamageLv_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplayBase_SetDamageLv()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplayBase_SetDamageLv_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplayBase_SetHighlightReplayParam_Statics
	{
		struct ELReplayBase_eventSetHighlightReplayParam_Parms
		{
			FELHighlightReplayParam Param;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplayBase_SetHighlightReplayParam_Statics::NewProp_Param_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELReplayBase_SetHighlightReplayParam_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventSetHighlightReplayParam_Parms, Param), Z_Construct_UScriptStruct_FELHighlightReplayParam, METADATA_PARAMS(Z_Construct_UFunction_UELReplayBase_SetHighlightReplayParam_Statics::NewProp_Param_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_SetHighlightReplayParam_Statics::NewProp_Param_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplayBase_SetHighlightReplayParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_SetHighlightReplayParam_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplayBase_SetHighlightReplayParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplayBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplayBase_SetHighlightReplayParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplayBase, nullptr, "SetHighlightReplayParam", nullptr, nullptr, sizeof(ELReplayBase_eventSetHighlightReplayParam_Parms), Z_Construct_UFunction_UELReplayBase_SetHighlightReplayParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_SetHighlightReplayParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplayBase_SetHighlightReplayParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_SetHighlightReplayParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplayBase_SetHighlightReplayParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplayBase_SetHighlightReplayParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplayBase_SetHitParticle_Statics
	{
		struct ELReplayBase_eventSetHitParticle_Parms
		{
			UParticleSystem* Particle;
			FTransform Transform;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Particle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELReplayBase_SetHitParticle_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventSetHitParticle_Parms, Particle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplayBase_SetHitParticle_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELReplayBase_SetHitParticle_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventSetHitParticle_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UELReplayBase_SetHitParticle_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_SetHitParticle_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplayBase_SetHitParticle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_SetHitParticle_Statics::NewProp_Particle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_SetHitParticle_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplayBase_SetHitParticle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplayBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplayBase_SetHitParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplayBase, nullptr, "SetHitParticle", nullptr, nullptr, sizeof(ELReplayBase_eventSetHitParticle_Parms), Z_Construct_UFunction_UELReplayBase_SetHitParticle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_SetHitParticle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplayBase_SetHitParticle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_SetHitParticle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplayBase_SetHitParticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplayBase_SetHitParticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplayBase_SetSnapshotPoseTransform_N_Statics
	{
		struct ELReplayBase_eventSetSnapshotPoseTransform_N_Parms
		{
			FPoseSnapshot Pose;
			FTransform Transform;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELReplayBase_SetSnapshotPoseTransform_N_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventSetSnapshotPoseTransform_N_Parms, Pose), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELReplayBase_SetSnapshotPoseTransform_N_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplayBase_eventSetSnapshotPoseTransform_N_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplayBase_SetSnapshotPoseTransform_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_SetSnapshotPoseTransform_N_Statics::NewProp_Pose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplayBase_SetSnapshotPoseTransform_N_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplayBase_SetSnapshotPoseTransform_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplayBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplayBase_SetSnapshotPoseTransform_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplayBase, nullptr, "SetSnapshotPoseTransform_N", nullptr, nullptr, sizeof(ELReplayBase_eventSetSnapshotPoseTransform_N_Parms), Z_Construct_UFunction_UELReplayBase_SetSnapshotPoseTransform_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_SetSnapshotPoseTransform_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplayBase_SetSnapshotPoseTransform_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_SetSnapshotPoseTransform_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplayBase_SetSnapshotPoseTransform_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplayBase_SetSnapshotPoseTransform_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplayBase_StartRec_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplayBase_StartRec_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplayBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplayBase_StartRec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplayBase, nullptr, "StartRec", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplayBase_StartRec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_StartRec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplayBase_StartRec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplayBase_StartRec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplayBase_StopReplay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplayBase_StopReplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplayBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplayBase_StopReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplayBase, nullptr, "StopReplay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplayBase_StopReplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplayBase_StopReplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplayBase_StopReplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplayBase_StopReplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELReplayBase_NoRegister()
	{
		return UELReplayBase::StaticClass();
	}
	struct Z_Construct_UClass_UELReplayBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickTime_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TickTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELReplayBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELReplayBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELReplayBase_ConvertReplayIndex_N, "ConvertReplayIndex_N" }, // 199812898
		{ &Z_Construct_UFunction_UELReplayBase_GetDamageTime, "GetDamageTime" }, // 2200113927
		{ &Z_Construct_UFunction_UELReplayBase_GetHighlightReplayParam, "GetHighlightReplayParam" }, // 2088309781
		{ &Z_Construct_UFunction_UELReplayBase_GetReplayParam, "GetReplayParam" }, // 677337263
		{ &Z_Construct_UFunction_UELReplayBase_GetTotalRecordTime, "GetTotalRecordTime" }, // 2655614297
		{ &Z_Construct_UFunction_UELReplayBase_IsPlayReplay, "IsPlayReplay" }, // 2939663096
		{ &Z_Construct_UFunction_UELReplayBase_IsSlowTime, "IsSlowTime" }, // 4235367424
		{ &Z_Construct_UFunction_UELReplayBase_RequestBackupRecord, "RequestBackupRecord" }, // 2202108274
		{ &Z_Construct_UFunction_UELReplayBase_RequestPlayReplay, "RequestPlayReplay" }, // 2188709711
		{ &Z_Construct_UFunction_UELReplayBase_ResolveReplay, "ResolveReplay" }, // 3599269852
		{ &Z_Construct_UFunction_UELReplayBase_SetDamageLv, "SetDamageLv" }, // 1168815430
		{ &Z_Construct_UFunction_UELReplayBase_SetHighlightReplayParam, "SetHighlightReplayParam" }, // 2529291187
		{ &Z_Construct_UFunction_UELReplayBase_SetHitParticle, "SetHitParticle" }, // 4151391736
		{ &Z_Construct_UFunction_UELReplayBase_SetSnapshotPoseTransform_N, "SetSnapshotPoseTransform_N" }, // 2209578014
		{ &Z_Construct_UFunction_UELReplayBase_StartRec, "StartRec" }, // 2768405865
		{ &Z_Construct_UFunction_UELReplayBase_StopReplay, "StopReplay" }, // 3447660044
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELReplayBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELReplayBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELReplayBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELReplayBase_Statics::NewProp_TickTime_Inner = { "TickTime", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELReplayBase_Statics::NewProp_TickTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplayBase" },
		{ "ModuleRelativePath", "Public/ELReplayBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELReplayBase_Statics::NewProp_TickTime = { "TickTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELReplayBase, TickTime), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELReplayBase_Statics::NewProp_TickTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELReplayBase_Statics::NewProp_TickTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELReplayBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELReplayBase_Statics::NewProp_TickTime_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELReplayBase_Statics::NewProp_TickTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELReplayBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELReplayBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELReplayBase_Statics::ClassParams = {
		&UELReplayBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELReplayBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELReplayBase_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELReplayBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELReplayBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELReplayBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELReplayBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELReplayBase, 4236189377);
	template<> ELITE_GAME_API UClass* StaticClass<UELReplayBase>()
	{
		return UELReplayBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELReplayBase(Z_Construct_UClass_UELReplayBase, &UELReplayBase::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UELReplayBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELReplayBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
