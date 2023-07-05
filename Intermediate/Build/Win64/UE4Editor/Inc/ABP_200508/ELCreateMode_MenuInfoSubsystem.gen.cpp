// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCreateMode_MenuInfoSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCreateMode_MenuInfoSubsystem() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCreateMode_MenuInfoSubsystem_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCreateMode_MenuInfoSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGender();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELMainMenuAction();
// End Cross Module References
	DEFINE_FUNCTION(UELCreateMode_MenuInfoSubsystem::execGetGender)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGender*)Z_Param__Result=P_THIS->GetGender();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCreateMode_MenuInfoSubsystem::execGetMainMenuAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EELMainMenuAction*)Z_Param__Result=P_THIS->GetMainMenuAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCreateMode_MenuInfoSubsystem::execIsMaleData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMaleData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCreateMode_MenuInfoSubsystem::execIsNewData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNewData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCreateMode_MenuInfoSubsystem::execSetGender)
	{
		P_GET_ENUM(EGender,Z_Param__Gender);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGender(EGender(Z_Param__Gender));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCreateMode_MenuInfoSubsystem::execSetMainMenuAction)
	{
		P_GET_ENUM(EELMainMenuAction,Z_Param__MainMenuAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMainMenuAction(EELMainMenuAction(Z_Param__MainMenuAction));
		P_NATIVE_END;
	}
	void UELCreateMode_MenuInfoSubsystem::StaticRegisterNativesUELCreateMode_MenuInfoSubsystem()
	{
		UClass* Class = UELCreateMode_MenuInfoSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGender", &UELCreateMode_MenuInfoSubsystem::execGetGender },
			{ "GetMainMenuAction", &UELCreateMode_MenuInfoSubsystem::execGetMainMenuAction },
			{ "IsMaleData", &UELCreateMode_MenuInfoSubsystem::execIsMaleData },
			{ "IsNewData", &UELCreateMode_MenuInfoSubsystem::execIsNewData },
			{ "SetGender", &UELCreateMode_MenuInfoSubsystem::execSetGender },
			{ "SetMainMenuAction", &UELCreateMode_MenuInfoSubsystem::execSetMainMenuAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetGender_Statics
	{
		struct ELCreateMode_MenuInfoSubsystem_eventGetGender_Parms
		{
			EGender ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetGender_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetGender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCreateMode_MenuInfoSubsystem_eventGetGender_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetGender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetGender_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetGender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetGender_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCreateMode_MenuInfoSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCreateMode_MenuInfoSubsystem, nullptr, "GetGender", nullptr, nullptr, sizeof(ELCreateMode_MenuInfoSubsystem_eventGetGender_Parms), Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetGender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetGender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetGender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetGender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetGender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetGender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetMainMenuAction_Statics
	{
		struct ELCreateMode_MenuInfoSubsystem_eventGetMainMenuAction_Parms
		{
			EELMainMenuAction ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetMainMenuAction_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetMainMenuAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCreateMode_MenuInfoSubsystem_eventGetMainMenuAction_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EELMainMenuAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetMainMenuAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetMainMenuAction_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetMainMenuAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetMainMenuAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCreateMode_MenuInfoSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetMainMenuAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCreateMode_MenuInfoSubsystem, nullptr, "GetMainMenuAction", nullptr, nullptr, sizeof(ELCreateMode_MenuInfoSubsystem_eventGetMainMenuAction_Parms), Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetMainMenuAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetMainMenuAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetMainMenuAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetMainMenuAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetMainMenuAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetMainMenuAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsMaleData_Statics
	{
		struct ELCreateMode_MenuInfoSubsystem_eventIsMaleData_Parms
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
	void Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsMaleData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCreateMode_MenuInfoSubsystem_eventIsMaleData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsMaleData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCreateMode_MenuInfoSubsystem_eventIsMaleData_Parms), &Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsMaleData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsMaleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsMaleData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsMaleData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCreateMode_MenuInfoSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsMaleData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCreateMode_MenuInfoSubsystem, nullptr, "IsMaleData", nullptr, nullptr, sizeof(ELCreateMode_MenuInfoSubsystem_eventIsMaleData_Parms), Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsMaleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsMaleData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsMaleData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsMaleData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsMaleData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsMaleData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsNewData_Statics
	{
		struct ELCreateMode_MenuInfoSubsystem_eventIsNewData_Parms
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
	void Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsNewData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCreateMode_MenuInfoSubsystem_eventIsNewData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsNewData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCreateMode_MenuInfoSubsystem_eventIsNewData_Parms), &Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsNewData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsNewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsNewData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsNewData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCreateMode_MenuInfoSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsNewData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCreateMode_MenuInfoSubsystem, nullptr, "IsNewData", nullptr, nullptr, sizeof(ELCreateMode_MenuInfoSubsystem_eventIsNewData_Parms), Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsNewData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsNewData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsNewData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsNewData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsNewData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsNewData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetGender_Statics
	{
		struct ELCreateMode_MenuInfoSubsystem_eventSetGender_Parms
		{
			EGender _Gender;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Gender_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Gender;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetGender_Statics::NewProp__Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetGender_Statics::NewProp__Gender = { "_Gender", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCreateMode_MenuInfoSubsystem_eventSetGender_Parms, _Gender), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetGender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetGender_Statics::NewProp__Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetGender_Statics::NewProp__Gender,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetGender_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCreateMode_MenuInfoSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCreateMode_MenuInfoSubsystem, nullptr, "SetGender", nullptr, nullptr, sizeof(ELCreateMode_MenuInfoSubsystem_eventSetGender_Parms), Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetGender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetGender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetGender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetGender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetGender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetGender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetMainMenuAction_Statics
	{
		struct ELCreateMode_MenuInfoSubsystem_eventSetMainMenuAction_Parms
		{
			EELMainMenuAction _MainMenuAction;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__MainMenuAction_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__MainMenuAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetMainMenuAction_Statics::NewProp__MainMenuAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetMainMenuAction_Statics::NewProp__MainMenuAction = { "_MainMenuAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCreateMode_MenuInfoSubsystem_eventSetMainMenuAction_Parms, _MainMenuAction), Z_Construct_UEnum_ABP_200508_EELMainMenuAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetMainMenuAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetMainMenuAction_Statics::NewProp__MainMenuAction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetMainMenuAction_Statics::NewProp__MainMenuAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetMainMenuAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCreateMode_MenuInfoSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetMainMenuAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCreateMode_MenuInfoSubsystem, nullptr, "SetMainMenuAction", nullptr, nullptr, sizeof(ELCreateMode_MenuInfoSubsystem_eventSetMainMenuAction_Parms), Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetMainMenuAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetMainMenuAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetMainMenuAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetMainMenuAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetMainMenuAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetMainMenuAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCreateMode_MenuInfoSubsystem_NoRegister()
	{
		return UELCreateMode_MenuInfoSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UELCreateMode_MenuInfoSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCreateMode_MenuInfoSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCreateMode_MenuInfoSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetGender, "GetGender" }, // 2519262414
		{ &Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_GetMainMenuAction, "GetMainMenuAction" }, // 2627593081
		{ &Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsMaleData, "IsMaleData" }, // 3035822871
		{ &Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_IsNewData, "IsNewData" }, // 2408513487
		{ &Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetGender, "SetGender" }, // 3035217733
		{ &Z_Construct_UFunction_UELCreateMode_MenuInfoSubsystem_SetMainMenuAction, "SetMainMenuAction" }, // 2784772487
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCreateMode_MenuInfoSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCreateMode_MenuInfoSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCreateMode_MenuInfoSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCreateMode_MenuInfoSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCreateMode_MenuInfoSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCreateMode_MenuInfoSubsystem_Statics::ClassParams = {
		&UELCreateMode_MenuInfoSubsystem::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCreateMode_MenuInfoSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCreateMode_MenuInfoSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCreateMode_MenuInfoSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCreateMode_MenuInfoSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCreateMode_MenuInfoSubsystem, 3091801166);
	template<> ABP_200508_API UClass* StaticClass<UELCreateMode_MenuInfoSubsystem>()
	{
		return UELCreateMode_MenuInfoSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCreateMode_MenuInfoSubsystem(Z_Construct_UClass_UELCreateMode_MenuInfoSubsystem, &UELCreateMode_MenuInfoSubsystem::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCreateMode_MenuInfoSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCreateMode_MenuInfoSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
