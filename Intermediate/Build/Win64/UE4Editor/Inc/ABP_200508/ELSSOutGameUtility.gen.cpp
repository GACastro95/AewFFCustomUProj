// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSOutGameUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSOutGameUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSOutGameUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSOutGameUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMainMenuSubWidgetType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMainMenuTopSelectWidgetType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWrestlerType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EWrestlerPresetButtonType();
// End Cross Module References
	DEFINE_FUNCTION(UELSSOutGameUtility::execGetMainMenuSelectTabType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_menuId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMainMenuSubWidgetType*)Z_Param__Result=UELSSOutGameUtility::GetMainMenuSelectTabType(Z_Param_menuId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOutGameUtility::execGetSSMainMenuTopSelectWidgetType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_typeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMainMenuTopSelectWidgetType*)Z_Param__Result=UELSSOutGameUtility::GetSSMainMenuTopSelectWidgetType(Z_Param_typeId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOutGameUtility::execGetSSWrestlerType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_typeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSWrestlerType*)Z_Param__Result=UELSSOutGameUtility::GetSSWrestlerType(Z_Param_typeId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOutGameUtility::execGetWrestlerPresetButtonType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_btmId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerPresetButtonType*)Z_Param__Result=UELSSOutGameUtility::GetWrestlerPresetButtonType(Z_Param_btmId);
		P_NATIVE_END;
	}
	void UELSSOutGameUtility::StaticRegisterNativesUELSSOutGameUtility()
	{
		UClass* Class = UELSSOutGameUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMainMenuSelectTabType", &UELSSOutGameUtility::execGetMainMenuSelectTabType },
			{ "GetSSMainMenuTopSelectWidgetType", &UELSSOutGameUtility::execGetSSMainMenuTopSelectWidgetType },
			{ "GetSSWrestlerType", &UELSSOutGameUtility::execGetSSWrestlerType },
			{ "GetWrestlerPresetButtonType", &UELSSOutGameUtility::execGetWrestlerPresetButtonType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSOutGameUtility_GetMainMenuSelectTabType_Statics
	{
		struct ELSSOutGameUtility_eventGetMainMenuSelectTabType_Parms
		{
			int32 menuId;
			EMainMenuSubWidgetType ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_menuId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_menuId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOutGameUtility_GetMainMenuSelectTabType_Statics::NewProp_menuId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSOutGameUtility_GetMainMenuSelectTabType_Statics::NewProp_menuId = { "menuId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameUtility_eventGetMainMenuSelectTabType_Parms, menuId), METADATA_PARAMS(Z_Construct_UFunction_UELSSOutGameUtility_GetMainMenuSelectTabType_Statics::NewProp_menuId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOutGameUtility_GetMainMenuSelectTabType_Statics::NewProp_menuId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSOutGameUtility_GetMainMenuSelectTabType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSOutGameUtility_GetMainMenuSelectTabType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameUtility_eventGetMainMenuSelectTabType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EMainMenuSubWidgetType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOutGameUtility_GetMainMenuSelectTabType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOutGameUtility_GetMainMenuSelectTabType_Statics::NewProp_menuId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOutGameUtility_GetMainMenuSelectTabType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOutGameUtility_GetMainMenuSelectTabType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOutGameUtility_GetMainMenuSelectTabType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOutGameUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOutGameUtility_GetMainMenuSelectTabType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOutGameUtility, nullptr, "GetMainMenuSelectTabType", nullptr, nullptr, sizeof(ELSSOutGameUtility_eventGetMainMenuSelectTabType_Parms), Z_Construct_UFunction_UELSSOutGameUtility_GetMainMenuSelectTabType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOutGameUtility_GetMainMenuSelectTabType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOutGameUtility_GetMainMenuSelectTabType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOutGameUtility_GetMainMenuSelectTabType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOutGameUtility_GetMainMenuSelectTabType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOutGameUtility_GetMainMenuSelectTabType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOutGameUtility_GetSSMainMenuTopSelectWidgetType_Statics
	{
		struct ELSSOutGameUtility_eventGetSSMainMenuTopSelectWidgetType_Parms
		{
			int32 typeId;
			EMainMenuTopSelectWidgetType ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_typeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_typeId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOutGameUtility_GetSSMainMenuTopSelectWidgetType_Statics::NewProp_typeId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSOutGameUtility_GetSSMainMenuTopSelectWidgetType_Statics::NewProp_typeId = { "typeId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameUtility_eventGetSSMainMenuTopSelectWidgetType_Parms, typeId), METADATA_PARAMS(Z_Construct_UFunction_UELSSOutGameUtility_GetSSMainMenuTopSelectWidgetType_Statics::NewProp_typeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOutGameUtility_GetSSMainMenuTopSelectWidgetType_Statics::NewProp_typeId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSOutGameUtility_GetSSMainMenuTopSelectWidgetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSOutGameUtility_GetSSMainMenuTopSelectWidgetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameUtility_eventGetSSMainMenuTopSelectWidgetType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EMainMenuTopSelectWidgetType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOutGameUtility_GetSSMainMenuTopSelectWidgetType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOutGameUtility_GetSSMainMenuTopSelectWidgetType_Statics::NewProp_typeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOutGameUtility_GetSSMainMenuTopSelectWidgetType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOutGameUtility_GetSSMainMenuTopSelectWidgetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOutGameUtility_GetSSMainMenuTopSelectWidgetType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOutGameUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOutGameUtility_GetSSMainMenuTopSelectWidgetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOutGameUtility, nullptr, "GetSSMainMenuTopSelectWidgetType", nullptr, nullptr, sizeof(ELSSOutGameUtility_eventGetSSMainMenuTopSelectWidgetType_Parms), Z_Construct_UFunction_UELSSOutGameUtility_GetSSMainMenuTopSelectWidgetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOutGameUtility_GetSSMainMenuTopSelectWidgetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOutGameUtility_GetSSMainMenuTopSelectWidgetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOutGameUtility_GetSSMainMenuTopSelectWidgetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOutGameUtility_GetSSMainMenuTopSelectWidgetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOutGameUtility_GetSSMainMenuTopSelectWidgetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOutGameUtility_GetSSWrestlerType_Statics
	{
		struct ELSSOutGameUtility_eventGetSSWrestlerType_Parms
		{
			int32 typeId;
			ESSWrestlerType ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_typeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_typeId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOutGameUtility_GetSSWrestlerType_Statics::NewProp_typeId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSOutGameUtility_GetSSWrestlerType_Statics::NewProp_typeId = { "typeId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameUtility_eventGetSSWrestlerType_Parms, typeId), METADATA_PARAMS(Z_Construct_UFunction_UELSSOutGameUtility_GetSSWrestlerType_Statics::NewProp_typeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOutGameUtility_GetSSWrestlerType_Statics::NewProp_typeId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSOutGameUtility_GetSSWrestlerType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSOutGameUtility_GetSSWrestlerType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameUtility_eventGetSSWrestlerType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOutGameUtility_GetSSWrestlerType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOutGameUtility_GetSSWrestlerType_Statics::NewProp_typeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOutGameUtility_GetSSWrestlerType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOutGameUtility_GetSSWrestlerType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOutGameUtility_GetSSWrestlerType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOutGameUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOutGameUtility_GetSSWrestlerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOutGameUtility, nullptr, "GetSSWrestlerType", nullptr, nullptr, sizeof(ELSSOutGameUtility_eventGetSSWrestlerType_Parms), Z_Construct_UFunction_UELSSOutGameUtility_GetSSWrestlerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOutGameUtility_GetSSWrestlerType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOutGameUtility_GetSSWrestlerType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOutGameUtility_GetSSWrestlerType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOutGameUtility_GetSSWrestlerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOutGameUtility_GetSSWrestlerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOutGameUtility_GetWrestlerPresetButtonType_Statics
	{
		struct ELSSOutGameUtility_eventGetWrestlerPresetButtonType_Parms
		{
			int32 btmId;
			EWrestlerPresetButtonType ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_btmId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_btmId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOutGameUtility_GetWrestlerPresetButtonType_Statics::NewProp_btmId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSOutGameUtility_GetWrestlerPresetButtonType_Statics::NewProp_btmId = { "btmId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameUtility_eventGetWrestlerPresetButtonType_Parms, btmId), METADATA_PARAMS(Z_Construct_UFunction_UELSSOutGameUtility_GetWrestlerPresetButtonType_Statics::NewProp_btmId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOutGameUtility_GetWrestlerPresetButtonType_Statics::NewProp_btmId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSOutGameUtility_GetWrestlerPresetButtonType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSOutGameUtility_GetWrestlerPresetButtonType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOutGameUtility_eventGetWrestlerPresetButtonType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EWrestlerPresetButtonType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOutGameUtility_GetWrestlerPresetButtonType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOutGameUtility_GetWrestlerPresetButtonType_Statics::NewProp_btmId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOutGameUtility_GetWrestlerPresetButtonType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOutGameUtility_GetWrestlerPresetButtonType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOutGameUtility_GetWrestlerPresetButtonType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOutGameUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOutGameUtility_GetWrestlerPresetButtonType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOutGameUtility, nullptr, "GetWrestlerPresetButtonType", nullptr, nullptr, sizeof(ELSSOutGameUtility_eventGetWrestlerPresetButtonType_Parms), Z_Construct_UFunction_UELSSOutGameUtility_GetWrestlerPresetButtonType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOutGameUtility_GetWrestlerPresetButtonType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOutGameUtility_GetWrestlerPresetButtonType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOutGameUtility_GetWrestlerPresetButtonType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOutGameUtility_GetWrestlerPresetButtonType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOutGameUtility_GetWrestlerPresetButtonType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSOutGameUtility_NoRegister()
	{
		return UELSSOutGameUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELSSOutGameUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSOutGameUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSOutGameUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSOutGameUtility_GetMainMenuSelectTabType, "GetMainMenuSelectTabType" }, // 4264379403
		{ &Z_Construct_UFunction_UELSSOutGameUtility_GetSSMainMenuTopSelectWidgetType, "GetSSMainMenuTopSelectWidgetType" }, // 1136459973
		{ &Z_Construct_UFunction_UELSSOutGameUtility_GetSSWrestlerType, "GetSSWrestlerType" }, // 3850272991
		{ &Z_Construct_UFunction_UELSSOutGameUtility_GetWrestlerPresetButtonType, "GetWrestlerPresetButtonType" }, // 2678263276
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSOutGameUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSOutGameUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSOutGameUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSOutGameUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSOutGameUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSOutGameUtility_Statics::ClassParams = {
		&UELSSOutGameUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELSSOutGameUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSOutGameUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSOutGameUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSOutGameUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSOutGameUtility, 242030121);
	template<> ABP_200508_API UClass* StaticClass<UELSSOutGameUtility>()
	{
		return UELSSOutGameUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSOutGameUtility(Z_Construct_UClass_UELSSOutGameUtility, &UELSSOutGameUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSOutGameUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSOutGameUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
