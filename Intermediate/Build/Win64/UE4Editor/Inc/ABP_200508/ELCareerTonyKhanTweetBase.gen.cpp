// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerTonyKhanTweetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerTonyKhanTweetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerTonyKhanTweetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerTonyKhanTweetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UCareerSnapshot_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELCareerTonyKhanTweetBase::execGetSnapShot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCareerSnapshot**)Z_Param__Result=P_THIS->GetSnapShot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerTonyKhanTweetBase::execGetText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetText();
		P_NATIVE_END;
	}
	void UELCareerTonyKhanTweetBase::StaticRegisterNativesUELCareerTonyKhanTweetBase()
	{
		UClass* Class = UELCareerTonyKhanTweetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSnapShot", &UELCareerTonyKhanTweetBase::execGetSnapShot },
			{ "GetText", &UELCareerTonyKhanTweetBase::execGetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetSnapShot_Statics
	{
		struct ELCareerTonyKhanTweetBase_eventGetSnapShot_Parms
		{
			UCareerSnapshot* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetSnapShot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerTonyKhanTweetBase_eventGetSnapShot_Parms, ReturnValue), Z_Construct_UClass_UCareerSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetSnapShot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetSnapShot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetSnapShot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerTonyKhanTweetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetSnapShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerTonyKhanTweetBase, nullptr, "GetSnapShot", nullptr, nullptr, sizeof(ELCareerTonyKhanTweetBase_eventGetSnapShot_Parms), Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetSnapShot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetSnapShot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetSnapShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetSnapShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetSnapShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetSnapShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetText_Statics
	{
		struct ELCareerTonyKhanTweetBase_eventGetText_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerTonyKhanTweetBase_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerTonyKhanTweetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerTonyKhanTweetBase, nullptr, "GetText", nullptr, nullptr, sizeof(ELCareerTonyKhanTweetBase_eventGetText_Parms), Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerTonyKhanTweetBase_NoRegister()
	{
		return UELCareerTonyKhanTweetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerTonyKhanTweetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TonyKhanTweetDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TonyKhanTweetDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerTonyKhanTweetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCareerWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerTonyKhanTweetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetSnapShot, "GetSnapShot" }, // 1480061091
		{ &Z_Construct_UFunction_UELCareerTonyKhanTweetBase_GetText, "GetText" }, // 3828825466
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerTonyKhanTweetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerTonyKhanTweetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerTonyKhanTweetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerTonyKhanTweetBase_Statics::NewProp_TonyKhanTweetDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerTonyKhanTweetBase" },
		{ "ModuleRelativePath", "Public/ELCareerTonyKhanTweetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCareerTonyKhanTweetBase_Statics::NewProp_TonyKhanTweetDataTable = { "TonyKhanTweetDataTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerTonyKhanTweetBase, TonyKhanTweetDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCareerTonyKhanTweetBase_Statics::NewProp_TonyKhanTweetDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerTonyKhanTweetBase_Statics::NewProp_TonyKhanTweetDataTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELCareerTonyKhanTweetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerTonyKhanTweetBase_Statics::NewProp_TonyKhanTweetDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerTonyKhanTweetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerTonyKhanTweetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerTonyKhanTweetBase_Statics::ClassParams = {
		&UELCareerTonyKhanTweetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELCareerTonyKhanTweetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerTonyKhanTweetBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCareerTonyKhanTweetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerTonyKhanTweetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerTonyKhanTweetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerTonyKhanTweetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerTonyKhanTweetBase, 2338146141);
	template<> ABP_200508_API UClass* StaticClass<UELCareerTonyKhanTweetBase>()
	{
		return UELCareerTonyKhanTweetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerTonyKhanTweetBase(Z_Construct_UClass_UELCareerTonyKhanTweetBase, &UELCareerTonyKhanTweetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerTonyKhanTweetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerTonyKhanTweetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
