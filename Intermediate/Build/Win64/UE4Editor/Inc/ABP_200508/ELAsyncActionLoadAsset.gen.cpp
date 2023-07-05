// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELAsyncActionLoadAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAsyncActionLoadAsset() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELAsyncActionLoadAsset_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELAsyncActionLoadAsset();
	ABP_200508_API UClass* Z_Construct_UClass_UELAsyncActionLoadAssetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnELAssetLoaded__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELAsyncActionLoadAsset::execELAsyncLoadAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELAsyncActionLoadAsset**)Z_Param__Result=UELAsyncActionLoadAsset::ELAsyncLoadAsset(Z_Param_WorldContextObject,Z_Param_Out_Asset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAsyncActionLoadAsset::execELAsyncLoadAssetPath)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELAsyncActionLoadAsset**)Z_Param__Result=UELAsyncActionLoadAsset::ELAsyncLoadAssetPath(Z_Param_WorldContextObject,Z_Param_Out_Asset);
		P_NATIVE_END;
	}
	void UELAsyncActionLoadAsset::StaticRegisterNativesUELAsyncActionLoadAsset()
	{
		UClass* Class = UELAsyncActionLoadAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ELAsyncLoadAsset", &UELAsyncActionLoadAsset::execELAsyncLoadAsset },
			{ "ELAsyncLoadAssetPath", &UELAsyncActionLoadAsset::execELAsyncLoadAssetPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAsset_Statics
	{
		struct ELAsyncActionLoadAsset_eventELAsyncLoadAsset_Parms
		{
			UObject* WorldContextObject;
			TSoftObjectPtr<UObject> Asset;
			UELAsyncActionLoadAsset* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAsset_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAsyncActionLoadAsset_eventELAsyncLoadAsset_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAsset_Statics::NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAsyncActionLoadAsset_eventELAsyncLoadAsset_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAsset_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAsset_Statics::NewProp_Asset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAsyncActionLoadAsset_eventELAsyncLoadAsset_Parms, ReturnValue), Z_Construct_UClass_UELAsyncActionLoadAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAsset_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAsset_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAsyncActionLoadAsset.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAsyncActionLoadAsset, nullptr, "ELAsyncLoadAsset", nullptr, nullptr, sizeof(ELAsyncActionLoadAsset_eventELAsyncLoadAsset_Parms), Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAssetPath_Statics
	{
		struct ELAsyncActionLoadAsset_eventELAsyncLoadAssetPath_Parms
		{
			UObject* WorldContextObject;
			FSoftObjectPath Asset;
			UELAsyncActionLoadAsset* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAssetPath_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAsyncActionLoadAsset_eventELAsyncLoadAssetPath_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAssetPath_Statics::NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAssetPath_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAsyncActionLoadAsset_eventELAsyncLoadAssetPath_Parms, Asset), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAssetPath_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAssetPath_Statics::NewProp_Asset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAssetPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAsyncActionLoadAsset_eventELAsyncLoadAssetPath_Parms, ReturnValue), Z_Construct_UClass_UELAsyncActionLoadAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAssetPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAssetPath_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAssetPath_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAssetPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAssetPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAsyncActionLoadAsset.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAssetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAsyncActionLoadAsset, nullptr, "ELAsyncLoadAssetPath", nullptr, nullptr, sizeof(ELAsyncActionLoadAsset_eventELAsyncLoadAssetPath_Parms), Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAssetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAssetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAssetPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAssetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAssetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAssetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELAsyncActionLoadAsset_NoRegister()
	{
		return UELAsyncActionLoadAsset::StaticClass();
	}
	struct Z_Construct_UClass_UELAsyncActionLoadAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELAsyncActionLoadAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELAsyncActionLoadAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELAsyncActionLoadAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAsset, "ELAsyncLoadAsset" }, // 2527120942
		{ &Z_Construct_UFunction_UELAsyncActionLoadAsset_ELAsyncLoadAssetPath, "ELAsyncLoadAssetPath" }, // 703536539
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAsyncActionLoadAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELAsyncActionLoadAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAsyncActionLoadAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAsyncActionLoadAsset_Statics::NewProp_Completed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAsyncActionLoadAsset" },
		{ "ModuleRelativePath", "Public/ELAsyncActionLoadAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELAsyncActionLoadAsset_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAsyncActionLoadAsset, Completed), Z_Construct_UDelegateFunction_ABP_200508_OnELAssetLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELAsyncActionLoadAsset_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAsyncActionLoadAsset_Statics::NewProp_Completed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELAsyncActionLoadAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAsyncActionLoadAsset_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAsyncActionLoadAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAsyncActionLoadAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAsyncActionLoadAsset_Statics::ClassParams = {
		&UELAsyncActionLoadAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELAsyncActionLoadAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELAsyncActionLoadAsset_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELAsyncActionLoadAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAsyncActionLoadAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAsyncActionLoadAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAsyncActionLoadAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAsyncActionLoadAsset, 2991863033);
	template<> ABP_200508_API UClass* StaticClass<UELAsyncActionLoadAsset>()
	{
		return UELAsyncActionLoadAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAsyncActionLoadAsset(Z_Construct_UClass_UELAsyncActionLoadAsset, &UELAsyncActionLoadAsset::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELAsyncActionLoadAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAsyncActionLoadAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
