// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSLocker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSLocker() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLocker_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLocker();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLockableInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSLocker::execCreateObjectLocker)
	{
		P_GET_TINTERFACE(IEOSLockableInterface,Z_Param__pcLockableObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSLocker**)Z_Param__Result=UEOSLocker::CreateObjectLocker(Z_Param__pcLockableObject);
		P_NATIVE_END;
	}
	void UEOSLocker::StaticRegisterNativesUEOSLocker()
	{
		UClass* Class = UEOSLocker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateObjectLocker", &UEOSLocker::execCreateObjectLocker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSLocker_CreateObjectLocker_Statics
	{
		struct EOSLocker_eventCreateObjectLocker_Parms
		{
			TScriptInterface<IEOSLockableInterface> _pcLockableObject;
			UEOSLocker* ReturnValue;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__pcLockableObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UEOSLocker_CreateObjectLocker_Statics::NewProp__pcLockableObject = { "_pcLockableObject", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLocker_eventCreateObjectLocker_Parms, _pcLockableObject), Z_Construct_UClass_UEOSLockableInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLocker_CreateObjectLocker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLocker_eventCreateObjectLocker_Parms, ReturnValue), Z_Construct_UClass_UEOSLocker_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLocker_CreateObjectLocker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLocker_CreateObjectLocker_Statics::NewProp__pcLockableObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLocker_CreateObjectLocker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLocker_CreateObjectLocker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLocker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLocker_CreateObjectLocker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLocker, nullptr, "CreateObjectLocker", nullptr, nullptr, sizeof(EOSLocker_eventCreateObjectLocker_Parms), Z_Construct_UFunction_UEOSLocker_CreateObjectLocker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLocker_CreateObjectLocker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLocker_CreateObjectLocker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLocker_CreateObjectLocker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLocker_CreateObjectLocker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLocker_CreateObjectLocker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSLocker_NoRegister()
	{
		return UEOSLocker::StaticClass();
	}
	struct Z_Construct_UClass_UEOSLocker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSLocker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSLocker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSLocker_CreateObjectLocker, "CreateObjectLocker" }, // 3266196621
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLocker_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSLocker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSLocker.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSLocker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSLocker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSLocker_Statics::ClassParams = {
		&UEOSLocker::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSLocker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLocker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSLocker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSLocker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSLocker, 3518880181);
	template<> YEOSSDK_API UClass* StaticClass<UEOSLocker>()
	{
		return UEOSLocker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSLocker(Z_Construct_UClass_UEOSLocker, &UEOSLocker::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSLocker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSLocker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
