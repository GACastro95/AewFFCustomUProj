// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELOnlineNews.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELOnlineNews() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELOnlineNews_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELOnlineNews();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UOnlineNewsData_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSTitleStorage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELOnlineNews::execClearOnlineNewDataMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearOnlineNewDataMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOnlineNews::execGetOnlineNewDataMap)
	{
		P_GET_TMAP_REF(FString,UOnlineNewsData*,Z_Param_Out__OnlineNewsMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOnlineNewDataMap(Z_Param_Out__OnlineNewsMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOnlineNews::execOnDownloadJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__Filename);
		P_GET_PROPERTY(FStrProperty,Z_Param__Filedata);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDownloadJson(Z_Param__Filename,Z_Param__Filedata);
		P_NATIVE_END;
	}
	void UELOnlineNews::StaticRegisterNativesUELOnlineNews()
	{
		UClass* Class = UELOnlineNews::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearOnlineNewDataMap", &UELOnlineNews::execClearOnlineNewDataMap },
			{ "GetOnlineNewDataMap", &UELOnlineNews::execGetOnlineNewDataMap },
			{ "OnDownloadJson", &UELOnlineNews::execOnDownloadJson },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELOnlineNews_ClearOnlineNewDataMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineNews_ClearOnlineNewDataMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOnlineNews.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOnlineNews_ClearOnlineNewDataMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOnlineNews, nullptr, "ClearOnlineNewDataMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineNews_ClearOnlineNewDataMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineNews_ClearOnlineNewDataMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOnlineNews_ClearOnlineNewDataMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOnlineNews_ClearOnlineNewDataMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOnlineNews_GetOnlineNewDataMap_Statics
	{
		struct ELOnlineNews_eventGetOnlineNewDataMap_Parms
		{
			TMap<FString,UOnlineNewsData*> _OnlineNewsMap;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__OnlineNewsMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__OnlineNewsMap_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__OnlineNewsMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELOnlineNews_GetOnlineNewDataMap_Statics::NewProp__OnlineNewsMap_ValueProp = { "_OnlineNewsMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UOnlineNewsData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELOnlineNews_GetOnlineNewDataMap_Statics::NewProp__OnlineNewsMap_Key_KeyProp = { "_OnlineNewsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UELOnlineNews_GetOnlineNewDataMap_Statics::NewProp__OnlineNewsMap = { "_OnlineNewsMap", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineNews_eventGetOnlineNewDataMap_Parms, _OnlineNewsMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOnlineNews_GetOnlineNewDataMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineNews_GetOnlineNewDataMap_Statics::NewProp__OnlineNewsMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineNews_GetOnlineNewDataMap_Statics::NewProp__OnlineNewsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineNews_GetOnlineNewDataMap_Statics::NewProp__OnlineNewsMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineNews_GetOnlineNewDataMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOnlineNews.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOnlineNews_GetOnlineNewDataMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOnlineNews, nullptr, "GetOnlineNewDataMap", nullptr, nullptr, sizeof(ELOnlineNews_eventGetOnlineNewDataMap_Parms), Z_Construct_UFunction_UELOnlineNews_GetOnlineNewDataMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineNews_GetOnlineNewDataMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineNews_GetOnlineNewDataMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineNews_GetOnlineNewDataMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOnlineNews_GetOnlineNewDataMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOnlineNews_GetOnlineNewDataMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOnlineNews_OnDownloadJson_Statics
	{
		struct ELOnlineNews_eventOnDownloadJson_Parms
		{
			FString _Filename;
			FString _Filedata;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Filedata_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__Filedata;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineNews_OnDownloadJson_Statics::NewProp__Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELOnlineNews_OnDownloadJson_Statics::NewProp__Filename = { "_Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineNews_eventOnDownloadJson_Parms, _Filename), METADATA_PARAMS(Z_Construct_UFunction_UELOnlineNews_OnDownloadJson_Statics::NewProp__Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineNews_OnDownloadJson_Statics::NewProp__Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineNews_OnDownloadJson_Statics::NewProp__Filedata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELOnlineNews_OnDownloadJson_Statics::NewProp__Filedata = { "_Filedata", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineNews_eventOnDownloadJson_Parms, _Filedata), METADATA_PARAMS(Z_Construct_UFunction_UELOnlineNews_OnDownloadJson_Statics::NewProp__Filedata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineNews_OnDownloadJson_Statics::NewProp__Filedata_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOnlineNews_OnDownloadJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineNews_OnDownloadJson_Statics::NewProp__Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineNews_OnDownloadJson_Statics::NewProp__Filedata,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineNews_OnDownloadJson_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOnlineNews.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOnlineNews_OnDownloadJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOnlineNews, nullptr, "OnDownloadJson", nullptr, nullptr, sizeof(ELOnlineNews_eventOnDownloadJson_Parms), Z_Construct_UFunction_UELOnlineNews_OnDownloadJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineNews_OnDownloadJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineNews_OnDownloadJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineNews_OnDownloadJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOnlineNews_OnDownloadJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOnlineNews_OnDownloadJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELOnlineNews_NoRegister()
	{
		return UELOnlineNews::StaticClass();
	}
	struct Z_Construct_UClass_UELOnlineNews_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleStorage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleStorage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnlineNewsDataMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OnlineNewsDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineNewsDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OnlineNewsDataMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELOnlineNews_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELOnlineNews_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELOnlineNews_ClearOnlineNewDataMap, "ClearOnlineNewDataMap" }, // 1325210371
		{ &Z_Construct_UFunction_UELOnlineNews_GetOnlineNewDataMap, "GetOnlineNewDataMap" }, // 2620022672
		{ &Z_Construct_UFunction_UELOnlineNews_OnDownloadJson, "OnDownloadJson" }, // 3223923809
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOnlineNews_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELOnlineNews.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELOnlineNews.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOnlineNews_Statics::NewProp_TitleStorage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOnlineNews" },
		{ "ModuleRelativePath", "Public/ELOnlineNews.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELOnlineNews_Statics::NewProp_TitleStorage = { "TitleStorage", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOnlineNews, TitleStorage), Z_Construct_UClass_UEOSTitleStorage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELOnlineNews_Statics::NewProp_TitleStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOnlineNews_Statics::NewProp_TitleStorage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELOnlineNews_Statics::NewProp_OnlineNewsDataMap_ValueProp = { "OnlineNewsDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UOnlineNewsData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELOnlineNews_Statics::NewProp_OnlineNewsDataMap_Key_KeyProp = { "OnlineNewsDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOnlineNews_Statics::NewProp_OnlineNewsDataMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOnlineNews" },
		{ "ModuleRelativePath", "Public/ELOnlineNews.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELOnlineNews_Statics::NewProp_OnlineNewsDataMap = { "OnlineNewsDataMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOnlineNews, OnlineNewsDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELOnlineNews_Statics::NewProp_OnlineNewsDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOnlineNews_Statics::NewProp_OnlineNewsDataMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELOnlineNews_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOnlineNews_Statics::NewProp_TitleStorage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOnlineNews_Statics::NewProp_OnlineNewsDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOnlineNews_Statics::NewProp_OnlineNewsDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOnlineNews_Statics::NewProp_OnlineNewsDataMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELOnlineNews_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELOnlineNews>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELOnlineNews_Statics::ClassParams = {
		&UELOnlineNews::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELOnlineNews_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELOnlineNews_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELOnlineNews_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELOnlineNews_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELOnlineNews()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELOnlineNews_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELOnlineNews, 2770422902);
	template<> ABP_200508_API UClass* StaticClass<UELOnlineNews>()
	{
		return UELOnlineNews::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELOnlineNews(Z_Construct_UClass_UELOnlineNews, &UELOnlineNews::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELOnlineNews"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELOnlineNews);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
