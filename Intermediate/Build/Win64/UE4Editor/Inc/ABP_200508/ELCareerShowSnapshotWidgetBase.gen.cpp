// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerShowSnapshotWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerShowSnapshotWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerShowSnapshotWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerShowSnapshotWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UCareerSnapshot_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELCareerShowSnapshotWidgetBase::execGetLocationTextKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetLocationTextKey();
		P_NATIVE_END;
	}
	void UELCareerShowSnapshotWidgetBase::StaticRegisterNativesUELCareerShowSnapshotWidgetBase()
	{
		UClass* Class = UELCareerShowSnapshotWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLocationTextKey", &UELCareerShowSnapshotWidgetBase::execGetLocationTextKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCareerShowSnapshotWidgetBase_GetLocationTextKey_Statics
	{
		struct ELCareerShowSnapshotWidgetBase_eventGetLocationTextKey_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELCareerShowSnapshotWidgetBase_GetLocationTextKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerShowSnapshotWidgetBase_eventGetLocationTextKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerShowSnapshotWidgetBase_GetLocationTextKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerShowSnapshotWidgetBase_GetLocationTextKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerShowSnapshotWidgetBase_GetLocationTextKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerShowSnapshotWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerShowSnapshotWidgetBase_GetLocationTextKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerShowSnapshotWidgetBase, nullptr, "GetLocationTextKey", nullptr, nullptr, sizeof(ELCareerShowSnapshotWidgetBase_eventGetLocationTextKey_Parms), Z_Construct_UFunction_UELCareerShowSnapshotWidgetBase_GetLocationTextKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerShowSnapshotWidgetBase_GetLocationTextKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerShowSnapshotWidgetBase_GetLocationTextKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerShowSnapshotWidgetBase_GetLocationTextKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerShowSnapshotWidgetBase_GetLocationTextKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerShowSnapshotWidgetBase_GetLocationTextKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerShowSnapshotWidgetBase_NoRegister()
	{
		return UELCareerShowSnapshotWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerShowSnapshotWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Snapshot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerShowSnapshotWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCareerWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerShowSnapshotWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerShowSnapshotWidgetBase_GetLocationTextKey, "GetLocationTextKey" }, // 3388510920
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerShowSnapshotWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerShowSnapshotWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerShowSnapshotWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerShowSnapshotWidgetBase_Statics::NewProp_Snapshot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerShowSnapshotWidgetBase" },
		{ "ModuleRelativePath", "Public/ELCareerShowSnapshotWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCareerShowSnapshotWidgetBase_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerShowSnapshotWidgetBase, Snapshot), Z_Construct_UClass_UCareerSnapshot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCareerShowSnapshotWidgetBase_Statics::NewProp_Snapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerShowSnapshotWidgetBase_Statics::NewProp_Snapshot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELCareerShowSnapshotWidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerShowSnapshotWidgetBase_Statics::NewProp_Snapshot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerShowSnapshotWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerShowSnapshotWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerShowSnapshotWidgetBase_Statics::ClassParams = {
		&UELCareerShowSnapshotWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELCareerShowSnapshotWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerShowSnapshotWidgetBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCareerShowSnapshotWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerShowSnapshotWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerShowSnapshotWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerShowSnapshotWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerShowSnapshotWidgetBase, 76548117);
	template<> ABP_200508_API UClass* StaticClass<UELCareerShowSnapshotWidgetBase>()
	{
		return UELCareerShowSnapshotWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerShowSnapshotWidgetBase(Z_Construct_UClass_UELCareerShowSnapshotWidgetBase, &UELCareerShowSnapshotWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerShowSnapshotWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerShowSnapshotWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
