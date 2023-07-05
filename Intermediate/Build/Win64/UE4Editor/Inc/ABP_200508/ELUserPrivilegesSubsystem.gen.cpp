// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELUserPrivilegesSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELUserPrivilegesSubsystem() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELUserPrivilegesSubsystem_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELUserPrivilegesSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELUserPrivilegesSubsystem::execIsCanCommunicateOutsideXBoxUser)
	{
		P_GET_OBJECT(APlayerController,Z_Param__playerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCanCommunicateOutsideXBoxUser(Z_Param__playerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserPrivilegesSubsystem::execIsCanCommunicateXBoxUser)
	{
		P_GET_OBJECT(APlayerController,Z_Param__playerController);
		P_GET_UBOOL(Z_Param__showPrivilegeUI);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCanCommunicateXBoxUser(Z_Param__playerController,Z_Param__showPrivilegeUI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserPrivilegesSubsystem::execIsCanCrossPlay)
	{
		P_GET_OBJECT(APlayerController,Z_Param__playerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCanCrossPlay(Z_Param__playerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserPrivilegesSubsystem::execIsCanPlayOnline)
	{
		P_GET_OBJECT(APlayerController,Z_Param__playerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCanPlayOnline(Z_Param__playerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUserPrivilegesSubsystem::execIsCanUseUserGeneratedContent)
	{
		P_GET_OBJECT(APlayerController,Z_Param__playerController);
		P_GET_UBOOL(Z_Param__showPrivilegeUI);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCanUseUserGeneratedContent(Z_Param__playerController,Z_Param__showPrivilegeUI);
		P_NATIVE_END;
	}
	void UELUserPrivilegesSubsystem::StaticRegisterNativesUELUserPrivilegesSubsystem()
	{
		UClass* Class = UELUserPrivilegesSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsCanCommunicateOutsideXBoxUser", &UELUserPrivilegesSubsystem::execIsCanCommunicateOutsideXBoxUser },
			{ "IsCanCommunicateXBoxUser", &UELUserPrivilegesSubsystem::execIsCanCommunicateXBoxUser },
			{ "IsCanCrossPlay", &UELUserPrivilegesSubsystem::execIsCanCrossPlay },
			{ "IsCanPlayOnline", &UELUserPrivilegesSubsystem::execIsCanPlayOnline },
			{ "IsCanUseUserGeneratedContent", &UELUserPrivilegesSubsystem::execIsCanUseUserGeneratedContent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateOutsideXBoxUser_Statics
	{
		struct ELUserPrivilegesSubsystem_eventIsCanCommunicateOutsideXBoxUser_Parms
		{
			APlayerController* _playerController;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateOutsideXBoxUser_Statics::NewProp__playerController = { "_playerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserPrivilegesSubsystem_eventIsCanCommunicateOutsideXBoxUser_Parms, _playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateOutsideXBoxUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELUserPrivilegesSubsystem_eventIsCanCommunicateOutsideXBoxUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateOutsideXBoxUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELUserPrivilegesSubsystem_eventIsCanCommunicateOutsideXBoxUser_Parms), &Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateOutsideXBoxUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateOutsideXBoxUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateOutsideXBoxUser_Statics::NewProp__playerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateOutsideXBoxUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateOutsideXBoxUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserPrivilegesSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateOutsideXBoxUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserPrivilegesSubsystem, nullptr, "IsCanCommunicateOutsideXBoxUser", nullptr, nullptr, sizeof(ELUserPrivilegesSubsystem_eventIsCanCommunicateOutsideXBoxUser_Parms), Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateOutsideXBoxUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateOutsideXBoxUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateOutsideXBoxUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateOutsideXBoxUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateOutsideXBoxUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateOutsideXBoxUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser_Statics
	{
		struct ELUserPrivilegesSubsystem_eventIsCanCommunicateXBoxUser_Parms
		{
			APlayerController* _playerController;
			bool _showPrivilegeUI;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__showPrivilegeUI_MetaData[];
#endif
		static void NewProp__showPrivilegeUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__showPrivilegeUI;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser_Statics::NewProp__playerController = { "_playerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserPrivilegesSubsystem_eventIsCanCommunicateXBoxUser_Parms, _playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser_Statics::NewProp__showPrivilegeUI_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser_Statics::NewProp__showPrivilegeUI_SetBit(void* Obj)
	{
		((ELUserPrivilegesSubsystem_eventIsCanCommunicateXBoxUser_Parms*)Obj)->_showPrivilegeUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser_Statics::NewProp__showPrivilegeUI = { "_showPrivilegeUI", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELUserPrivilegesSubsystem_eventIsCanCommunicateXBoxUser_Parms), &Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser_Statics::NewProp__showPrivilegeUI_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser_Statics::NewProp__showPrivilegeUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser_Statics::NewProp__showPrivilegeUI_MetaData)) };
	void Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELUserPrivilegesSubsystem_eventIsCanCommunicateXBoxUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELUserPrivilegesSubsystem_eventIsCanCommunicateXBoxUser_Parms), &Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser_Statics::NewProp__playerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser_Statics::NewProp__showPrivilegeUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserPrivilegesSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserPrivilegesSubsystem, nullptr, "IsCanCommunicateXBoxUser", nullptr, nullptr, sizeof(ELUserPrivilegesSubsystem_eventIsCanCommunicateXBoxUser_Parms), Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCrossPlay_Statics
	{
		struct ELUserPrivilegesSubsystem_eventIsCanCrossPlay_Parms
		{
			APlayerController* _playerController;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCrossPlay_Statics::NewProp__playerController = { "_playerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserPrivilegesSubsystem_eventIsCanCrossPlay_Parms, _playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCrossPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELUserPrivilegesSubsystem_eventIsCanCrossPlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCrossPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELUserPrivilegesSubsystem_eventIsCanCrossPlay_Parms), &Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCrossPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCrossPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCrossPlay_Statics::NewProp__playerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCrossPlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCrossPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserPrivilegesSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCrossPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserPrivilegesSubsystem, nullptr, "IsCanCrossPlay", nullptr, nullptr, sizeof(ELUserPrivilegesSubsystem_eventIsCanCrossPlay_Parms), Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCrossPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCrossPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCrossPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCrossPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCrossPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCrossPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanPlayOnline_Statics
	{
		struct ELUserPrivilegesSubsystem_eventIsCanPlayOnline_Parms
		{
			APlayerController* _playerController;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanPlayOnline_Statics::NewProp__playerController = { "_playerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserPrivilegesSubsystem_eventIsCanPlayOnline_Parms, _playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanPlayOnline_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELUserPrivilegesSubsystem_eventIsCanPlayOnline_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanPlayOnline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELUserPrivilegesSubsystem_eventIsCanPlayOnline_Parms), &Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanPlayOnline_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanPlayOnline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanPlayOnline_Statics::NewProp__playerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanPlayOnline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanPlayOnline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserPrivilegesSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanPlayOnline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserPrivilegesSubsystem, nullptr, "IsCanPlayOnline", nullptr, nullptr, sizeof(ELUserPrivilegesSubsystem_eventIsCanPlayOnline_Parms), Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanPlayOnline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanPlayOnline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanPlayOnline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanPlayOnline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanPlayOnline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanPlayOnline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent_Statics
	{
		struct ELUserPrivilegesSubsystem_eventIsCanUseUserGeneratedContent_Parms
		{
			APlayerController* _playerController;
			bool _showPrivilegeUI;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__showPrivilegeUI_MetaData[];
#endif
		static void NewProp__showPrivilegeUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__showPrivilegeUI;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent_Statics::NewProp__playerController = { "_playerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserPrivilegesSubsystem_eventIsCanUseUserGeneratedContent_Parms, _playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent_Statics::NewProp__showPrivilegeUI_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent_Statics::NewProp__showPrivilegeUI_SetBit(void* Obj)
	{
		((ELUserPrivilegesSubsystem_eventIsCanUseUserGeneratedContent_Parms*)Obj)->_showPrivilegeUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent_Statics::NewProp__showPrivilegeUI = { "_showPrivilegeUI", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELUserPrivilegesSubsystem_eventIsCanUseUserGeneratedContent_Parms), &Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent_Statics::NewProp__showPrivilegeUI_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent_Statics::NewProp__showPrivilegeUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent_Statics::NewProp__showPrivilegeUI_MetaData)) };
	void Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELUserPrivilegesSubsystem_eventIsCanUseUserGeneratedContent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELUserPrivilegesSubsystem_eventIsCanUseUserGeneratedContent_Parms), &Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent_Statics::NewProp__playerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent_Statics::NewProp__showPrivilegeUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserPrivilegesSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserPrivilegesSubsystem, nullptr, "IsCanUseUserGeneratedContent", nullptr, nullptr, sizeof(ELUserPrivilegesSubsystem_eventIsCanUseUserGeneratedContent_Parms), Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELUserPrivilegesSubsystem_NoRegister()
	{
		return UELUserPrivilegesSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UELUserPrivilegesSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELUserPrivilegesSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELUserPrivilegesSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateOutsideXBoxUser, "IsCanCommunicateOutsideXBoxUser" }, // 3785453767
		{ &Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCommunicateXBoxUser, "IsCanCommunicateXBoxUser" }, // 3829591095
		{ &Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanCrossPlay, "IsCanCrossPlay" }, // 1976644471
		{ &Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanPlayOnline, "IsCanPlayOnline" }, // 4193822561
		{ &Z_Construct_UFunction_UELUserPrivilegesSubsystem_IsCanUseUserGeneratedContent, "IsCanUseUserGeneratedContent" }, // 1564621403
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELUserPrivilegesSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELUserPrivilegesSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELUserPrivilegesSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELUserPrivilegesSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELUserPrivilegesSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELUserPrivilegesSubsystem_Statics::ClassParams = {
		&UELUserPrivilegesSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELUserPrivilegesSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELUserPrivilegesSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELUserPrivilegesSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELUserPrivilegesSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELUserPrivilegesSubsystem, 2957505919);
	template<> ABP_200508_API UClass* StaticClass<UELUserPrivilegesSubsystem>()
	{
		return UELUserPrivilegesSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELUserPrivilegesSubsystem(Z_Construct_UClass_UELUserPrivilegesSubsystem, &UELUserPrivilegesSubsystem::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELUserPrivilegesSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELUserPrivilegesSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
