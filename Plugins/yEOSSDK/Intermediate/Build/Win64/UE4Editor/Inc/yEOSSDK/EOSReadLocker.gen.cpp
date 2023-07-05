// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSReadLocker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSReadLocker() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSReadLocker_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSReadLocker();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLockableInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSReadLocker::execCreateObjectReadLocker)
	{
		P_GET_TINTERFACE(IEOSLockableInterface,Z_Param__cLockableObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSReadLocker**)Z_Param__Result=UEOSReadLocker::CreateObjectReadLocker(Z_Param__cLockableObject);
		P_NATIVE_END;
	}
	void UEOSReadLocker::StaticRegisterNativesUEOSReadLocker()
	{
		UClass* Class = UEOSReadLocker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateObjectReadLocker", &UEOSReadLocker::execCreateObjectReadLocker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSReadLocker_CreateObjectReadLocker_Statics
	{
		struct EOSReadLocker_eventCreateObjectReadLocker_Parms
		{
			TScriptInterface<IEOSLockableInterface> _cLockableObject;
			UEOSReadLocker* ReturnValue;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__cLockableObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UEOSReadLocker_CreateObjectReadLocker_Statics::NewProp__cLockableObject = { "_cLockableObject", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSReadLocker_eventCreateObjectReadLocker_Parms, _cLockableObject), Z_Construct_UClass_UEOSLockableInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSReadLocker_CreateObjectReadLocker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSReadLocker_eventCreateObjectReadLocker_Parms, ReturnValue), Z_Construct_UClass_UEOSReadLocker_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSReadLocker_CreateObjectReadLocker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSReadLocker_CreateObjectReadLocker_Statics::NewProp__cLockableObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSReadLocker_CreateObjectReadLocker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSReadLocker_CreateObjectReadLocker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSReadLocker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSReadLocker_CreateObjectReadLocker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSReadLocker, nullptr, "CreateObjectReadLocker", nullptr, nullptr, sizeof(EOSReadLocker_eventCreateObjectReadLocker_Parms), Z_Construct_UFunction_UEOSReadLocker_CreateObjectReadLocker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSReadLocker_CreateObjectReadLocker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSReadLocker_CreateObjectReadLocker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSReadLocker_CreateObjectReadLocker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSReadLocker_CreateObjectReadLocker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSReadLocker_CreateObjectReadLocker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSReadLocker_NoRegister()
	{
		return UEOSReadLocker::StaticClass();
	}
	struct Z_Construct_UClass_UEOSReadLocker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSReadLocker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSReadLocker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSReadLocker_CreateObjectReadLocker, "CreateObjectReadLocker" }, // 184223793
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSReadLocker_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSReadLocker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSReadLocker.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSReadLocker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSReadLocker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSReadLocker_Statics::ClassParams = {
		&UEOSReadLocker::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSReadLocker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSReadLocker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSReadLocker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSReadLocker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSReadLocker, 1871650940);
	template<> YEOSSDK_API UClass* StaticClass<UEOSReadLocker>()
	{
		return UEOSReadLocker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSReadLocker(Z_Construct_UClass_UEOSReadLocker, &UEOSReadLocker::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSReadLocker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSReadLocker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
