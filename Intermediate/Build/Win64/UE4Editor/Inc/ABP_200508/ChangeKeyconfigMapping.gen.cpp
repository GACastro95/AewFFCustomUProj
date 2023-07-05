// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ChangeKeyconfigMapping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChangeKeyconfigMapping() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UChangeKeyconfigMapping_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UChangeKeyconfigMapping();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EKeyConfig_KeyType_C();
// End Cross Module References
	DEFINE_FUNCTION(UChangeKeyconfigMapping::execAddActionMapping)
	{
		P_GET_OBJECT(APlayerController,Z_Param__TargetPlayerController);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NowActionName);
		P_GET_STRUCT_REF(FKey,Z_Param_Out_NewKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		UChangeKeyconfigMapping::AddActionMapping(Z_Param__TargetPlayerController,Z_Param_Out_NowActionName,Z_Param_Out_NewKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChangeKeyconfigMapping::execAddAxisMapping)
	{
		P_GET_OBJECT(APlayerController,Z_Param__TargetPlayerController);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NowActionName);
		P_GET_STRUCT_REF(FKey,Z_Param_Out_NewKey);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UChangeKeyconfigMapping::AddAxisMapping(Z_Param__TargetPlayerController,Z_Param_Out_NowActionName,Z_Param_Out_NewKey,Z_Param_NewScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChangeKeyconfigMapping::execGetActionKey)
	{
		P_GET_ENUM(EKeyConfig_KeyType_C,Z_Param__KeyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKey*)Z_Param__Result=UChangeKeyconfigMapping::GetActionKey(EKeyConfig_KeyType_C(Z_Param__KeyType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChangeKeyconfigMapping::execGetKeyType)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out__key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EKeyConfig_KeyType_C*)Z_Param__Result=UChangeKeyconfigMapping::GetKeyType(Z_Param_Out__key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChangeKeyconfigMapping::execReleaseActionMapping)
	{
		P_GET_OBJECT(APlayerController,Z_Param__TargetPlayerController);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NowActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UChangeKeyconfigMapping::ReleaseActionMapping(Z_Param__TargetPlayerController,Z_Param_Out_NowActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChangeKeyconfigMapping::execReleaseAxisMapping)
	{
		P_GET_OBJECT(APlayerController,Z_Param__TargetPlayerController);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NowActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UChangeKeyconfigMapping::ReleaseAxisMapping(Z_Param__TargetPlayerController,Z_Param_Out_NowActionName);
		P_NATIVE_END;
	}
	void UChangeKeyconfigMapping::StaticRegisterNativesUChangeKeyconfigMapping()
	{
		UClass* Class = UChangeKeyconfigMapping::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActionMapping", &UChangeKeyconfigMapping::execAddActionMapping },
			{ "AddAxisMapping", &UChangeKeyconfigMapping::execAddAxisMapping },
			{ "GetActionKey", &UChangeKeyconfigMapping::execGetActionKey },
			{ "GetKeyType", &UChangeKeyconfigMapping::execGetKeyType },
			{ "ReleaseActionMapping", &UChangeKeyconfigMapping::execReleaseActionMapping },
			{ "ReleaseAxisMapping", &UChangeKeyconfigMapping::execReleaseAxisMapping },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping_Statics
	{
		struct ChangeKeyconfigMapping_eventAddActionMapping_Parms
		{
			APlayerController* _TargetPlayerController;
			FName NowActionName;
			FKey NewKey;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__TargetPlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NowActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NowActionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping_Statics::NewProp__TargetPlayerController = { "_TargetPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChangeKeyconfigMapping_eventAddActionMapping_Parms, _TargetPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping_Statics::NewProp_NowActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping_Statics::NewProp_NowActionName = { "NowActionName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChangeKeyconfigMapping_eventAddActionMapping_Parms, NowActionName), METADATA_PARAMS(Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping_Statics::NewProp_NowActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping_Statics::NewProp_NowActionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping_Statics::NewProp_NewKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping_Statics::NewProp_NewKey = { "NewKey", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChangeKeyconfigMapping_eventAddActionMapping_Parms, NewKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping_Statics::NewProp_NewKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping_Statics::NewProp_NewKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping_Statics::NewProp__TargetPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping_Statics::NewProp_NowActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping_Statics::NewProp_NewKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChangeKeyconfigMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChangeKeyconfigMapping, nullptr, "AddActionMapping", nullptr, nullptr, sizeof(ChangeKeyconfigMapping_eventAddActionMapping_Parms), Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics
	{
		struct ChangeKeyconfigMapping_eventAddAxisMapping_Parms
		{
			APlayerController* _TargetPlayerController;
			FName NowActionName;
			FKey NewKey;
			float NewScale;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__TargetPlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NowActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NowActionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewKey;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics::NewProp__TargetPlayerController = { "_TargetPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChangeKeyconfigMapping_eventAddAxisMapping_Parms, _TargetPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics::NewProp_NowActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics::NewProp_NowActionName = { "NowActionName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChangeKeyconfigMapping_eventAddAxisMapping_Parms, NowActionName), METADATA_PARAMS(Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics::NewProp_NowActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics::NewProp_NowActionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics::NewProp_NewKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics::NewProp_NewKey = { "NewKey", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChangeKeyconfigMapping_eventAddAxisMapping_Parms, NewKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics::NewProp_NewKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics::NewProp_NewKey_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics::NewProp_NewScale = { "NewScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChangeKeyconfigMapping_eventAddAxisMapping_Parms, NewScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics::NewProp__TargetPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics::NewProp_NowActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics::NewProp_NewKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics::NewProp_NewScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChangeKeyconfigMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChangeKeyconfigMapping, nullptr, "AddAxisMapping", nullptr, nullptr, sizeof(ChangeKeyconfigMapping_eventAddAxisMapping_Parms), Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChangeKeyconfigMapping_GetActionKey_Statics
	{
		struct ChangeKeyconfigMapping_eventGetActionKey_Parms
		{
			EKeyConfig_KeyType_C _KeyType;
			FKey ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__KeyType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__KeyType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChangeKeyconfigMapping_GetActionKey_Statics::NewProp__KeyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UChangeKeyconfigMapping_GetActionKey_Statics::NewProp__KeyType = { "_KeyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChangeKeyconfigMapping_eventGetActionKey_Parms, _KeyType), Z_Construct_UEnum_ABP_200508_EKeyConfig_KeyType_C, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChangeKeyconfigMapping_GetActionKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChangeKeyconfigMapping_eventGetActionKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChangeKeyconfigMapping_GetActionKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChangeKeyconfigMapping_GetActionKey_Statics::NewProp__KeyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChangeKeyconfigMapping_GetActionKey_Statics::NewProp__KeyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChangeKeyconfigMapping_GetActionKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChangeKeyconfigMapping_GetActionKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChangeKeyconfigMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChangeKeyconfigMapping_GetActionKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChangeKeyconfigMapping, nullptr, "GetActionKey", nullptr, nullptr, sizeof(ChangeKeyconfigMapping_eventGetActionKey_Parms), Z_Construct_UFunction_UChangeKeyconfigMapping_GetActionKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChangeKeyconfigMapping_GetActionKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChangeKeyconfigMapping_GetActionKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChangeKeyconfigMapping_GetActionKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChangeKeyconfigMapping_GetActionKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChangeKeyconfigMapping_GetActionKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChangeKeyconfigMapping_GetKeyType_Statics
	{
		struct ChangeKeyconfigMapping_eventGetKeyType_Parms
		{
			FKey _key;
			EKeyConfig_KeyType_C ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__key;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChangeKeyconfigMapping_GetKeyType_Statics::NewProp__key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChangeKeyconfigMapping_GetKeyType_Statics::NewProp__key = { "_key", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChangeKeyconfigMapping_eventGetKeyType_Parms, _key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UChangeKeyconfigMapping_GetKeyType_Statics::NewProp__key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChangeKeyconfigMapping_GetKeyType_Statics::NewProp__key_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChangeKeyconfigMapping_GetKeyType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UChangeKeyconfigMapping_GetKeyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChangeKeyconfigMapping_eventGetKeyType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EKeyConfig_KeyType_C, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChangeKeyconfigMapping_GetKeyType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChangeKeyconfigMapping_GetKeyType_Statics::NewProp__key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChangeKeyconfigMapping_GetKeyType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChangeKeyconfigMapping_GetKeyType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChangeKeyconfigMapping_GetKeyType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChangeKeyconfigMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChangeKeyconfigMapping_GetKeyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChangeKeyconfigMapping, nullptr, "GetKeyType", nullptr, nullptr, sizeof(ChangeKeyconfigMapping_eventGetKeyType_Parms), Z_Construct_UFunction_UChangeKeyconfigMapping_GetKeyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChangeKeyconfigMapping_GetKeyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChangeKeyconfigMapping_GetKeyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChangeKeyconfigMapping_GetKeyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChangeKeyconfigMapping_GetKeyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChangeKeyconfigMapping_GetKeyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseActionMapping_Statics
	{
		struct ChangeKeyconfigMapping_eventReleaseActionMapping_Parms
		{
			APlayerController* _TargetPlayerController;
			FName NowActionName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__TargetPlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NowActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NowActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseActionMapping_Statics::NewProp__TargetPlayerController = { "_TargetPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChangeKeyconfigMapping_eventReleaseActionMapping_Parms, _TargetPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseActionMapping_Statics::NewProp_NowActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseActionMapping_Statics::NewProp_NowActionName = { "NowActionName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChangeKeyconfigMapping_eventReleaseActionMapping_Parms, NowActionName), METADATA_PARAMS(Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseActionMapping_Statics::NewProp_NowActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseActionMapping_Statics::NewProp_NowActionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseActionMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseActionMapping_Statics::NewProp__TargetPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseActionMapping_Statics::NewProp_NowActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseActionMapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChangeKeyconfigMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseActionMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChangeKeyconfigMapping, nullptr, "ReleaseActionMapping", nullptr, nullptr, sizeof(ChangeKeyconfigMapping_eventReleaseActionMapping_Parms), Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseActionMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseActionMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseActionMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseActionMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseActionMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseActionMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseAxisMapping_Statics
	{
		struct ChangeKeyconfigMapping_eventReleaseAxisMapping_Parms
		{
			APlayerController* _TargetPlayerController;
			FName NowActionName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__TargetPlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NowActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NowActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseAxisMapping_Statics::NewProp__TargetPlayerController = { "_TargetPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChangeKeyconfigMapping_eventReleaseAxisMapping_Parms, _TargetPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseAxisMapping_Statics::NewProp_NowActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseAxisMapping_Statics::NewProp_NowActionName = { "NowActionName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChangeKeyconfigMapping_eventReleaseAxisMapping_Parms, NowActionName), METADATA_PARAMS(Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseAxisMapping_Statics::NewProp_NowActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseAxisMapping_Statics::NewProp_NowActionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseAxisMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseAxisMapping_Statics::NewProp__TargetPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseAxisMapping_Statics::NewProp_NowActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseAxisMapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChangeKeyconfigMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseAxisMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChangeKeyconfigMapping, nullptr, "ReleaseAxisMapping", nullptr, nullptr, sizeof(ChangeKeyconfigMapping_eventReleaseAxisMapping_Parms), Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseAxisMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseAxisMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseAxisMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseAxisMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseAxisMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseAxisMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChangeKeyconfigMapping_NoRegister()
	{
		return UChangeKeyconfigMapping::StaticClass();
	}
	struct Z_Construct_UClass_UChangeKeyconfigMapping_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChangeKeyconfigMapping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChangeKeyconfigMapping_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChangeKeyconfigMapping_AddActionMapping, "AddActionMapping" }, // 3953059256
		{ &Z_Construct_UFunction_UChangeKeyconfigMapping_AddAxisMapping, "AddAxisMapping" }, // 2890812774
		{ &Z_Construct_UFunction_UChangeKeyconfigMapping_GetActionKey, "GetActionKey" }, // 2112817539
		{ &Z_Construct_UFunction_UChangeKeyconfigMapping_GetKeyType, "GetKeyType" }, // 2818244123
		{ &Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseActionMapping, "ReleaseActionMapping" }, // 4178740668
		{ &Z_Construct_UFunction_UChangeKeyconfigMapping_ReleaseAxisMapping, "ReleaseAxisMapping" }, // 2499283646
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChangeKeyconfigMapping_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ChangeKeyconfigMapping.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ChangeKeyconfigMapping.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChangeKeyconfigMapping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChangeKeyconfigMapping>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChangeKeyconfigMapping_Statics::ClassParams = {
		&UChangeKeyconfigMapping::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChangeKeyconfigMapping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChangeKeyconfigMapping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChangeKeyconfigMapping()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChangeKeyconfigMapping_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChangeKeyconfigMapping, 3901369206);
	template<> ABP_200508_API UClass* StaticClass<UChangeKeyconfigMapping>()
	{
		return UChangeKeyconfigMapping::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChangeKeyconfigMapping(Z_Construct_UClass_UChangeKeyconfigMapping, &UChangeKeyconfigMapping::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UChangeKeyconfigMapping"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChangeKeyconfigMapping);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
