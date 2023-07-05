// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSInstanceManagerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSInstanceManagerBase() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSInstanceManagerBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSInstanceManagerBase();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSInstanceBase_NoRegister();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSGeneralEventDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSInstanceManagerBase::execGetInstanceList)
	{
		P_GET_TARRAY_REF(UEOSInstanceBase*,Z_Param_Out__cInstanceList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInstanceList(Z_Param_Out__cInstanceList);
		P_NATIVE_END;
	}
	void UEOSInstanceManagerBase::StaticRegisterNativesUEOSInstanceManagerBase()
	{
		UClass* Class = UEOSInstanceManagerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInstanceList", &UEOSInstanceManagerBase::execGetInstanceList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSInstanceManagerBase_GetInstanceList_Statics
	{
		struct EOSInstanceManagerBase_eventGetInstanceList_Parms
		{
			TArray<UEOSInstanceBase*> _cInstanceList;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cInstanceList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cInstanceList;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSInstanceManagerBase_GetInstanceList_Statics::NewProp__cInstanceList_Inner = { "_cInstanceList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSInstanceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSInstanceManagerBase_GetInstanceList_Statics::NewProp__cInstanceList = { "_cInstanceList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSInstanceManagerBase_eventGetInstanceList_Parms, _cInstanceList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSInstanceManagerBase_GetInstanceList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSInstanceManagerBase_eventGetInstanceList_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSInstanceManagerBase_GetInstanceList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSInstanceManagerBase_GetInstanceList_Statics::NewProp__cInstanceList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSInstanceManagerBase_GetInstanceList_Statics::NewProp__cInstanceList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSInstanceManagerBase_GetInstanceList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSInstanceManagerBase_GetInstanceList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSInstanceManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSInstanceManagerBase_GetInstanceList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSInstanceManagerBase, nullptr, "GetInstanceList", nullptr, nullptr, sizeof(EOSInstanceManagerBase_eventGetInstanceList_Parms), Z_Construct_UFunction_UEOSInstanceManagerBase_GetInstanceList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSInstanceManagerBase_GetInstanceList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSInstanceManagerBase_GetInstanceList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSInstanceManagerBase_GetInstanceList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSInstanceManagerBase_GetInstanceList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSInstanceManagerBase_GetInstanceList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSInstanceManagerBase_NoRegister()
	{
		return UEOSInstanceManagerBase::StaticClass();
	}
	struct Z_Construct_UClass_UEOSInstanceManagerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneralEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GeneralEventDispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSInstanceManagerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSInstanceManagerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSInstanceManagerBase_GetInstanceList, "GetInstanceList" }, // 1870973880
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSInstanceManagerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSInstanceManagerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSInstanceManagerBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSInstanceManagerBase_Statics::NewProp_GeneralEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSInstanceManagerBase" },
		{ "ModuleRelativePath", "Public/EOSInstanceManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSInstanceManagerBase_Statics::NewProp_GeneralEventDispatcher = { "GeneralEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSInstanceManagerBase, GeneralEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSGeneralEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSInstanceManagerBase_Statics::NewProp_GeneralEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSInstanceManagerBase_Statics::NewProp_GeneralEventDispatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSInstanceManagerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSInstanceManagerBase_Statics::NewProp_GeneralEventDispatcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSInstanceManagerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSInstanceManagerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSInstanceManagerBase_Statics::ClassParams = {
		&UEOSInstanceManagerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSInstanceManagerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSInstanceManagerBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSInstanceManagerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSInstanceManagerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSInstanceManagerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSInstanceManagerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSInstanceManagerBase, 2939155348);
	template<> YEOSSDK_API UClass* StaticClass<UEOSInstanceManagerBase>()
	{
		return UEOSInstanceManagerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSInstanceManagerBase(Z_Construct_UClass_UEOSInstanceManagerBase, &UEOSInstanceManagerBase::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSInstanceManagerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSInstanceManagerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
