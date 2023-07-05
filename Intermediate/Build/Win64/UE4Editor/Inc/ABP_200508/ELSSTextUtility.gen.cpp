// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSTextUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSTextUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSTextUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSTextUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELSSTextUtility::execGetLocalizeText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_stNS);
		P_GET_PROPERTY(FStrProperty,Z_Param_stKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UELSSTextUtility::GetLocalizeText(Z_Param_stNS,Z_Param_stKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSTextUtility::execGetSSAbilityFlavor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inDatabaseId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UELSSTextUtility::GetSSAbilityFlavor(Z_Param_inDatabaseId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSTextUtility::execGetSSAbilityName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inDatabaseId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UELSSTextUtility::GetSSAbilityName(Z_Param_inDatabaseId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSTextUtility::execGetSSHeatSkillFlavor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inDatabaseId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UELSSTextUtility::GetSSHeatSkillFlavor(Z_Param_inDatabaseId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSTextUtility::execGetSSHeatSkillName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inDatabaseId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UELSSTextUtility::GetSSHeatSkillName(Z_Param_inDatabaseId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSTextUtility::execGetSSItemName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inDatabaseId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UELSSTextUtility::GetSSItemName(Z_Param_inDatabaseId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSTextUtility::execGetSSLocalizeText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_stKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UELSSTextUtility::GetSSLocalizeText(Z_Param_stKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSTextUtility::execGetSSMoveName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inDatabaseId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UELSSTextUtility::GetSSMoveName(Z_Param_inDatabaseId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSTextUtility::execGetSSWeaponName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inDatabaseId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UELSSTextUtility::GetSSWeaponName(Z_Param_inDatabaseId);
		P_NATIVE_END;
	}
	void UELSSTextUtility::StaticRegisterNativesUELSSTextUtility()
	{
		UClass* Class = UELSSTextUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLocalizeText", &UELSSTextUtility::execGetLocalizeText },
			{ "GetSSAbilityFlavor", &UELSSTextUtility::execGetSSAbilityFlavor },
			{ "GetSSAbilityName", &UELSSTextUtility::execGetSSAbilityName },
			{ "GetSSHeatSkillFlavor", &UELSSTextUtility::execGetSSHeatSkillFlavor },
			{ "GetSSHeatSkillName", &UELSSTextUtility::execGetSSHeatSkillName },
			{ "GetSSItemName", &UELSSTextUtility::execGetSSItemName },
			{ "GetSSLocalizeText", &UELSSTextUtility::execGetSSLocalizeText },
			{ "GetSSMoveName", &UELSSTextUtility::execGetSSMoveName },
			{ "GetSSWeaponName", &UELSSTextUtility::execGetSSWeaponName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText_Statics
	{
		struct ELSSTextUtility_eventGetLocalizeText_Parms
		{
			FString stNS;
			FString stKey;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stNS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_stNS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_stKey;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText_Statics::NewProp_stNS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText_Statics::NewProp_stNS = { "stNS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTextUtility_eventGetLocalizeText_Parms, stNS), METADATA_PARAMS(Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText_Statics::NewProp_stNS_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText_Statics::NewProp_stNS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText_Statics::NewProp_stKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText_Statics::NewProp_stKey = { "stKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTextUtility_eventGetLocalizeText_Parms, stKey), METADATA_PARAMS(Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText_Statics::NewProp_stKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText_Statics::NewProp_stKey_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTextUtility_eventGetLocalizeText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText_Statics::NewProp_stNS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText_Statics::NewProp_stKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSTextUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSTextUtility, nullptr, "GetLocalizeText", nullptr, nullptr, sizeof(ELSSTextUtility_eventGetLocalizeText_Parms), Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityFlavor_Statics
	{
		struct ELSSTextUtility_eventGetSSAbilityFlavor_Parms
		{
			int32 inDatabaseId;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDatabaseId;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityFlavor_Statics::NewProp_inDatabaseId = { "inDatabaseId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTextUtility_eventGetSSAbilityFlavor_Parms, inDatabaseId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityFlavor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTextUtility_eventGetSSAbilityFlavor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityFlavor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityFlavor_Statics::NewProp_inDatabaseId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityFlavor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityFlavor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSTextUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityFlavor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSTextUtility, nullptr, "GetSSAbilityFlavor", nullptr, nullptr, sizeof(ELSSTextUtility_eventGetSSAbilityFlavor_Parms), Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityFlavor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityFlavor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityFlavor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityFlavor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityFlavor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityFlavor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityName_Statics
	{
		struct ELSSTextUtility_eventGetSSAbilityName_Parms
		{
			int32 inDatabaseId;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDatabaseId;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityName_Statics::NewProp_inDatabaseId = { "inDatabaseId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTextUtility_eventGetSSAbilityName_Parms, inDatabaseId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTextUtility_eventGetSSAbilityName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityName_Statics::NewProp_inDatabaseId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSTextUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSTextUtility, nullptr, "GetSSAbilityName", nullptr, nullptr, sizeof(ELSSTextUtility_eventGetSSAbilityName_Parms), Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillFlavor_Statics
	{
		struct ELSSTextUtility_eventGetSSHeatSkillFlavor_Parms
		{
			int32 inDatabaseId;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDatabaseId;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillFlavor_Statics::NewProp_inDatabaseId = { "inDatabaseId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTextUtility_eventGetSSHeatSkillFlavor_Parms, inDatabaseId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillFlavor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTextUtility_eventGetSSHeatSkillFlavor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillFlavor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillFlavor_Statics::NewProp_inDatabaseId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillFlavor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillFlavor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSTextUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillFlavor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSTextUtility, nullptr, "GetSSHeatSkillFlavor", nullptr, nullptr, sizeof(ELSSTextUtility_eventGetSSHeatSkillFlavor_Parms), Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillFlavor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillFlavor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillFlavor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillFlavor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillFlavor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillFlavor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillName_Statics
	{
		struct ELSSTextUtility_eventGetSSHeatSkillName_Parms
		{
			int32 inDatabaseId;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDatabaseId;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillName_Statics::NewProp_inDatabaseId = { "inDatabaseId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTextUtility_eventGetSSHeatSkillName_Parms, inDatabaseId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTextUtility_eventGetSSHeatSkillName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillName_Statics::NewProp_inDatabaseId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSTextUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSTextUtility, nullptr, "GetSSHeatSkillName", nullptr, nullptr, sizeof(ELSSTextUtility_eventGetSSHeatSkillName_Parms), Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSTextUtility_GetSSItemName_Statics
	{
		struct ELSSTextUtility_eventGetSSItemName_Parms
		{
			int32 inDatabaseId;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDatabaseId;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSTextUtility_GetSSItemName_Statics::NewProp_inDatabaseId = { "inDatabaseId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTextUtility_eventGetSSItemName_Parms, inDatabaseId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELSSTextUtility_GetSSItemName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTextUtility_eventGetSSItemName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSTextUtility_GetSSItemName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTextUtility_GetSSItemName_Statics::NewProp_inDatabaseId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTextUtility_GetSSItemName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTextUtility_GetSSItemName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSTextUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSTextUtility_GetSSItemName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSTextUtility, nullptr, "GetSSItemName", nullptr, nullptr, sizeof(ELSSTextUtility_eventGetSSItemName_Parms), Z_Construct_UFunction_UELSSTextUtility_GetSSItemName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTextUtility_GetSSItemName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSTextUtility_GetSSItemName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTextUtility_GetSSItemName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSTextUtility_GetSSItemName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSTextUtility_GetSSItemName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSTextUtility_GetSSLocalizeText_Statics
	{
		struct ELSSTextUtility_eventGetSSLocalizeText_Parms
		{
			FString stKey;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_stKey;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTextUtility_GetSSLocalizeText_Statics::NewProp_stKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSTextUtility_GetSSLocalizeText_Statics::NewProp_stKey = { "stKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTextUtility_eventGetSSLocalizeText_Parms, stKey), METADATA_PARAMS(Z_Construct_UFunction_UELSSTextUtility_GetSSLocalizeText_Statics::NewProp_stKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTextUtility_GetSSLocalizeText_Statics::NewProp_stKey_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELSSTextUtility_GetSSLocalizeText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTextUtility_eventGetSSLocalizeText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSTextUtility_GetSSLocalizeText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTextUtility_GetSSLocalizeText_Statics::NewProp_stKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTextUtility_GetSSLocalizeText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTextUtility_GetSSLocalizeText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSTextUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSTextUtility_GetSSLocalizeText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSTextUtility, nullptr, "GetSSLocalizeText", nullptr, nullptr, sizeof(ELSSTextUtility_eventGetSSLocalizeText_Parms), Z_Construct_UFunction_UELSSTextUtility_GetSSLocalizeText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTextUtility_GetSSLocalizeText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSTextUtility_GetSSLocalizeText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTextUtility_GetSSLocalizeText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSTextUtility_GetSSLocalizeText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSTextUtility_GetSSLocalizeText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSTextUtility_GetSSMoveName_Statics
	{
		struct ELSSTextUtility_eventGetSSMoveName_Parms
		{
			int32 inDatabaseId;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDatabaseId;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSTextUtility_GetSSMoveName_Statics::NewProp_inDatabaseId = { "inDatabaseId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTextUtility_eventGetSSMoveName_Parms, inDatabaseId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELSSTextUtility_GetSSMoveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTextUtility_eventGetSSMoveName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSTextUtility_GetSSMoveName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTextUtility_GetSSMoveName_Statics::NewProp_inDatabaseId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTextUtility_GetSSMoveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTextUtility_GetSSMoveName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSTextUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSTextUtility_GetSSMoveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSTextUtility, nullptr, "GetSSMoveName", nullptr, nullptr, sizeof(ELSSTextUtility_eventGetSSMoveName_Parms), Z_Construct_UFunction_UELSSTextUtility_GetSSMoveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTextUtility_GetSSMoveName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSTextUtility_GetSSMoveName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTextUtility_GetSSMoveName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSTextUtility_GetSSMoveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSTextUtility_GetSSMoveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSTextUtility_GetSSWeaponName_Statics
	{
		struct ELSSTextUtility_eventGetSSWeaponName_Parms
		{
			int32 inDatabaseId;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDatabaseId;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSTextUtility_GetSSWeaponName_Statics::NewProp_inDatabaseId = { "inDatabaseId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTextUtility_eventGetSSWeaponName_Parms, inDatabaseId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELSSTextUtility_GetSSWeaponName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSTextUtility_eventGetSSWeaponName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSTextUtility_GetSSWeaponName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTextUtility_GetSSWeaponName_Statics::NewProp_inDatabaseId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSTextUtility_GetSSWeaponName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSTextUtility_GetSSWeaponName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSTextUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSTextUtility_GetSSWeaponName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSTextUtility, nullptr, "GetSSWeaponName", nullptr, nullptr, sizeof(ELSSTextUtility_eventGetSSWeaponName_Parms), Z_Construct_UFunction_UELSSTextUtility_GetSSWeaponName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTextUtility_GetSSWeaponName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSTextUtility_GetSSWeaponName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSTextUtility_GetSSWeaponName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSTextUtility_GetSSWeaponName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSTextUtility_GetSSWeaponName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSTextUtility_NoRegister()
	{
		return UELSSTextUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELSSTextUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSTextUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSTextUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSTextUtility_GetLocalizeText, "GetLocalizeText" }, // 2188226851
		{ &Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityFlavor, "GetSSAbilityFlavor" }, // 1372900308
		{ &Z_Construct_UFunction_UELSSTextUtility_GetSSAbilityName, "GetSSAbilityName" }, // 392828840
		{ &Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillFlavor, "GetSSHeatSkillFlavor" }, // 1378045315
		{ &Z_Construct_UFunction_UELSSTextUtility_GetSSHeatSkillName, "GetSSHeatSkillName" }, // 3878688404
		{ &Z_Construct_UFunction_UELSSTextUtility_GetSSItemName, "GetSSItemName" }, // 486386894
		{ &Z_Construct_UFunction_UELSSTextUtility_GetSSLocalizeText, "GetSSLocalizeText" }, // 836854961
		{ &Z_Construct_UFunction_UELSSTextUtility_GetSSMoveName, "GetSSMoveName" }, // 751718049
		{ &Z_Construct_UFunction_UELSSTextUtility_GetSSWeaponName, "GetSSWeaponName" }, // 3428711466
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSTextUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSTextUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSTextUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSTextUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSTextUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSTextUtility_Statics::ClassParams = {
		&UELSSTextUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELSSTextUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSTextUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSTextUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSTextUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSTextUtility, 2195569905);
	template<> ABP_200508_API UClass* StaticClass<UELSSTextUtility>()
	{
		return UELSSTextUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSTextUtility(Z_Construct_UClass_UELSSTextUtility, &UELSSTextUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSTextUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSTextUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
