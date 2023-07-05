// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELAsyncActionLoadAssetList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAsyncActionLoadAssetList() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELAsyncActionLoadAssetList_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELAsyncActionLoadAssetList();
	ABP_200508_API UClass* Z_Construct_UClass_UELAsyncActionLoadAssetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnELAssetListLoaded__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELAsyncActionLoadAssetList::execELAsyncLoadAssetList)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(TSoftObjectPtr<UObject>,Z_Param_Out_AssetList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELAsyncActionLoadAssetList**)Z_Param__Result=UELAsyncActionLoadAssetList::ELAsyncLoadAssetList(Z_Param_WorldContextObject,Z_Param_Out_AssetList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAsyncActionLoadAssetList::execELAsyncLoadAssetPathList)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FSoftObjectPath,Z_Param_Out_AssetList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELAsyncActionLoadAssetList**)Z_Param__Result=UELAsyncActionLoadAssetList::ELAsyncLoadAssetPathList(Z_Param_WorldContextObject,Z_Param_Out_AssetList);
		P_NATIVE_END;
	}
	void UELAsyncActionLoadAssetList::StaticRegisterNativesUELAsyncActionLoadAssetList()
	{
		UClass* Class = UELAsyncActionLoadAssetList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ELAsyncLoadAssetList", &UELAsyncActionLoadAssetList::execELAsyncLoadAssetList },
			{ "ELAsyncLoadAssetPathList", &UELAsyncActionLoadAssetList::execELAsyncLoadAssetPathList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetList_Statics
	{
		struct ELAsyncActionLoadAssetList_eventELAsyncLoadAssetList_Parms
		{
			UObject* WorldContextObject;
			TArray<TSoftObjectPtr<UObject> > AssetList;
			UELAsyncActionLoadAssetList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AssetList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetList_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAsyncActionLoadAssetList_eventELAsyncLoadAssetList_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetList_Statics::NewProp_AssetList_Inner = { "AssetList", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetList_Statics::NewProp_AssetList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetList_Statics::NewProp_AssetList = { "AssetList", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAsyncActionLoadAssetList_eventELAsyncLoadAssetList_Parms, AssetList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetList_Statics::NewProp_AssetList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetList_Statics::NewProp_AssetList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAsyncActionLoadAssetList_eventELAsyncLoadAssetList_Parms, ReturnValue), Z_Construct_UClass_UELAsyncActionLoadAssetList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetList_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetList_Statics::NewProp_AssetList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetList_Statics::NewProp_AssetList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAsyncActionLoadAssetList.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAsyncActionLoadAssetList, nullptr, "ELAsyncLoadAssetList", nullptr, nullptr, sizeof(ELAsyncActionLoadAssetList_eventELAsyncLoadAssetList_Parms), Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetPathList_Statics
	{
		struct ELAsyncActionLoadAssetList_eventELAsyncLoadAssetPathList_Parms
		{
			UObject* WorldContextObject;
			TArray<FSoftObjectPath> AssetList;
			UELAsyncActionLoadAssetList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetPathList_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAsyncActionLoadAssetList_eventELAsyncLoadAssetPathList_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetPathList_Statics::NewProp_AssetList_Inner = { "AssetList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetPathList_Statics::NewProp_AssetList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetPathList_Statics::NewProp_AssetList = { "AssetList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAsyncActionLoadAssetList_eventELAsyncLoadAssetPathList_Parms, AssetList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetPathList_Statics::NewProp_AssetList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetPathList_Statics::NewProp_AssetList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetPathList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAsyncActionLoadAssetList_eventELAsyncLoadAssetPathList_Parms, ReturnValue), Z_Construct_UClass_UELAsyncActionLoadAssetList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetPathList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetPathList_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetPathList_Statics::NewProp_AssetList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetPathList_Statics::NewProp_AssetList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetPathList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetPathList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAsyncActionLoadAssetList.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetPathList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAsyncActionLoadAssetList, nullptr, "ELAsyncLoadAssetPathList", nullptr, nullptr, sizeof(ELAsyncActionLoadAssetList_eventELAsyncLoadAssetPathList_Parms), Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetPathList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetPathList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetPathList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetPathList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetPathList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetPathList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELAsyncActionLoadAssetList_NoRegister()
	{
		return UELAsyncActionLoadAssetList::StaticClass();
	}
	struct Z_Construct_UClass_UELAsyncActionLoadAssetList_Statics
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
	UObject* (*const Z_Construct_UClass_UELAsyncActionLoadAssetList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELAsyncActionLoadAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELAsyncActionLoadAssetList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetList, "ELAsyncLoadAssetList" }, // 1309922408
		{ &Z_Construct_UFunction_UELAsyncActionLoadAssetList_ELAsyncLoadAssetPathList, "ELAsyncLoadAssetPathList" }, // 3426296733
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAsyncActionLoadAssetList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELAsyncActionLoadAssetList.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAsyncActionLoadAssetList.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAsyncActionLoadAssetList_Statics::NewProp_Completed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAsyncActionLoadAssetList" },
		{ "ModuleRelativePath", "Public/ELAsyncActionLoadAssetList.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELAsyncActionLoadAssetList_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAsyncActionLoadAssetList, Completed), Z_Construct_UDelegateFunction_ABP_200508_OnELAssetListLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELAsyncActionLoadAssetList_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAsyncActionLoadAssetList_Statics::NewProp_Completed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELAsyncActionLoadAssetList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAsyncActionLoadAssetList_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAsyncActionLoadAssetList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAsyncActionLoadAssetList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAsyncActionLoadAssetList_Statics::ClassParams = {
		&UELAsyncActionLoadAssetList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELAsyncActionLoadAssetList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELAsyncActionLoadAssetList_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELAsyncActionLoadAssetList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAsyncActionLoadAssetList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAsyncActionLoadAssetList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAsyncActionLoadAssetList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAsyncActionLoadAssetList, 3911991450);
	template<> ABP_200508_API UClass* StaticClass<UELAsyncActionLoadAssetList>()
	{
		return UELAsyncActionLoadAssetList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAsyncActionLoadAssetList(Z_Construct_UClass_UELAsyncActionLoadAssetList, &UELAsyncActionLoadAssetList::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELAsyncActionLoadAssetList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAsyncActionLoadAssetList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
