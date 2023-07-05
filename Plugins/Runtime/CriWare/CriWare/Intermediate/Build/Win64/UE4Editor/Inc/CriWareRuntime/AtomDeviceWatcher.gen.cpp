// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomDeviceWatcher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomDeviceWatcher() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomDeviceWatcher_OnDeviceUpdated__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomDeviceWatcher();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomDeviceWatcher_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UAtomDeviceWatcher_OnDeviceUpdated__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomDeviceWatcher_OnDeviceUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomDeviceWatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAtomDeviceWatcher_OnDeviceUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomDeviceWatcher, nullptr, "OnDeviceUpdated__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomDeviceWatcher_OnDeviceUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomDeviceWatcher_OnDeviceUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAtomDeviceWatcher_OnDeviceUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UAtomDeviceWatcher_OnDeviceUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAtomDeviceWatcher::execGetDeviceChannelCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDeviceChannelCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomDeviceWatcher::execGetDeviceName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDeviceName();
		P_NATIVE_END;
	}
	void UAtomDeviceWatcher::StaticRegisterNativesUAtomDeviceWatcher()
	{
		UClass* Class = UAtomDeviceWatcher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDeviceChannelCount", &UAtomDeviceWatcher::execGetDeviceChannelCount },
			{ "GetDeviceName", &UAtomDeviceWatcher::execGetDeviceName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics
	{
		struct AtomDeviceWatcher_eventGetDeviceChannelCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomDeviceWatcher_eventGetDeviceChannelCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomDeviceWatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomDeviceWatcher, nullptr, "GetDeviceChannelCount", nullptr, nullptr, sizeof(AtomDeviceWatcher_eventGetDeviceChannelCount_Parms), Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics
	{
		struct AtomDeviceWatcher_eventGetDeviceName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomDeviceWatcher_eventGetDeviceName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomDeviceWatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomDeviceWatcher, nullptr, "GetDeviceName", nullptr, nullptr, sizeof(AtomDeviceWatcher_eventGetDeviceName_Parms), Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomDeviceWatcher_NoRegister()
	{
		return UAtomDeviceWatcher::StaticClass();
	}
	struct Z_Construct_UClass_UAtomDeviceWatcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDeviceUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeviceUpdated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomDeviceWatcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomDeviceWatcher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceChannelCount, "GetDeviceChannelCount" }, // 613541614
		{ &Z_Construct_UFunction_UAtomDeviceWatcher_GetDeviceName, "GetDeviceName" }, // 3864834442
		{ &Z_Construct_UDelegateFunction_UAtomDeviceWatcher_OnDeviceUpdated__DelegateSignature, "OnDeviceUpdated__DelegateSignature" }, // 1343292088
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomDeviceWatcher_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomDeviceWatcher.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomDeviceWatcher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomDeviceWatcher_Statics::NewProp_OnDeviceUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomDeviceWatcher" },
		{ "ModuleRelativePath", "Public/AtomDeviceWatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomDeviceWatcher_Statics::NewProp_OnDeviceUpdated = { "OnDeviceUpdated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomDeviceWatcher, OnDeviceUpdated), Z_Construct_UDelegateFunction_UAtomDeviceWatcher_OnDeviceUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomDeviceWatcher_Statics::NewProp_OnDeviceUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomDeviceWatcher_Statics::NewProp_OnDeviceUpdated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomDeviceWatcher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomDeviceWatcher_Statics::NewProp_OnDeviceUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomDeviceWatcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomDeviceWatcher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtomDeviceWatcher_Statics::ClassParams = {
		&UAtomDeviceWatcher::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomDeviceWatcher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomDeviceWatcher_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomDeviceWatcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomDeviceWatcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomDeviceWatcher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtomDeviceWatcher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomDeviceWatcher, 2439997340);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomDeviceWatcher>()
	{
		return UAtomDeviceWatcher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomDeviceWatcher(Z_Construct_UClass_UAtomDeviceWatcher, &UAtomDeviceWatcher::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomDeviceWatcher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomDeviceWatcher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
