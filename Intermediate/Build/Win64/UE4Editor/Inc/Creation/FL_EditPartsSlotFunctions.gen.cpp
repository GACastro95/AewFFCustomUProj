// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/FL_EditPartsSlotFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFL_EditPartsSlotFunctions() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UFL_EditPartsSlotFunctions_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UFL_EditPartsSlotFunctions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsSlot();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EEditTexTarget();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EBasicFindResult();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EEditPartsSlot();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EAttireType();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EPreviewAttire();
// End Cross Module References
	DEFINE_FUNCTION(UFL_EditPartsSlotFunctions::execGetEditPaintSlot)
	{
		P_GET_STRUCT_REF(FEditPartsSlot,Z_Param_Out_Data);
		P_GET_ENUM_REF(EEditTexTarget,Z_Param_Out_Out);
		P_GET_ENUM_REF(EBasicFindResult,Z_Param_Out_resultType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFL_EditPartsSlotFunctions::GetEditPaintSlot(Z_Param_Out_Data,(EEditTexTarget&)(Z_Param_Out_Out),(EBasicFindResult&)(Z_Param_Out_resultType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_EditPartsSlotFunctions::execGetEditPartsSlot)
	{
		P_GET_STRUCT_REF(FEditPartsSlot,Z_Param_Out_Data);
		P_GET_ENUM_REF(EEditPartsSlot,Z_Param_Out_Out);
		P_GET_ENUM_REF(EBasicFindResult,Z_Param_Out_resultType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFL_EditPartsSlotFunctions::GetEditPartsSlot(Z_Param_Out_Data,(EEditPartsSlot&)(Z_Param_Out_Out),(EBasicFindResult&)(Z_Param_Out_resultType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_EditPartsSlotFunctions::execGetPaintTargetMaterialSlots)
	{
		P_GET_ENUM(EEditTexTarget,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UFL_EditPartsSlotFunctions::GetPaintTargetMaterialSlots(EEditTexTarget(Z_Param_Slot));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_EditPartsSlotFunctions::execIsElementPaint)
	{
		P_GET_ENUM(EEditTexTarget,Z_Param_EditPaintSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFL_EditPartsSlotFunctions::IsElementPaint(EEditTexTarget(Z_Param_EditPaintSlot));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_EditPartsSlotFunctions::execIsElementParts)
	{
		P_GET_ENUM(EEditPartsSlot,Z_Param_EditPartsSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFL_EditPartsSlotFunctions::IsElementParts(EEditPartsSlot(Z_Param_EditPartsSlot));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_EditPartsSlotFunctions::execMakeEditPaintSlot_EditPaint)
	{
		P_GET_ENUM_REF(EEditTexTarget,Z_Param_Out_EditPaintSlot);
		P_GET_STRUCT_REF(FEditPartsSlot,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFL_EditPartsSlotFunctions::MakeEditPaintSlot_EditPaint((EEditTexTarget&)(Z_Param_Out_EditPaintSlot),Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_EditPartsSlotFunctions::execMakeEditPartsSlot_EditParts)
	{
		P_GET_ENUM_REF(EEditPartsSlot,Z_Param_Out_EditPartsSlot);
		P_GET_STRUCT_REF(FEditPartsSlot,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFL_EditPartsSlotFunctions::MakeEditPartsSlot_EditParts((EEditPartsSlot&)(Z_Param_Out_EditPartsSlot),Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_EditPartsSlotFunctions::execToPreviewAttire_EditPaint)
	{
		P_GET_ENUM(EAttireType,Z_Param_AttireType);
		P_GET_ENUM(EEditTexTarget,Z_Param_PaintSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPreviewAttire*)Z_Param__Result=UFL_EditPartsSlotFunctions::ToPreviewAttire_EditPaint(EAttireType(Z_Param_AttireType),EEditTexTarget(Z_Param_PaintSlot));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_EditPartsSlotFunctions::execToPreviewAttire_EditParts)
	{
		P_GET_ENUM(EAttireType,Z_Param_AttireType);
		P_GET_ENUM(EEditPartsSlot,Z_Param_PartsSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPreviewAttire*)Z_Param__Result=UFL_EditPartsSlotFunctions::ToPreviewAttire_EditParts(EAttireType(Z_Param_AttireType),EEditPartsSlot(Z_Param_PartsSlot));
		P_NATIVE_END;
	}
	void UFL_EditPartsSlotFunctions::StaticRegisterNativesUFL_EditPartsSlotFunctions()
	{
		UClass* Class = UFL_EditPartsSlotFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEditPaintSlot", &UFL_EditPartsSlotFunctions::execGetEditPaintSlot },
			{ "GetEditPartsSlot", &UFL_EditPartsSlotFunctions::execGetEditPartsSlot },
			{ "GetPaintTargetMaterialSlots", &UFL_EditPartsSlotFunctions::execGetPaintTargetMaterialSlots },
			{ "IsElementPaint", &UFL_EditPartsSlotFunctions::execIsElementPaint },
			{ "IsElementParts", &UFL_EditPartsSlotFunctions::execIsElementParts },
			{ "MakeEditPaintSlot_EditPaint", &UFL_EditPartsSlotFunctions::execMakeEditPaintSlot_EditPaint },
			{ "MakeEditPartsSlot_EditParts", &UFL_EditPartsSlotFunctions::execMakeEditPartsSlot_EditParts },
			{ "ToPreviewAttire_EditPaint", &UFL_EditPartsSlotFunctions::execToPreviewAttire_EditPaint },
			{ "ToPreviewAttire_EditParts", &UFL_EditPartsSlotFunctions::execToPreviewAttire_EditParts },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot_Statics
	{
		struct FL_EditPartsSlotFunctions_eventGetEditPaintSlot_Parms
		{
			FEditPartsSlot Data;
			EEditTexTarget Out;
			EBasicFindResult resultType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Out_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_resultType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_resultType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditPartsSlotFunctions_eventGetEditPaintSlot_Parms, Data), Z_Construct_UScriptStruct_FEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot_Statics::NewProp_Out_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditPartsSlotFunctions_eventGetEditPaintSlot_Parms, Out), Z_Construct_UEnum_Creation_EEditTexTarget, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot_Statics::NewProp_resultType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot_Statics::NewProp_resultType = { "resultType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditPartsSlotFunctions_eventGetEditPaintSlot_Parms, resultType), Z_Construct_UEnum_ELITE_Core_EBasicFindResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot_Statics::NewProp_Out_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot_Statics::NewProp_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot_Statics::NewProp_resultType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot_Statics::NewProp_resultType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_EditPartsSlotFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_EditPartsSlotFunctions, nullptr, "GetEditPaintSlot", nullptr, nullptr, sizeof(FL_EditPartsSlotFunctions_eventGetEditPaintSlot_Parms), Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot_Statics
	{
		struct FL_EditPartsSlotFunctions_eventGetEditPartsSlot_Parms
		{
			FEditPartsSlot Data;
			EEditPartsSlot Out;
			EBasicFindResult resultType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Out_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_resultType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_resultType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditPartsSlotFunctions_eventGetEditPartsSlot_Parms, Data), Z_Construct_UScriptStruct_FEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot_Statics::NewProp_Out_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditPartsSlotFunctions_eventGetEditPartsSlot_Parms, Out), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot_Statics::NewProp_resultType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot_Statics::NewProp_resultType = { "resultType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditPartsSlotFunctions_eventGetEditPartsSlot_Parms, resultType), Z_Construct_UEnum_ELITE_Core_EBasicFindResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot_Statics::NewProp_Out_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot_Statics::NewProp_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot_Statics::NewProp_resultType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot_Statics::NewProp_resultType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_EditPartsSlotFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_EditPartsSlotFunctions, nullptr, "GetEditPartsSlot", nullptr, nullptr, sizeof(FL_EditPartsSlotFunctions_eventGetEditPartsSlot_Parms), Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetPaintTargetMaterialSlots_Statics
	{
		struct FL_EditPartsSlotFunctions_eventGetPaintTargetMaterialSlots_Parms
		{
			EEditTexTarget Slot;
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetPaintTargetMaterialSlots_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetPaintTargetMaterialSlots_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetPaintTargetMaterialSlots_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditPartsSlotFunctions_eventGetPaintTargetMaterialSlots_Parms, Slot), Z_Construct_UEnum_Creation_EEditTexTarget, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetPaintTargetMaterialSlots_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetPaintTargetMaterialSlots_Statics::NewProp_Slot_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetPaintTargetMaterialSlots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetPaintTargetMaterialSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditPartsSlotFunctions_eventGetPaintTargetMaterialSlots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetPaintTargetMaterialSlots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetPaintTargetMaterialSlots_Statics::NewProp_Slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetPaintTargetMaterialSlots_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetPaintTargetMaterialSlots_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetPaintTargetMaterialSlots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetPaintTargetMaterialSlots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_EditPartsSlotFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetPaintTargetMaterialSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_EditPartsSlotFunctions, nullptr, "GetPaintTargetMaterialSlots", nullptr, nullptr, sizeof(FL_EditPartsSlotFunctions_eventGetPaintTargetMaterialSlots_Parms), Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetPaintTargetMaterialSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetPaintTargetMaterialSlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetPaintTargetMaterialSlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetPaintTargetMaterialSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetPaintTargetMaterialSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetPaintTargetMaterialSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementPaint_Statics
	{
		struct FL_EditPartsSlotFunctions_eventIsElementPaint_Parms
		{
			EEditTexTarget EditPaintSlot;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EditPaintSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditPaintSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EditPaintSlot;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementPaint_Statics::NewProp_EditPaintSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementPaint_Statics::NewProp_EditPaintSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementPaint_Statics::NewProp_EditPaintSlot = { "EditPaintSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditPartsSlotFunctions_eventIsElementPaint_Parms, EditPaintSlot), Z_Construct_UEnum_Creation_EEditTexTarget, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementPaint_Statics::NewProp_EditPaintSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementPaint_Statics::NewProp_EditPaintSlot_MetaData)) };
	void Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementPaint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FL_EditPartsSlotFunctions_eventIsElementPaint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementPaint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FL_EditPartsSlotFunctions_eventIsElementPaint_Parms), &Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementPaint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementPaint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementPaint_Statics::NewProp_EditPaintSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementPaint_Statics::NewProp_EditPaintSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementPaint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementPaint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_EditPartsSlotFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementPaint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_EditPartsSlotFunctions, nullptr, "IsElementPaint", nullptr, nullptr, sizeof(FL_EditPartsSlotFunctions_eventIsElementPaint_Parms), Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementPaint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementPaint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementPaint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementPaint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementPaint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementPaint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementParts_Statics
	{
		struct FL_EditPartsSlotFunctions_eventIsElementParts_Parms
		{
			EEditPartsSlot EditPartsSlot;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EditPartsSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditPartsSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EditPartsSlot;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementParts_Statics::NewProp_EditPartsSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementParts_Statics::NewProp_EditPartsSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementParts_Statics::NewProp_EditPartsSlot = { "EditPartsSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditPartsSlotFunctions_eventIsElementParts_Parms, EditPartsSlot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementParts_Statics::NewProp_EditPartsSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementParts_Statics::NewProp_EditPartsSlot_MetaData)) };
	void Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementParts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FL_EditPartsSlotFunctions_eventIsElementParts_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementParts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FL_EditPartsSlotFunctions_eventIsElementParts_Parms), &Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementParts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementParts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementParts_Statics::NewProp_EditPartsSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementParts_Statics::NewProp_EditPartsSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementParts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementParts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_EditPartsSlotFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementParts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_EditPartsSlotFunctions, nullptr, "IsElementParts", nullptr, nullptr, sizeof(FL_EditPartsSlotFunctions_eventIsElementParts_Parms), Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementParts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementParts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementParts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementParts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementParts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementParts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPaintSlot_EditPaint_Statics
	{
		struct FL_EditPartsSlotFunctions_eventMakeEditPaintSlot_EditPaint_Parms
		{
			EEditTexTarget EditPaintSlot;
			FEditPartsSlot Out;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EditPaintSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditPaintSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EditPaintSlot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPaintSlot_EditPaint_Statics::NewProp_EditPaintSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPaintSlot_EditPaint_Statics::NewProp_EditPaintSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPaintSlot_EditPaint_Statics::NewProp_EditPaintSlot = { "EditPaintSlot", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditPartsSlotFunctions_eventMakeEditPaintSlot_EditPaint_Parms, EditPaintSlot), Z_Construct_UEnum_Creation_EEditTexTarget, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPaintSlot_EditPaint_Statics::NewProp_EditPaintSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPaintSlot_EditPaint_Statics::NewProp_EditPaintSlot_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPaintSlot_EditPaint_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditPartsSlotFunctions_eventMakeEditPaintSlot_EditPaint_Parms, Out), Z_Construct_UScriptStruct_FEditPartsSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPaintSlot_EditPaint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPaintSlot_EditPaint_Statics::NewProp_EditPaintSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPaintSlot_EditPaint_Statics::NewProp_EditPaintSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPaintSlot_EditPaint_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPaintSlot_EditPaint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_EditPartsSlotFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPaintSlot_EditPaint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_EditPartsSlotFunctions, nullptr, "MakeEditPaintSlot_EditPaint", nullptr, nullptr, sizeof(FL_EditPartsSlotFunctions_eventMakeEditPaintSlot_EditPaint_Parms), Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPaintSlot_EditPaint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPaintSlot_EditPaint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPaintSlot_EditPaint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPaintSlot_EditPaint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPaintSlot_EditPaint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPaintSlot_EditPaint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPartsSlot_EditParts_Statics
	{
		struct FL_EditPartsSlotFunctions_eventMakeEditPartsSlot_EditParts_Parms
		{
			EEditPartsSlot EditPartsSlot;
			FEditPartsSlot Out;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EditPartsSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditPartsSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EditPartsSlot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPartsSlot_EditParts_Statics::NewProp_EditPartsSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPartsSlot_EditParts_Statics::NewProp_EditPartsSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPartsSlot_EditParts_Statics::NewProp_EditPartsSlot = { "EditPartsSlot", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditPartsSlotFunctions_eventMakeEditPartsSlot_EditParts_Parms, EditPartsSlot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPartsSlot_EditParts_Statics::NewProp_EditPartsSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPartsSlot_EditParts_Statics::NewProp_EditPartsSlot_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPartsSlot_EditParts_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditPartsSlotFunctions_eventMakeEditPartsSlot_EditParts_Parms, Out), Z_Construct_UScriptStruct_FEditPartsSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPartsSlot_EditParts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPartsSlot_EditParts_Statics::NewProp_EditPartsSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPartsSlot_EditParts_Statics::NewProp_EditPartsSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPartsSlot_EditParts_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPartsSlot_EditParts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_EditPartsSlotFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPartsSlot_EditParts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_EditPartsSlotFunctions, nullptr, "MakeEditPartsSlot_EditParts", nullptr, nullptr, sizeof(FL_EditPartsSlotFunctions_eventMakeEditPartsSlot_EditParts_Parms), Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPartsSlot_EditParts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPartsSlot_EditParts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPartsSlot_EditParts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPartsSlot_EditParts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPartsSlot_EditParts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPartsSlot_EditParts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics
	{
		struct FL_EditPartsSlotFunctions_eventToPreviewAttire_EditPaint_Parms
		{
			EAttireType AttireType;
			EEditTexTarget PaintSlot;
			EPreviewAttire ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PaintSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PaintSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditPartsSlotFunctions_eventToPreviewAttire_EditPaint_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EAttireType, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::NewProp_AttireType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::NewProp_PaintSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::NewProp_PaintSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::NewProp_PaintSlot = { "PaintSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditPartsSlotFunctions_eventToPreviewAttire_EditPaint_Parms, PaintSlot), Z_Construct_UEnum_Creation_EEditTexTarget, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::NewProp_PaintSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::NewProp_PaintSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditPartsSlotFunctions_eventToPreviewAttire_EditPaint_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::NewProp_PaintSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::NewProp_PaintSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_EditPartsSlotFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_EditPartsSlotFunctions, nullptr, "ToPreviewAttire_EditPaint", nullptr, nullptr, sizeof(FL_EditPartsSlotFunctions_eventToPreviewAttire_EditPaint_Parms), Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics
	{
		struct FL_EditPartsSlotFunctions_eventToPreviewAttire_EditParts_Parms
		{
			EAttireType AttireType;
			EEditPartsSlot PartsSlot;
			EPreviewAttire ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttireType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttireType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartsSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PartsSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::NewProp_AttireType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::NewProp_AttireType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::NewProp_AttireType = { "AttireType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditPartsSlotFunctions_eventToPreviewAttire_EditParts_Parms, AttireType), Z_Construct_UEnum_ELITE_Core_EAttireType, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::NewProp_AttireType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::NewProp_AttireType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::NewProp_PartsSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::NewProp_PartsSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::NewProp_PartsSlot = { "PartsSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditPartsSlotFunctions_eventToPreviewAttire_EditParts_Parms, PartsSlot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::NewProp_PartsSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::NewProp_PartsSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_EditPartsSlotFunctions_eventToPreviewAttire_EditParts_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Core_EPreviewAttire, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::NewProp_AttireType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::NewProp_AttireType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::NewProp_PartsSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::NewProp_PartsSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_EditPartsSlotFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_EditPartsSlotFunctions, nullptr, "ToPreviewAttire_EditParts", nullptr, nullptr, sizeof(FL_EditPartsSlotFunctions_eventToPreviewAttire_EditParts_Parms), Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFL_EditPartsSlotFunctions_NoRegister()
	{
		return UFL_EditPartsSlotFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UFL_EditPartsSlotFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFL_EditPartsSlotFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFL_EditPartsSlotFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPaintSlot, "GetEditPaintSlot" }, // 986769895
		{ &Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetEditPartsSlot, "GetEditPartsSlot" }, // 4081620761
		{ &Z_Construct_UFunction_UFL_EditPartsSlotFunctions_GetPaintTargetMaterialSlots, "GetPaintTargetMaterialSlots" }, // 1755924448
		{ &Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementPaint, "IsElementPaint" }, // 2292943480
		{ &Z_Construct_UFunction_UFL_EditPartsSlotFunctions_IsElementParts, "IsElementParts" }, // 572577042
		{ &Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPaintSlot_EditPaint, "MakeEditPaintSlot_EditPaint" }, // 2972776076
		{ &Z_Construct_UFunction_UFL_EditPartsSlotFunctions_MakeEditPartsSlot_EditParts, "MakeEditPartsSlot_EditParts" }, // 983157947
		{ &Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditPaint, "ToPreviewAttire_EditPaint" }, // 846930897
		{ &Z_Construct_UFunction_UFL_EditPartsSlotFunctions_ToPreviewAttire_EditParts, "ToPreviewAttire_EditParts" }, // 2818773053
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFL_EditPartsSlotFunctions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FL_EditPartsSlotFunctions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FL_EditPartsSlotFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFL_EditPartsSlotFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFL_EditPartsSlotFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFL_EditPartsSlotFunctions_Statics::ClassParams = {
		&UFL_EditPartsSlotFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFL_EditPartsSlotFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFL_EditPartsSlotFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFL_EditPartsSlotFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFL_EditPartsSlotFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFL_EditPartsSlotFunctions, 2979878527);
	template<> CREATION_API UClass* StaticClass<UFL_EditPartsSlotFunctions>()
	{
		return UFL_EditPartsSlotFunctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFL_EditPartsSlotFunctions(Z_Construct_UClass_UFL_EditPartsSlotFunctions, &UFL_EditPartsSlotFunctions::StaticClass, TEXT("/Script/Creation"), TEXT("UFL_EditPartsSlotFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFL_EditPartsSlotFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
