// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELGameplayUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELGameplayUtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELGameplayUtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELGameplayUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELGameplayUtilityFunction::execGetGameplayDataTable_PlayerColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UELGameplayUtilityFunction::GetGameplayDataTable_PlayerColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameplayUtilityFunction::execGetGameplayDataTable_Weapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UELGameplayUtilityFunction::GetGameplayDataTable_Weapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameplayUtilityFunction::execGetMovesDataTable_Pin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UELGameplayUtilityFunction::GetMovesDataTable_Pin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameplayUtilityFunction::execGetMovesDataTable_StartOfMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UELGameplayUtilityFunction::GetMovesDataTable_StartOfMatch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameplayUtilityFunction::execGetMovesDataTable_Submission)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UELGameplayUtilityFunction::GetMovesDataTable_Submission();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameplayUtilityFunction::execGetMovesDataTable_System)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UELGameplayUtilityFunction::GetMovesDataTable_System();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameplayUtilityFunction::execGetMovesDataTable_SystemManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UELGameplayUtilityFunction::GetMovesDataTable_SystemManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameplayUtilityFunction::execGetMovesDataTable_SystemReferee)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=UELGameplayUtilityFunction::GetMovesDataTable_SystemReferee();
		P_NATIVE_END;
	}
	void UELGameplayUtilityFunction::StaticRegisterNativesUELGameplayUtilityFunction()
	{
		UClass* Class = UELGameplayUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameplayDataTable_PlayerColor", &UELGameplayUtilityFunction::execGetGameplayDataTable_PlayerColor },
			{ "GetGameplayDataTable_Weapon", &UELGameplayUtilityFunction::execGetGameplayDataTable_Weapon },
			{ "GetMovesDataTable_Pin", &UELGameplayUtilityFunction::execGetMovesDataTable_Pin },
			{ "GetMovesDataTable_StartOfMatch", &UELGameplayUtilityFunction::execGetMovesDataTable_StartOfMatch },
			{ "GetMovesDataTable_Submission", &UELGameplayUtilityFunction::execGetMovesDataTable_Submission },
			{ "GetMovesDataTable_System", &UELGameplayUtilityFunction::execGetMovesDataTable_System },
			{ "GetMovesDataTable_SystemManager", &UELGameplayUtilityFunction::execGetMovesDataTable_SystemManager },
			{ "GetMovesDataTable_SystemReferee", &UELGameplayUtilityFunction::execGetMovesDataTable_SystemReferee },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_PlayerColor_Statics
	{
		struct ELGameplayUtilityFunction_eventGetGameplayDataTable_PlayerColor_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_PlayerColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayUtilityFunction_eventGetGameplayDataTable_PlayerColor_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_PlayerColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_PlayerColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_PlayerColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameplayUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_PlayerColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameplayUtilityFunction, nullptr, "GetGameplayDataTable_PlayerColor", nullptr, nullptr, sizeof(ELGameplayUtilityFunction_eventGetGameplayDataTable_PlayerColor_Parms), Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_PlayerColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_PlayerColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_PlayerColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_PlayerColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_PlayerColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_PlayerColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_Weapon_Statics
	{
		struct ELGameplayUtilityFunction_eventGetGameplayDataTable_Weapon_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_Weapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayUtilityFunction_eventGetGameplayDataTable_Weapon_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_Weapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_Weapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_Weapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameplayUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_Weapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameplayUtilityFunction, nullptr, "GetGameplayDataTable_Weapon", nullptr, nullptr, sizeof(ELGameplayUtilityFunction_eventGetGameplayDataTable_Weapon_Parms), Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_Weapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_Weapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_Weapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_Weapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_Weapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_Weapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Pin_Statics
	{
		struct ELGameplayUtilityFunction_eventGetMovesDataTable_Pin_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Pin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayUtilityFunction_eventGetMovesDataTable_Pin_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Pin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Pin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Pin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameplayUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Pin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameplayUtilityFunction, nullptr, "GetMovesDataTable_Pin", nullptr, nullptr, sizeof(ELGameplayUtilityFunction_eventGetMovesDataTable_Pin_Parms), Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Pin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Pin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Pin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Pin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Pin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Pin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_StartOfMatch_Statics
	{
		struct ELGameplayUtilityFunction_eventGetMovesDataTable_StartOfMatch_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_StartOfMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayUtilityFunction_eventGetMovesDataTable_StartOfMatch_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_StartOfMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_StartOfMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_StartOfMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameplayUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_StartOfMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameplayUtilityFunction, nullptr, "GetMovesDataTable_StartOfMatch", nullptr, nullptr, sizeof(ELGameplayUtilityFunction_eventGetMovesDataTable_StartOfMatch_Parms), Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_StartOfMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_StartOfMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_StartOfMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_StartOfMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_StartOfMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_StartOfMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Submission_Statics
	{
		struct ELGameplayUtilityFunction_eventGetMovesDataTable_Submission_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Submission_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayUtilityFunction_eventGetMovesDataTable_Submission_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Submission_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Submission_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Submission_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameplayUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Submission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameplayUtilityFunction, nullptr, "GetMovesDataTable_Submission", nullptr, nullptr, sizeof(ELGameplayUtilityFunction_eventGetMovesDataTable_Submission_Parms), Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Submission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Submission_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Submission_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Submission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Submission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Submission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_System_Statics
	{
		struct ELGameplayUtilityFunction_eventGetMovesDataTable_System_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_System_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayUtilityFunction_eventGetMovesDataTable_System_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_System_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_System_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_System_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameplayUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_System_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameplayUtilityFunction, nullptr, "GetMovesDataTable_System", nullptr, nullptr, sizeof(ELGameplayUtilityFunction_eventGetMovesDataTable_System_Parms), Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_System_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_System_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_System_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_System_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_System()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_System_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemManager_Statics
	{
		struct ELGameplayUtilityFunction_eventGetMovesDataTable_SystemManager_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayUtilityFunction_eventGetMovesDataTable_SystemManager_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameplayUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameplayUtilityFunction, nullptr, "GetMovesDataTable_SystemManager", nullptr, nullptr, sizeof(ELGameplayUtilityFunction_eventGetMovesDataTable_SystemManager_Parms), Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemReferee_Statics
	{
		struct ELGameplayUtilityFunction_eventGetMovesDataTable_SystemReferee_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemReferee_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayUtilityFunction_eventGetMovesDataTable_SystemReferee_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemReferee_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemReferee_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemReferee_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameplayUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemReferee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameplayUtilityFunction, nullptr, "GetMovesDataTable_SystemReferee", nullptr, nullptr, sizeof(ELGameplayUtilityFunction_eventGetMovesDataTable_SystemReferee_Parms), Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemReferee_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemReferee_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemReferee_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemReferee_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemReferee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemReferee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELGameplayUtilityFunction_NoRegister()
	{
		return UELGameplayUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELGameplayUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELGameplayUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELGameplayUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_PlayerColor, "GetGameplayDataTable_PlayerColor" }, // 3320449215
		{ &Z_Construct_UFunction_UELGameplayUtilityFunction_GetGameplayDataTable_Weapon, "GetGameplayDataTable_Weapon" }, // 646542960
		{ &Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Pin, "GetMovesDataTable_Pin" }, // 290064703
		{ &Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_StartOfMatch, "GetMovesDataTable_StartOfMatch" }, // 4131027967
		{ &Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_Submission, "GetMovesDataTable_Submission" }, // 3308267350
		{ &Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_System, "GetMovesDataTable_System" }, // 2789383680
		{ &Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemManager, "GetMovesDataTable_SystemManager" }, // 2942680647
		{ &Z_Construct_UFunction_UELGameplayUtilityFunction_GetMovesDataTable_SystemReferee, "GetMovesDataTable_SystemReferee" }, // 3821634593
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameplayUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELGameplayUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELGameplayUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELGameplayUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELGameplayUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELGameplayUtilityFunction_Statics::ClassParams = {
		&UELGameplayUtilityFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELGameplayUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameplayUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELGameplayUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELGameplayUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELGameplayUtilityFunction, 3861905632);
	template<> ABP_200508_API UClass* StaticClass<UELGameplayUtilityFunction>()
	{
		return UELGameplayUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELGameplayUtilityFunction(Z_Construct_UClass_UELGameplayUtilityFunction, &UELGameplayUtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELGameplayUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELGameplayUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
