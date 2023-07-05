// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELTextFilterManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELTextFilterManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELTextFilterManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELTextFilterManager();
	ELITE_CORE_API UClass* Z_Construct_UClass_USingletonBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnSanitizeText__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnSanitizeTextArray__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELTextFilterManager::execTextFilter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SrcText);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSanitizeTextComplete);
		P_GET_OBJECT(UObject,Z_Param_UserData);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExternalAccountId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TextFilter(Z_Param_SrcText,FOnSanitizeText(Z_Param_Out_OnSanitizeTextComplete),Z_Param_UserData,Z_Param_ExternalAccountId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTextFilterManager::execTextFilterArray)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_SrcText);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSanitizeTextComplete);
		P_GET_OBJECT(UObject,Z_Param_UserData);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExternalAccountId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TextFilterArray(Z_Param_Out_SrcText,FOnSanitizeTextArray(Z_Param_Out_OnSanitizeTextComplete),Z_Param_UserData,Z_Param_ExternalAccountId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTextFilterManager::execTextFilterSteam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_filterCategory);
		P_GET_PROPERTY(FStrProperty,Z_Param__SrcText);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__DstText);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExternalAccountId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TextFilterSteam(Z_Param_filterCategory,Z_Param__SrcText,Z_Param_Out__DstText,Z_Param_ExternalAccountId);
		P_NATIVE_END;
	}
	void UELTextFilterManager::StaticRegisterNativesUELTextFilterManager()
	{
		UClass* Class = UELTextFilterManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TextFilter", &UELTextFilterManager::execTextFilter },
			{ "TextFilterArray", &UELTextFilterManager::execTextFilterArray },
			{ "TextFilterSteam", &UELTextFilterManager::execTextFilterSteam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics
	{
		struct ELTextFilterManager_eventTextFilter_Parms
		{
			FString SrcText;
			FScriptDelegate OnSanitizeTextComplete;
			UObject* UserData;
			FString ExternalAccountId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SrcText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSanitizeTextComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSanitizeTextComplete;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalAccountId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExternalAccountId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::NewProp_SrcText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::NewProp_SrcText = { "SrcText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterManager_eventTextFilter_Parms, SrcText), METADATA_PARAMS(Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::NewProp_SrcText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::NewProp_SrcText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::NewProp_OnSanitizeTextComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::NewProp_OnSanitizeTextComplete = { "OnSanitizeTextComplete", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterManager_eventTextFilter_Parms, OnSanitizeTextComplete), Z_Construct_UDelegateFunction_ABP_200508_OnSanitizeText__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::NewProp_OnSanitizeTextComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::NewProp_OnSanitizeTextComplete_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterManager_eventTextFilter_Parms, UserData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::NewProp_ExternalAccountId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::NewProp_ExternalAccountId = { "ExternalAccountId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterManager_eventTextFilter_Parms, ExternalAccountId), METADATA_PARAMS(Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::NewProp_ExternalAccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::NewProp_ExternalAccountId_MetaData)) };
	void Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTextFilterManager_eventTextFilter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTextFilterManager_eventTextFilter_Parms), &Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::NewProp_SrcText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::NewProp_OnSanitizeTextComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::NewProp_ExternalAccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTextFilterManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTextFilterManager, nullptr, "TextFilter", nullptr, nullptr, sizeof(ELTextFilterManager_eventTextFilter_Parms), Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTextFilterManager_TextFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTextFilterManager_TextFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics
	{
		struct ELTextFilterManager_eventTextFilterArray_Parms
		{
			TArray<FString> SrcText;
			FScriptDelegate OnSanitizeTextComplete;
			UObject* UserData;
			FString ExternalAccountId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SrcText_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcText_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SrcText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSanitizeTextComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSanitizeTextComplete;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalAccountId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExternalAccountId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_SrcText_Inner = { "SrcText", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_SrcText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_SrcText = { "SrcText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterManager_eventTextFilterArray_Parms, SrcText), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_SrcText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_SrcText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_OnSanitizeTextComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_OnSanitizeTextComplete = { "OnSanitizeTextComplete", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterManager_eventTextFilterArray_Parms, OnSanitizeTextComplete), Z_Construct_UDelegateFunction_ABP_200508_OnSanitizeTextArray__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_OnSanitizeTextComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_OnSanitizeTextComplete_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterManager_eventTextFilterArray_Parms, UserData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_ExternalAccountId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_ExternalAccountId = { "ExternalAccountId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterManager_eventTextFilterArray_Parms, ExternalAccountId), METADATA_PARAMS(Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_ExternalAccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_ExternalAccountId_MetaData)) };
	void Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTextFilterManager_eventTextFilterArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTextFilterManager_eventTextFilterArray_Parms), &Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_SrcText_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_SrcText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_OnSanitizeTextComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_ExternalAccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTextFilterManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTextFilterManager, nullptr, "TextFilterArray", nullptr, nullptr, sizeof(ELTextFilterManager_eventTextFilterArray_Parms), Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTextFilterManager_TextFilterArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTextFilterManager_TextFilterArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics
	{
		struct ELTextFilterManager_eventTextFilterSteam_Parms
		{
			int32 filterCategory;
			FString _SrcText;
			FString _DstText;
			FString ExternalAccountId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_filterCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__SrcText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__SrcText;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__DstText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalAccountId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExternalAccountId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::NewProp_filterCategory = { "filterCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterManager_eventTextFilterSteam_Parms, filterCategory), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::NewProp__SrcText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::NewProp__SrcText = { "_SrcText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterManager_eventTextFilterSteam_Parms, _SrcText), METADATA_PARAMS(Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::NewProp__SrcText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::NewProp__SrcText_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::NewProp__DstText = { "_DstText", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterManager_eventTextFilterSteam_Parms, _DstText), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::NewProp_ExternalAccountId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::NewProp_ExternalAccountId = { "ExternalAccountId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterManager_eventTextFilterSteam_Parms, ExternalAccountId), METADATA_PARAMS(Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::NewProp_ExternalAccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::NewProp_ExternalAccountId_MetaData)) };
	void Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTextFilterManager_eventTextFilterSteam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTextFilterManager_eventTextFilterSteam_Parms), &Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::NewProp_filterCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::NewProp__SrcText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::NewProp__DstText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::NewProp_ExternalAccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTextFilterManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTextFilterManager, nullptr, "TextFilterSteam", nullptr, nullptr, sizeof(ELTextFilterManager_eventTextFilterSteam_Parms), Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELTextFilterManager_NoRegister()
	{
		return UELTextFilterManager::StaticClass();
	}
	struct Z_Construct_UClass_UELTextFilterManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isinit_MetaData[];
#endif
		static void NewProp_isinit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isinit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELTextFilterManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingletonBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELTextFilterManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELTextFilterManager_TextFilter, "TextFilter" }, // 1104142194
		{ &Z_Construct_UFunction_UELTextFilterManager_TextFilterArray, "TextFilterArray" }, // 932296954
		{ &Z_Construct_UFunction_UELTextFilterManager_TextFilterSteam, "TextFilterSteam" }, // 692083517
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELTextFilterManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELTextFilterManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELTextFilterManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELTextFilterManager_Statics::NewProp_isinit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTextFilterManager" },
		{ "ModuleRelativePath", "Public/ELTextFilterManager.h" },
	};
#endif
	void Z_Construct_UClass_UELTextFilterManager_Statics::NewProp_isinit_SetBit(void* Obj)
	{
		((UELTextFilterManager*)Obj)->isinit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELTextFilterManager_Statics::NewProp_isinit = { "isinit", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELTextFilterManager), &Z_Construct_UClass_UELTextFilterManager_Statics::NewProp_isinit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELTextFilterManager_Statics::NewProp_isinit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELTextFilterManager_Statics::NewProp_isinit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELTextFilterManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELTextFilterManager_Statics::NewProp_isinit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELTextFilterManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELTextFilterManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELTextFilterManager_Statics::ClassParams = {
		&UELTextFilterManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELTextFilterManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELTextFilterManager_Statics::PropPointers),
		0,
		0x000002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELTextFilterManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELTextFilterManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELTextFilterManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELTextFilterManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELTextFilterManager, 2763630408);
	template<> ABP_200508_API UClass* StaticClass<UELTextFilterManager>()
	{
		return UELTextFilterManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELTextFilterManager(Z_Construct_UClass_UELTextFilterManager, &UELTextFilterManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELTextFilterManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELTextFilterManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
