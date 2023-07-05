// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSOnlineTestAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSOnlineTestAnimInstance() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSOnlineTestAnimInstance_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSOnlineTestAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSOnlineTestAnimInstance::execGetActorSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetActorSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineTestAnimInstance::execGetActorVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetActorVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineTestAnimInstance::execGetDirectionSlotAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDirectionSlotAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineTestAnimInstance::execIsEnableDirectionSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableDirectionSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineTestAnimInstance::execSetEnableDirectionSlot)
	{
		P_GET_UBOOL(Z_Param_inEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableDirectionSlot(Z_Param_inEnable);
		P_NATIVE_END;
	}
	void UELSSOnlineTestAnimInstance::StaticRegisterNativesUELSSOnlineTestAnimInstance()
	{
		UClass* Class = UELSSOnlineTestAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorSpeed", &UELSSOnlineTestAnimInstance::execGetActorSpeed },
			{ "GetActorVelocity", &UELSSOnlineTestAnimInstance::execGetActorVelocity },
			{ "GetDirectionSlotAngle", &UELSSOnlineTestAnimInstance::execGetDirectionSlotAngle },
			{ "IsEnableDirectionSlot", &UELSSOnlineTestAnimInstance::execIsEnableDirectionSlot },
			{ "SetEnableDirectionSlot", &UELSSOnlineTestAnimInstance::execSetEnableDirectionSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorSpeed_Statics
	{
		struct ELSSOnlineTestAnimInstance_eventGetActorSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestAnimInstance_eventGetActorSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineTestAnimInstance, nullptr, "GetActorSpeed", nullptr, nullptr, sizeof(ELSSOnlineTestAnimInstance_eventGetActorSpeed_Parms), Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorVelocity_Statics
	{
		struct ELSSOnlineTestAnimInstance_eventGetActorVelocity_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestAnimInstance_eventGetActorVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineTestAnimInstance, nullptr, "GetActorVelocity", nullptr, nullptr, sizeof(ELSSOnlineTestAnimInstance_eventGetActorVelocity_Parms), Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetDirectionSlotAngle_Statics
	{
		struct ELSSOnlineTestAnimInstance_eventGetDirectionSlotAngle_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetDirectionSlotAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestAnimInstance_eventGetDirectionSlotAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetDirectionSlotAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetDirectionSlotAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetDirectionSlotAngle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetDirectionSlotAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineTestAnimInstance, nullptr, "GetDirectionSlotAngle", nullptr, nullptr, sizeof(ELSSOnlineTestAnimInstance_eventGetDirectionSlotAngle_Parms), Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetDirectionSlotAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetDirectionSlotAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetDirectionSlotAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetDirectionSlotAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetDirectionSlotAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetDirectionSlotAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineTestAnimInstance_IsEnableDirectionSlot_Statics
	{
		struct ELSSOnlineTestAnimInstance_eventIsEnableDirectionSlot_Parms
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
	void Z_Construct_UFunction_UELSSOnlineTestAnimInstance_IsEnableDirectionSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSOnlineTestAnimInstance_eventIsEnableDirectionSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSOnlineTestAnimInstance_IsEnableDirectionSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOnlineTestAnimInstance_eventIsEnableDirectionSlot_Parms), &Z_Construct_UFunction_UELSSOnlineTestAnimInstance_IsEnableDirectionSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineTestAnimInstance_IsEnableDirectionSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineTestAnimInstance_IsEnableDirectionSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineTestAnimInstance_IsEnableDirectionSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineTestAnimInstance_IsEnableDirectionSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineTestAnimInstance, nullptr, "IsEnableDirectionSlot", nullptr, nullptr, sizeof(ELSSOnlineTestAnimInstance_eventIsEnableDirectionSlot_Parms), Z_Construct_UFunction_UELSSOnlineTestAnimInstance_IsEnableDirectionSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineTestAnimInstance_IsEnableDirectionSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineTestAnimInstance_IsEnableDirectionSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineTestAnimInstance_IsEnableDirectionSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineTestAnimInstance_IsEnableDirectionSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineTestAnimInstance_IsEnableDirectionSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineTestAnimInstance_SetEnableDirectionSlot_Statics
	{
		struct ELSSOnlineTestAnimInstance_eventSetEnableDirectionSlot_Parms
		{
			bool inEnable;
		};
		static void NewProp_inEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSOnlineTestAnimInstance_SetEnableDirectionSlot_Statics::NewProp_inEnable_SetBit(void* Obj)
	{
		((ELSSOnlineTestAnimInstance_eventSetEnableDirectionSlot_Parms*)Obj)->inEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSOnlineTestAnimInstance_SetEnableDirectionSlot_Statics::NewProp_inEnable = { "inEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOnlineTestAnimInstance_eventSetEnableDirectionSlot_Parms), &Z_Construct_UFunction_UELSSOnlineTestAnimInstance_SetEnableDirectionSlot_Statics::NewProp_inEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineTestAnimInstance_SetEnableDirectionSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineTestAnimInstance_SetEnableDirectionSlot_Statics::NewProp_inEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineTestAnimInstance_SetEnableDirectionSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineTestAnimInstance_SetEnableDirectionSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineTestAnimInstance, nullptr, "SetEnableDirectionSlot", nullptr, nullptr, sizeof(ELSSOnlineTestAnimInstance_eventSetEnableDirectionSlot_Parms), Z_Construct_UFunction_UELSSOnlineTestAnimInstance_SetEnableDirectionSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineTestAnimInstance_SetEnableDirectionSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineTestAnimInstance_SetEnableDirectionSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineTestAnimInstance_SetEnableDirectionSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineTestAnimInstance_SetEnableDirectionSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineTestAnimInstance_SetEnableDirectionSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSOnlineTestAnimInstance_NoRegister()
	{
		return UELSSOnlineTestAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enableDirectionSlot_MetaData[];
#endif
		static void NewProp_enableDirectionSlot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enableDirectionSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_directionSlotAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_directionSlotAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_actorVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_actorSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorSpeed, "GetActorSpeed" }, // 2283837152
		{ &Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetActorVelocity, "GetActorVelocity" }, // 2687326423
		{ &Z_Construct_UFunction_UELSSOnlineTestAnimInstance_GetDirectionSlotAngle, "GetDirectionSlotAngle" }, // 3433531018
		{ &Z_Construct_UFunction_UELSSOnlineTestAnimInstance_IsEnableDirectionSlot, "IsEnableDirectionSlot" }, // 281930039
		{ &Z_Construct_UFunction_UELSSOnlineTestAnimInstance_SetEnableDirectionSlot, "SetEnableDirectionSlot" }, // 3883722602
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ELSSOnlineTestAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_enableDirectionSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineTestAnimInstance" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_enableDirectionSlot_SetBit(void* Obj)
	{
		((UELSSOnlineTestAnimInstance*)Obj)->enableDirectionSlot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_enableDirectionSlot = { "enableDirectionSlot", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSOnlineTestAnimInstance), &Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_enableDirectionSlot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_enableDirectionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_enableDirectionSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_directionSlotAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineTestAnimInstance" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_directionSlotAngle = { "directionSlotAngle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSOnlineTestAnimInstance, directionSlotAngle), METADATA_PARAMS(Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_directionSlotAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_directionSlotAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_OwningActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineTestAnimInstance" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSOnlineTestAnimInstance, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_OwningActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_OwningActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_actorVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineTestAnimInstance" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_actorVelocity = { "actorVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSOnlineTestAnimInstance, actorVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_actorVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_actorVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_actorSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineTestAnimInstance" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_actorSpeed = { "actorSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSOnlineTestAnimInstance, actorSpeed), METADATA_PARAMS(Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_actorSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_actorSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_enableDirectionSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_directionSlotAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_OwningActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_actorVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::NewProp_actorSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSOnlineTestAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::ClassParams = {
		&UELSSOnlineTestAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSOnlineTestAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSOnlineTestAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSOnlineTestAnimInstance, 685394287);
	template<> ABP_200508_API UClass* StaticClass<UELSSOnlineTestAnimInstance>()
	{
		return UELSSOnlineTestAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSOnlineTestAnimInstance(Z_Construct_UClass_UELSSOnlineTestAnimInstance, &UELSSOnlineTestAnimInstance::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSOnlineTestAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSOnlineTestAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
