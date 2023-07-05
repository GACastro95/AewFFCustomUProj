// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NVIDIAGfeSDK/Public/HighlightsCloseGroupAsync.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHighlightsCloseGroupAsync() {}
// Cross Module References
	NVIDIAGFESDK_API UClass* Z_Construct_UClass_UHighlightsCloseGroupAsync_NoRegister();
	NVIDIAGFESDK_API UClass* Z_Construct_UClass_UHighlightsCloseGroupAsync();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_NVIDIAGfeSDK();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NVIDIAGFESDK_API UFunction* Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnHighlightsOperationResultCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UHighlightsCloseGroupAsync::execHighlightsCloseGroup)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_GroupId);
		P_GET_UBOOL_REF(Z_Param_Out_DestroyHighlights);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHighlightsCloseGroupAsync**)Z_Param__Result=UHighlightsCloseGroupAsync::HighlightsCloseGroup(Z_Param_WorldContextObject,Z_Param_GroupId,Z_Param_Out_DestroyHighlights);
		P_NATIVE_END;
	}
	void UHighlightsCloseGroupAsync::StaticRegisterNativesUHighlightsCloseGroupAsync()
	{
		UClass* Class = UHighlightsCloseGroupAsync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HighlightsCloseGroup", &UHighlightsCloseGroupAsync::execHighlightsCloseGroup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics
	{
		struct HighlightsCloseGroupAsync_eventHighlightsCloseGroup_Parms
		{
			UObject* WorldContextObject;
			FString GroupId;
			bool DestroyHighlights;
			UHighlightsCloseGroupAsync* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyHighlights_MetaData[];
#endif
		static void NewProp_DestroyHighlights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DestroyHighlights;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsCloseGroupAsync_eventHighlightsCloseGroup_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::NewProp_GroupId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsCloseGroupAsync_eventHighlightsCloseGroup_Parms, GroupId), METADATA_PARAMS(Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::NewProp_GroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::NewProp_GroupId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::NewProp_DestroyHighlights_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::NewProp_DestroyHighlights_SetBit(void* Obj)
	{
		((HighlightsCloseGroupAsync_eventHighlightsCloseGroup_Parms*)Obj)->DestroyHighlights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::NewProp_DestroyHighlights = { "DestroyHighlights", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HighlightsCloseGroupAsync_eventHighlightsCloseGroup_Parms), &Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::NewProp_DestroyHighlights_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::NewProp_DestroyHighlights_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::NewProp_DestroyHighlights_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HighlightsCloseGroupAsync_eventHighlightsCloseGroup_Parms, ReturnValue), Z_Construct_UClass_UHighlightsCloseGroupAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::NewProp_GroupId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::NewProp_DestroyHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HighlightsCloseGroupAsync.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHighlightsCloseGroupAsync, nullptr, "HighlightsCloseGroup", nullptr, nullptr, sizeof(HighlightsCloseGroupAsync_eventHighlightsCloseGroup_Parms), Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHighlightsCloseGroupAsync_NoRegister()
	{
		return UHighlightsCloseGroupAsync::StaticClass();
	}
	struct Z_Construct_UClass_UHighlightsCloseGroupAsync_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHighlightsCloseGroupAsync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NVIDIAGfeSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHighlightsCloseGroupAsync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHighlightsCloseGroupAsync_HighlightsCloseGroup, "HighlightsCloseGroup" }, // 2692036255
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighlightsCloseGroupAsync_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HighlightsCloseGroupAsync.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HighlightsCloseGroupAsync.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighlightsCloseGroupAsync_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HighlightsCloseGroupAsync" },
		{ "ModuleRelativePath", "Public/HighlightsCloseGroupAsync.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHighlightsCloseGroupAsync_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHighlightsCloseGroupAsync, OnSuccess), Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnHighlightsOperationResultCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHighlightsCloseGroupAsync_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightsCloseGroupAsync_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighlightsCloseGroupAsync_Statics::NewProp_OnFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HighlightsCloseGroupAsync" },
		{ "ModuleRelativePath", "Public/HighlightsCloseGroupAsync.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHighlightsCloseGroupAsync_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHighlightsCloseGroupAsync, OnFailure), Z_Construct_UDelegateFunction_NVIDIAGfeSDK_OnHighlightsOperationResultCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHighlightsCloseGroupAsync_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightsCloseGroupAsync_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHighlightsCloseGroupAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightsCloseGroupAsync_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHighlightsCloseGroupAsync_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHighlightsCloseGroupAsync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHighlightsCloseGroupAsync>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHighlightsCloseGroupAsync_Statics::ClassParams = {
		&UHighlightsCloseGroupAsync::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHighlightsCloseGroupAsync_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightsCloseGroupAsync_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHighlightsCloseGroupAsync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHighlightsCloseGroupAsync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHighlightsCloseGroupAsync()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHighlightsCloseGroupAsync_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHighlightsCloseGroupAsync, 1542527988);
	template<> NVIDIAGFESDK_API UClass* StaticClass<UHighlightsCloseGroupAsync>()
	{
		return UHighlightsCloseGroupAsync::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHighlightsCloseGroupAsync(Z_Construct_UClass_UHighlightsCloseGroupAsync, &UHighlightsCloseGroupAsync::StaticClass, TEXT("/Script/NVIDIAGfeSDK"), TEXT("UHighlightsCloseGroupAsync"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHighlightsCloseGroupAsync);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
