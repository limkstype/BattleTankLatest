// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleTank/Public/Tank.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTank() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_ATank_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_ATank();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
	BATTLETANK_API UFunction* Z_Construct_UFunction_ATank_SetBarrelReference();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankBarrel_NoRegister();
	BATTLETANK_API UFunction* Z_Construct_UFunction_ATank_SetTurretReference();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankTurret_NoRegister();
// End Cross Module References
	void ATank::StaticRegisterNativesATank()
	{
		UClass* Class = ATank::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBarrelReference", &ATank::execSetBarrelReference },
			{ "SetTurretReference", &ATank::execSetTurretReference },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATank_SetBarrelReference_Statics
	{
		struct Tank_eventSetBarrelReference_Parms
		{
			UTankBarrel* BarrelToSet;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarrelToSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarrelToSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATank_SetBarrelReference_Statics::NewProp_BarrelToSet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATank_SetBarrelReference_Statics::NewProp_BarrelToSet = { "BarrelToSet", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tank_eventSetBarrelReference_Parms, BarrelToSet), Z_Construct_UClass_UTankBarrel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATank_SetBarrelReference_Statics::NewProp_BarrelToSet_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATank_SetBarrelReference_Statics::NewProp_BarrelToSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATank_SetBarrelReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATank_SetBarrelReference_Statics::NewProp_BarrelToSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATank_SetBarrelReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATank_SetBarrelReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATank, nullptr, "SetBarrelReference", sizeof(Tank_eventSetBarrelReference_Parms), Z_Construct_UFunction_ATank_SetBarrelReference_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATank_SetBarrelReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATank_SetBarrelReference_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATank_SetBarrelReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATank_SetBarrelReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATank_SetBarrelReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATank_SetTurretReference_Statics
	{
		struct Tank_eventSetTurretReference_Parms
		{
			UTankTurret* TurretToSet;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurretToSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurretToSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATank_SetTurretReference_Statics::NewProp_TurretToSet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATank_SetTurretReference_Statics::NewProp_TurretToSet = { "TurretToSet", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tank_eventSetTurretReference_Parms, TurretToSet), Z_Construct_UClass_UTankTurret_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATank_SetTurretReference_Statics::NewProp_TurretToSet_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATank_SetTurretReference_Statics::NewProp_TurretToSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATank_SetTurretReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATank_SetTurretReference_Statics::NewProp_TurretToSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATank_SetTurretReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tank.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATank_SetTurretReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATank, nullptr, "SetTurretReference", sizeof(Tank_eventSetTurretReference_Parms), Z_Construct_UFunction_ATank_SetTurretReference_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATank_SetTurretReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATank_SetTurretReference_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATank_SetTurretReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATank_SetTurretReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATank_SetTurretReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATank_NoRegister()
	{
		return ATank::StaticClass();
	}
	struct Z_Construct_UClass_ATank_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATank_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATank_SetBarrelReference, "SetBarrelReference" }, // 3475853505
		{ &Z_Construct_UFunction_ATank_SetTurretReference, "SetTurretReference" }, // 2447162748
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Tank.h" },
		{ "ModuleRelativePath", "Public/Tank.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_Statics::NewProp_LaunchSpeed_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/Tank.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_LaunchSpeed = { "LaunchSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATank, LaunchSpeed), METADATA_PARAMS(Z_Construct_UClass_ATank_Statics::NewProp_LaunchSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::NewProp_LaunchSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_LaunchSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATank>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATank_Statics::ClassParams = {
		&ATank::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATank_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATank_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATank()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATank_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATank, 796101141);
	template<> BATTLETANK_API UClass* StaticClass<ATank>()
	{
		return ATank::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATank(Z_Construct_UClass_ATank, &ATank::StaticClass, TEXT("/Script/BattleTank"), TEXT("ATank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATank);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
