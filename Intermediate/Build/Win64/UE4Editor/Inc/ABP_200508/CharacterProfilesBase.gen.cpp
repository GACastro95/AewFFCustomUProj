// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CharacterProfilesBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterProfilesBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UCharacterProfilesBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UCharacterProfilesBase();
	ELITE_CORE_API UClass* Z_Construct_UClass_UCommonObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELCharacter_Native_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterProfilesBase::execGetOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELCharacter_Native**)Z_Param__Result=P_THIS->GetOwner();
		P_NATIVE_END;
	}
	void UCharacterProfilesBase::StaticRegisterNativesUCharacterProfilesBase()
	{
		UClass* Class = UCharacterProfilesBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwner", &UCharacterProfilesBase::execGetOwner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterProfilesBase_GetOwner_Statics
	{
		struct CharacterProfilesBase_eventGetOwner_Parms
		{
			AELCharacter_Native* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterProfilesBase_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterProfilesBase_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfilesBase_GetOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfilesBase_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfilesBase_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterProfilesBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfilesBase_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfilesBase, nullptr, "GetOwner", nullptr, nullptr, sizeof(CharacterProfilesBase_eventGetOwner_Parms), Z_Construct_UFunction_UCharacterProfilesBase_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesBase_GetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfilesBase_GetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfilesBase_GetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfilesBase_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfilesBase_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterProfilesBase_NoRegister()
	{
		return UCharacterProfilesBase::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterProfilesBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterProfilesBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterProfilesBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterProfilesBase_GetOwner, "GetOwner" }, // 2764778399
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterProfilesBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CharacterProfilesBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CharacterProfilesBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterProfilesBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterProfilesBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterProfilesBase_Statics::ClassParams = {
		&UCharacterProfilesBase::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterProfilesBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterProfilesBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterProfilesBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterProfilesBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterProfilesBase, 3621349246);
	template<> ABP_200508_API UClass* StaticClass<UCharacterProfilesBase>()
	{
		return UCharacterProfilesBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterProfilesBase(Z_Construct_UClass_UCharacterProfilesBase, &UCharacterProfilesBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UCharacterProfilesBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterProfilesBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
