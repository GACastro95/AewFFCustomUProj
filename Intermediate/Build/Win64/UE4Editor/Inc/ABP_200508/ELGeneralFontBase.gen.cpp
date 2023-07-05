// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELGeneralFontBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELGeneralFontBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELGeneralFontBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELGeneralFontBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EDisplayButtonIconType();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELGeneralFontBase::execChangeForceDisplayIconType)
	{
		P_GET_ENUM(EDisplayButtonIconType,Z_Param__changeIconType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeForceDisplayIconType_Implementation(EDisplayButtonIconType(Z_Param__changeIconType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGeneralFontBase::execInvalidForceDisplayIconType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InvalidForceDisplayIconType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGeneralFontBase::execReplaceUnsupportedCharacter)
	{
		P_GET_OBJECT(UFont,Z_Param_Font);
		P_GET_PROPERTY(FStrProperty,Z_Param_SourceStr);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutStr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceUnsupportedCharacter(Z_Param_Font,Z_Param_SourceStr,Z_Param_Out_OutStr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGeneralFontBase::execValidForceDisplayIconType)
	{
		P_GET_ENUM(EDisplayButtonIconType,Z_Param__changeIconType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ValidForceDisplayIconType(EDisplayButtonIconType(Z_Param__changeIconType));
		P_NATIVE_END;
	}
	static FName NAME_UELGeneralFontBase_ChangeForceDisplayIconType = FName(TEXT("ChangeForceDisplayIconType"));
	void UELGeneralFontBase::ChangeForceDisplayIconType(EDisplayButtonIconType _changeIconType)
	{
		ELGeneralFontBase_eventChangeForceDisplayIconType_Parms Parms;
		Parms._changeIconType=_changeIconType;
		ProcessEvent(FindFunctionChecked(NAME_UELGeneralFontBase_ChangeForceDisplayIconType),&Parms);
	}
	static FName NAME_UELGeneralFontBase_InitializeFont = FName(TEXT("InitializeFont"));
	void UELGeneralFontBase::InitializeFont()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELGeneralFontBase_InitializeFont),NULL);
	}
	static FName NAME_UELGeneralFontBase_UpdateButtonTextures_Impl = FName(TEXT("UpdateButtonTextures_Impl"));
	void UELGeneralFontBase::UpdateButtonTextures_Impl()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELGeneralFontBase_UpdateButtonTextures_Impl),NULL);
	}
	void UELGeneralFontBase::StaticRegisterNativesUELGeneralFontBase()
	{
		UClass* Class = UELGeneralFontBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeForceDisplayIconType", &UELGeneralFontBase::execChangeForceDisplayIconType },
			{ "InvalidForceDisplayIconType", &UELGeneralFontBase::execInvalidForceDisplayIconType },
			{ "ReplaceUnsupportedCharacter", &UELGeneralFontBase::execReplaceUnsupportedCharacter },
			{ "ValidForceDisplayIconType", &UELGeneralFontBase::execValidForceDisplayIconType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELGeneralFontBase_ChangeForceDisplayIconType_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__changeIconType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__changeIconType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELGeneralFontBase_ChangeForceDisplayIconType_Statics::NewProp__changeIconType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELGeneralFontBase_ChangeForceDisplayIconType_Statics::NewProp__changeIconType = { "_changeIconType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGeneralFontBase_eventChangeForceDisplayIconType_Parms, _changeIconType), Z_Construct_UEnum_ABP_200508_EDisplayButtonIconType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGeneralFontBase_ChangeForceDisplayIconType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGeneralFontBase_ChangeForceDisplayIconType_Statics::NewProp__changeIconType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGeneralFontBase_ChangeForceDisplayIconType_Statics::NewProp__changeIconType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGeneralFontBase_ChangeForceDisplayIconType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGeneralFontBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGeneralFontBase_ChangeForceDisplayIconType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGeneralFontBase, nullptr, "ChangeForceDisplayIconType", nullptr, nullptr, sizeof(ELGeneralFontBase_eventChangeForceDisplayIconType_Parms), Z_Construct_UFunction_UELGeneralFontBase_ChangeForceDisplayIconType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGeneralFontBase_ChangeForceDisplayIconType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGeneralFontBase_ChangeForceDisplayIconType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGeneralFontBase_ChangeForceDisplayIconType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGeneralFontBase_ChangeForceDisplayIconType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGeneralFontBase_ChangeForceDisplayIconType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGeneralFontBase_InitializeFont_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGeneralFontBase_InitializeFont_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGeneralFontBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGeneralFontBase_InitializeFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGeneralFontBase, nullptr, "InitializeFont", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGeneralFontBase_InitializeFont_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGeneralFontBase_InitializeFont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGeneralFontBase_InitializeFont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGeneralFontBase_InitializeFont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGeneralFontBase_InvalidForceDisplayIconType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGeneralFontBase_InvalidForceDisplayIconType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGeneralFontBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGeneralFontBase_InvalidForceDisplayIconType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGeneralFontBase, nullptr, "InvalidForceDisplayIconType", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGeneralFontBase_InvalidForceDisplayIconType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGeneralFontBase_InvalidForceDisplayIconType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGeneralFontBase_InvalidForceDisplayIconType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGeneralFontBase_InvalidForceDisplayIconType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter_Statics
	{
		struct ELGeneralFontBase_eventReplaceUnsupportedCharacter_Parms
		{
			const UFont* Font;
			FString SourceStr;
			FString OutStr;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceStr;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutStr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter_Statics::NewProp_Font_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGeneralFontBase_eventReplaceUnsupportedCharacter_Parms, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter_Statics::NewProp_SourceStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter_Statics::NewProp_SourceStr = { "SourceStr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGeneralFontBase_eventReplaceUnsupportedCharacter_Parms, SourceStr), METADATA_PARAMS(Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter_Statics::NewProp_SourceStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter_Statics::NewProp_SourceStr_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter_Statics::NewProp_OutStr = { "OutStr", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGeneralFontBase_eventReplaceUnsupportedCharacter_Parms, OutStr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter_Statics::NewProp_SourceStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter_Statics::NewProp_OutStr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGeneralFontBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGeneralFontBase, nullptr, "ReplaceUnsupportedCharacter", nullptr, nullptr, sizeof(ELGeneralFontBase_eventReplaceUnsupportedCharacter_Parms), Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGeneralFontBase_UpdateButtonTextures_Impl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGeneralFontBase_UpdateButtonTextures_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGeneralFontBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGeneralFontBase_UpdateButtonTextures_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGeneralFontBase, nullptr, "UpdateButtonTextures_Impl", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGeneralFontBase_UpdateButtonTextures_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGeneralFontBase_UpdateButtonTextures_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGeneralFontBase_UpdateButtonTextures_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGeneralFontBase_UpdateButtonTextures_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGeneralFontBase_ValidForceDisplayIconType_Statics
	{
		struct ELGeneralFontBase_eventValidForceDisplayIconType_Parms
		{
			EDisplayButtonIconType _changeIconType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__changeIconType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__changeIconType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELGeneralFontBase_ValidForceDisplayIconType_Statics::NewProp__changeIconType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELGeneralFontBase_ValidForceDisplayIconType_Statics::NewProp__changeIconType = { "_changeIconType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGeneralFontBase_eventValidForceDisplayIconType_Parms, _changeIconType), Z_Construct_UEnum_ABP_200508_EDisplayButtonIconType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGeneralFontBase_ValidForceDisplayIconType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGeneralFontBase_ValidForceDisplayIconType_Statics::NewProp__changeIconType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGeneralFontBase_ValidForceDisplayIconType_Statics::NewProp__changeIconType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGeneralFontBase_ValidForceDisplayIconType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGeneralFontBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGeneralFontBase_ValidForceDisplayIconType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGeneralFontBase, nullptr, "ValidForceDisplayIconType", nullptr, nullptr, sizeof(ELGeneralFontBase_eventValidForceDisplayIconType_Parms), Z_Construct_UFunction_UELGeneralFontBase_ValidForceDisplayIconType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGeneralFontBase_ValidForceDisplayIconType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGeneralFontBase_ValidForceDisplayIconType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGeneralFontBase_ValidForceDisplayIconType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGeneralFontBase_ValidForceDisplayIconType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGeneralFontBase_ValidForceDisplayIconType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELGeneralFontBase_NoRegister()
	{
		return UELGeneralFontBase::StaticClass();
	}
	struct Z_Construct_UClass_UELGeneralFontBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_ButtonIconType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ButtonIconType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_ButtonIconType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELGeneralFontBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELGeneralFontBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELGeneralFontBase_ChangeForceDisplayIconType, "ChangeForceDisplayIconType" }, // 2404011024
		{ &Z_Construct_UFunction_UELGeneralFontBase_InitializeFont, "InitializeFont" }, // 787746844
		{ &Z_Construct_UFunction_UELGeneralFontBase_InvalidForceDisplayIconType, "InvalidForceDisplayIconType" }, // 4288977701
		{ &Z_Construct_UFunction_UELGeneralFontBase_ReplaceUnsupportedCharacter, "ReplaceUnsupportedCharacter" }, // 1091463129
		{ &Z_Construct_UFunction_UELGeneralFontBase_UpdateButtonTextures_Impl, "UpdateButtonTextures_Impl" }, // 3377897731
		{ &Z_Construct_UFunction_UELGeneralFontBase_ValidForceDisplayIconType, "ValidForceDisplayIconType" }, // 493395492
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGeneralFontBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELGeneralFontBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELGeneralFontBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELGeneralFontBase_Statics::NewProp_m_ButtonIconType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGeneralFontBase_Statics::NewProp_m_ButtonIconType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGeneralFontBase" },
		{ "ModuleRelativePath", "Public/ELGeneralFontBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELGeneralFontBase_Statics::NewProp_m_ButtonIconType = { "m_ButtonIconType", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGeneralFontBase, m_ButtonIconType), Z_Construct_UEnum_ABP_200508_EDisplayButtonIconType, METADATA_PARAMS(Z_Construct_UClass_UELGeneralFontBase_Statics::NewProp_m_ButtonIconType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGeneralFontBase_Statics::NewProp_m_ButtonIconType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELGeneralFontBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGeneralFontBase_Statics::NewProp_m_ButtonIconType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGeneralFontBase_Statics::NewProp_m_ButtonIconType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELGeneralFontBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELGeneralFontBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELGeneralFontBase_Statics::ClassParams = {
		&UELGeneralFontBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELGeneralFontBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELGeneralFontBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELGeneralFontBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELGeneralFontBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELGeneralFontBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELGeneralFontBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELGeneralFontBase, 3228644722);
	template<> ABP_200508_API UClass* StaticClass<UELGeneralFontBase>()
	{
		return UELGeneralFontBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELGeneralFontBase(Z_Construct_UClass_UELGeneralFontBase, &UELGeneralFontBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELGeneralFontBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELGeneralFontBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
