// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELRichPresenceUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELRichPresenceUtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELRichPresenceUtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELRichPresenceUtilityFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ERichPresenceType();
// End Cross Module References
	DEFINE_FUNCTION(UELRichPresenceUtilityFunction::execUpdatePresence)
	{
		P_GET_ENUM(ERichPresenceType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePresence(ERichPresenceType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELRichPresenceUtilityFunction::execUpdateQuery)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateQuery();
		P_NATIVE_END;
	}
	void UELRichPresenceUtilityFunction::StaticRegisterNativesUELRichPresenceUtilityFunction()
	{
		UClass* Class = UELRichPresenceUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdatePresence", &UELRichPresenceUtilityFunction::execUpdatePresence },
			{ "UpdateQuery", &UELRichPresenceUtilityFunction::execUpdateQuery },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdatePresence_Statics
	{
		struct ELRichPresenceUtilityFunction_eventUpdatePresence_Parms
		{
			ERichPresenceType Type;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdatePresence_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdatePresence_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELRichPresenceUtilityFunction_eventUpdatePresence_Parms, Type), Z_Construct_UEnum_ABP_200508_ERichPresenceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdatePresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdatePresence_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdatePresence_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdatePresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELRichPresenceUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdatePresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELRichPresenceUtilityFunction, nullptr, "UpdatePresence", nullptr, nullptr, sizeof(ELRichPresenceUtilityFunction_eventUpdatePresence_Parms), Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdatePresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdatePresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdatePresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdatePresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdatePresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdatePresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdateQuery_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdateQuery_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELRichPresenceUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdateQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELRichPresenceUtilityFunction, nullptr, "UpdateQuery", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdateQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdateQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdateQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdateQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELRichPresenceUtilityFunction_NoRegister()
	{
		return UELRichPresenceUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELRichPresenceUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELRichPresenceUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELRichPresenceUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdatePresence, "UpdatePresence" }, // 316145506
		{ &Z_Construct_UFunction_UELRichPresenceUtilityFunction_UpdateQuery, "UpdateQuery" }, // 3231557177
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELRichPresenceUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELRichPresenceUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELRichPresenceUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELRichPresenceUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELRichPresenceUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELRichPresenceUtilityFunction_Statics::ClassParams = {
		&UELRichPresenceUtilityFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELRichPresenceUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELRichPresenceUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELRichPresenceUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELRichPresenceUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELRichPresenceUtilityFunction, 3072707905);
	template<> ABP_200508_API UClass* StaticClass<UELRichPresenceUtilityFunction>()
	{
		return UELRichPresenceUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELRichPresenceUtilityFunction(Z_Construct_UClass_UELRichPresenceUtilityFunction, &UELRichPresenceUtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELRichPresenceUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELRichPresenceUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
