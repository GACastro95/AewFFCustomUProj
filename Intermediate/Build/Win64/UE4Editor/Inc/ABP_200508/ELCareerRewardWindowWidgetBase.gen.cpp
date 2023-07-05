// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerRewardWindowWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerRewardWindowWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerRewardWindowWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerRewardWindowWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerRewardEffectType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerRewardGet();
// End Cross Module References
	static FName NAME_UELCareerRewardWindowWidgetBase_SetupText = FName(TEXT("SetupText"));
	void UELCareerRewardWindowWidgetBase::SetupText(FName _StringID, const FString& _ReplaceSrcString, const FString& _ReplaceDstString, ECareerRewardEffectType _type)
	{
		ELCareerRewardWindowWidgetBase_eventSetupText_Parms Parms;
		Parms._StringID=_StringID;
		Parms._ReplaceSrcString=_ReplaceSrcString;
		Parms._ReplaceDstString=_ReplaceDstString;
		Parms._type=_type;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerRewardWindowWidgetBase_SetupText),&Parms);
	}
	static FName NAME_UELCareerRewardWindowWidgetBase_SetupTextNew = FName(TEXT("SetupTextNew"));
	void UELCareerRewardWindowWidgetBase::SetupTextNew(FCareerRewardGet stCareerRewardGet, bool bLast)
	{
		ELCareerRewardWindowWidgetBase_eventSetupTextNew_Parms Parms;
		Parms.stCareerRewardGet=stCareerRewardGet;
		Parms.bLast=bLast ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerRewardWindowWidgetBase_SetupTextNew),&Parms);
	}
	void UELCareerRewardWindowWidgetBase::StaticRegisterNativesUELCareerRewardWindowWidgetBase()
	{
	}
	struct Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__StringID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ReplaceSrcString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__ReplaceSrcString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ReplaceDstString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__ReplaceDstString;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::NewProp__StringID = { "_StringID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerRewardWindowWidgetBase_eventSetupText_Parms, _StringID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::NewProp__ReplaceSrcString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::NewProp__ReplaceSrcString = { "_ReplaceSrcString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerRewardWindowWidgetBase_eventSetupText_Parms, _ReplaceSrcString), METADATA_PARAMS(Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::NewProp__ReplaceSrcString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::NewProp__ReplaceSrcString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::NewProp__ReplaceDstString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::NewProp__ReplaceDstString = { "_ReplaceDstString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerRewardWindowWidgetBase_eventSetupText_Parms, _ReplaceDstString), METADATA_PARAMS(Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::NewProp__ReplaceDstString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::NewProp__ReplaceDstString_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::NewProp__type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::NewProp__type = { "_type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerRewardWindowWidgetBase_eventSetupText_Parms, _type), Z_Construct_UEnum_ABP_200508_ECareerRewardEffectType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::NewProp__StringID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::NewProp__ReplaceSrcString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::NewProp__ReplaceDstString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::NewProp__type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::NewProp__type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerRewardWindowWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerRewardWindowWidgetBase, nullptr, "SetupText", nullptr, nullptr, sizeof(ELCareerRewardWindowWidgetBase_eventSetupText_Parms), Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupTextNew_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stCareerRewardGet;
		static void NewProp_bLast_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLast;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupTextNew_Statics::NewProp_stCareerRewardGet = { "stCareerRewardGet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerRewardWindowWidgetBase_eventSetupTextNew_Parms, stCareerRewardGet), Z_Construct_UScriptStruct_FCareerRewardGet, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupTextNew_Statics::NewProp_bLast_SetBit(void* Obj)
	{
		((ELCareerRewardWindowWidgetBase_eventSetupTextNew_Parms*)Obj)->bLast = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupTextNew_Statics::NewProp_bLast = { "bLast", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerRewardWindowWidgetBase_eventSetupTextNew_Parms), &Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupTextNew_Statics::NewProp_bLast_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupTextNew_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupTextNew_Statics::NewProp_stCareerRewardGet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupTextNew_Statics::NewProp_bLast,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupTextNew_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerRewardWindowWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupTextNew_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerRewardWindowWidgetBase, nullptr, "SetupTextNew", nullptr, nullptr, sizeof(ELCareerRewardWindowWidgetBase_eventSetupTextNew_Parms), Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupTextNew_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupTextNew_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupTextNew_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupTextNew_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupTextNew()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupTextNew_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerRewardWindowWidgetBase_NoRegister()
	{
		return UELCareerRewardWindowWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerRewardWindowWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerRewardWindowWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCareerWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerRewardWindowWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupText, "SetupText" }, // 542674408
		{ &Z_Construct_UFunction_UELCareerRewardWindowWidgetBase_SetupTextNew, "SetupTextNew" }, // 55668011
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerRewardWindowWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerRewardWindowWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerRewardWindowWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerRewardWindowWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerRewardWindowWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerRewardWindowWidgetBase_Statics::ClassParams = {
		&UELCareerRewardWindowWidgetBase::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCareerRewardWindowWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerRewardWindowWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerRewardWindowWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerRewardWindowWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerRewardWindowWidgetBase, 4124345006);
	template<> ABP_200508_API UClass* StaticClass<UELCareerRewardWindowWidgetBase>()
	{
		return UELCareerRewardWindowWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerRewardWindowWidgetBase(Z_Construct_UClass_UELCareerRewardWindowWidgetBase, &UELCareerRewardWindowWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerRewardWindowWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerRewardWindowWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
