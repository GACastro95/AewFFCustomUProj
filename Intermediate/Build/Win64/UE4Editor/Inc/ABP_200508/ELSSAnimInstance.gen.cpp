// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSAnimInstance() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimInstance_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSUpperBodyAnimState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSAnimInstance::execCheckDisableNotifyMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckDisableNotifyMontage(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAnimInstance::execDisableNotifyMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableNotifyMontage(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAnimInstance::execGetUpperBodyAnimAlpha)
	{
		P_GET_UBOOL(Z_Param_inCheckEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetUpperBodyAnimAlpha(Z_Param_inCheckEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAnimInstance::execIsEnableUpperBodyAnim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableUpperBodyAnim();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAnimInstance::execSetEnableUpperBodyAnim)
	{
		P_GET_UBOOL(Z_Param_IsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableUpperBodyAnim(Z_Param_IsOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAnimInstance::execSetUpperBodyAnimState)
	{
		P_GET_ENUM(ESSUpperBodyAnimState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpperBodyAnimState(ESSUpperBodyAnimState(Z_Param_State));
		P_NATIVE_END;
	}
	void UELSSAnimInstance::StaticRegisterNativesUELSSAnimInstance()
	{
		UClass* Class = UELSSAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckDisableNotifyMontage", &UELSSAnimInstance::execCheckDisableNotifyMontage },
			{ "DisableNotifyMontage", &UELSSAnimInstance::execDisableNotifyMontage },
			{ "GetUpperBodyAnimAlpha", &UELSSAnimInstance::execGetUpperBodyAnimAlpha },
			{ "IsEnableUpperBodyAnim", &UELSSAnimInstance::execIsEnableUpperBodyAnim },
			{ "SetEnableUpperBodyAnim", &UELSSAnimInstance::execSetEnableUpperBodyAnim },
			{ "SetUpperBodyAnimState", &UELSSAnimInstance::execSetUpperBodyAnimState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSAnimInstance_CheckDisableNotifyMontage_Statics
	{
		struct ELSSAnimInstance_eventCheckDisableNotifyMontage_Parms
		{
			UAnimMontage* Montage;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAnimInstance_CheckDisableNotifyMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAnimInstance_eventCheckDisableNotifyMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSAnimInstance_CheckDisableNotifyMontage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSAnimInstance_eventCheckDisableNotifyMontage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSAnimInstance_CheckDisableNotifyMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSAnimInstance_eventCheckDisableNotifyMontage_Parms), &Z_Construct_UFunction_UELSSAnimInstance_CheckDisableNotifyMontage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAnimInstance_CheckDisableNotifyMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimInstance_CheckDisableNotifyMontage_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimInstance_CheckDisableNotifyMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAnimInstance_CheckDisableNotifyMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAnimInstance_CheckDisableNotifyMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAnimInstance, nullptr, "CheckDisableNotifyMontage", nullptr, nullptr, sizeof(ELSSAnimInstance_eventCheckDisableNotifyMontage_Parms), Z_Construct_UFunction_UELSSAnimInstance_CheckDisableNotifyMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimInstance_CheckDisableNotifyMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAnimInstance_CheckDisableNotifyMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimInstance_CheckDisableNotifyMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAnimInstance_CheckDisableNotifyMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAnimInstance_CheckDisableNotifyMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAnimInstance_DisableNotifyMontage_Statics
	{
		struct ELSSAnimInstance_eventDisableNotifyMontage_Parms
		{
			UAnimMontage* Montage;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAnimInstance_DisableNotifyMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAnimInstance_eventDisableNotifyMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAnimInstance_DisableNotifyMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimInstance_DisableNotifyMontage_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAnimInstance_DisableNotifyMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAnimInstance_DisableNotifyMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAnimInstance, nullptr, "DisableNotifyMontage", nullptr, nullptr, sizeof(ELSSAnimInstance_eventDisableNotifyMontage_Parms), Z_Construct_UFunction_UELSSAnimInstance_DisableNotifyMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimInstance_DisableNotifyMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAnimInstance_DisableNotifyMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimInstance_DisableNotifyMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAnimInstance_DisableNotifyMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAnimInstance_DisableNotifyMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAnimInstance_GetUpperBodyAnimAlpha_Statics
	{
		struct ELSSAnimInstance_eventGetUpperBodyAnimAlpha_Parms
		{
			bool inCheckEnabled;
			float ReturnValue;
		};
		static void NewProp_inCheckEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inCheckEnabled;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSAnimInstance_GetUpperBodyAnimAlpha_Statics::NewProp_inCheckEnabled_SetBit(void* Obj)
	{
		((ELSSAnimInstance_eventGetUpperBodyAnimAlpha_Parms*)Obj)->inCheckEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSAnimInstance_GetUpperBodyAnimAlpha_Statics::NewProp_inCheckEnabled = { "inCheckEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSAnimInstance_eventGetUpperBodyAnimAlpha_Parms), &Z_Construct_UFunction_UELSSAnimInstance_GetUpperBodyAnimAlpha_Statics::NewProp_inCheckEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSAnimInstance_GetUpperBodyAnimAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAnimInstance_eventGetUpperBodyAnimAlpha_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAnimInstance_GetUpperBodyAnimAlpha_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimInstance_GetUpperBodyAnimAlpha_Statics::NewProp_inCheckEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimInstance_GetUpperBodyAnimAlpha_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAnimInstance_GetUpperBodyAnimAlpha_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAnimInstance_GetUpperBodyAnimAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAnimInstance, nullptr, "GetUpperBodyAnimAlpha", nullptr, nullptr, sizeof(ELSSAnimInstance_eventGetUpperBodyAnimAlpha_Parms), Z_Construct_UFunction_UELSSAnimInstance_GetUpperBodyAnimAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimInstance_GetUpperBodyAnimAlpha_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAnimInstance_GetUpperBodyAnimAlpha_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimInstance_GetUpperBodyAnimAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAnimInstance_GetUpperBodyAnimAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAnimInstance_GetUpperBodyAnimAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAnimInstance_IsEnableUpperBodyAnim_Statics
	{
		struct ELSSAnimInstance_eventIsEnableUpperBodyAnim_Parms
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
	void Z_Construct_UFunction_UELSSAnimInstance_IsEnableUpperBodyAnim_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSAnimInstance_eventIsEnableUpperBodyAnim_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSAnimInstance_IsEnableUpperBodyAnim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSAnimInstance_eventIsEnableUpperBodyAnim_Parms), &Z_Construct_UFunction_UELSSAnimInstance_IsEnableUpperBodyAnim_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAnimInstance_IsEnableUpperBodyAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimInstance_IsEnableUpperBodyAnim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAnimInstance_IsEnableUpperBodyAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAnimInstance_IsEnableUpperBodyAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAnimInstance, nullptr, "IsEnableUpperBodyAnim", nullptr, nullptr, sizeof(ELSSAnimInstance_eventIsEnableUpperBodyAnim_Parms), Z_Construct_UFunction_UELSSAnimInstance_IsEnableUpperBodyAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimInstance_IsEnableUpperBodyAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAnimInstance_IsEnableUpperBodyAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimInstance_IsEnableUpperBodyAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAnimInstance_IsEnableUpperBodyAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAnimInstance_IsEnableUpperBodyAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAnimInstance_SetEnableUpperBodyAnim_Statics
	{
		struct ELSSAnimInstance_eventSetEnableUpperBodyAnim_Parms
		{
			bool IsOn;
		};
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSAnimInstance_SetEnableUpperBodyAnim_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((ELSSAnimInstance_eventSetEnableUpperBodyAnim_Parms*)Obj)->IsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSAnimInstance_SetEnableUpperBodyAnim_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSAnimInstance_eventSetEnableUpperBodyAnim_Parms), &Z_Construct_UFunction_UELSSAnimInstance_SetEnableUpperBodyAnim_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAnimInstance_SetEnableUpperBodyAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimInstance_SetEnableUpperBodyAnim_Statics::NewProp_IsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAnimInstance_SetEnableUpperBodyAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAnimInstance_SetEnableUpperBodyAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAnimInstance, nullptr, "SetEnableUpperBodyAnim", nullptr, nullptr, sizeof(ELSSAnimInstance_eventSetEnableUpperBodyAnim_Parms), Z_Construct_UFunction_UELSSAnimInstance_SetEnableUpperBodyAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimInstance_SetEnableUpperBodyAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAnimInstance_SetEnableUpperBodyAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimInstance_SetEnableUpperBodyAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAnimInstance_SetEnableUpperBodyAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAnimInstance_SetEnableUpperBodyAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAnimInstance_SetUpperBodyAnimState_Statics
	{
		struct ELSSAnimInstance_eventSetUpperBodyAnimState_Parms
		{
			ESSUpperBodyAnimState State;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSAnimInstance_SetUpperBodyAnimState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSAnimInstance_SetUpperBodyAnimState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAnimInstance_eventSetUpperBodyAnimState_Parms, State), Z_Construct_UEnum_ABP_200508_ESSUpperBodyAnimState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAnimInstance_SetUpperBodyAnimState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimInstance_SetUpperBodyAnimState_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimInstance_SetUpperBodyAnimState_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAnimInstance_SetUpperBodyAnimState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAnimInstance_SetUpperBodyAnimState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAnimInstance, nullptr, "SetUpperBodyAnimState", nullptr, nullptr, sizeof(ELSSAnimInstance_eventSetUpperBodyAnimState_Parms), Z_Construct_UFunction_UELSSAnimInstance_SetUpperBodyAnimState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimInstance_SetUpperBodyAnimState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAnimInstance_SetUpperBodyAnimState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimInstance_SetUpperBodyAnimState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAnimInstance_SetUpperBodyAnimState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAnimInstance_SetUpperBodyAnimState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSAnimInstance_NoRegister()
	{
		return UELSSAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UELSSAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_disableNotifyMontages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_disableNotifyMontages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_disableNotifyMontages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyAnimEnable_MetaData[];
#endif
		static void NewProp_UpperBodyAnimEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UpperBodyAnimEnable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpperBodyAnimState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyAnimState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UpperBodyAnimState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyAnimAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpperBodyAnimAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyAnimAlphaBlendTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpperBodyAnimAlphaBlendTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActiveUpperBodyAnim_MetaData[];
#endif
		static void NewProp_bActiveUpperBodyAnim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActiveUpperBodyAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimOffsetAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunAimOffsetYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GunAimOffsetYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunAimOffsetPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GunAimOffsetPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldSkipUpdateSubAnimInst_MetaData[];
#endif
		static void NewProp_bShouldSkipUpdateSubAnimInst_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldSkipUpdateSubAnimInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldSkipUpdateFacialAnimInst_MetaData[];
#endif
		static void NewProp_bShouldSkipUpdateFacialAnimInst_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldSkipUpdateFacialAnimInst;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSAnimInstance_CheckDisableNotifyMontage, "CheckDisableNotifyMontage" }, // 2596040505
		{ &Z_Construct_UFunction_UELSSAnimInstance_DisableNotifyMontage, "DisableNotifyMontage" }, // 66203637
		{ &Z_Construct_UFunction_UELSSAnimInstance_GetUpperBodyAnimAlpha, "GetUpperBodyAnimAlpha" }, // 1810351167
		{ &Z_Construct_UFunction_UELSSAnimInstance_IsEnableUpperBodyAnim, "IsEnableUpperBodyAnim" }, // 2666749663
		{ &Z_Construct_UFunction_UELSSAnimInstance_SetEnableUpperBodyAnim, "SetEnableUpperBodyAnim" }, // 2956216275
		{ &Z_Construct_UFunction_UELSSAnimInstance_SetUpperBodyAnimState, "SetUpperBodyAnimState" }, // 1369902529
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ELSSAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_disableNotifyMontages_Inner = { "disableNotifyMontages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_disableNotifyMontages_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimInstance" },
		{ "ModuleRelativePath", "Public/ELSSAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_disableNotifyMontages = { "disableNotifyMontages", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimInstance, disableNotifyMontages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_disableNotifyMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_disableNotifyMontages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_IdleAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimInstance" },
		{ "ModuleRelativePath", "Public/ELSSAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_IdleAnimation = { "IdleAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimInstance, IdleAnimation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_IdleAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_IdleAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimEnable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimInstance" },
		{ "ModuleRelativePath", "Public/ELSSAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimEnable_SetBit(void* Obj)
	{
		((UELSSAnimInstance*)Obj)->UpperBodyAnimEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimEnable = { "UpperBodyAnimEnable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSAnimInstance), &Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimEnable_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimInstance" },
		{ "ModuleRelativePath", "Public/ELSSAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimState = { "UpperBodyAnimState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimInstance, UpperBodyAnimState), Z_Construct_UEnum_ABP_200508_ESSUpperBodyAnimState, METADATA_PARAMS(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimInstance" },
		{ "ModuleRelativePath", "Public/ELSSAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimAlpha = { "UpperBodyAnimAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimInstance, UpperBodyAnimAlpha), METADATA_PARAMS(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimAlphaBlendTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimInstance" },
		{ "ModuleRelativePath", "Public/ELSSAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimAlphaBlendTime = { "UpperBodyAnimAlphaBlendTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimInstance, UpperBodyAnimAlphaBlendTime), METADATA_PARAMS(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimAlphaBlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimAlphaBlendTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_bActiveUpperBodyAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimInstance" },
		{ "ModuleRelativePath", "Public/ELSSAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_bActiveUpperBodyAnim_SetBit(void* Obj)
	{
		((UELSSAnimInstance*)Obj)->bActiveUpperBodyAnim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_bActiveUpperBodyAnim = { "bActiveUpperBodyAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSAnimInstance), &Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_bActiveUpperBodyAnim_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_bActiveUpperBodyAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_bActiveUpperBodyAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_AimOffsetAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimInstance" },
		{ "ModuleRelativePath", "Public/ELSSAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_AimOffsetAlpha = { "AimOffsetAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimInstance, AimOffsetAlpha), METADATA_PARAMS(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_AimOffsetAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_AimOffsetAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_GunAimOffsetYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimInstance" },
		{ "ModuleRelativePath", "Public/ELSSAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_GunAimOffsetYaw = { "GunAimOffsetYaw", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimInstance, GunAimOffsetYaw), METADATA_PARAMS(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_GunAimOffsetYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_GunAimOffsetYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_GunAimOffsetPitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimInstance" },
		{ "ModuleRelativePath", "Public/ELSSAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_GunAimOffsetPitch = { "GunAimOffsetPitch", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSAnimInstance, GunAimOffsetPitch), METADATA_PARAMS(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_GunAimOffsetPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_GunAimOffsetPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_bShouldSkipUpdateSubAnimInst_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimInstance" },
		{ "ModuleRelativePath", "Public/ELSSAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_bShouldSkipUpdateSubAnimInst_SetBit(void* Obj)
	{
		((UELSSAnimInstance*)Obj)->bShouldSkipUpdateSubAnimInst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_bShouldSkipUpdateSubAnimInst = { "bShouldSkipUpdateSubAnimInst", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSAnimInstance), &Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_bShouldSkipUpdateSubAnimInst_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_bShouldSkipUpdateSubAnimInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_bShouldSkipUpdateSubAnimInst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_bShouldSkipUpdateFacialAnimInst_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSAnimInstance" },
		{ "ModuleRelativePath", "Public/ELSSAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_bShouldSkipUpdateFacialAnimInst_SetBit(void* Obj)
	{
		((UELSSAnimInstance*)Obj)->bShouldSkipUpdateFacialAnimInst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_bShouldSkipUpdateFacialAnimInst = { "bShouldSkipUpdateFacialAnimInst", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSAnimInstance), &Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_bShouldSkipUpdateFacialAnimInst_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_bShouldSkipUpdateFacialAnimInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_bShouldSkipUpdateFacialAnimInst_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_disableNotifyMontages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_disableNotifyMontages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_IdleAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_UpperBodyAnimAlphaBlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_bActiveUpperBodyAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_AimOffsetAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_GunAimOffsetYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_GunAimOffsetPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_bShouldSkipUpdateSubAnimInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSAnimInstance_Statics::NewProp_bShouldSkipUpdateFacialAnimInst,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSAnimInstance_Statics::ClassParams = {
		&UELSSAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSAnimInstance, 3009557486);
	template<> ABP_200508_API UClass* StaticClass<UELSSAnimInstance>()
	{
		return UELSSAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSAnimInstance(Z_Construct_UClass_UELSSAnimInstance, &UELSSAnimInstance::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
