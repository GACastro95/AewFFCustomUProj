// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerAnimInstance() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerAnimInstance_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELCareerAnimInstance::execGetLookAtAlpha)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLookAtAlpha();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerAnimInstance::execGetLookAtEyeAngleH)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLookAtEyeAngleH();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerAnimInstance::execGetLookAtEyeTargetVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLookAtEyeTargetVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerAnimInstance::execGetLookAtFaceAngleV)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLookAtFaceAngleV();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerAnimInstance::execGetLookAtTargetLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLookAtTargetLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerAnimInstance::execInitializeVariables)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeVariables();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerAnimInstance::execIsCutScene)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCutScene();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerAnimInstance::execIsEnableLookAt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableLookAt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerAnimInstance::execRequestEventAnimation)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL(Z_Param_bForceChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestEventAnimation(Z_Param_Name,Z_Param_bForceChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerAnimInstance::execRequestFacialAnimation)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL(Z_Param_bForceChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestFacialAnimation(Z_Param_Name,Z_Param_bForceChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerAnimInstance::execRequestNoBlendAnimation)
	{
		P_GET_UBOOL(Z_Param_bNoBlend);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestNoBlendAnimation(Z_Param_bNoBlend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerAnimInstance::execRequestTalkAnimation)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL(Z_Param_bForceChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestTalkAnimation(Z_Param_Name,Z_Param_bForceChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerAnimInstance::execResetAnimBlend)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param__Montage);
		P_GET_UBOOL(Z_Param__bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAnimBlend(Z_Param__Montage,Z_Param__bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerAnimInstance::execUpdateVariables)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_fDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateVariables(Z_Param_fDeltaTime);
		P_NATIVE_END;
	}
	void UELCareerAnimInstance::StaticRegisterNativesUELCareerAnimInstance()
	{
		UClass* Class = UELCareerAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLookAtAlpha", &UELCareerAnimInstance::execGetLookAtAlpha },
			{ "GetLookAtEyeAngleH", &UELCareerAnimInstance::execGetLookAtEyeAngleH },
			{ "GetLookAtEyeTargetVector", &UELCareerAnimInstance::execGetLookAtEyeTargetVector },
			{ "GetLookAtFaceAngleV", &UELCareerAnimInstance::execGetLookAtFaceAngleV },
			{ "GetLookAtTargetLocation", &UELCareerAnimInstance::execGetLookAtTargetLocation },
			{ "InitializeVariables", &UELCareerAnimInstance::execInitializeVariables },
			{ "IsCutScene", &UELCareerAnimInstance::execIsCutScene },
			{ "IsEnableLookAt", &UELCareerAnimInstance::execIsEnableLookAt },
			{ "RequestEventAnimation", &UELCareerAnimInstance::execRequestEventAnimation },
			{ "RequestFacialAnimation", &UELCareerAnimInstance::execRequestFacialAnimation },
			{ "RequestNoBlendAnimation", &UELCareerAnimInstance::execRequestNoBlendAnimation },
			{ "RequestTalkAnimation", &UELCareerAnimInstance::execRequestTalkAnimation },
			{ "ResetAnimBlend", &UELCareerAnimInstance::execResetAnimBlend },
			{ "UpdateVariables", &UELCareerAnimInstance::execUpdateVariables },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtAlpha_Statics
	{
		struct ELCareerAnimInstance_eventGetLookAtAlpha_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAnimInstance_eventGetLookAtAlpha_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtAlpha_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtAlpha_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtAlpha_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerAnimInstance, nullptr, "GetLookAtAlpha", nullptr, nullptr, sizeof(ELCareerAnimInstance_eventGetLookAtAlpha_Parms), Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtAlpha_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtAlpha_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeAngleH_Statics
	{
		struct ELCareerAnimInstance_eventGetLookAtEyeAngleH_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeAngleH_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAnimInstance_eventGetLookAtEyeAngleH_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeAngleH_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeAngleH_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeAngleH_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeAngleH_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerAnimInstance, nullptr, "GetLookAtEyeAngleH", nullptr, nullptr, sizeof(ELCareerAnimInstance_eventGetLookAtEyeAngleH_Parms), Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeAngleH_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeAngleH_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeAngleH_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeAngleH_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeAngleH()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeAngleH_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeTargetVector_Statics
	{
		struct ELCareerAnimInstance_eventGetLookAtEyeTargetVector_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeTargetVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAnimInstance_eventGetLookAtEyeTargetVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeTargetVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeTargetVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeTargetVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeTargetVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerAnimInstance, nullptr, "GetLookAtEyeTargetVector", nullptr, nullptr, sizeof(ELCareerAnimInstance_eventGetLookAtEyeTargetVector_Parms), Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeTargetVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeTargetVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeTargetVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeTargetVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeTargetVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeTargetVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtFaceAngleV_Statics
	{
		struct ELCareerAnimInstance_eventGetLookAtFaceAngleV_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtFaceAngleV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAnimInstance_eventGetLookAtFaceAngleV_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtFaceAngleV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtFaceAngleV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtFaceAngleV_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtFaceAngleV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerAnimInstance, nullptr, "GetLookAtFaceAngleV", nullptr, nullptr, sizeof(ELCareerAnimInstance_eventGetLookAtFaceAngleV_Parms), Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtFaceAngleV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtFaceAngleV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtFaceAngleV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtFaceAngleV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtFaceAngleV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtFaceAngleV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtTargetLocation_Statics
	{
		struct ELCareerAnimInstance_eventGetLookAtTargetLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtTargetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAnimInstance_eventGetLookAtTargetLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtTargetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtTargetLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerAnimInstance, nullptr, "GetLookAtTargetLocation", nullptr, nullptr, sizeof(ELCareerAnimInstance_eventGetLookAtTargetLocation_Parms), Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtTargetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtTargetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtTargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerAnimInstance_InitializeVariables_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAnimInstance_InitializeVariables_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerAnimInstance_InitializeVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerAnimInstance, nullptr, "InitializeVariables", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerAnimInstance_InitializeVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_InitializeVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerAnimInstance_InitializeVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerAnimInstance_InitializeVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerAnimInstance_IsCutScene_Statics
	{
		struct ELCareerAnimInstance_eventIsCutScene_Parms
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
	void Z_Construct_UFunction_UELCareerAnimInstance_IsCutScene_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerAnimInstance_eventIsCutScene_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerAnimInstance_IsCutScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerAnimInstance_eventIsCutScene_Parms), &Z_Construct_UFunction_UELCareerAnimInstance_IsCutScene_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerAnimInstance_IsCutScene_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAnimInstance_IsCutScene_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAnimInstance_IsCutScene_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerAnimInstance_IsCutScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerAnimInstance, nullptr, "IsCutScene", nullptr, nullptr, sizeof(ELCareerAnimInstance_eventIsCutScene_Parms), Z_Construct_UFunction_UELCareerAnimInstance_IsCutScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_IsCutScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerAnimInstance_IsCutScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_IsCutScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerAnimInstance_IsCutScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerAnimInstance_IsCutScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerAnimInstance_IsEnableLookAt_Statics
	{
		struct ELCareerAnimInstance_eventIsEnableLookAt_Parms
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
	void Z_Construct_UFunction_UELCareerAnimInstance_IsEnableLookAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerAnimInstance_eventIsEnableLookAt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerAnimInstance_IsEnableLookAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerAnimInstance_eventIsEnableLookAt_Parms), &Z_Construct_UFunction_UELCareerAnimInstance_IsEnableLookAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerAnimInstance_IsEnableLookAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAnimInstance_IsEnableLookAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAnimInstance_IsEnableLookAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerAnimInstance_IsEnableLookAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerAnimInstance, nullptr, "IsEnableLookAt", nullptr, nullptr, sizeof(ELCareerAnimInstance_eventIsEnableLookAt_Parms), Z_Construct_UFunction_UELCareerAnimInstance_IsEnableLookAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_IsEnableLookAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerAnimInstance_IsEnableLookAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_IsEnableLookAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerAnimInstance_IsEnableLookAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerAnimInstance_IsEnableLookAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerAnimInstance_RequestEventAnimation_Statics
	{
		struct ELCareerAnimInstance_eventRequestEventAnimation_Parms
		{
			FString Name;
			bool bForceChange;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_bForceChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAnimInstance_RequestEventAnimation_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELCareerAnimInstance_RequestEventAnimation_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAnimInstance_eventRequestEventAnimation_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UELCareerAnimInstance_RequestEventAnimation_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_RequestEventAnimation_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UELCareerAnimInstance_RequestEventAnimation_Statics::NewProp_bForceChange_SetBit(void* Obj)
	{
		((ELCareerAnimInstance_eventRequestEventAnimation_Parms*)Obj)->bForceChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerAnimInstance_RequestEventAnimation_Statics::NewProp_bForceChange = { "bForceChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerAnimInstance_eventRequestEventAnimation_Parms), &Z_Construct_UFunction_UELCareerAnimInstance_RequestEventAnimation_Statics::NewProp_bForceChange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerAnimInstance_RequestEventAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAnimInstance_RequestEventAnimation_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAnimInstance_RequestEventAnimation_Statics::NewProp_bForceChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAnimInstance_RequestEventAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerAnimInstance_RequestEventAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerAnimInstance, nullptr, "RequestEventAnimation", nullptr, nullptr, sizeof(ELCareerAnimInstance_eventRequestEventAnimation_Parms), Z_Construct_UFunction_UELCareerAnimInstance_RequestEventAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_RequestEventAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerAnimInstance_RequestEventAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_RequestEventAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerAnimInstance_RequestEventAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerAnimInstance_RequestEventAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerAnimInstance_RequestFacialAnimation_Statics
	{
		struct ELCareerAnimInstance_eventRequestFacialAnimation_Parms
		{
			FString Name;
			bool bForceChange;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_bForceChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAnimInstance_RequestFacialAnimation_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELCareerAnimInstance_RequestFacialAnimation_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAnimInstance_eventRequestFacialAnimation_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UELCareerAnimInstance_RequestFacialAnimation_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_RequestFacialAnimation_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UELCareerAnimInstance_RequestFacialAnimation_Statics::NewProp_bForceChange_SetBit(void* Obj)
	{
		((ELCareerAnimInstance_eventRequestFacialAnimation_Parms*)Obj)->bForceChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerAnimInstance_RequestFacialAnimation_Statics::NewProp_bForceChange = { "bForceChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerAnimInstance_eventRequestFacialAnimation_Parms), &Z_Construct_UFunction_UELCareerAnimInstance_RequestFacialAnimation_Statics::NewProp_bForceChange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerAnimInstance_RequestFacialAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAnimInstance_RequestFacialAnimation_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAnimInstance_RequestFacialAnimation_Statics::NewProp_bForceChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAnimInstance_RequestFacialAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerAnimInstance_RequestFacialAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerAnimInstance, nullptr, "RequestFacialAnimation", nullptr, nullptr, sizeof(ELCareerAnimInstance_eventRequestFacialAnimation_Parms), Z_Construct_UFunction_UELCareerAnimInstance_RequestFacialAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_RequestFacialAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerAnimInstance_RequestFacialAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_RequestFacialAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerAnimInstance_RequestFacialAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerAnimInstance_RequestFacialAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerAnimInstance_RequestNoBlendAnimation_Statics
	{
		struct ELCareerAnimInstance_eventRequestNoBlendAnimation_Parms
		{
			bool bNoBlend;
		};
		static void NewProp_bNoBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoBlend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerAnimInstance_RequestNoBlendAnimation_Statics::NewProp_bNoBlend_SetBit(void* Obj)
	{
		((ELCareerAnimInstance_eventRequestNoBlendAnimation_Parms*)Obj)->bNoBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerAnimInstance_RequestNoBlendAnimation_Statics::NewProp_bNoBlend = { "bNoBlend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerAnimInstance_eventRequestNoBlendAnimation_Parms), &Z_Construct_UFunction_UELCareerAnimInstance_RequestNoBlendAnimation_Statics::NewProp_bNoBlend_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerAnimInstance_RequestNoBlendAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAnimInstance_RequestNoBlendAnimation_Statics::NewProp_bNoBlend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAnimInstance_RequestNoBlendAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerAnimInstance_RequestNoBlendAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerAnimInstance, nullptr, "RequestNoBlendAnimation", nullptr, nullptr, sizeof(ELCareerAnimInstance_eventRequestNoBlendAnimation_Parms), Z_Construct_UFunction_UELCareerAnimInstance_RequestNoBlendAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_RequestNoBlendAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerAnimInstance_RequestNoBlendAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_RequestNoBlendAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerAnimInstance_RequestNoBlendAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerAnimInstance_RequestNoBlendAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerAnimInstance_RequestTalkAnimation_Statics
	{
		struct ELCareerAnimInstance_eventRequestTalkAnimation_Parms
		{
			FString Name;
			bool bForceChange;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_bForceChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAnimInstance_RequestTalkAnimation_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELCareerAnimInstance_RequestTalkAnimation_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAnimInstance_eventRequestTalkAnimation_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UELCareerAnimInstance_RequestTalkAnimation_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_RequestTalkAnimation_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UELCareerAnimInstance_RequestTalkAnimation_Statics::NewProp_bForceChange_SetBit(void* Obj)
	{
		((ELCareerAnimInstance_eventRequestTalkAnimation_Parms*)Obj)->bForceChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerAnimInstance_RequestTalkAnimation_Statics::NewProp_bForceChange = { "bForceChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerAnimInstance_eventRequestTalkAnimation_Parms), &Z_Construct_UFunction_UELCareerAnimInstance_RequestTalkAnimation_Statics::NewProp_bForceChange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerAnimInstance_RequestTalkAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAnimInstance_RequestTalkAnimation_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAnimInstance_RequestTalkAnimation_Statics::NewProp_bForceChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAnimInstance_RequestTalkAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerAnimInstance_RequestTalkAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerAnimInstance, nullptr, "RequestTalkAnimation", nullptr, nullptr, sizeof(ELCareerAnimInstance_eventRequestTalkAnimation_Parms), Z_Construct_UFunction_UELCareerAnimInstance_RequestTalkAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_RequestTalkAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerAnimInstance_RequestTalkAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_RequestTalkAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerAnimInstance_RequestTalkAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerAnimInstance_RequestTalkAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerAnimInstance_ResetAnimBlend_Statics
	{
		struct ELCareerAnimInstance_eventResetAnimBlend_Parms
		{
			UAnimMontage* _Montage;
			bool _bInterrupted;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Montage;
		static void NewProp__bInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bInterrupted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerAnimInstance_ResetAnimBlend_Statics::NewProp__Montage = { "_Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAnimInstance_eventResetAnimBlend_Parms, _Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELCareerAnimInstance_ResetAnimBlend_Statics::NewProp__bInterrupted_SetBit(void* Obj)
	{
		((ELCareerAnimInstance_eventResetAnimBlend_Parms*)Obj)->_bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerAnimInstance_ResetAnimBlend_Statics::NewProp__bInterrupted = { "_bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerAnimInstance_eventResetAnimBlend_Parms), &Z_Construct_UFunction_UELCareerAnimInstance_ResetAnimBlend_Statics::NewProp__bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerAnimInstance_ResetAnimBlend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAnimInstance_ResetAnimBlend_Statics::NewProp__Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAnimInstance_ResetAnimBlend_Statics::NewProp__bInterrupted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAnimInstance_ResetAnimBlend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerAnimInstance_ResetAnimBlend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerAnimInstance, nullptr, "ResetAnimBlend", nullptr, nullptr, sizeof(ELCareerAnimInstance_eventResetAnimBlend_Parms), Z_Construct_UFunction_UELCareerAnimInstance_ResetAnimBlend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_ResetAnimBlend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerAnimInstance_ResetAnimBlend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_ResetAnimBlend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerAnimInstance_ResetAnimBlend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerAnimInstance_ResetAnimBlend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerAnimInstance_UpdateVariables_Statics
	{
		struct ELCareerAnimInstance_eventUpdateVariables_Parms
		{
			float fDeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELCareerAnimInstance_UpdateVariables_Statics::NewProp_fDeltaTime = { "fDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerAnimInstance_eventUpdateVariables_Parms, fDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerAnimInstance_UpdateVariables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerAnimInstance_UpdateVariables_Statics::NewProp_fDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerAnimInstance_UpdateVariables_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerAnimInstance_UpdateVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerAnimInstance, nullptr, "UpdateVariables", nullptr, nullptr, sizeof(ELCareerAnimInstance_eventUpdateVariables_Parms), Z_Construct_UFunction_UELCareerAnimInstance_UpdateVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_UpdateVariables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerAnimInstance_UpdateVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerAnimInstance_UpdateVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerAnimInstance_UpdateVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerAnimInstance_UpdateVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerAnimInstance_NoRegister()
	{
		return UELCareerAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strCurrentFacialAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strCurrentFacialAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strRequestFacialAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strRequestFacialAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strCurrentTalkAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strCurrentTalkAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strRequestTalkAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strRequestTalkAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strCurrentMenuAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strCurrentMenuAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strRequestMenuAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strRequestMenuAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strCurrentEventAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strCurrentEventAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strRequestEventAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strRequestEventAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pTargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pTargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtAlpha, "GetLookAtAlpha" }, // 1003087445
		{ &Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeAngleH, "GetLookAtEyeAngleH" }, // 3848725092
		{ &Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtEyeTargetVector, "GetLookAtEyeTargetVector" }, // 620452508
		{ &Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtFaceAngleV, "GetLookAtFaceAngleV" }, // 3557274809
		{ &Z_Construct_UFunction_UELCareerAnimInstance_GetLookAtTargetLocation, "GetLookAtTargetLocation" }, // 2673862094
		{ &Z_Construct_UFunction_UELCareerAnimInstance_InitializeVariables, "InitializeVariables" }, // 947611689
		{ &Z_Construct_UFunction_UELCareerAnimInstance_IsCutScene, "IsCutScene" }, // 1889712196
		{ &Z_Construct_UFunction_UELCareerAnimInstance_IsEnableLookAt, "IsEnableLookAt" }, // 2646235839
		{ &Z_Construct_UFunction_UELCareerAnimInstance_RequestEventAnimation, "RequestEventAnimation" }, // 2507254224
		{ &Z_Construct_UFunction_UELCareerAnimInstance_RequestFacialAnimation, "RequestFacialAnimation" }, // 1051765215
		{ &Z_Construct_UFunction_UELCareerAnimInstance_RequestNoBlendAnimation, "RequestNoBlendAnimation" }, // 2224841820
		{ &Z_Construct_UFunction_UELCareerAnimInstance_RequestTalkAnimation, "RequestTalkAnimation" }, // 3104600228
		{ &Z_Construct_UFunction_UELCareerAnimInstance_ResetAnimBlend, "ResetAnimBlend" }, // 1152560078
		{ &Z_Construct_UFunction_UELCareerAnimInstance_UpdateVariables, "UpdateVariables" }, // 891572997
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ELCareerAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strCurrentFacialAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerAnimInstance" },
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strCurrentFacialAnimation = { "m_strCurrentFacialAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerAnimInstance, m_strCurrentFacialAnimation), METADATA_PARAMS(Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strCurrentFacialAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strCurrentFacialAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strRequestFacialAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerAnimInstance" },
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strRequestFacialAnimation = { "m_strRequestFacialAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerAnimInstance, m_strRequestFacialAnimation), METADATA_PARAMS(Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strRequestFacialAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strRequestFacialAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strCurrentTalkAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerAnimInstance" },
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strCurrentTalkAnimation = { "m_strCurrentTalkAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerAnimInstance, m_strCurrentTalkAnimation), METADATA_PARAMS(Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strCurrentTalkAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strCurrentTalkAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strRequestTalkAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerAnimInstance" },
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strRequestTalkAnimation = { "m_strRequestTalkAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerAnimInstance, m_strRequestTalkAnimation), METADATA_PARAMS(Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strRequestTalkAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strRequestTalkAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strCurrentMenuAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerAnimInstance" },
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strCurrentMenuAnimation = { "m_strCurrentMenuAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerAnimInstance, m_strCurrentMenuAnimation), METADATA_PARAMS(Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strCurrentMenuAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strCurrentMenuAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strRequestMenuAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerAnimInstance" },
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strRequestMenuAnimation = { "m_strRequestMenuAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerAnimInstance, m_strRequestMenuAnimation), METADATA_PARAMS(Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strRequestMenuAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strRequestMenuAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strCurrentEventAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerAnimInstance" },
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strCurrentEventAnimation = { "m_strCurrentEventAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerAnimInstance, m_strCurrentEventAnimation), METADATA_PARAMS(Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strCurrentEventAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strCurrentEventAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strRequestEventAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerAnimInstance" },
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strRequestEventAnimation = { "m_strRequestEventAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerAnimInstance, m_strRequestEventAnimation), METADATA_PARAMS(Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strRequestEventAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strRequestEventAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_pTargetActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerAnimInstance" },
		{ "ModuleRelativePath", "Public/ELCareerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_pTargetActor = { "m_pTargetActor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerAnimInstance, m_pTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_pTargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_pTargetActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELCareerAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strCurrentFacialAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strRequestFacialAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strCurrentTalkAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strRequestTalkAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strCurrentMenuAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strRequestMenuAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strCurrentEventAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_strRequestEventAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerAnimInstance_Statics::NewProp_m_pTargetActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerAnimInstance_Statics::ClassParams = {
		&UELCareerAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELCareerAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UELCareerAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerAnimInstance, 2652476890);
	template<> ABP_200508_API UClass* StaticClass<UELCareerAnimInstance>()
	{
		return UELCareerAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerAnimInstance(Z_Construct_UClass_UELCareerAnimInstance, &UELCareerAnimInstance::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
