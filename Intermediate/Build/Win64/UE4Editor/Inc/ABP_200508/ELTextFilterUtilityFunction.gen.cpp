// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELTextFilterUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELTextFilterUtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELTextFilterUtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELTextFilterUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnSanitizeText__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnSanitizeTextArray__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELTextFilterUtilityFunction::execTextFilter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SrcText);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSanitizeTextComplete);
		P_GET_OBJECT(UObject,Z_Param_UserData);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExternalAccountId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELTextFilterUtilityFunction::TextFilter(Z_Param_SrcText,FOnSanitizeText(Z_Param_Out_OnSanitizeTextComplete),Z_Param_UserData,Z_Param_ExternalAccountId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTextFilterUtilityFunction::execTextFilterArray)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_SrcText);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSanitizeTextComplete);
		P_GET_OBJECT(UObject,Z_Param_UserData);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExternalAccountId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELTextFilterUtilityFunction::TextFilterArray(Z_Param_Out_SrcText,FOnSanitizeTextArray(Z_Param_Out_OnSanitizeTextComplete),Z_Param_UserData,Z_Param_ExternalAccountId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELTextFilterUtilityFunction::execTextFilterSteam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__FilterCategory);
		P_GET_PROPERTY(FStrProperty,Z_Param__SrcText);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__DstText);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExternalAccountId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELTextFilterUtilityFunction::TextFilterSteam(Z_Param__FilterCategory,Z_Param__SrcText,Z_Param_Out__DstText,Z_Param_ExternalAccountId);
		P_NATIVE_END;
	}
	void UELTextFilterUtilityFunction::StaticRegisterNativesUELTextFilterUtilityFunction()
	{
		UClass* Class = UELTextFilterUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TextFilter", &UELTextFilterUtilityFunction::execTextFilter },
			{ "TextFilterArray", &UELTextFilterUtilityFunction::execTextFilterArray },
			{ "TextFilterSteam", &UELTextFilterUtilityFunction::execTextFilterSteam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics
	{
		struct ELTextFilterUtilityFunction_eventTextFilter_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::NewProp_SrcText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::NewProp_SrcText = { "SrcText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterUtilityFunction_eventTextFilter_Parms, SrcText), METADATA_PARAMS(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::NewProp_SrcText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::NewProp_SrcText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::NewProp_OnSanitizeTextComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::NewProp_OnSanitizeTextComplete = { "OnSanitizeTextComplete", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterUtilityFunction_eventTextFilter_Parms, OnSanitizeTextComplete), Z_Construct_UDelegateFunction_ABP_200508_OnSanitizeText__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::NewProp_OnSanitizeTextComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::NewProp_OnSanitizeTextComplete_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterUtilityFunction_eventTextFilter_Parms, UserData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::NewProp_ExternalAccountId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::NewProp_ExternalAccountId = { "ExternalAccountId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterUtilityFunction_eventTextFilter_Parms, ExternalAccountId), METADATA_PARAMS(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::NewProp_ExternalAccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::NewProp_ExternalAccountId_MetaData)) };
	void Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTextFilterUtilityFunction_eventTextFilter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTextFilterUtilityFunction_eventTextFilter_Parms), &Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::NewProp_SrcText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::NewProp_OnSanitizeTextComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::NewProp_ExternalAccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTextFilterUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTextFilterUtilityFunction, nullptr, "TextFilter", nullptr, nullptr, sizeof(ELTextFilterUtilityFunction_eventTextFilter_Parms), Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics
	{
		struct ELTextFilterUtilityFunction_eventTextFilterArray_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_SrcText_Inner = { "SrcText", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_SrcText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_SrcText = { "SrcText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterUtilityFunction_eventTextFilterArray_Parms, SrcText), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_SrcText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_SrcText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_OnSanitizeTextComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_OnSanitizeTextComplete = { "OnSanitizeTextComplete", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterUtilityFunction_eventTextFilterArray_Parms, OnSanitizeTextComplete), Z_Construct_UDelegateFunction_ABP_200508_OnSanitizeTextArray__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_OnSanitizeTextComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_OnSanitizeTextComplete_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterUtilityFunction_eventTextFilterArray_Parms, UserData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_ExternalAccountId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_ExternalAccountId = { "ExternalAccountId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterUtilityFunction_eventTextFilterArray_Parms, ExternalAccountId), METADATA_PARAMS(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_ExternalAccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_ExternalAccountId_MetaData)) };
	void Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTextFilterUtilityFunction_eventTextFilterArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTextFilterUtilityFunction_eventTextFilterArray_Parms), &Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_SrcText_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_SrcText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_OnSanitizeTextComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_ExternalAccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTextFilterUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTextFilterUtilityFunction, nullptr, "TextFilterArray", nullptr, nullptr, sizeof(ELTextFilterUtilityFunction_eventTextFilterArray_Parms), Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics
	{
		struct ELTextFilterUtilityFunction_eventTextFilterSteam_Parms
		{
			int32 _FilterCategory;
			FString _SrcText;
			FString _DstText;
			FString ExternalAccountId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__FilterCategory;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::NewProp__FilterCategory = { "_FilterCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterUtilityFunction_eventTextFilterSteam_Parms, _FilterCategory), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::NewProp__SrcText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::NewProp__SrcText = { "_SrcText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterUtilityFunction_eventTextFilterSteam_Parms, _SrcText), METADATA_PARAMS(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::NewProp__SrcText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::NewProp__SrcText_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::NewProp__DstText = { "_DstText", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterUtilityFunction_eventTextFilterSteam_Parms, _DstText), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::NewProp_ExternalAccountId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::NewProp_ExternalAccountId = { "ExternalAccountId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELTextFilterUtilityFunction_eventTextFilterSteam_Parms, ExternalAccountId), METADATA_PARAMS(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::NewProp_ExternalAccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::NewProp_ExternalAccountId_MetaData)) };
	void Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELTextFilterUtilityFunction_eventTextFilterSteam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELTextFilterUtilityFunction_eventTextFilterSteam_Parms), &Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::NewProp__FilterCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::NewProp__SrcText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::NewProp__DstText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::NewProp_ExternalAccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELTextFilterUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELTextFilterUtilityFunction, nullptr, "TextFilterSteam", nullptr, nullptr, sizeof(ELTextFilterUtilityFunction_eventTextFilterSteam_Parms), Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELTextFilterUtilityFunction_NoRegister()
	{
		return UELTextFilterUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELTextFilterUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELTextFilterUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELTextFilterUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilter, "TextFilter" }, // 1765318569
		{ &Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterArray, "TextFilterArray" }, // 1311557999
		{ &Z_Construct_UFunction_UELTextFilterUtilityFunction_TextFilterSteam, "TextFilterSteam" }, // 2792394138
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELTextFilterUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELTextFilterUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELTextFilterUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELTextFilterUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELTextFilterUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELTextFilterUtilityFunction_Statics::ClassParams = {
		&UELTextFilterUtilityFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELTextFilterUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELTextFilterUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELTextFilterUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELTextFilterUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELTextFilterUtilityFunction, 3205579614);
	template<> ABP_200508_API UClass* StaticClass<UELTextFilterUtilityFunction>()
	{
		return UELTextFilterUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELTextFilterUtilityFunction(Z_Construct_UClass_UELTextFilterUtilityFunction, &UELTextFilterUtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELTextFilterUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELTextFilterUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
