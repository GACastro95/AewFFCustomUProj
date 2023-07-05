// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CharacterBasicProfiles.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterBasicProfiles() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UCharacterBasicProfiles_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UCharacterBasicProfiles();
	ABP_200508_API UClass* Z_Construct_UClass_UCharacterProfilesBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UCharacterProfilesInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterBasicProfiles::execGetCharacterNameText_Implementation)
	{
		P_GET_UBOOL(Z_Param_bUpper);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetCharacterNameText_Implementation(Z_Param_bUpper);
		P_NATIVE_END;
	}
	void UCharacterBasicProfiles::StaticRegisterNativesUCharacterBasicProfiles()
	{
		UClass* Class = UCharacterBasicProfiles::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCharacterNameText_Implementation", &UCharacterBasicProfiles::execGetCharacterNameText_Implementation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterBasicProfiles_GetCharacterNameText_Implementation_Statics
	{
		struct CharacterBasicProfiles_eventGetCharacterNameText_Implementation_Parms
		{
			bool bUpper;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpper_MetaData[];
#endif
		static void NewProp_bUpper_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpper;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterBasicProfiles_GetCharacterNameText_Implementation_Statics::NewProp_bUpper_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCharacterBasicProfiles_GetCharacterNameText_Implementation_Statics::NewProp_bUpper_SetBit(void* Obj)
	{
		((CharacterBasicProfiles_eventGetCharacterNameText_Implementation_Parms*)Obj)->bUpper = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterBasicProfiles_GetCharacterNameText_Implementation_Statics::NewProp_bUpper = { "bUpper", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterBasicProfiles_eventGetCharacterNameText_Implementation_Parms), &Z_Construct_UFunction_UCharacterBasicProfiles_GetCharacterNameText_Implementation_Statics::NewProp_bUpper_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCharacterBasicProfiles_GetCharacterNameText_Implementation_Statics::NewProp_bUpper_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterBasicProfiles_GetCharacterNameText_Implementation_Statics::NewProp_bUpper_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCharacterBasicProfiles_GetCharacterNameText_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterBasicProfiles_eventGetCharacterNameText_Implementation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterBasicProfiles_GetCharacterNameText_Implementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterBasicProfiles_GetCharacterNameText_Implementation_Statics::NewProp_bUpper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterBasicProfiles_GetCharacterNameText_Implementation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterBasicProfiles_GetCharacterNameText_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterBasicProfiles.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterBasicProfiles_GetCharacterNameText_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterBasicProfiles, nullptr, "GetCharacterNameText_Implementation", nullptr, nullptr, sizeof(CharacterBasicProfiles_eventGetCharacterNameText_Implementation_Parms), Z_Construct_UFunction_UCharacterBasicProfiles_GetCharacterNameText_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterBasicProfiles_GetCharacterNameText_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterBasicProfiles_GetCharacterNameText_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterBasicProfiles_GetCharacterNameText_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterBasicProfiles_GetCharacterNameText_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterBasicProfiles_GetCharacterNameText_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterBasicProfiles_NoRegister()
	{
		return UCharacterBasicProfiles::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterBasicProfiles_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterBasicProfiles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterProfilesBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterBasicProfiles_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterBasicProfiles_GetCharacterNameText_Implementation, "GetCharacterNameText_Implementation" }, // 475141215
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterBasicProfiles_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CharacterBasicProfiles.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CharacterBasicProfiles.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCharacterBasicProfiles_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCharacterProfilesInterface_NoRegister, (int32)VTABLE_OFFSET(UCharacterBasicProfiles, ICharacterProfilesInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterBasicProfiles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterBasicProfiles>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterBasicProfiles_Statics::ClassParams = {
		&UCharacterBasicProfiles::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterBasicProfiles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterBasicProfiles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterBasicProfiles()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterBasicProfiles_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterBasicProfiles, 2673085812);
	template<> ABP_200508_API UClass* StaticClass<UCharacterBasicProfiles>()
	{
		return UCharacterBasicProfiles::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterBasicProfiles(Z_Construct_UClass_UCharacterBasicProfiles, &UCharacterBasicProfiles::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UCharacterBasicProfiles"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterBasicProfiles);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
